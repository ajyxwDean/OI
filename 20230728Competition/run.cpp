#include <bits/stdc++.h>
using namespace std;
bool vis[9];
string s;
int a[9];
int cnt = 0;
bool chk() {
    for(int i = 0; i < 8; i++) {
        if((s[i] - '0') != a[i + 1]) return false;
    }
    return true;
}
void dfs(int t) {
    if(t == 9) {
        cnt++;
        if(chk()) {
            cout << cnt;
        }
        return ;
    }
    for(int i = 0; i <= 9; i++) {
        if(!vis[i]) {
            a[t] = i;
            vis[i] = 1;
            dfs(t + 1);
            vis[i] = 0;
        }
    }
}
int main() {
    freopen("run.in", "r", stdin);
    freopen("run.out", "w", stdout);
    cin >> s;
    dfs(1);
    fclose(stdin);
    fclose(stdout);
    return 0;
}

/*
/give Spring_132 diamond_sword{display:{Name:'[{"text":"神","color":"red","italic":"false"},{"text":"·", color:"green","italic":"false"}{"text":"最","color":"red","italic":"false","obfuscated":"true"},{"text":"终","color":"green","italic":"false","obfuscated":"true"},{"text":"の","color":"dark_red","italic":"false"},{"text":"圣","color":"blue","italic":"false"},{"text":"剑","color":"gold","italic":"false"}]',Lore:['[{"text":"蕴","color":"purple","italic":"false","bold":"true"},{"text":"含","color":"pink"},{"text":"神","color":"blue","bold":"true"},{"text":"明","color":"green","bold":"true"},{"text":"之","color":"yellow"},{"text":"力","color":"orange"},{"text":"!","color":"red"}]','[{"text":"用最终の材料制成的剑","color":"gold","bold":"true"}]','[{"text":"蕴含最终力量","color":"gray","bold":"true"}]','[{"text":"拥有改变","color":"aqua"},{"text":"世界","color":"gold","obfuscated":"true"},{"text":"的能量---","color":"aqua"},{"text":"最終の力","color":"aqua","bold":"true"}]','[{"text":"The Ultimate Force", "obfuscated":"true", "color":"dark_purple"}]']}, Enchantments:[{id:"minecraft:sharpness",lvl:2147483647},{id:"minecraft:fire_aspect",lvl:2147483647},{id:"minecraft:bane_of_arthropods",lvl:2147483647},{id:"minecraft:smite",lvl:2147483647,{id:"minecraft:looting",lvl:2147483647},{id:"minecraft:sweeping",lvl:2147483647},{id:"minecraft:unbreaking",lvl:2147483647},{id:"minecraft:mending",lvl:2147483647}],AttributeModifiers:[{AttributeName:"generic.attack_damage",Amount:2147483647,Slot:mainhand},{AttributeName:"generic.max_health",Amount:2147483647,Slot:mainhand},{AttributeName:"generic.attack_speed",Amount:2147483647,Slot:mainhand},{AttributeName:"generic.movement_speed",Amount:5, Slot:mainhand}], Unbreakable:1b} 1

*/


/*


display:{Name:'[{"text":"神","color":"red","italic":"false"},{"text":"·", color:"green","italic":"false"}{"text":"最","color":"red","italic":"false","obfuscated":"true"},{"text":"终","color":"green","italic":"false","obfuscated":"true"},{"text":"の","color":"dark_red","italic":"false"},{"text":"圣","color":"blue","italic":"false"},{"text":"剑","color":"gold","italic":"false"}]',Lore:['[{"text":"蕴","color":"purple","italic":"false","bold":"true"},{"text":"含","color":"pink"},{"text":"神","color":"blue","bold":"true"},{"text":"明","color":"green","bold":"true"},{"text":"之","color":"yellow"},{"text":"力","color":"orange"},{"text":"!","color":"red"}]','[{"text":""}]']}


*/