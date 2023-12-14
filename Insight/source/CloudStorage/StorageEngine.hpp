#include <iostream>
#include <httpserv.h>

int ApiEngine()
{
    R"(
        [/Script/MarioKart8Deluxe.GameTextFixes]
        +TextReplacements=(Category=Game, bIsMinimialPatch=True, Namespace=Version, Key=VersionText, NativeString=VERSION, LocalizedString=((en = v1.2)))
        +TextReplacements=(Category=Game, bIsMinimialPatch=True, Namespace=PressKey, Key=PressKeyText, NativeString=PRESSKEY, LocalizedString=((en = Press A To Play Insight!)))
        +TextReplacements=(Category=Game, bIsMinimialPatch=True, Namespace=Singleplayer, Key=SingleplayerText, NativeString=SINGLEPLAYER, LocalizedString, ((en = Unavailable)))
        +TextReplacements=(Category=Game, bIsMinimialPatch=True, Namespace=Multiplayer, Key=MultiplayerText, NativeString=MULTIPLAYER, LocalizedString, ((en = Unavailable)))
        +TextReplacements=(Category=Game, bIsMinimialPatch=True, Namespace=Online, Key=OnlineText, NativeString=ONLINE, LocalizedString, ((en = Insight)))

        [/Script/MarioKart8Deluxe.Instance]
        +FrontEndPlaylistData=(PlaylistName=Playlist_Online, PlaylistAccess(bEnabled=true, bIsDefaultPlaylist=true, bVisibleWhenDisabled=true))
        
    )"
}