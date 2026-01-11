class CfgPatches
{
  class Sturmtruppen
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data" };
  };
};

class CfgMods
{
  class Sturmtruppen
  {
    dir="Sturmtruppen";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="Sturmtruppen";
    picture="Sturmtruppen/data/picture.paa";
    logoSmall="Sturmtruppen/data/logoSmall.paa";
    logo="Sturmtruppen/data/logo.paa";
    logoOver="Sturmtruppen/data/logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3516909894";
    credits="moldypenguins";
    author="moldypenguins";
    authorID = "76561198312711389";
    version="1.2";
    type="mod";
    dependencies[]={};
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "Sturmtruppen/scripts/1_core" };
      };
    }
  };
};
