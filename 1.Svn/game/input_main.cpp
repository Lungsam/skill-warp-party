// find
case PARTY_SKILL_WARP:

//change all case


		case PARTY_SKILL_WARP:
			{
				LPCHARACTER pch = CHARACTER_MANAGER::instance().Find(p->vid);
#ifndef ENABLE_FIX_PARTY_SKILL_WARP
				if (pch)
					ch->GetParty()->SummonToLeader(pch->GetPlayerID());
				else
					ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("<파티> 소환하려는 대상을 찾을 수 없습니다."));
#else
				if (pch) {
					if (pch->GetMapIndex() != ch->GetMapIndex()) // You must be on the same map
						//ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("데려오고 싶은 플레이어와 같은 맵에 있어야 합니다!"));
						return;

					if (pch->GetDungeon() != ch->GetDungeon()) // not necessary but for kids leadr?
						// ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("text if you wann"));
						return;

					ch->GetParty()->SummonToLeader(pch->GetPlayerID());
				} else
					ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("<파티> 소환하려는 대상을 찾을 수 없습니다."));
#endif
			}
			break;