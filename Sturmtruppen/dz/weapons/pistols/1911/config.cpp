class CfgPatches
{
	class Sturmtruppen_Pistols_1911
	{
		units[]={ "1911_Sturmtruppen" };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Pistols" };
	};
};
class CfgWeapons
{
	class Engraved1911;
	class Sturmtruppen1911: Engraved1911
	{
		scope=2;
		displayName="$STR_CfgWeapons_Sturmtruppen19110";
		descriptionShort="$STR_CfgWeapons_Sturmtruppen19111";
		weight=1000;
		barrelArmor=1.7;
		attachments[]={ "pistolFlashlight", "pistolMuzzle" };
		magazines[]={ "Mag_1911_7Rnd" };
		magazineSwitchTime=0.19999999;
		swayModifier[]={1.3,1.3,0.5};
		hiddenSelectionsTextures[]={ "Sturmtruppen\dz\weapons\pistols\1911\data\1911_sturmtruppen_co.paa" };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints=250; };
			};
		};
	};
};
