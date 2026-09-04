// swift-tools-version:6.0
import PackageDescription

// ┌──────────────────────────────────────────────────────────────────────────────────────────────┐
// │ This is the BINARY DISTRIBUTION manifest. It is not built from this repository.               │
// └──────────────────────────────────────────────────────────────────────────────────────────────┘
//
// The `release:` job in .gitlab-ci.yml copies this file to the root of the public mirror,
// github.com/Qliro/QliroOne-In-App, alongside the `ios/QliroOne.xcframework` it has just published
// there. That repository is what merchants can actually reach, so that copy — not this one — is the
// manifest a `.package(url: "https://github.com/Qliro/QliroOne-In-App.git", from: …)` resolves.
//
// ## How this differs from the Package.swift one directory up
//
// The `Package.swift` at the root of this repository is the SOURCE package: a `.target` over
// `QliroOne/Classes` plus a test target. It exists for development, `run_tests.sh` and the
// `spm-build` CI job. It cannot be published, because this repository is Qliro's internal GitLab and
// merchants cannot clone it.
//
// This one is a single `.binaryTarget` over the prebuilt, code-signed XCFramework and has no
// sources, no tests and no dependencies. The two are different artifacts that happen to share a
// product name; `check_version_and_create.sh` checks that they at least agree on the deployment
// floor, which is the one thing a merchant would notice diverging.
//
// ## Why a path and not a url + checksum
//
// `.binaryTarget(name:path:)` resolves against the package's own checkout, and the release job
// already commits the XCFramework into that repository at `ios/QliroOne.xcframework` — which is also
// where the published podspec's `vendored_frameworks` points, so both package managers consume one
// artifact. A `url:` + `checksum:` target would need a zip, a hosted release asset, and a
// `swift package compute-checksum` step whose output has to be written back into this file on every
// release: three more things to get wrong for no benefit, since the binary is in the git checkout
// either way. Verified against a git-hosted package before this was adopted — SwiftPM copies the
// artifact out of the dependency's working copy exactly as it does for a root package.
//
// The XCFramework's authenticity is a code signature, not a checksum. See "Verifying the
// XCFramework" in README.md.
//
// ## There is no version number here
//
// A SwiftPM package takes its version from the git tag, so `from: "x.y.z"` in a merchant's manifest
// resolves against the tags the release job pushes. That is why this file is not in the list
// `check_version_and_create.sh` checks version strings in — there is nothing to keep in step.
let package = Package(
    name: "QliroOne",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(name: "QliroOne", targets: ["QliroOne"])
    ],
    targets: [
        .binaryTarget(
            name: "QliroOne",
            path: "ios/QliroOne.xcframework"
        )
    ]
)
