Pod::Spec.new do |spec|
  spec.name         = "QliroOne"
  spec.version      = "0.0.1"
  spec.summary      = "SDK for integrating QliroOne in your app"
  spec.description  = "QliroOne Checkout - SDK for integrating QliroOne in your app"
  spec.homepage     = "https://www.qliro.com/sv-se"
  spec.license      = { :type => 'Apache License 2.0', :file => "LICENSE" }
  spec.author       = { "Qliro App Team" => "mobile@qliro.se" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/Qliro-AB/QliroOne-In-App.git", :tag => "#{spec.version}" }
  spec.source_files  = "ios/QliroOne.framework/Headers/*.h"
  spec.vendored_frameworks = "ios/QliroOne.framework"
  spec.public_header_files = "ios/QliroOne.framework/Headers/*.h"
  spec.frameworks = "UIKit", "WebKit", "JavaScriptCore"
  spec.weak_frameworks = "SafariServices"
  spec.requires_arc = true
end