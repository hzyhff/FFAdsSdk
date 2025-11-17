#
# Be sure to run `pod lib lint FFAdsSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FFAdsSdk'
  s.version          = '4.2.2'
  s.summary          = 'fengfei iOS sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzyhff/FFAdsSdk.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hzyhff100@126.com' => 'hzyhff100@126.com' }
  s.source           = { :git => 'https://github.com/hzyhff/FFAdsSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'FFAdsSdk/Classes/**/*'
  
  s.public_header_files = ['FFAdsSdk/Classes/**/FFAdsSDK.h', 'FFAdsSdk/Classes/**/FFRequest.h', 'FFAdsSdk/Classes/**/FFSplash.h', 'FFAdsSdk/Classes/**/FFInterstitial.h', 'FFAdsSdk/Classes/**/FFReward.h', 'FFAdsSdk/Classes/**/FFAdSdk.h', 'FFAdsSdk/Classes/**/FFBanner.h', 'FFAdsSdk/Classes/**/FFNativeAdView.h', 'FFAdsSdk/Classes/**/FFNativeAd.h', 'FFAdsSdk/Classes/**/FFNativeAdManager.h']
    s.vendored_libraries = 'FFAdsSdk/Libraries/libFFAdsSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.6.83'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.6.83'
  s.dependency 'ToBid-iOS/KSAdapter','4.6.83'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.6.83'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.6.83'
  s.dependency 'ToBid-iOS/MSAdAdapter','4.6.83'
  s.dependency 'ToBid-iOS/AdScopeAdapter','4.6.83'
  s.static_framework = true
end
