Pod::Spec.new do |s|
  s.name         = 'ScrollViewMenuSlider'
  s.version      = '1.0.1'
  s.license      = 'MIT'
  s.summary      = 'A similar control to the slide down menu control created by Facebook'
  s.homepage     = 'https://github.com/finn-no/ScrollViewMenuSlider'
  s.author       = { 'Alexander Langstrand' => 'ancentar@gmail.com' }
  s.source       = { 
  			:git => 'https://github.com/finn-no/ScrollViewMenuSlider.git',
  			:tag => '1.0.1'
  }
  s.source_files = 'SlideInMenuViewController.{h,m}'
  s.requires_arc = true
end
