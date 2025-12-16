fun main() {
  () -+> V { reg r:cls, reg print:cls, reg x:*, reg x1:V, reg p:p(V +), reg r2:V, reg cat:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r4:V, reg cat1:cls, reg encodeString:cls, reg x4:*, reg x5:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg factor:cls, reg x6:*, reg x7:V, reg p4:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg encodeString1:cls, reg x8:*, reg x9:V, reg p5:p(V +), reg r15:V, reg encodeString2:cls, reg x10:*, reg x11:V, reg p6:p(V +), reg r17:V, reg encodeString3:cls, reg x12:*, reg x13:V, reg p7:p(V +), reg r19:V, reg encodeString4:cls, reg x14:*, reg x15:V, reg p8:p(V +), reg r21:V, reg encodeString5:cls, reg x16:*, reg x17:V, reg p9:p(V +), reg r23:V, reg encodeString6:cls, reg x18:*, reg x19:V, reg p10:p(V +), reg r25:V |
    mkenv;
    r = clos `inner-36764176`;
    st encodeString = r;
    st x = "ab\u0008c\ndef";
    print = ldf print;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r2 = dyn print(p);
    check L2() else D1();
  D1():
    deopt 9 [r2];
  L2():
    cat = ldf cat;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r4 = dyn cat(p1);
    check L4() else D3();
  D3():
    deopt 13 [r4];
  L4():
    cat1 = ldf cat;
    check L5() else D4();
  D4():
    deopt 15 [];
  L5():
    p3 = prom<V +>{
      encodeString = ldf encodeString;
      p2 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r6 = dyn encodeString(p2);
      return r6;
    };
    r8 = dyn cat1[, , sep](p3, "\n", "");
    check L6() else D5();
  D5():
    deopt 20 [r8];
  L6():
    factor = ldf factor;
    check L7() else D6();
  D6():
    deopt 22 [];
  L7():
    p4 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r10 = dyn factor(p4);
    check L8() else D7();
  D7():
    deopt 24 [r10];
  L8():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r12):
    st x = r12;
    encodeString1 = ldf encodeString;
    check L12() else D9();
  L9():
    c = ldf c in base;
    r13 = dyn c("a", "ab", "abcde");
    check L11() else D8();
  L10():
    r11 = dyn base("a", "ab", "abcde");
    goto L0(r11);
  D8():
    deopt 31 [r13];
  D9():
    deopt 34 [];
  L11():
    goto L0(r13);
  L12():
    p5 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r15 = dyn encodeString1(p5);
    check L13() else D10();
  D10():
    deopt 36 [r15];
  L13():
    encodeString2 = ldf encodeString;
    check L14() else D11();
  D11():
    deopt 38 [];
  L14():
    p6 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r17 = dyn encodeString2(p6, 2.0);
    check L15() else D12();
  D12():
    deopt 41 [r17];
  L15():
    encodeString3 = ldf encodeString;
    check L16() else D13();
  D13():
    deopt 43 [];
  L16():
    p7 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r19 = dyn encodeString3[, width](p7, NA_LGL);
    check L17() else D14();
  D14():
    deopt 47 [r19];
  L17():
    encodeString4 = ldf encodeString;
    check L18() else D15();
  D15():
    deopt 49 [];
  L18():
    p8 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r21 = dyn encodeString4[, width, justify](p8, NA_LGL, "c");
    check L19() else D16();
  D16():
    deopt 55 [r21];
  L19():
    encodeString5 = ldf encodeString;
    check L20() else D17();
  D17():
    deopt 57 [];
  L20():
    p9 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r23 = dyn encodeString5[, width, justify](p9, NA_LGL, "r");
    check L21() else D18();
  D18():
    deopt 63 [r23];
  L21():
    encodeString6 = ldf encodeString;
    check L22() else D19();
  D19():
    deopt 65 [];
  L22():
    p10 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r25 = dyn encodeString6[, width, quote, justify](p10, NA_LGL, "'", "r");
    check L23() else D20();
  D20():
    deopt 73 [r25];
  L23():
    popenv;
    return r25;
  }
}
fun `inner-36764176`(x, width, quote, `na.encode`, justify) {
  (reg x:*, reg width:*, reg quote:*, reg na_encode:*, reg justify:*) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `na.encode`:*, reg na_encode_isMissing:L, reg na_encode_orDefault:*, var justify:*, reg justify_isMissing:L, reg justify_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg attributes:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg as_character:cls, reg r9:V, reg at:*, reg at1:V, reg l:*, reg attributes__:cls, reg r10:V, reg l1:*, reg oldClass__:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg match_arg:cls, reg justify1:*, reg justify2:V, reg p1:p(V +), reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg match:cls, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x5:*, reg x6:V, reg width1:*, reg width2:V, reg quote1:*, reg quote2:V, reg justify3:*, reg justify4:V, reg na_encode1:*, reg na_encode2:V, reg encodeString:cls, reg r23:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(0) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1("") else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    na_encode_isMissing = missing.0(na_encode);
    if na_encode_isMissing then L2(TRUE) else L2(na_encode);
  L2(na_encode_orDefault):
    st `na.encode` = na_encode_orDefault;
    justify_isMissing = missing.0(justify);
    if justify_isMissing then L3() else L4(justify);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("left", "right", "centre", "none");
      goto L0(r2);
    L2():
      r = dyn base("left", "right", "centre", "none");
      goto L0(r);
    };
    goto L4(p);
  L4(justify_orDefault):
    st justify = justify_orDefault;
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5(r5):
    st at = r5;
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r4 = dyn base1(<sym x>);
    goto L5(r4);
  D0():
    deopt 2 [x1];
  L6(r8):
    st x = r8;
    at = ld at;
    check L18() else D4();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    attributes = ldf attributes in base;
    r6 = dyn attributes(x2);
    check L13() else D1();
  L14():
    x3 = ld x;
    check L16() else D2();
  L15():
    r7 = dyn base2(<sym x>);
    goto L6(r7);
  D1():
    deopt 5 [r6];
  D2():
    deopt 9 [x3];
  D4():
    deopt 14 [at];
  L13():
    goto L5(r6);
  L16():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(x4);
    check L17() else D3();
  L18():
    at1 = force? at;
    checkMissing(at1);
    l = ld x;
    attributes__ = ldf `attributes<-`;
    check L19() else D5();
  D3():
    deopt 12 [r9];
  D5():
    deopt 17 [at1, l, at1];
  L17():
    goto L6(r9);
  L19():
    r10 = dyn attributes__(l, NULL, at1);
    check L20() else D6();
  D6():
    deopt 19 [at1, r10];
  L20():
    st x = r10;
    l1 = ld x;
    oldClass__ = ldf `oldClass<-`;
    check L21() else D7();
  D7():
    deopt 24 [NULL, l1, NULL];
  L21():
    r11 = dyn oldClass__(l1, NULL, NULL);
    check L22() else D8();
  D8():
    deopt 26 [NULL, r11];
  L22():
    st x = r11;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L7(r13):
    r20 = `-`(r13, 1);
    st justify = r20;
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L31() else L32();
  L23():
    match_arg = ldf `match.arg`;
    check L25() else D9();
  L24():
    r12 = dyn base3(<lang match.arg(justify)>, <lang c("left", "right", "centre", "none")>);
    goto L7(r12);
  D9():
    deopt 31 [];
  L9(r22):
    popenv;
    return r22;
  L25():
    p1 = prom<V +>{
      justify1 = ld justify;
      justify2 = force? justify1;
      checkMissing(justify2);
      return justify2;
    };
    r15 = dyn match_arg(p1);
    check L26() else D10();
  L31():
    x5 = ld x;
    check L33() else D13();
  L32():
    r21 = dyn base5(<lang encodeString(x, width, quote, justify, na.encode)>);
    goto L9(r21);
  D10():
    deopt 33 [r15];
  D13():
    deopt 51 [x5];
  L26():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L33():
    x6 = force? x5;
    checkMissing(x6);
    width1 = ld width;
    check L34() else D14();
  D14():
    deopt 53 [width1];
  L8(r17):
    match = ldf match in base;
    r19 = dyn match(r15, r17, NA_INT, NULL);
    check L30() else D12();
  L27():
    c1 = ldf c in base;
    r18 = dyn c1("left", "right", "centre", "none");
    check L29() else D11();
  L28():
    r16 = dyn base4("left", "right", "centre", "none");
    goto L8(r16);
  L34():
    width2 = force? width1;
    checkMissing(width2);
    quote1 = ld quote;
    check L35() else D15();
  D11():
    deopt 41 [r18];
  D12():
    deopt 45 [r19];
  D15():
    deopt 55 [quote1];
  L29():
    goto L8(r18);
  L30():
    goto L7(r19);
  L35():
    quote2 = force? quote1;
    checkMissing(quote2);
    justify3 = ld justify;
    check L36() else D16();
  D16():
    deopt 57 [justify3];
  L36():
    justify4 = force? justify3;
    checkMissing(justify4);
    na_encode1 = ld `na.encode`;
    check L37() else D17();
  D17():
    deopt 59 [na_encode1];
  L37():
    na_encode2 = force? na_encode1;
    checkMissing(na_encode2);
    encodeString = ldf encodeString in base;
    r23 = dyn encodeString(x6, width2, quote2, justify4, na_encode2);
    check L38() else D18();
  D18():
    deopt 62 [r23];
  L38():
    goto L9(r23);
  }
}