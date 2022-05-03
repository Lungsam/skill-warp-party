# find

		## Warp
		#if skillLevel >= 35:
		#	if self.stateButtonDict.has_key(self.MEMBER_BUTTON_WARP):
		#		button = self.stateButtonDict[self.MEMBER_BUTTON_WARP]
		#		button.SetPosition(xPos, y)
		#		button.Show()
		#		xPos += 23

# change to

		if constInfo.ENABLE_FIX_PARTY_SKILL_WARP:
			## Warp
			if skillLevel >= 35:
				if self.stateButtonDict.has_key(self.MEMBER_BUTTON_WARP):
					button = self.stateButtonDict[self.MEMBER_BUTTON_WARP]
					button.SetPosition(xPos, y)
					button.Show()
					xPos += 23