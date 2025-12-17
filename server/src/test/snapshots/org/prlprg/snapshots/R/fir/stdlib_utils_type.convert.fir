fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg rivers:*, reg rivers1:V, reg class:cls, reg r3:V, reg type_convert:cls, reg rivers2:*, reg rivers3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg x:*, reg x1:V, reg class1:cls, reg r8:V, reg type_convert1:cls, reg mtcars:*, reg mtcars1:V, reg p1:p(V +), reg r10:V, reg str:cls, reg mtcars2:*, reg mtcars3:V, reg p2:p(V +), reg r12:V, reg str1:cls, reg auto:*, reg auto1:V, reg p3:p(V +), reg r14:V, reg type_convert2:cls, reg WorldPhones:*, reg WorldPhones1:V, reg p4:p(V +), reg r16:V, reg storage_mode:cls, reg WorldPhones2:*, reg WorldPhones3:V, reg p5:p(V +), reg r18:V, reg storage_mode1:cls, reg phones:*, reg phones1:V, reg p6:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c:cls, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c1:cls, reg r26:V, reg factor:cls, reg chr:*, reg chr1:V, reg p7:p(V +), reg r28:V, reg type_convert3:cls, reg chr2:*, reg chr3:V, reg p8:p(V +), reg r30:V, reg type_convert4:cls, reg fac:*, reg fac1:V, reg p9:p(V +), reg r32:V, reg type_convert5:cls, reg chr4:*, reg chr5:V, reg p10:p(V +), reg r34:V, reg type_convert6:cls, reg fac2:*, reg fac3:V, reg p11:p(V +), reg r36:V, reg type_convert7:cls, reg ch2:*, reg ch3:V, reg p12:p(V +), reg r38:V, reg type_convert8:cls, reg ch4:*, reg ch5:V, reg p13:p(V +), reg r40:V |
    mkenv;
    r = clos inner2044426018;
    st `type.convert` = r;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    type_convert = ldf `type.convert`;
    check L8() else D2();
  L4():
    rivers = ld rivers;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym rivers>);
    goto L0();
  D0():
    deopt 5 [rivers];
  D2():
    deopt 10 [];
  L6():
    rivers1 = force? rivers;
    checkMissing(rivers1);
    class = ldf class in base;
    r3 = dyn class(rivers1);
    check L7() else D1();
  L8():
    p = prom<V +>{
      rivers2 = ld rivers;
      rivers3 = force? rivers2;
      checkMissing(rivers3);
      return rivers3;
    };
    r5 = dyn type_convert[, `as.is`](p, TRUE);
    check L9() else D3();
  D1():
    deopt 8 [r3];
  D3():
    deopt 14 [r5];
  L7():
    goto L0();
  L9():
    st x = r5;
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1():
    type_convert1 = ldf `type.convert`;
    check L14() else D6();
  L10():
    x = ld x;
    check L12() else D4();
  L11():
    r6 = dyn base1(<sym x>);
    goto L1();
  D4():
    deopt 18 [x];
  D6():
    deopt 23 [];
  L12():
    x1 = force? x;
    checkMissing(x1);
    class1 = ldf class in base;
    r8 = dyn class1(x1);
    check L13() else D5();
  L14():
    p1 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      return mtcars1;
    };
    r10 = dyn type_convert1[, `as.is`](p1, TRUE);
    check L15() else D7();
  D5():
    deopt 21 [r8];
  D7():
    deopt 27 [r10];
  L13():
    goto L1();
  L15():
    st auto = r10;
    str = ldf str;
    check L16() else D8();
  D8():
    deopt 30 [];
  L16():
    p2 = prom<V +>{
      mtcars2 = ld mtcars;
      mtcars3 = force? mtcars2;
      checkMissing(mtcars3);
      return mtcars3;
    };
    r12 = dyn str(p2);
    check L17() else D9();
  D9():
    deopt 32 [r12];
  L17():
    str1 = ldf str;
    check L18() else D10();
  D10():
    deopt 34 [];
  L18():
    p3 = prom<V +>{
      auto = ld auto;
      auto1 = force? auto;
      checkMissing(auto1);
      return auto1;
    };
    r14 = dyn str1(p3);
    check L19() else D11();
  D11():
    deopt 36 [r14];
  L19():
    type_convert2 = ldf `type.convert`;
    check L20() else D12();
  D12():
    deopt 38 [];
  L20():
    p4 = prom<V +>{
      WorldPhones = ld WorldPhones;
      WorldPhones1 = force? WorldPhones;
      checkMissing(WorldPhones1);
      return WorldPhones1;
    };
    r16 = dyn type_convert2[, `as.is`](p4, TRUE);
    check L21() else D13();
  D13():
    deopt 42 [r16];
  L21():
    st phones = r16;
    storage_mode = ldf `storage.mode`;
    check L22() else D14();
  D14():
    deopt 45 [];
  L22():
    p5 = prom<V +>{
      WorldPhones2 = ld WorldPhones;
      WorldPhones3 = force? WorldPhones2;
      checkMissing(WorldPhones3);
      return WorldPhones3;
    };
    r18 = dyn storage_mode(p5);
    check L23() else D15();
  D15():
    deopt 47 [r18];
  L23():
    storage_mode1 = ldf `storage.mode`;
    check L24() else D16();
  D16():
    deopt 49 [];
  L24():
    p6 = prom<V +>{
      phones = ld phones;
      phones1 = force? phones;
      checkMissing(phones1);
      return phones1;
    };
    r20 = dyn storage_mode1(p6);
    check L25() else D17();
  D17():
    deopt 51 [r20];
  L25():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L2(r22):
    st chr = r22;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L26():
    c = ldf c in base;
    r23 = dyn c("A", "B", "B", "A");
    check L28() else D18();
  L27():
    r21 = dyn base2("A", "B", "B", "A");
    goto L2(r21);
  D18():
    deopt 59 [r23];
  L3(r25):
    st ch2 = r25;
    factor = ldf factor;
    check L32() else D20();
  L28():
    goto L2(r23);
  L29():
    c1 = ldf c in base;
    r26 = dyn c1("F", "F", "NA", "F");
    check L31() else D19();
  L30():
    r24 = dyn base3("F", "F", "NA", "F");
    goto L3(r24);
  D19():
    deopt 68 [r26];
  D20():
    deopt 71 [];
  L31():
    goto L3(r26);
  L32():
    p7 = prom<V +>{
      chr = ld chr;
      chr1 = force? chr;
      checkMissing(chr1);
      return chr1;
    };
    r28 = dyn factor(p7);
    check L33() else D21();
  D21():
    deopt 73 [r28];
  L33():
    st fac = r28;
    type_convert3 = ldf `type.convert`;
    check L34() else D22();
  D22():
    deopt 76 [];
  L34():
    p8 = prom<V +>{
      chr2 = ld chr;
      chr3 = force? chr2;
      checkMissing(chr3);
      return chr3;
    };
    r30 = dyn type_convert3[, `as.is`](p8, FALSE);
    check L35() else D23();
  D23():
    deopt 80 [r30];
  L35():
    type_convert4 = ldf `type.convert`;
    check L36() else D24();
  D24():
    deopt 82 [];
  L36():
    p9 = prom<V +>{
      fac = ld fac;
      fac1 = force? fac;
      checkMissing(fac1);
      return fac1;
    };
    r32 = dyn type_convert4[, `as.is`](p9, FALSE);
    check L37() else D25();
  D25():
    deopt 86 [r32];
  L37():
    type_convert5 = ldf `type.convert`;
    check L38() else D26();
  D26():
    deopt 88 [];
  L38():
    p10 = prom<V +>{
      chr4 = ld chr;
      chr5 = force? chr4;
      checkMissing(chr5);
      return chr5;
    };
    r34 = dyn type_convert5[, `as.is`](p10, TRUE);
    check L39() else D27();
  D27():
    deopt 92 [r34];
  L39():
    type_convert6 = ldf `type.convert`;
    check L40() else D28();
  D28():
    deopt 94 [];
  L40():
    p11 = prom<V +>{
      fac2 = ld fac;
      fac3 = force? fac2;
      checkMissing(fac3);
      return fac3;
    };
    r36 = dyn type_convert6[, `as.is`](p11, TRUE);
    check L41() else D29();
  D29():
    deopt 98 [r36];
  L41():
    type_convert7 = ldf `type.convert`;
    check L42() else D30();
  D30():
    deopt 100 [];
  L42():
    p12 = prom<V +>{
      ch2 = ld ch2;
      ch3 = force? ch2;
      checkMissing(ch3);
      return ch3;
    };
    r38 = dyn type_convert7[, `as.is`](p12, TRUE);
    check L43() else D31();
  D31():
    deopt 104 [r38];
  L43():
    type_convert8 = ldf `type.convert`;
    check L44() else D32();
  D32():
    deopt 106 [];
  L44():
    p13 = prom<V +>{
      ch4 = ld ch2;
      ch5 = force? ch4;
      checkMissing(ch5);
      return ch5;
    };
    r40 = dyn type_convert8[, `as.is`, tryLogical](p13, TRUE, FALSE);
    check L45() else D33();
  D33():
    deopt 112 [r40];
  L45():
    popenv;
    return r40;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("type.convert");
    goto L0(r2);
  L2():
    r = dyn base("type.convert");
    goto L0(r);
  }
}