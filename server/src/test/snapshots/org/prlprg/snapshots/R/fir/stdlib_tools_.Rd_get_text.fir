fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_text` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg c2:cls, reg r4:V, reg textConnection:cls, reg r7:V, reg options:cls, reg r8:V, reg Rd2txt_options:cls, reg r9:V, reg sink:cls, reg file:*, reg file1:V, reg p:p(V +), reg r11:V, reg tryCatch:cls, reg Rd2txt:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg sink1:cls, reg options1:cls, reg save:*, reg save1:V, reg p3:p(V +), reg Rd2txt_options1:cls, reg Rdsave:*, reg Rdsave1:V, reg p4:p(V +), reg close:cls, reg file2:*, reg file3:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg rval:*, reg rval1:V, reg c3:V, reg c4:L, reg character:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg rval2:*, reg rval3:V, reg enc2utf8:cls, reg r29:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L1();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    st rval = NULL;
    textConnection = ldf textConnection;
    check L17() else D3();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L10():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D3():
    deopt 17 [];
  L2(r3):
    popenv;
    return r3;
  L11():
    x3 = ld x;
    check L13() else D1();
  L12():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L17():
    r7 = dyn textConnection[, , local]("rval", "w", TRUE);
    check L18() else D4();
  D1():
    deopt 6 [x3];
  D4():
    deopt 22 [r7];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    c2 = ldf c in base;
    r4 = dyn c2(x4);
    check L14() else D2();
  L18():
    st file = r7;
    options = ldf options;
    check L19() else D5();
  D2():
    deopt 9 [r4];
  D5():
    deopt 25 [];
  L14():
    goto L2(r4);
  L19():
    r8 = dyn options[useFancyQuotes](FALSE);
    check L20() else D6();
  D6():
    deopt 28 [r8];
  L20():
    st save = r8;
    Rd2txt_options = ldf Rd2txt_options;
    check L21() else D7();
  D7():
    deopt 31 [];
  L21():
    r9 = dyn Rd2txt_options[underline_titles](FALSE);
    check L22() else D8();
  D8():
    deopt 34 [r9];
  L22():
    st Rdsave = r9;
    sink = ldf sink;
    check L23() else D9();
  D9():
    deopt 37 [];
  L23():
    p = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r11 = dyn sink(p);
    check L24() else D10();
  D10():
    deopt 39 [r11];
  L24():
    tryCatch = ldf tryCatch;
    check L25() else D11();
  D11():
    deopt 41 [];
  L25():
    p2 = prom<V +>{
      Rd2txt = ldf Rd2txt;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r13 = dyn Rd2txt[, fragment](p1, TRUE);
      return r13;
    };
    p6 = prom<V +>{
      sink1 = ldf sink;
      dyn sink1();
      options1 = ldf options;
      p3 = prom<V +>{
        save = ld save;
        save1 = force? save;
        checkMissing(save1);
        return save1;
      };
      dyn options1(p3);
      Rd2txt_options1 = ldf Rd2txt_options;
      p4 = prom<V +>{
        Rdsave = ld Rdsave;
        Rdsave1 = force? Rdsave;
        checkMissing(Rdsave1);
        return Rdsave1;
      };
      dyn Rd2txt_options1(p4);
      close = ldf close;
      p5 = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      r21 = dyn close(p5);
      return r21;
    };
    r23 = dyn tryCatch[, finally](p2, p6);
    check L26() else D12();
  D12():
    deopt 45 [r23];
  L26():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L4(r25):
    c4 = `as.logical`(r25);
    if c4 then L30() else L5();
  L27():
    rval = ld rval;
    check L29() else D13();
  L28():
    r24 = dyn base2(<sym rval>);
    goto L4(r24);
  D13():
    deopt 47 [rval];
  L5():
    sym3 = ldf enc2utf8;
    base3 = ldf enc2utf8 in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L29():
    rval1 = force? rval;
    checkMissing(rval1);
    c3 = `==`(rval1, NULL);
    goto L4(c3);
  L30():
    character = ldf character;
    check L31() else D14();
  D14():
    deopt 51 [];
  L6(r28):
    popenv;
    return r28;
  L31():
    r26 = dyn character();
    check L32() else D15();
  L34():
    rval2 = ld rval;
    check L36() else D16();
  L35():
    r27 = dyn base3(<sym rval>);
    goto L6(r27);
  D15():
    deopt 52 [r26];
  D16():
    deopt 57 [rval2];
  L32():
    st rval = r26;
    invisible.0();
    popenv;
    return r26;
  L36():
    rval3 = force? rval2;
    checkMissing(rval3);
    enc2utf8 = ldf enc2utf8 in base;
    r29 = dyn enc2utf8(rval3);
    check L37() else D17();
  D17():
    deopt 60 [r29];
  L37():
    goto L6(r29);
  }
}