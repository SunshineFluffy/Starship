#ifndef CONTEXT_H
#define CONTEXT_H

#include "sys.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

extern s32 gSceneId;
extern s32 gSceneSetup;
extern s32 gClearPlayerInfo;
extern s32 D_ctx_8017782C;
extern GameState gGameState;
extern s32 gNextGameStateTimer;
extern s32 gVsItemSpawnTimer;
extern OptionState gOptionMenuStatus;
extern s32 gPlayState;
extern s32 D_ctx_80177868;
extern LevelMode gLevelMode;
extern DrawMode gDrawMode;
extern s32 gPlayerNum;
extern s32 gCamCount;
extern s32 gTeamShields[6];
extern s32 gSavedTeamShields[6];
extern s32 gPrevPlanetSavedTeamShields[6];
extern s32 gTeamDamage[6];
extern u8 gMissionStatus;
extern f32 gGroundHeight;
extern f32 D_ctx_80177950;
extern f32 gPlayerTurnRate;
extern f32 gPlayerTurnStickMod;
extern f32 gCsCamEyeX;
extern f32 gCsCamEyeY;
extern f32 gCsCamEyeZ;
extern f32 gCsCamAtX;
extern f32 gCsCamAtY;
extern f32 gCsCamAtZ;
extern Vec3f gPlayCamEye;
extern Vec3f gPlayCamAt;
extern bool gExpertMode;
extern s32 D_ctx_80177A10[10];
extern f32 D_ctx_80177A48[10];
extern s32 gCsFrameCount;
extern u8 gDrawGround;
extern u8 gDrawBackdrop; // Venom Andross is the only level with multiple backdrops
extern u8 gAqDrawMode;
extern s32 gTitleState;
extern s32 gMainController;
extern s32 gMapState;
extern s32 gMissionNumber;
extern s32 gMissionTeamStatus[7];
extern s32 gMissionHitCount[7];
extern PlanetId gMissionPlanet[7];
extern s32 gMissionMedal[7];
extern s32 gPlanetPathStatus[];
extern s32 gPrevPlanetTeamShields[6];
extern s32 D_ctx_80177C58[6];
extern u8  gOptionSoundMode;
extern s32 gVolumeSettings[3];
extern u16 gBgmSeqId;
extern u8  gLevelType;
extern s32 gSavedObjectLoadIndex;
extern UNK_TYPE F_80177CA8;
extern f32 gSavedPathProgress;
extern UNK_TYPE F_80177CB8;
extern f32 gWaterLevel;
extern f32 gPathGroundScroll;
extern f32 gLastPathTexScroll;
extern f32 gPathTexScroll;
extern f32 gPathVelZ;
extern f32 gPathProgress;
extern f32 gRadioPortraitScaleY;
extern f32 gRadioTextBoxScaleY;
extern f32 gRadioMsgRadioId;
extern UNK_TYPE F_80177D80;
extern UNK_TYPE F_80177DE8;
extern s32 gGameFrameCount;
extern s32 gObjectLoadIndex;
extern s32 gPrevEventActorIndex;
extern s32 gFormationLeaderIndex;
extern s32 gRingPassCount;
extern Vec3f gFormationInitRot;
extern Vec3f gFormationInitPos;
extern UNK_TYPE F_80178020;
extern s32 gGroundClipMode;
extern LevelId gCurrentLevel;
extern s32 gLevelPhase;
extern s32 gBossActive;
extern bool gKillEventActors;
extern s32 gUseDynaFloor;
extern s32 gRadioState;
extern s32 gCurrentRadioPortrait;
extern s32 gRadioStateTimer;
extern s32 gRadioMouthTimer;
extern s32 D_ctx_801782C0;
extern s32 D_ctx_801782C8;
extern s32 D_ctx_801782D0;
extern s32 gRadioMsgCharIndex;
extern UNK_TYPE F_801782E0;
extern s32 gRadioMsgId;
extern UNK_TYPE F_801782F0;
extern bool gMsgCharIsPrinting;
extern bool gHideRadio;
extern u16* gRadioMsg;
extern ObjectInit* gLevelObjects;
extern s32 gFogRed;
extern s32 gFogGreen;
extern s32 gFogBlue;
extern s32 gFogAlpha;
extern s32 gFillScreenAlpha;
extern s32 gFillScreenRed;
extern s32 gFillScreenGreen;
extern s32 gFillScreenBlue;
extern s32 gFillScreenAlphaTarget;
extern s32 gFillScreenAlphaStep;
extern s32 gLight3R;
extern s32 gLight3G;
extern s32 gLight3B;
extern f32 gLight3Brightness;
extern f32 gLight3x;
extern f32 gLight3y;
extern f32 gLight3z;
extern s32 gFadeoutType;
extern u32 gPlayerGlareAlphas[4];
extern s32 gPlayerGlareReds[4];
extern s32 gPlayerGlareGreens[4];
extern s32 gPlayerGlareBlues[4];
extern s32 D_ctx_801783C0[4];
extern f32 gSunViewX;
extern f32 gSunViewY;
extern s32 gFogNear;
extern s32 gFogFar;
extern UNK_TYPE F_801783E0[12];
extern s32 gStarCount;
extern f32 gStarWarpDistortion;
extern f32 gCOComplete2CamRotY;
extern UNK_TYPE F_8017841C;
extern f32 gStarfieldX;
extern f32 gStarfieldY;
extern f32 gStarfieldRoll;
extern f32 gStarfieldScrollX;
extern f32 gStarfieldScrollY;
extern UNK_TYPE F_80178434;
extern UNK_TYPE F_80178438;
extern UNK_TYPE F_8017843C;
extern f32 gBossDeathCamAtX;
extern f32 gBossDeathCamAtY;
extern f32 gBossDeathCamAtZ;
extern f32 gCsTeamTargetsX[3];
extern f32 gCsTeamTargetsY[3];
extern f32 gCsTeamTargetsZ[3];
extern f32 gCameraShakeY;
extern s32 gCameraShake;
extern s32 D_ctx_80178484;
extern bool gLoadLevelObjects;
extern UNK_TYPE F_8017848C;
extern UNK_TYPE F_80178490;
extern s32 D_ctx_80178494;
extern f32 gShotHitPosZ;
extern f32 gShotHitPosX;
extern f32 gShotHitPosY;
extern s32 gZoDodoraWaypointCount;
extern UNK_TYPE F_801784A8;
extern GroundType gGroundType;
extern UNK_TYPE F_801784B0;
extern UNK_TYPE F_801784B4;
extern f32 gLight1xRot;
extern f32 gLight1yRot;
extern f32 gLight1zRot;
extern f32 gLight1xRotTarget;
extern f32 gLight1yRotTarget;
extern f32 gLight1zRotTarget;
extern f32 gEnvLightxRot;
extern f32 gEnvLightyRot;
extern f32 gEnvLightzRot;
extern s32 gLight1x;
extern s32 gLight1y;
extern s32 gLight1z;
extern f32 gLight1rotStep;
extern f32 gLight2xRot;
extern f32 gLight2yRot;
extern f32 gLight2zRot;
extern f32 gLight2xRotTarget;
extern f32 gLight2yRotTarget;
extern f32 gLight2zRotTarget;
extern s32 gLight2x;
extern s32 gLight2y;
extern s32 gLight2z;
extern f32 gLight2rotStep;
extern UNK_TYPE F_801784514;
extern UNK_TYPE F_801784518;
extern UNK_TYPE F_80178451C;
extern f32 D_ctx_80178520;
extern f32 D_ctx_80178524;
extern f32 D_ctx_80178528;
extern UNK_TYPE F_80178452C;
extern UNK_TYPE F_801784530;
extern UNK_TYPE F_801784534;
extern f32 D_ctx_80178538;
extern f32 D_ctx_8017853C;
extern s32 gLight2colorStep;
extern s32 D_ctx_80178544;
extern s32 gLight1R;
extern s32 gLight1G;
extern s32 gLight1B;
extern s32 gAmbientR;
extern s32 gAmbientG;
extern s32 gAmbientB;
extern UNK_TYPE F_801784560;
extern s32 gLight2R;
extern s32 gLight2G;
extern s32 gLight2B;
extern s32 gLight2RTarget;
extern s32 gLight2GTarget;
extern s32 gLight2BTarget;
extern s32 D_ctx_80161A70;
extern s32 D_ctx_80161A74;
extern s32 D_ctx_80161A78;
extern s32 D_ctx_80161A7C;
extern s32 D_ctx_80161A80;
extern s32 D_ctx_80161A84;
extern s32 gGroundSurface;
extern s32 gSavedGroundSurface;
extern u8 gGoldRingCount[4];
extern u8 gSavedGoldRingCount[4];
extern s32 gHitCount;
extern s32 gSavedHitCount;
extern s16 gLifeCount[4];
extern LaserStrength gLaserStrength[4];
extern s32 gCullObjects;
extern UNK_TYPE F_80161AC0[16];
extern Scenery gScenery[50];
extern Sprite gSprites[40];
extern Actor gActors[60];
extern Boss gBosses[4];
extern Effect gEffects[100];
extern Item gItems[20];
extern PlayerShot gPlayerShots[16];
extern TexturedLine gTexturedLines[100];
extern RadarMark gRadarMarks[65];
extern BonusText gBonusText[10];
extern s32 gMeMoraStatus[2];
extern f32 gMeMoraXpos[2][100];
extern f32 gMeMoraYpos[2][100];
extern f32 gMeMoraZpos[2][100];
extern f32 gMeMoraXrot[2][100];
extern f32 gMeMoraYrot[2][100];
extern f32 gMeMoraZrot[2][100];
extern u16 gEnemyShotSpeed;
extern u8 gShowLevelClearStatusScreen;
extern s32 gLevelStartStatusScreenTimer;
extern s32 gLevelClearScreenTimer;
extern s32 gBossHealthBar;
extern s32 D_ctx_80177850;
extern s32 D_ctx_80177858[4];
extern s32 gPlayerForms[4];
extern s32 gHandicap[4];
extern VsStage gVersusStage;
extern s32 gVsPointsToWin;
extern s32 gVsMatchType;
extern s32 gVsTimeTrialLimit;
extern bool gVersusMode;
extern u16 gBoostButton[4];
extern u16 gBrakeButton[4];
extern u16 gShootButton[4];
extern u16 gBombButton[4];
extern f32 D_ctx_80177958[4];
extern s32 gTeamLowHealthMsgTimer;
extern OSContPad* gInputHold;
extern OSContPad* gInputPress;
extern u8* gControllerRumble;
extern s32 D_ctx_80177990[4];
extern f32 D_ctx_801779A8[4];
extern u8 gPauseEnabled;
extern s32 gChargeTimers[4];
extern f32 gPathVelX;
extern f32 gPathVelY;
extern s32 gUturnDownTimers[4];
extern s32 gUturnBrakeTimers[4];
extern s32 gLoopDownTimers[4];
extern s32 gLoopBoostTimers[4];
extern f32 gMuzzleFlashScale[4];
extern f32 gShieldAlpha[4];
extern s32 gHasShield[4];
extern s32 gShieldTimer[4];
extern s32 gVsLockOnTimers[4][4];
extern u8 gStartAndrossFightTimer;
extern u8 gSoShieldsEmpty;
extern u8 gCoUturnCount;
extern u8 gGreatFoxIntact;
extern u8 gTiStartLandmaster;
extern u16 gControllerRumbleTimers[4];
extern u16 gPlayerScores[4];
extern s32 gCircleWipeFrame;
extern s32 gFovYMode;
extern s32 gTraining360MsgTimer;
extern s32 gTraining360MsgIndex;
extern s32 D_ctx_80177C94;
extern s32 D_ctx_80177C9C;
extern s32 D_ctx_80177CA4;
extern s32 D_ctx_80177CAC;
extern s32 D_ctx_80177CB4;
extern s32 D_ctx_80177CBC;
extern s32 D_ctx_80177CC4;
extern s32 gStarWolfTeamAlive[6];
extern s32 gSavedStarWolfTeamAlive[6];
extern s32 gRightWingHealth[4];
extern s32 gLeftWingHealth[4];
extern s32 gRightWingFlashTimer[4];
extern s32 gLeftWingFlashTimer[4];
extern s32 gRightWingDebrisTimer[4];
extern s32 gLeftWingDebrisTimer[4];
extern s32 gBombCount[4];
extern s32 gVsPoints[4];
extern s32 gVsKills[4][10];
extern s32 gVsMatchWon;
extern bool gVsMatchStart;
extern bool gChangeTo360;
extern Vec3f gTeamArrowsViewPos[10];
extern f32 D_ctx_80177F20[65];
extern f32 D_ctx_80178028[65];
extern f32 D_ctx_80178130[65];
// extern u8 D_ctx_80178238[65];
extern Player* gPlayer;
extern f32* gStarOffsetsX;
extern f32* gStarOffsetsY;
extern u32* gStarFillColors;
extern UNK_TYPE F_801782A0;
extern Scenery360* gScenery360;
extern UNK_TYPE F_801782B0;
extern s32 gDrawSmallRocks;
extern s32 D_ctx_801782BC;
extern PosRot* gZoDodoraPosRots;
extern f32* D_ctx_801782CC;
extern f32* D_ctx_801782D4;
extern f32* D_ctx_801782DC;
extern f32* D_ctx_801782E4;
extern f32* D_ctx_801782EC;
extern UNK_TYPE F_801782F4;
extern s32 gDynaFloorTimer;
extern UNK_TYPE F_80178304;
extern UNK_TYPE F_8017830C;
extern UNK_TYPE F_80178314;
extern UNK_TYPE F_80178318;
extern UNK_TYPE F_8017831C;
extern UNK_TYPE F_80178324;
extern UNK_TYPE F_8017832C;
extern UNK_TYPE F_80178334;
extern UNK_TYPE F_8017833C;
extern UNK_TYPE F_80178344;
extern UNK_TYPE F_8017834C;


#endif
