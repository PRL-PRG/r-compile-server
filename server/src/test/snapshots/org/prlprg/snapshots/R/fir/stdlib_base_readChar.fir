fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg file:cls, reg zzfil:*, reg zzfil1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg writeChar:cls, reg x:*, reg x1:V, reg p1:p(V +), reg zz:*, reg zz1:V, reg p2:p(V +), reg nc:*, reg nc1:V, reg p3:p(V +), reg r13:V, reg writeChar1:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg zz2:*, reg zz3:V, reg p5:p(V +), reg r16:V, reg close:cls, reg zz4:*, reg zz5:V, reg p6:p(V +), reg r18:V, reg file1:cls, reg zzfil2:*, reg zzfil3:V, reg p7:p(V +), reg r20:V, reg readChar:cls, reg zz6:*, reg zz7:V, reg p8:p(V +), reg nc2:*, reg nc3:V, reg p9:p(V +), reg r23:V, reg readChar1:cls, reg zz8:*, reg zz9:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg x4:*, reg x5:V, reg nchar:cls, reg r27:V, reg r28:V, reg p11:p(V +), reg r30:V, reg close1:cls, reg zz10:*, reg zz11:V, reg p12:p(V +), reg r32:V, reg unlink:cls, reg zzfil4:*, reg zzfil5:V, reg p13:p(V +), reg r34:V |
    mkenv;
    r = clos inner1155685215;
    st readChar = r;
    tempfile = ldf tempfile;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn tempfile("testchar");
    check L3() else D1();
  D1():
    deopt 6 [r1];
  L3():
    st zzfil = r1;
    file = ldf file;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      zzfil = ld zzfil;
      zzfil1 = force? zzfil;
      checkMissing(zzfil1);
      return zzfil1;
    };
    r3 = dyn file(p, "wb");
    check L5() else D3();
  D3():
    deopt 12 [r3];
  L5():
    st zz = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    st x = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L6():
    c = ldf c in base;
    r6 = dyn c("a", "this will be truncated", "abc");
    check L8() else D4();
  L7():
    r4 = dyn base("a", "this will be truncated", "abc");
    goto L0(r4);
  D4():
    deopt 20 [r6];
  L1(r8):
    st nc = r8;
    writeChar = ldf writeChar;
    check L12() else D6();
  L8():
    goto L0(r6);
  L9():
    c1 = ldf c in base;
    r9 = dyn c1(3.0, 10.0, 3.0);
    check L11() else D5();
  L10():
    r7 = dyn base1(3.0, 10.0, 3.0);
    goto L1(r7);
  D5():
    deopt 28 [r9];
  D6():
    deopt 31 [];
  L11():
    goto L1(r9);
  L12():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p2 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    p3 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      return nc1;
    };
    r13 = dyn writeChar[, , , eos](p1, p2, p3, NULL);
    check L13() else D7();
  D7():
    deopt 37 [r13];
  L13():
    writeChar1 = ldf writeChar;
    check L14() else D8();
  D8():
    deopt 39 [];
  L14():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p5 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r16 = dyn writeChar1[, , eos](p4, p5, "\r\n");
    check L15() else D9();
  D9():
    deopt 44 [r16];
  L15():
    close = ldf close;
    check L16() else D10();
  D10():
    deopt 46 [];
  L16():
    p6 = prom<V +>{
      zz4 = ld zz;
      zz5 = force? zz4;
      checkMissing(zz5);
      return zz5;
    };
    r18 = dyn close(p6);
    check L17() else D11();
  D11():
    deopt 48 [r18];
  L17():
    file1 = ldf file;
    check L18() else D12();
  D12():
    deopt 50 [];
  L18():
    p7 = prom<V +>{
      zzfil2 = ld zzfil;
      zzfil3 = force? zzfil2;
      checkMissing(zzfil3);
      return zzfil3;
    };
    r20 = dyn file1(p7, "rb");
    check L19() else D13();
  D13():
    deopt 53 [r20];
  L19():
    st zz = r20;
    readChar = ldf readChar;
    check L20() else D14();
  D14():
    deopt 56 [];
  L20():
    p8 = prom<V +>{
      zz6 = ld zz;
      zz7 = force? zz6;
      checkMissing(zz7);
      return zz7;
    };
    p9 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      return nc3;
    };
    r23 = dyn readChar(p8, p9);
    check L21() else D15();
  D15():
    deopt 59 [r23];
  L21():
    readChar1 = ldf readChar;
    check L22() else D16();
  D16():
    deopt 61 [];
  L22():
    p10 = prom<V +>{
      zz8 = ld zz;
      zz9 = force? zz8;
      checkMissing(zz9);
      return zz9;
    };
    p11 = prom<V +>{
      sym2 = ldf nchar;
      base2 = ldf nchar in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r26):
      r28 = `+`(r26, 3.0);
      return r28;
    L1():
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      nchar = ldf nchar in base;
      r27 = dyn nchar(x5, "chars", FALSE, NA_LGL);
      goto L0(r27);
    L2():
      r25 = dyn base2(<sym x>);
      goto L0(r25);
    };
    r30 = dyn readChar1(p10, p11);
    check L23() else D17();
  D17():
    deopt 64 [r30];
  L23():
    close1 = ldf close;
    check L24() else D18();
  D18():
    deopt 66 [];
  L24():
    p12 = prom<V +>{
      zz10 = ld zz;
      zz11 = force? zz10;
      checkMissing(zz11);
      return zz11;
    };
    r32 = dyn close1(p12);
    check L25() else D19();
  D19():
    deopt 68 [r32];
  L25():
    unlink = ldf unlink;
    check L26() else D20();
  D20():
    deopt 70 [];
  L26():
    p13 = prom<V +>{
      zzfil4 = ld zzfil;
      zzfil5 = force? zzfil4;
      checkMissing(zzfil5);
      return zzfil5;
    };
    r34 = dyn unlink(p13);
    check L27() else D21();
  D21():
    deopt 72 [r34];
  L27():
    popenv;
    return r34;
  }
}
fun inner1155685215(con, nchars, useBytes) {
  (reg con:*, reg nchars:*, reg useBytes:*) -+> V { var con:*, var nchars:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg c:L, reg c1:L, reg file:cls, reg con3:*, reg con4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg con5:*, reg con6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg nchars1:*, reg nchars2:V, reg as_integer:cls, reg r12:V, reg useBytes1:*, reg useBytes2:V, reg readChar:cls, reg r13:V |
    mkenv;
    st con = con;
    st nchars = nchars;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L0(FALSE) else L0(useBytes);
  L0(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L2();
  L7():
    con1 = ld con;
    check L9() else D0();
  L8():
    r = dyn base(<sym con>);
    goto L1(r);
  D0():
    deopt 1 [con1];
  L2():
    goto L4();
  L4():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L9():
    con2 = force? con1;
    checkMissing(con2);
    c = `is.character`(con2);
    goto L1(c);
  L10():
    file = ldf file;
    check L11() else D1();
  D1():
    deopt 5 [];
  L5(r9):
    popenv;
    return r9;
  L11():
    p = prom<V +>{
      con3 = ld con;
      con4 = force? con3;
      checkMissing(con4);
      return con4;
    };
    r3 = dyn file(p, "rb");
    check L12() else D2();
  L16():
    con5 = ld con;
    check L18() else D3();
  L17():
    r8 = dyn base2(<lang readChar(con, as.integer(nchars), useBytes)>);
    goto L5(r8);
  D2():
    deopt 8 [r3];
  D3():
    deopt 17 [con5];
  L12():
    st con = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L18():
    con6 = force? con5;
    checkMissing(con6);
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L3(r5):
    goto L4();
  L6(r11):
    useBytes1 = ld useBytes;
    check L23() else D6();
  L13():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(con)>);
    goto L3(r6);
  L14():
    r4 = dyn base1(<lang close(con)>);
    goto L3(r4);
  L19():
    nchars1 = ld nchars;
    check L21() else D4();
  L20():
    r10 = dyn base3(<sym nchars>);
    goto L6(r10);
  D4():
    deopt 21 [nchars1];
  D6():
    deopt 25 [useBytes1];
  L21():
    nchars2 = force? nchars1;
    checkMissing(nchars2);
    as_integer = ldf `as.integer` in base;
    r12 = dyn as_integer(nchars2);
    check L22() else D5();
  L23():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    readChar = ldf readChar in base;
    r13 = dyn readChar(con6, r11, useBytes2);
    check L24() else D7();
  D5():
    deopt 24 [r12];
  D7():
    deopt 28 [r13];
  L22():
    goto L6(r12);
  L24():
    goto L5(r13);
  }
}