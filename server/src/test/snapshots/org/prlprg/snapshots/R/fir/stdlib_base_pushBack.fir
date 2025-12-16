fun main() {
  () -+> V { reg r:cls, reg textConnection:cls, reg LETTERS:*, reg LETTERS1:V, reg p:p(V +), reg r2:V, reg readLines:cls, reg zz:*, reg zz1:V, reg p1:p(V +), reg r4:V, reg pushBack:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p2:p(V +), reg zz2:*, reg zz3:V, reg p3:p(V +), reg r10:V, reg pushBackLength:cls, reg zz4:*, reg zz5:V, reg p4:p(V +), reg r12:V, reg readLines1:cls, reg zz6:*, reg zz7:V, reg p5:p(V +), reg r14:V, reg pushBackLength1:cls, reg zz8:*, reg zz9:V, reg p6:p(V +), reg r16:V, reg readLines2:cls, reg zz10:*, reg zz11:V, reg p7:p(V +), reg r18:V, reg readLines3:cls, reg zz12:*, reg zz13:V, reg p8:p(V +), reg r20:V, reg close:cls, reg zz14:*, reg zz15:V, reg p9:p(V +), reg r22:V |
    mkenv;
    r = clos `inner-1366976931`;
    st pushBack = r;
    textConnection = ldf textConnection;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      return LETTERS1;
    };
    r2 = dyn textConnection(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    st zz = r2;
    readLines = ldf readLines;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    r4 = dyn readLines(p1, 2.0);
    check L3() else D3();
  D3():
    deopt 12 [r4];
  L3():
    pushBack = ldf pushBack;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("aa", "bb");
      goto L0(r7);
    L2():
      r5 = dyn base("aa", "bb");
      goto L0(r5);
    };
    p3 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r10 = dyn pushBack(p2, p3);
    check L5() else D5();
  D5():
    deopt 17 [r10];
  L5():
    pushBackLength = ldf pushBackLength;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p4 = prom<V +>{
      zz4 = ld zz;
      zz5 = force? zz4;
      checkMissing(zz5);
      return zz5;
    };
    r12 = dyn pushBackLength(p4);
    check L7() else D7();
  D7():
    deopt 21 [r12];
  L7():
    readLines1 = ldf readLines;
    check L8() else D8();
  D8():
    deopt 23 [];
  L8():
    p5 = prom<V +>{
      zz6 = ld zz;
      zz7 = force? zz6;
      checkMissing(zz7);
      return zz7;
    };
    r14 = dyn readLines1(p5, 1.0);
    check L9() else D9();
  D9():
    deopt 26 [r14];
  L9():
    pushBackLength1 = ldf pushBackLength;
    check L10() else D10();
  D10():
    deopt 28 [];
  L10():
    p6 = prom<V +>{
      zz8 = ld zz;
      zz9 = force? zz8;
      checkMissing(zz9);
      return zz9;
    };
    r16 = dyn pushBackLength1(p6);
    check L11() else D11();
  D11():
    deopt 30 [r16];
  L11():
    readLines2 = ldf readLines;
    check L12() else D12();
  D12():
    deopt 32 [];
  L12():
    p7 = prom<V +>{
      zz10 = ld zz;
      zz11 = force? zz10;
      checkMissing(zz11);
      return zz11;
    };
    r18 = dyn readLines2(p7, 1.0);
    check L13() else D13();
  D13():
    deopt 35 [r18];
  L13():
    readLines3 = ldf readLines;
    check L14() else D14();
  D14():
    deopt 37 [];
  L14():
    p8 = prom<V +>{
      zz12 = ld zz;
      zz13 = force? zz12;
      checkMissing(zz13);
      return zz13;
    };
    r20 = dyn readLines3(p8, 1.0);
    check L15() else D15();
  D15():
    deopt 40 [r20];
  L15():
    close = ldf close;
    check L16() else D16();
  D16():
    deopt 42 [];
  L16():
    p9 = prom<V +>{
      zz14 = ld zz;
      zz15 = force? zz14;
      checkMissing(zz15);
      return zz15;
    };
    r22 = dyn close(p9);
    check L17() else D17();
  D17():
    deopt 44 [r22];
  L17():
    popenv;
    return r22;
  }
}
fun `inner-1366976931`(data, connection, newLine, encoding) {
  (reg data:*, reg connection:*, reg newLine:*, reg encoding:*) -+> V { var data:*, var connection:*, var newLine:*, reg newLine_isMissing:L, reg newLine_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg encoding1:*, reg encoding2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg encoding3:*, reg encoding4:V, reg c2:L, reg encoding6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg encoding7:*, reg encoding8:V, reg nzchar:cls, reg r11:V, reg c3:L, reg match_arg:cls, reg encoding9:*, reg encoding10:V, reg p1:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg encoding11:*, reg encoding12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c4:cls, reg r19:V, reg match:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg data1:*, reg data2:V, reg connection1:*, reg connection2:V, reg newLine1:*, reg newLine2:V, reg type:*, reg type1:V, reg pushBack:cls, reg r23:V |
    mkenv;
    st data = data;
    st connection = connection;
    newLine_isMissing = missing.0(newLine);
    if newLine_isMissing then L0(TRUE) else L0(newLine);
  L0(newLine_orDefault):
    st newLine = newLine_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L1() else L2(encoding);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("", "bytes", "UTF-8");
      goto L0(r2);
    L2():
      r = dyn base("", "bytes", "UTF-8");
      goto L0(r);
    };
    goto L2(p);
  L2(encoding_orDefault):
    st encoding = encoding_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L3(r5):
    r7 = `>`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L17() else L4();
  L13():
    encoding1 = ld encoding;
    check L15() else D0();
  L14():
    r4 = dyn base1(<sym encoding>);
    goto L3(r4);
  D0():
    deopt 2 [encoding1];
  L4():
    goto L6();
  L6():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L15():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    length = ldf length in base;
    r6 = dyn length(encoding2);
    check L16() else D1();
  L17():
    encoding3 = ld encoding;
    check L18() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 8 [encoding3];
  L7(r10):
    c3 = `as.logical`(r10);
    if c3 then L27() else L8();
  L16():
    goto L3(r6);
  L18():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    c2 = `is.object`(encoding4);
    if c2 then L19() else L20(encoding4);
  L23():
    encoding7 = ld encoding;
    check L25() else D3();
  L24():
    r9 = dyn base2(<sym encoding>);
    goto L7(r9);
  D3():
    deopt 18 [encoding7];
  L5(dx1):
    st encoding = dx1;
    goto L6();
  L8():
    goto L9();
  L9():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L19():
    dr = tryDispatchBuiltin.1("[", encoding4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(encoding6):
    __ = ldf `[` in base;
    r8 = dyn __(encoding6, 1.0);
    goto L5(r8);
  L25():
    encoding8 = force? encoding7;
    checkMissing(encoding8);
    nzchar = ldf nzchar in base;
    r11 = dyn nzchar(encoding8);
    check L26() else D4();
  L27():
    match_arg = ldf `match.arg`;
    check L28() else D5();
  D4():
    deopt 21 [r11];
  D5():
    deopt 23 [];
  L10(r16):
    st type = r16;
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L38() else L39();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    goto L7(r11);
  L28():
    p1 = prom<V +>{
      encoding9 = ld encoding;
      encoding10 = force? encoding9;
      checkMissing(encoding10);
      return encoding10;
    };
    r13 = dyn match_arg(p1);
    check L29() else D6();
  L31():
    encoding11 = ld encoding;
    check L33() else D7();
  L32():
    r15 = dyn base3(<sym encoding>, <lang c("", "bytes", "UTF-8")>);
    goto L10(r15);
  D6():
    deopt 25 [r13];
  D7():
    deopt 31 [encoding11];
  L12(r22):
    popenv;
    return r22;
  L29():
    st encoding = r13;
    goto L9();
  L33():
    encoding12 = force? encoding11;
    checkMissing(encoding12);
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L38():
    data1 = ld data;
    check L40() else D10();
  L39():
    r21 = dyn base5(<lang pushBack(data, connection, newLine, type)>);
    goto L12(r21);
  D10():
    deopt 47 [data1];
  L11(r18):
    match = ldf match in base;
    r20 = dyn match(encoding12, r18, NA_INT, NULL);
    check L37() else D9();
  L34():
    c4 = ldf c in base;
    r19 = dyn c4("", "bytes", "UTF-8");
    check L36() else D8();
  L35():
    r17 = dyn base4("", "bytes", "UTF-8");
    goto L11(r17);
  L40():
    data2 = force? data1;
    checkMissing(data2);
    connection1 = ld connection;
    check L41() else D11();
  D8():
    deopt 39 [r19];
  D9():
    deopt 43 [r20];
  D11():
    deopt 49 [connection1];
  L36():
    goto L11(r19);
  L37():
    goto L10(r20);
  L41():
    connection2 = force? connection1;
    checkMissing(connection2);
    newLine1 = ld newLine;
    check L42() else D12();
  D12():
    deopt 51 [newLine1];
  L42():
    newLine2 = force? newLine1;
    checkMissing(newLine2);
    type = ld type;
    check L43() else D13();
  D13():
    deopt 53 [type];
  L43():
    type1 = force? type;
    checkMissing(type1);
    pushBack = ldf pushBack in base;
    r23 = dyn pushBack(data2, connection2, newLine2, type1);
    check L44() else D14();
  D14():
    deopt 56 [r23];
  L44():
    goto L12(r23);
  }
}