#include <stdio.h>
#include <ssebtr1.h>

int main() {
	int age, rate, maxRate;
	int bpm = 150;

	// 用户输入年龄
	printf("请输入年龄：");
	scanf("%d", &age);

	// 计算最高心率
	maxRate = 220 - age;

	// 播放150bpm的音乐
	playSound(bpm);

	// 传感器休眠5分钟
	// 获得用户当前心率
	rate = getHeartRate();

	if (rate > maxRate) {
		printf("请马上停止跑步，否则会有生命危险...\n");
	} else if (rate > maxRate * 0.85) {
		printf("请放慢脚步\n");
		playSound(bpm -= 20);
	} else if (rate < maxRate * 0.75) {
		printf("Come on，请加快节奏！\n");
		playSound(bpm += 20);
	}

	return 0;
}
