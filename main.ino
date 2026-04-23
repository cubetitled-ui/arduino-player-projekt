// Три песни, переключение по кнопке (пин 12 -> GND)
// Блокирующее воспроизведение, но кнопка проверяется между нотами

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

// Песня 1: Rick Astley
int tempo1 = 114;
int melody1[] = {
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4, NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2, NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4, NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2, NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
  REST,4, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,8, NOTE_CS5,-8,
  NOTE_B4,16, NOTE_A4,2, REST,4, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,4, NOTE_A4,8,
  NOTE_A5,8, REST,8, NOTE_A5,8, NOTE_E5,-4, REST,4, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_D5,8, NOTE_E5,8, REST,8,
  REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4,
  NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, REST,4, NOTE_D5,2, NOTE_E5,8, NOTE_FS5,8, NOTE_D5,8,
  NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, NOTE_A4,4, REST,2, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8,
  REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,-8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,8, NOTE_A4,8, NOTE_A4,8,
  NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,
  NOTE_E5,4, NOTE_D5,2, REST,4, REST,8, NOTE_B4,8, NOTE_D5,8, NOTE_B4,8, NOTE_D5,8, NOTE_E5,4, REST,8,
  REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4,
  REST,8, NOTE_A5,8, NOTE_A5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8, NOTE_D5,8,
  REST,8, NOTE_A4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4,
  NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4, REST,8,
  REST,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,4, NOTE_E5,-4, NOTE_D5,2, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4,
  NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8, NOTE_A4,8, NOTE_A4,4,
  REST,-4, NOTE_A4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8, NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8, NOTE_E5,4, NOTE_D5,2, REST,4
};
int notes1 = sizeof(melody1) / sizeof(melody1[0]) / 2;

// Песня 2: Nokia
int tempo2 = 180;
int melody2[] = {
  NOTE_E5, 8, NOTE_D5, 8, NOTE_FS4, 4, NOTE_GS4, 4,
  NOTE_CS5, 8, NOTE_B4, 8, NOTE_D4, 4, NOTE_E4, 4,
  NOTE_B4, 8, NOTE_A4, 8, NOTE_CS4, 4, NOTE_E4, 4,
  NOTE_A4, 2
};
int notes2 = sizeof(melody2) / sizeof(melody2[0]) / 2;

// Песня 3: Star Wars
int tempo3 = 108;
int melody3[] = {
  NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8, NOTE_F5,2, NOTE_C6,2,
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,
  NOTE_F5,2, NOTE_C6,2, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16,
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4, NOTE_C5,-8, NOTE_C5,16,
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4, NOTE_C6,-8, NOTE_C6,16,
  NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,
  NOTE_C6,1
};
int notes3 = sizeof(melody3) / sizeof(melody3[0]) / 2;

const int buzzer = 11;
const int button = 12;

int currentSong = 0;  // 0,1,2

// Функция проигрывания одной песни с проверкой кнопки
void playSongWithButton(int song) {
  int tempo, notesCount;
  int *melody;
  if (song == 0) {
    tempo = tempo1;
    notesCount = notes1;
    melody = melody1;
  } else if (song == 1) {
    tempo = tempo2;
    notesCount = notes2;
    melody = melody2;
  } else {
    tempo = tempo3;
    notesCount = notes3;
    melody = melody3;
  }
  
  int wholenote = (60000 * 4) / tempo;
  
  for (int i = 0; i < notesCount * 2; i += 2) {
    // Проверка кнопки перед каждой нотой
    if (digitalRead(button) == LOW) {
      // Кнопка нажата – выходим из функции, не доигрывая песню
      // Небольшая задержка для антидребезга (чтобы не сработало несколько раз)
      delay(50);
      return;
    }
    
    int divider = melody[i+1];
    int noteDuration;
    if (divider > 0) {
      noteDuration = wholenote / divider;
    } else {
      noteDuration = wholenote / abs(divider);
      noteDuration *= 1.5;
    }
    if (melody[i] != REST) {
      tone(buzzer, melody[i], noteDuration * 0.9);
    }
    delay(noteDuration);
    noTone(buzzer);
  }
}

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Start");
  // Начинаем с первой песни
  currentSong = 0;
}

void loop() {
  // Проигрываем текущую песню. Она будет играть до конца или до нажатия кнопки.
  playSongWithButton(currentSong);
  
  // Если вышли из-за нажатия кнопки, то переключаем песню
  // Проверяем, что кнопка всё ещё нажата (или была нажата) - но нам нужно переключить один раз.
  // Просто переключим на следующую песню и продолжим цикл.
  if (digitalRead(button) == LOW) {
    // Ждём отпускания кнопки, чтобы не переключать несколько раз
    while (digitalRead(button) == LOW) {
      delay(10);
    }
    delay(50);
    currentSong = (currentSong + 1) % 3;
    Serial.print("Switched to song ");
    Serial.println(currentSong);
    // После переключения сразу начинаем новую песню в следующей итерации loop
  } else {
    // Если кнопка не нажата, а песня закончилась, то просто начинаем её заново (зацикливаем)
    // Но можно и не зацикливать, а ждать нажатия. Сделаем зацикливание.
    // Если хочешь, чтобы после окончания песня не повторялась, а ждала нажатия, убери следующую строку.
    // Оставим зацикливание, чтобы всегда что-то играло.
    // Ничего не делаем, просто loop запустит ту же песню снова.
  }
}
