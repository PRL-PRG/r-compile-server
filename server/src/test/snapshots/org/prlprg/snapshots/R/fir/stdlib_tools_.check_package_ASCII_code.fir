fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3331586931;
    st `.check_package_ASCII_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3331586931(dir, respect_quotes) {
  (reg dir:*, reg respect_quotes:*) -+> V { var dir:*, var respect_quotes:*, reg respect_quotes_isMissing:L, reg respect_quotes_orDefault:*, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r9:V, reg character:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg file_path:cls, reg dir7:*, reg dir8:V, reg p4:p(V +), reg r14:V, reg list_files_with_type:cls, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c1:cls, reg r20:V, reg p7:p(V +), reg r22:V, reg c2:cls, reg r23:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg readLines:cls, reg f:*, reg f1:V, reg p8:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg i7:I, reg r27:V, reg C_check_nonASCII:*, reg C_check_nonASCII1:V, reg text:*, reg text1:V, reg respect_quotes1:*, reg respect_quotes2:V, reg vargs:dots, reg r28:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg i12:I, reg r30:V, reg wrong_things:*, reg wrong_things1:V, reg f2:*, reg f3:V, reg c5:cls, reg r31:V, reg i13:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg wrong_things2:*, reg wrong_things3:V, reg length:cls, reg r35:V, reg c6:L, reg substring:cls, reg wrong_things4:*, reg wrong_things5:V, reg p9:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg dir11:*, reg dir12:V, reg nchar:cls, reg r39:V, reg r40:V, reg p10:p(V +), reg r42:V, reg cat:cls, reg wrong_things6:*, reg wrong_things7:V, reg p11:p(V +), reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg wrong_things8:*, reg wrong_things9:V, reg invisible:cls, reg r48:V |
    mkenv;
    st dir = dir;
    respect_quotes_isMissing = missing.0(respect_quotes);
    if respect_quotes_isMissing then L0(FALSE) else L0(respect_quotes);
  L0(respect_quotes_orDefault):
    st respect_quotes = respect_quotes_orDefault;
    dir_exists = ldf `dir.exists`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn dir_exists(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L16() else L1();
  L1():
    goto L2();
  L2():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L20() else D4();
  L16():
    stop = ldf stop;
    check L17() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L17():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r4 = dyn gettextf("directory '%s' does not exist", p1);
      return r4;
    };
    r6 = dyn stop[, domain](p2, NA_LGL);
    check L18() else D3();
  L20():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r9 = dyn file_path_as_absolute(p3);
    check L21() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 16 [r9];
  L18():
    goto L2();
  L21():
    st dir = r9;
    character = ldf character;
    check L22() else D6();
  D6():
    deopt 19 [];
  L22():
    r10 = dyn character();
    check L23() else D7();
  D7():
    deopt 20 [r10];
  L23():
    st wrong_things = r10;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L3(r12):
    s = toForSeq(r12);
    l = length(s);
    i = 0;
    goto L4(i);
  L24():
    file_path = ldf `file.path`;
    check L26() else D8();
  L25():
    r11 = dyn base(<lang file.path(dir, "NAMESPACE")>, <lang list_files_with_type(file.path(dir, "R"), "code", OS_subdirs=c("unix", "windows"))>);
    goto L3(r11);
  D8():
    deopt 25 [];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L31() else L9();
  L26():
    p4 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r14 = dyn file_path(p4, "NAMESPACE");
    check L27() else D9();
  D9():
    deopt 28 [r14];
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    readLines = ldf readLines;
    check L32() else D13();
  L27():
    list_files_with_type = ldf list_files_with_type;
    check L28() else D10();
  L31():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  D10():
    deopt 30 [];
  D13():
    deopt 39 [i2];
  L10(r34):
    c6 = `as.logical`(r34);
    if c6 then L50() else L11();
  L28():
    p6 = prom<V +>{
      file_path1 = ldf `file.path`;
      p5 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r16 = dyn file_path1(p5, "R");
      return r16;
    };
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c1 = ldf c in base;
      r20 = dyn c1("unix", "windows");
      goto L0(r20);
    L2():
      r18 = dyn base1("unix", "windows");
      goto L0(r18);
    };
    r22 = dyn list_files_with_type[, , OS_subdirs](p6, "code", p7);
    check L29() else D11();
  L32():
    p8 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r25 = dyn readLines[, warn](p8, FALSE);
    check L33() else D14();
  L46():
    wrong_things2 = ld wrong_things;
    check L48() else D21();
  L47():
    r33 = dyn base4(<sym wrong_things>);
    goto L10(r33);
  D11():
    deopt 35 [r22];
  D14():
    deopt 43 [i2, r25];
  D21():
    deopt 67 [wrong_things2];
  L11():
    goto L12();
  L12():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L29():
    c2 = ldf c in base;
    r23 = dyn c2(r14, r22);
    check L30() else D12();
  L33():
    st text = r25;
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L48():
    wrong_things3 = force? wrong_things2;
    checkMissing(wrong_things3);
    length = ldf length in base;
    r35 = dyn length(wrong_things3);
    check L49() else D22();
  L50():
    substring = ldf substring;
    check L51() else D23();
  D12():
    deopt 37 [r23];
  D22():
    deopt 70 [r35];
  D23():
    deopt 72 [];
  L5(i7, r27):
    c4 = `as.logical`(r27);
    if c4 then L39() else L6();
  L13(r47):
    popenv;
    return r47;
  L30():
    goto L3(r23);
  L34():
    C_check_nonASCII = ld C_check_nonASCII;
    check L36() else D15();
  L35():
    r26 = dyn base2(<sym C_check_nonASCII>, <sym text>, <sym respect_quotes>);
    goto L5(i2, r26);
  L49():
    goto L10(r35);
  L51():
    p9 = prom<V +>{
      wrong_things4 = ld wrong_things;
      wrong_things5 = force? wrong_things4;
      checkMissing(wrong_things5);
      return wrong_things5;
    };
    p10 = prom<V +>{
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      r40 = `+`(r38, 2);
      return r40;
    L1():
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      nchar = ldf nchar in base;
      r39 = dyn nchar(dir12, "chars", FALSE, NA_LGL);
      goto L0(r39);
    L2():
      r37 = dyn base5(<sym dir>);
      goto L0(r37);
    };
    r42 = dyn substring(p9, p10);
    check L52() else D24();
  L56():
    wrong_things8 = ld wrong_things;
    check L58() else D27();
  L57():
    r46 = dyn base6(<sym wrong_things>);
    goto L13(r46);
  D15():
    deopt 46 [i2, C_check_nonASCII];
  D24():
    deopt 75 [r42];
  D27():
    deopt 87 [wrong_things8];
  L6():
    goto L8(i7);
  L8(i13):
    goto L4(i13);
  L36():
    C_check_nonASCII1 = force? C_check_nonASCII;
    checkMissing(C_check_nonASCII1);
    text = ld text;
    check L37() else D16();
  L39():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L52():
    st wrong_things = r42;
    cat = ldf cat;
    check L53() else D25();
  L58():
    wrong_things9 = force? wrong_things8;
    checkMissing(wrong_things9);
    invisible = ldf invisible in base;
    r48 = dyn invisible(wrong_things9);
    check L59() else D28();
  D16():
    deopt 47 [i2, C_check_nonASCII1, text];
  D25():
    deopt 78 [];
  D28():
    deopt 90 [r48];
  L7(i12, r30):
    st wrong_things = r30;
    goto L8(i12);
  L37():
    text1 = force? text;
    checkMissing(text1);
    respect_quotes1 = ld respect_quotes;
    check L38() else D17();
  L40():
    wrong_things = ld wrong_things;
    check L42() else D18();
  L41():
    r29 = dyn base3(<sym wrong_things>, <sym f>);
    goto L7(i7, r29);
  L53():
    p11 = prom<V +>{
      wrong_things6 = ld wrong_things;
      wrong_things7 = force? wrong_things6;
      checkMissing(wrong_things7);
      return wrong_things7;
    };
    r44 = dyn cat[, sep](p11, "\n");
    check L54() else D26();
  L59():
    goto L13(r48);
  D17():
    deopt 48 [i2, C_check_nonASCII1, text1, respect_quotes1];
  D18():
    deopt 53 [i7, wrong_things];
  D26():
    deopt 82 [r44];
  L38():
    respect_quotes2 = force? respect_quotes1;
    checkMissing(respect_quotes2);
    vargs = dots[text1, respect_quotes2];
    r28 = `.Call`(C_check_nonASCII1, vargs, <missing>);
    goto L5(i2, r28);
  L42():
    wrong_things1 = force? wrong_things;
    checkMissing(wrong_things1);
    f2 = ld f;
    check L43() else D19();
  L54():
    goto L12();
  D19():
    deopt 55 [i7, f2];
  L43():
    f3 = force? f2;
    checkMissing(f3);
    c5 = ldf c in base;
    r31 = dyn c5(wrong_things1, f3);
    check L44() else D20();
  D20():
    deopt 58 [i7, r31];
  L44():
    goto L7(i7, r31);
  }
}