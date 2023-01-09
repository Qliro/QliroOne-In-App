Pod::Spec.new do |spec|
  spec.name         = "QliroOne"
  spec.version      = "2.2.0"
  spec.summary      = "SDK for integrating QliroOne in your app"
  spec.description  = "QliroOne SDK - SDK for integrating QliroOne in your app"
  spec.homepage     = "https://www.qliro.com/sv-se"
  spec.license      = { :type => 'Apache License 2.0', :file => "LICENSE" }
  spec.author       = { "Qliro App Team" => "app@qliro.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/Qliro/QliroOne-In-App.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "ios/QliroOne.xcframework"
  spec.frameworks = "UIKit", "WebKit"
  spec.readme = "ios/README.md"
end