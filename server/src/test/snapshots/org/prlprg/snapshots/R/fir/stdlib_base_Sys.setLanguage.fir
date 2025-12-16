fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1448902958;
    st `Sys.setLanguage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1448902958(lang, unset) {
  (reg lang:*, reg unset:*) -+> V { var lang:*, var unset:*, reg unset_isMissing:L, reg unset_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lang1:*, reg lang2:V, reg c:L, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg lang3:*, reg lang4:V, reg length:cls, reg r5:V, reg r6:V, reg p1:p(V +), reg lang5:*, reg lang6:V, reg r8:V, reg c1:L, reg c2:V, reg grepl:cls, reg lang7:*, reg lang8:V, reg p2:p(V +), reg r10:V, reg c4:L, reg c5:V, reg p3:p(V +), reg r12:V, reg Sys_getenv:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg curLang:*, reg curLang1:V, reg is_na:cls, reg r16:V, reg c7:L, reg c8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c12:L, reg r18:V, reg curLang2:*, reg curLang3:V, reg nzchar:cls, reg r19:V, reg r20:V, reg c13:L, reg c14:V, reg c16:L, reg unset1:*, reg unset2:V, reg Sys_setenv:cls, reg lang9:*, reg lang10:V, reg p4:p(V +), reg r22:V, reg ok:*, reg ok1:V, reg r23:V, reg c17:L, reg warning:cls, reg gettextf:cls, reg lang11:*, reg lang12:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg capabilities:cls, reg r29:V, reg c18:L, reg c20:V, reg isTRUE:cls, reg bindtextdomain:cls, reg r30:V, reg p7:p(V +), reg r32:V, reg c21:L, reg c22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg structure:cls, reg curLang4:*, reg curLang5:V, reg p8:p(V +), reg ok2:*, reg ok3:V, reg c24:L, reg c26:V, reg ok_:*, reg ok_1:V, reg c27:L, reg c28:V, reg p9:p(V +), reg r37:V, reg invisible:cls, reg r38:V |
    mkenv;
    st lang = lang;
    unset_isMissing = missing.0(unset);
    if unset_isMissing then L0("en") else L0(unset);
  L0(unset_orDefault):
    st unset = unset_orDefault;
    stopifnot = ldf stopifnot;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      lang1 = ld lang;
      lang2 = force? lang1;
      checkMissing(lang2);
      c = `is.character`(lang2);
      goto L0(c);
    L2():
      r = dyn base(<sym lang>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      r6 = `==`(r4, 1);
      return r6;
    L1():
      lang3 = ld lang;
      lang4 = force? lang3;
      checkMissing(lang4);
      length = ldf length in base;
      r5 = dyn length(lang4);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym lang>);
      goto L0(r3);
    };
    p3 = prom<V +>{
      lang5 = ld lang;
      lang6 = force? lang5;
      checkMissing(lang6);
      r8 = `==`(lang6, "C");
      c1 = `as.logical`(r8);
      if c1 then L0(c1) else L1();
    L0(c2):
      return c2;
    L1():
      grepl = ldf grepl;
      p2 = prom<V +>{
        lang7 = ld lang;
        lang8 = force? lang7;
        checkMissing(lang8);
        return lang8;
      };
      r10 = dyn grepl("^[a-z][a-z]", p2);
      c4 = `as.logical`(r10);
      c5 = `||`(c1, c4);
      goto L0(c5);
    };
    r12 = dyn stopifnot(p, p1, p3);
    check L11() else D1();
  D1():
    deopt 5 [r12];
  L11():
    Sys_getenv = ldf `Sys.getenv`;
    check L12() else D2();
  D2():
    deopt 7 [];
  L12():
    r13 = dyn Sys_getenv[, unset]("LANGUAGE", NA_LGL);
    check L13() else D3();
  D3():
    deopt 11 [r13];
  L13():
    st curLang = r13;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L1(r15):
    c7 = `as.logical`(r15);
    if c7 then L2(c7) else L18();
  L14():
    curLang = ld curLang;
    check L16() else D4();
  L15():
    r14 = dyn base2(<sym curLang>);
    goto L1(r14);
  D4():
    deopt 15 [curLang];
  L2(c8):
    c16 = `as.logical`(c8);
    if c16 then L24() else L4();
  L16():
    curLang1 = force? curLang;
    checkMissing(curLang1);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(curLang1);
    check L17() else D5();
  L18():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  D5():
    deopt 18 [r16];
  L3(c12, r18):
    r20 = `!`(r18);
    c13 = `as.logical`(r20);
    c14 = `||`(c12, c13);
    goto L2(c14);
  L4():
    goto L5();
  L5():
    Sys_setenv = ldf `Sys.setenv`;
    check L27() else D9();
  L17():
    goto L1(r16);
  L19():
    curLang2 = ld curLang;
    check L21() else D6();
  L20():
    r17 = dyn base3(<sym curLang>);
    goto L3(c7, r17);
  L24():
    unset1 = ld unset;
    check L25() else D8();
  D6():
    deopt 21 [c7, curLang2];
  D8():
    deopt 27 [unset1];
  D9():
    deopt 33 [];
  L21():
    curLang3 = force? curLang2;
    checkMissing(curLang3);
    nzchar = ldf nzchar in base;
    r19 = dyn nzchar(curLang3);
    check L22() else D7();
  L25():
    unset2 = force? unset1;
    checkMissing(unset2);
    st curLang = unset2;
    goto L5();
  L27():
    p4 = prom<V +>{
      lang9 = ld lang;
      lang10 = force? lang9;
      checkMissing(lang10);
      return lang10;
    };
    r22 = dyn Sys_setenv[LANGUAGE](p4);
    check L28() else D10();
  D7():
    deopt 24 [c7, r19];
  D10():
    deopt 36 [r22];
  L22():
    goto L3(c7, r19);
  L28():
    st ok = r22;
    ok = ld ok;
    check L29() else D11();
  D11():
    deopt 38 [ok];
  L29():
    ok1 = force? ok;
    checkMissing(ok1);
    r23 = `!`(ok1);
    c17 = `as.logical`(r23);
    if c17 then L30() else L6();
  L6():
    goto L7();
  L7():
    capabilities = ldf capabilities;
    check L34() else D14();
  L30():
    warning = ldf warning;
    check L31() else D12();
  D12():
    deopt 42 [];
  D14():
    deopt 50 [];
  L31():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        lang11 = ld lang;
        lang12 = force? lang11;
        checkMissing(lang12);
        return lang12;
      };
      r25 = dyn gettextf("Sys.setenv(LANGUAGE=\"%s\") may have failed", p5);
      return r25;
    };
    r27 = dyn warning[, domain](p6, NA_LGL);
    check L32() else D13();
  L34():
    r29 = dyn capabilities("NLS");
    check L35() else D15();
  D13():
    deopt 46 [r27];
  D15():
    deopt 52 [r29];
  L32():
    goto L7();
  L35():
    c18 = `as.logical`(r29);
    if c18 then L36() else L8(c18);
  L8(c20):
    st `ok.` = c20;
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L36():
    isTRUE = ldf isTRUE;
    check L37() else D16();
  D16():
    deopt 54 [c18];
  L9(r34):
    popenv;
    return r34;
  L37():
    p7 = prom<V +>{
      bindtextdomain = ldf bindtextdomain;
      r30 = dyn bindtextdomain(NULL);
      return r30;
    };
    r32 = dyn isTRUE(p7);
    check L38() else D17();
  L40():
    structure = ldf structure;
    check L42() else D18();
  L41():
    r33 = dyn base4(<lang structure(curLang, ok=`&&`(ok, ok.))>);
    goto L9(r33);
  D17():
    deopt 56 [c18, r32];
  D18():
    deopt 62 [];
  L38():
    c21 = `as.logical`(r32);
    c22 = `&&`(c18, c21);
    goto L8(c22);
  L42():
    p8 = prom<V +>{
      curLang4 = ld curLang;
      curLang5 = force? curLang4;
      checkMissing(curLang5);
      return curLang5;
    };
    p9 = prom<V +>{
      ok2 = ld ok;
      ok3 = force? ok2;
      checkMissing(ok3);
      c24 = `as.logical`(ok3);
      if c24 then L1() else L0(c24);
    L0(c26):
      return c26;
    L1():
      ok_ = ld `ok.`;
      ok_1 = force? ok_;
      checkMissing(ok_1);
      c27 = `as.logical`(ok_1);
      c28 = `&&`(c24, c27);
      goto L0(c28);
    };
    r37 = dyn structure[, ok](p8, p9);
    check L43() else D19();
  D19():
    deopt 66 [r37];
  L43():
    invisible = ldf invisible in base;
    r38 = dyn invisible(r37);
    check L44() else D20();
  D20():
    deopt 68 [r38];
  L44():
    goto L9(r38);
  }
}