local backgroundImageName = "matchthree/background.png"

SceneMain = cpgf.cloneClass(gincu.GSceneWrapper)

SceneMain.doOnEnter = function(me)
	me.addEntity(
		gincu.GEntity()
		.addComponent(gincu.createAndLoadImageComponent(backgroundImageName))
		.addComponent(gincu.GComponentTransform())
	)
	
	local viewSize = me.getPrimaryCamera().getWorldSize()
	local viewWidth = viewSize.width;
	local viewHeight = viewSize.height;

	local buttonSize = port.createSize(200, 60);
	
	local yDelta = buttonSize.height + 10

	local x = viewWidth / 2
	local y = viewHeight / 2 - buttonSize.height
	
	me.addEntity(
		createButton("Scene graph", port.createPoint(x, y), buttonSize, function(e)
			require("scenetestscenegraph")
			doSwitchScene(SceneTestSceneGraph())
		end
		)
	)
	y = y + yDelta
	
	me.addEntity(
		createButton("Tween", port.createPoint(x, y), buttonSize, function(e)
			require("scenetesttween")
			doSwitchScene(SceneTestTween())
		end
		)
	)
	y = y + yDelta

	me.addEntity(
		createButton("Benchmark", port.createPoint(x, y), buttonSize, function(e)
			require("scenebenchmark")
			doSwitchScene(SceneBenchmark())
		end
		)
	)
	y = y + yDelta

	me.addEntity(createBackButton(function(e) exitScriptDemo() end))

	forceGC()
end

SceneMain.doOnExit = function(me)
end

