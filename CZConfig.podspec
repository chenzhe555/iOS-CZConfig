Pod::Spec.new do |s|
  s.name         = "CZConfig"
  s.version      = "0.0.2"
  s.summary      = "iOS-配置信息"
  s.description  = "iOS-基础配置信息"
  s.homepage     = "https://github.com/chenzhe555/iOS-CZConfig"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "chenzhe555" => "376811578@qq.com" }
  #s.ios.deployment_target = "9.0"
  s.source       = { :git => "https://github.com/chenzhe555/iOS-CZConfig.git", :tag => "#{s.version}" }
  s.public_header_files = 'CZConfig/CZConfig.h'
  s.source_files  = 'CZConfig/CZConfig.h'
  s.subspec 'classes' do |one|
      one.source_files = 'CZConfig/classes/*.{h,m}'
  end
  s.frameworks = "Foundation", "UIKit"
  # s.libraries = "iconv", "xml2"
  s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"
end
