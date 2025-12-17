fun main() {
  () -+> V { reg r:cls, reg representation:cls, reg r1:V, reg getClassDef:cls, reg r2:V, reg setClass:cls, reg representation1:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass1:cls, reg representation2:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg try:cls, reg setClass2:cls, reg representation3:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg prev:*, reg prev1:V, reg c:V, reg c1:L, reg stopifnot:cls, reg isClass:cls, reg r16:V, reg r17:V, reg p4:p(V +), reg r19:V, reg stopifnot1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg getClassDef1:cls, reg r23:V, reg prev2:*, reg prev3:V, reg identical:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg setClass3:cls, reg representation4:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg setClass4:cls, reg representation5:cls, reg r30:V, reg p7:p(V +), reg prototype:cls, reg character:cls, reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg new:cls, reg r37:V, reg stopifnot2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg as:cls, reg ttt:*, reg ttt1:V, reg p10:p(V +), reg r41:V, reg identical1:cls, reg r42:V, reg p11:p(V +), reg r44:V, reg setClass5:cls, reg representation6:cls, reg r45:V, reg p12:p(V +), reg prototype1:cls, reg p13:p(V +), reg r48:V, reg p14:p(V +), reg r50:V, reg stopifnot3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg new1:cls, reg r53:V, reg new2:cls, reg p15:p(V +), reg r55:V, reg identical2:cls, reg r56:V, reg p16:p(V +), reg r58:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg r60:V, reg c2:cls, reg r61:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg removeClass:cls, reg cl:*, reg cl1:V, reg p17:p(V +), reg r63:V |
    mkenv;
    r = clos inner1246119658;
    st representation = r;
    representation = ldf representation;
    check L6() else D0();
  D0():
    deopt 4 [];
  L6():
    r1 = dyn representation[, smooth]("track", "numeric");
    check L7() else D1();
  D1():
    deopt 8 [r1];
  L7():
    getClassDef = ldf getClassDef;
    check L8() else D2();
  D2():
    deopt 10 [];
  L8():
    r2 = dyn getClassDef("class3");
    check L9() else D3();
  D3():
    deopt 12 [r2];
  L9():
    st prev = r2;
    setClass = ldf setClass;
    check L10() else D4();
  D4():
    deopt 15 [];
  L10():
    p = prom<V +>{
      representation1 = ldf representation;
      r3 = dyn representation1[a, b]("numeric", "character");
      return r3;
    };
    r5 = dyn setClass("class1", p);
    check L11() else D5();
  D5():
    deopt 18 [r5];
  L11():
    setClass1 = ldf setClass;
    check L12() else D6();
  D6():
    deopt 20 [];
  L12():
    p1 = prom<V +>{
      representation2 = ldf representation;
      r6 = dyn representation2[a2, b]("numeric", "numeric");
      return r6;
    };
    r8 = dyn setClass1("class2", p1);
    check L13() else D7();
  D7():
    deopt 23 [r8];
  L13():
    try = ldf try;
    check L14() else D8();
  D8():
    deopt 25 [];
  L14():
    p3 = prom<V +>{
      setClass2 = ldf setClass;
      p2 = prom<V +>{
        representation3 = ldf representation;
        r9 = dyn representation3("class1", "class2");
        return r9;
      };
      r11 = dyn setClass2("class3", p2);
      return r11;
    };
    r13 = dyn try(p3);
    check L15() else D9();
  D9():
    deopt 27 [r13];
  L15():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r15):
    c1 = `as.logical`(r15);
    if c1 then L19() else L1();
  L16():
    prev = ld prev;
    check L18() else D10();
  L17():
    r14 = dyn base(<sym prev>);
    goto L0(r14);
  D10():
    deopt 29 [prev];
  L1():
    stopifnot1 = ldf stopifnot;
    check L23() else D13();
  L2():
    setClass3 = ldf setClass;
    check L25() else D15();
  L18():
    prev1 = force? prev;
    checkMissing(prev1);
    c = `==`(prev1, NULL);
    goto L0(c);
  L19():
    stopifnot = ldf stopifnot;
    check L20() else D11();
  D11():
    deopt 33 [];
  D13():
    deopt 37 [];
  D15():
    deopt 41 [];
  L20():
    p4 = prom<V +>{
      isClass = ldf isClass;
      r16 = dyn isClass("class3");
      r17 = `!`(r16);
      return r17;
    };
    r19 = dyn stopifnot(p4);
    check L21() else D12();
  L23():
    p5 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      getClassDef1 = ldf getClassDef;
      r23 = dyn getClassDef1("class3");
      prev2 = ld prev;
      prev3 = force? prev2;
      checkMissing(prev3);
      identical = ldf identical in base;
      r24 = dyn identical(r23, prev3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r24);
    L2():
      r21 = dyn base1(<lang getClassDef("class3")>, <sym prev>);
      goto L0(r21);
    };
    r26 = dyn stopifnot1(p5);
    check L24() else D14();
  L25():
    p6 = prom<V +>{
      representation4 = ldf representation;
      r27 = dyn representation4("character");
      return r27;
    };
    r29 = dyn setClass3("Character", p6);
    check L26() else D16();
  D12():
    deopt 35 [r19];
  D14():
    deopt 39 [r26];
  D16():
    deopt 44 [r29];
  L21():
    goto L2();
  L24():
    goto L2();
  L26():
    setClass4 = ldf setClass;
    check L27() else D17();
  D17():
    deopt 46 [];
  L27():
    p7 = prom<V +>{
      representation5 = ldf representation;
      r30 = dyn representation5[, type]("Character", "character");
      return r30;
    };
    p9 = prom<V +>{
      prototype = ldf prototype;
      p8 = prom<V +>{
        character = ldf character;
        r32 = dyn character(0.0);
        return r32;
      };
      r34 = dyn prototype[, type](p8, "plain");
      return r34;
    };
    r36 = dyn setClass4("TypedCharacter", p7, p9);
    check L28() else D18();
  D18():
    deopt 50 [r36];
  L28():
    new = ldf new;
    check L29() else D19();
  D19():
    deopt 52 [];
  L29():
    r37 = dyn new[, , type]("TypedCharacter", "foo", "character");
    check L30() else D20();
  D20():
    deopt 57 [r37];
  L30():
    st ttt = r37;
    stopifnot2 = ldf stopifnot;
    check L31() else D21();
  D21():
    deopt 60 [];
  L31():
    p11 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      as = ldf as;
      p10 = prom<V +>{
        ttt = ld ttt;
        ttt1 = force? ttt;
        checkMissing(ttt1);
        return ttt1;
      };
      r41 = dyn as(p10, "character");
      identical1 = ldf identical in base;
      r42 = dyn identical1(r41, "foo", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r42);
    L2():
      r38 = dyn base2(<lang as(ttt, "character")>, "foo");
      goto L0(r38);
    };
    r44 = dyn stopifnot2(p11);
    check L32() else D22();
  D22():
    deopt 62 [r44];
  L32():
    setClass5 = ldf setClass;
    check L33() else D23();
  D23():
    deopt 64 [];
  L33():
    p12 = prom<V +>{
      representation6 = ldf representation;
      r45 = dyn representation6[comment]("character");
      return r45;
    };
    p14 = prom<V +>{
      prototype1 = ldf prototype;
      p13 = prom<V +>{
        return 3.141592653589793;
      };
      r48 = dyn prototype1[, comment](p13, "Start with pi");
      return r48;
    };
    r50 = dyn setClass5[, , contains, prototype]("num1", p12, "numeric", p14);
    check L34() else D24();
  D24():
    deopt 71 [r50];
  L34():
    stopifnot3 = ldf stopifnot;
    check L35() else D25();
  D25():
    deopt 73 [];
  L35():
    p16 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r52):
      return r52;
    L1():
      new1 = ldf new;
      r53 = dyn new1("num1");
      new2 = ldf new;
      p15 = prom<V +>{
        return 3.141592653589793;
      };
      r55 = dyn new2[, , comment]("num1", p15, "Start with pi");
      identical2 = ldf identical in base;
      r56 = dyn identical2(r53, r55, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r56);
    L2():
      r51 = dyn base3(<lang new("num1")>, <lang new("num1", pi, comment="Start with pi")>);
      goto L0(r51);
    };
    r58 = dyn stopifnot3(p16);
    check L36() else D26();
  D26():
    deopt 75 [r58];
  L36():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L3(r60):
    s = toForSeq(r60);
    l = length(s);
    i = 0;
    goto L4(i);
  L37():
    c2 = ldf c in base;
    r61 = dyn c2("num1", "TypedCharacter", "Character", "class2", "class1");
    check L39() else D27();
  L38():
    r59 = dyn base4("num1", "TypedCharacter", "Character", "class2", "class1");
    goto L3(r59);
  D27():
    deopt 84 [r61];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L40() else L5();
  L39():
    goto L3(r61);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    removeClass = ldf removeClass;
    check L41() else D28();
  L40():
    invisible.0();
    popenv;
    return i2;
  D28():
    deopt 86 [i2];
  L41():
    p17 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r63 = dyn removeClass(p17);
    check L42() else D29();
  D29():
    deopt 88 [i2, r63];
  L42():
    goto L4(i2);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg allNames:cls, reg value:*, reg value1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg value2:*, reg value3:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg value4:*, reg value5:V, reg c1:L, reg i6:I, reg value7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg i13:I, reg r10:V, reg ei:*, reg ei1:V, reg c2:L, reg r11:V, reg c3:L, reg i14:I, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg i18:I, reg c8:L, reg r13:V, reg ei2:*, reg ei3:V, reg length:cls, reg r14:V, reg r15:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg gettextf:cls, reg i22:*, reg i23:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg r19:V, reg i24:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg value8:*, reg value9:V, reg c13:L, reg value11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg value14:V, reg r24:V, reg anames:*, reg anames1:V, reg nzchar:cls, reg r25:V, reg r26:V, reg __1:cls, reg r27:V, reg as_character:cls, reg r28:V, reg anyDuplicated:cls, reg includes:*, reg includes1:V, reg p3:p(V +), reg r30:V, reg c14:L, reg stop1:cls, reg gettextf1:cls, reg paste:cls, reg _dQ:cls, reg includes2:*, reg includes3:V, reg c15:L, reg includes5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg duplicated:cls, reg includes6:*, reg includes7:V, reg p4:p(V +), reg r32:V, reg __2:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg p6:p(V +), reg r37:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg r41:V, reg anames2:*, reg anames3:V, reg c16:L, reg anames5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg anames8:V, reg r44:V, reg anames9:*, reg anames10:V, reg nzchar1:cls, reg r45:V, reg __3:cls, reg r46:V, reg anyDuplicated1:cls, reg slots:*, reg slots1:V, reg p9:p(V +), reg r48:V, reg c17:L, reg slots2:*, reg slots3:V, reg c18:L, reg slots5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg duplicated1:cls, reg slots6:*, reg slots7:V, reg p10:p(V +), reg r50:V, reg __4:cls, reg r51:V, reg stop2:cls, reg sprintf:cls, reg ngettext:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg dslots:*, reg dslots1:V, reg length1:cls, reg r54:V, reg p11:p(V +), reg r56:V, reg p12:p(V +), reg paste1:cls, reg sQuote:cls, reg dslots2:*, reg dslots3:V, reg p13:p(V +), reg r59:V, reg p14:p(V +), reg r61:V, reg p15:p(V +), reg r63:V, reg p16:p(V +), reg r65:V, reg value15:*, reg value16:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    st value = r1;
    allNames = ldf allNames;
    check L24() else D2();
  L20():
    list = ldf list;
    check L22() else D0();
  L21():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 7 [];
  L22():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L23() else D1();
  L24():
    p = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r4 = dyn allNames(p);
    check L25() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 9 [r4];
  L23():
    goto L0(r2);
  L25():
    st anames = r4;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L1(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L2(i);
  L26():
    value2 = ld value;
    check L28() else D4();
  L27():
    r5 = dyn base1(<sym value>);
    goto L1(r5);
  D4():
    deopt 12 [value2];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L29() else L9();
  L28():
    value3 = force? value2;
    checkMissing(value3);
    r7 = seq_along(value3);
    goto L1(r7);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    value4 = ld value;
    check L30() else D5();
  L29():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  D5():
    deopt 15 [i2, value4];
  L10(r22):
    st includes = r22;
    anyDuplicated = ldf anyDuplicated;
    check L59() else D16();
  L30():
    value5 = force? value4;
    checkMissing(value5);
    c1 = `is.object`(value5);
    if c1 then L31() else L32(i2, value5);
  L48():
    value8 = ld value;
    check L50() else D12();
  L49():
    r21 = dyn base4(<lang `[`(value, `!`(nzchar(anames)))>);
    goto L10(r21);
  D12():
    deopt 48 [value8];
  D16():
    deopt 62 [];
  L3(i8, dx1):
    st ei = dx1;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L31():
    dr = tryDispatchBuiltin.1("[[", value5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(i2, dr);
  L32(i6, value7):
    i9 = ld i;
    check L34() else D6();
  L50():
    value9 = force? value8;
    checkMissing(value9);
    c13 = `is.object`(value9);
    if c13 then L51() else L52(value9);
  L59():
    p3 = prom<V +>{
      includes = ld includes;
      includes1 = force? includes;
      checkMissing(includes1);
      return includes1;
    };
    r30 = dyn anyDuplicated(p3);
    check L60() else D17();
  D6():
    deopt 17 [i6, value7, i9];
  D17():
    deopt 64 [r30];
  L4(i13, r10):
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L5(i13, c3) else L38();
  L11(dx3):
    as_character = ldf `as.character` in base;
    r28 = dyn as_character(dx3);
    check L58() else D15();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L34():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r8 = dyn __(value7, i10);
    goto L3(i6, r8);
  L35():
    ei = ld ei;
    check L37() else D7();
  L36():
    r9 = dyn base2(<sym ei>);
    goto L4(i8, r9);
  L51():
    dr2 = tryDispatchBuiltin.1("[", value9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(value11):
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L60():
    c14 = `as.logical`(r30);
    if c14 then L61() else L13();
  D7():
    deopt 22 [i8, ei];
  D15():
    deopt 59 [r28];
  L5(i14, c4):
    c12 = `as.logical`(c4);
    if c12 then L44() else L7();
  L12(value14, r24):
    r26 = `!`(r24);
    __1 = ldf `[` in base;
    r27 = dyn __1(value14, r26);
    goto L11(r27);
  L13():
    goto L14();
  L14():
    anames2 = ld anames;
    check L65() else D20();
  L37():
    ei1 = force? ei;
    checkMissing(ei1);
    c2 = `is.character`(ei1);
    goto L4(i8, c2);
  L38():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L54():
    anames = ld anames;
    check L56() else D13();
  L55():
    r23 = dyn base5(<sym anames>);
    goto L12(value11, r23);
  L58():
    goto L10(r28);
  L61():
    stop1 = ldf stop;
    check L62() else D18();
  D13():
    deopt 52 [value11, anames];
  D18():
    deopt 66 [];
  D20():
    deopt 73 [anames2];
  L6(i18, c8, r13):
    r15 = `!=`(r13, 1);
    c9 = `as.logical`(r15);
    c10 = `||`(c8, c9);
    goto L5(i18, c10);
  L7():
    goto L8(i14);
  L8(i24):
    goto L2(i24);
  L39():
    ei2 = ld ei;
    check L41() else D8();
  L40():
    r12 = dyn base3(<sym ei>);
    goto L6(i13, c3, r12);
  L44():
    stop = ldf stop;
    check L45() else D10();
  L56():
    anames1 = force? anames;
    checkMissing(anames1);
    nzchar = ldf nzchar in base;
    r25 = dyn nzchar(anames1);
    check L57() else D14();
  L62():
    p8 = prom<V +>{
      gettextf1 = ldf gettextf;
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          _dQ = ldf `.dQ`;
          p5 = prom<V +>{
            includes2 = ld includes;
            includes3 = force? includes2;
            checkMissing(includes3);
            c15 = `is.object`(includes3);
            if c15 then L1() else L2(includes3);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("[", includes3);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(includes5):
            duplicated = ldf duplicated;
            p4 = prom<V +>{
              includes6 = ld includes;
              includes7 = force? includes6;
              checkMissing(includes7);
              return includes7;
            };
            r32 = dyn duplicated(p4);
            __2 = ldf `[` in base;
            r33 = dyn __2(includes5, r32);
            goto L0(r33);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r35 = dyn _dQ(p5);
          return r35;
        };
        r37 = dyn paste[, collapse](p6, ", ");
        return r37;
      };
      r39 = dyn gettextf1("duplicate class names among superclasses: %s", p7);
      return r39;
    };
    r41 = dyn stop1[, domain](p8, NA_LGL);
    check L63() else D19();
  L65():
    anames3 = force? anames2;
    checkMissing(anames3);
    c16 = `is.object`(anames3);
    if c16 then L66() else L67(anames3);
  D8():
    deopt 28 [i13, c3, ei2];
  D10():
    deopt 36 [i14];
  D14():
    deopt 55 [value11, r25];
  D19():
    deopt 70 [r41];
  L15(dx7):
    st slots = dx7;
    anyDuplicated1 = ldf anyDuplicated;
    check L73() else D23();
  L41():
    ei3 = force? ei2;
    checkMissing(ei3);
    length = ldf length in base;
    r14 = dyn length(ei3);
    check L42() else D9();
  L45():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        i22 = ld i;
        i23 = force? i22;
        checkMissing(i23);
        return i23;
      };
      r17 = dyn gettextf("element %d of the representation was not a single character string", p1);
      return r17;
    };
    r19 = dyn stop[, domain](p2, NA_LGL);
    check L46() else D11();
  L57():
    goto L12(value11, r25);
  L63():
    goto L14();
  L66():
    dr6 = tryDispatchBuiltin.1("[", anames3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L68() else L67(dr6);
  L67(anames5):
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  D9():
    deopt 31 [i13, c3, r14];
  D11():
    deopt 40 [i14, r19];
  D23():
    deopt 84 [];
  L16(anames8, r44):
    __3 = ldf `[` in base;
    r46 = dyn __3(anames8, r44);
    goto L15(r46);
  L42():
    goto L6(i13, c3, r14);
  L46():
    goto L8(i14);
  L68():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L69():
    anames9 = ld anames;
    check L71() else D21();
  L70():
    r43 = dyn base6(<sym anames>);
    goto L16(anames5, r43);
  L73():
    p9 = prom<V +>{
      slots = ld slots;
      slots1 = force? slots;
      checkMissing(slots1);
      return slots1;
    };
    r48 = dyn anyDuplicated1(p9);
    check L74() else D24();
  D21():
    deopt 77 [anames5, anames9];
  D24():
    deopt 86 [r48];
  L71():
    anames10 = force? anames9;
    checkMissing(anames10);
    nzchar1 = ldf nzchar in base;
    r45 = dyn nzchar1(anames10);
    check L72() else D22();
  L74():
    c17 = `as.logical`(r48);
    if c17 then L75() else L17();
  D22():
    deopt 80 [anames5, r45];
  L17():
    goto L19();
  L19():
    value15 = ld value;
    check L85() else D30();
  L72():
    goto L16(anames5, r45);
  L75():
    slots2 = ld slots;
    check L76() else D25();
  D25():
    deopt 87 [slots2];
  D30():
    deopt 103 [value15];
  L76():
    slots3 = force? slots2;
    checkMissing(slots3);
    c18 = `is.object`(slots3);
    if c18 then L77() else L78(slots3);
  L85():
    value16 = force? value15;
    checkMissing(value16);
    popenv;
    return value16;
  L18(dx9):
    st dslots = dx9;
    stop2 = ldf stop;
    check L82() else D28();
  L77():
    dr8 = tryDispatchBuiltin.1("[", slots3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L79() else L78(dr8);
  L78(slots5):
    duplicated1 = ldf duplicated;
    check L80() else D26();
  D26():
    deopt 90 [slots5];
  D28():
    deopt 96 [];
  L79():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx8);
  L80():
    p10 = prom<V +>{
      slots6 = ld slots;
      slots7 = force? slots6;
      checkMissing(slots7);
      return slots7;
    };
    r50 = dyn duplicated1(p10);
    check L81() else D27();
  L82():
    p16 = prom<V +>{
      sprintf = ldf sprintf;
      p12 = prom<V +>{
        ngettext = ldf ngettext;
        p11 = prom<V +>{
          sym7 = ldf length;
          base7 = ldf length in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r53):
          return r53;
        L1():
          dslots = ld dslots;
          dslots1 = force? dslots;
          checkMissing(dslots1);
          length1 = ldf length in base;
          r54 = dyn length1(dslots1);
          goto L0(r54);
        L2():
          r52 = dyn base7(<sym dslots>);
          goto L0(r52);
        };
        r56 = dyn ngettext(p11, "duplicated slot name: %s", "duplicated slot names: %s");
        return r56;
      };
      p15 = prom<V +>{
        paste1 = ldf paste;
        p14 = prom<V +>{
          sQuote = ldf sQuote;
          p13 = prom<V +>{
            dslots2 = ld dslots;
            dslots3 = force? dslots2;
            checkMissing(dslots3);
            return dslots3;
          };
          r59 = dyn sQuote(p13);
          return r59;
        };
        r61 = dyn paste1[, collapse](p14, "");
        return r61;
      };
      r63 = dyn sprintf(p12, p15);
      return r63;
    };
    r65 = dyn stop2[, domain](p16, NA_LGL);
    check L83() else D29();
  D27():
    deopt 92 [slots5, r50];
  D29():
    deopt 100 [r65];
  L81():
    __4 = ldf `[` in base;
    r51 = dyn __4(slots5, r50);
    goto L18(r51);
  L83():
    goto L19();
  }
}