fun main() {
  () -+> V { reg r:cls, reg serialize:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg p:p(V +), reg r5:V, reg unserialize:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos `inner-162172054`;
    st serialize = r;
    serialize = ldf serialize;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list in base;
      r3 = dyn list(1.0, 2.0, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 2.0, 3.0);
      goto L0(r1);
    };
    r5 = dyn serialize(p, NULL);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    st x = r5;
    unserialize = ldf unserialize;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r7 = dyn unserialize(p1);
    check L3() else D3();
  D3():
    deopt 12 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun `inner-162172054`(object, connection, ascii, xdr, version, refhook) {
  (reg object:*, reg connection:*, reg ascii:*, reg xdr:*, reg version:*, reg refhook:*) -+> V { var object:*, var connection:*, var ascii:*, reg ascii_isMissing:L, reg ascii_orDefault:*, var xdr:*, reg xdr_isMissing:L, reg xdr_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var refhook:*, reg refhook_isMissing:L, reg refhook_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg connection1:*, reg connection2:V, reg c:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg connection3:*, reg connection4:V, reg inherits:cls, reg r5:V, reg r6:V, reg c2:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c3:L, reg summary:cls, reg connection5:*, reg connection6:V, reg p:p(V +), reg r13:V, reg c4:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg r17:V, reg r18:V, reg ascii1:*, reg ascii2:V, reg r20:V, reg c5:L, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg c10:L, reg r22:V, reg connection7:*, reg connection8:V, reg inherits1:cls, reg r23:V, reg c11:L, reg c12:V, reg c14:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg object1:*, reg object2:V, reg connection9:*, reg connection10:V, reg xdr1:*, reg xdr2:V, reg version1:*, reg version2:V, reg refhook1:*, reg refhook2:V, reg serializeb:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg ascii3:*, reg ascii4:V, reg is_na:cls, reg r29:V, reg c15:L, reg r30:I, reg ascii5:*, reg ascii6:V, reg c16:L, reg xdr3:*, reg xdr4:V, reg r31:V, reg c17:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg object3:*, reg object4:V, reg connection11:*, reg connection12:V, reg type:*, reg type1:V, reg version3:*, reg version4:V, reg refhook3:*, reg refhook4:V, reg serialize:cls, reg r34:V |
    mkenv;
    st object = object;
    st connection = connection;
    ascii_isMissing = missing.0(ascii);
    if ascii_isMissing then L0(FALSE) else L0(ascii);
  L0(ascii_orDefault):
    st ascii = ascii_orDefault;
    xdr_isMissing = missing.0(xdr);
    if xdr_isMissing then L1(TRUE) else L1(xdr);
  L1(xdr_orDefault):
    st xdr = xdr_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L2(NULL) else L2(version);
  L2(version_orDefault):
    st version = version_orDefault;
    refhook_isMissing = missing.0(refhook);
    if refhook_isMissing then L3(NULL) else L3(refhook);
  L3(refhook_orDefault):
    st refhook = refhook_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L4(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L26() else L5();
  L23():
    connection1 = ld connection;
    check L25() else D0();
  L24():
    r = dyn base(<sym connection>);
    goto L4(r);
  D0():
    deopt 1 [connection1];
  L5():
    goto L12();
  L12():
    ascii1 = ld ascii;
    check L46() else D7();
  L25():
    connection2 = force? connection1;
    checkMissing(connection2);
    c = `==`(connection2, NULL);
    goto L4(c);
  L26():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D7():
    deopt 35 [ascii1];
  L6(r4):
    r6 = `!`(r4);
    c2 = `as.logical`(r6);
    if c2 then L31() else L7();
  L27():
    connection3 = ld connection;
    check L29() else D1();
  L28():
    r3 = dyn base1(<sym connection>, "connection");
    goto L6(r3);
  L46():
    ascii2 = force? ascii1;
    checkMissing(ascii2);
    r20 = `!`(ascii2);
    c5 = `as.logical`(r20);
    if c5 then L47() else L13(c5);
  D1():
    deopt 7 [connection3];
  L7():
    goto L8();
  L8():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L13(c7):
    c14 = `as.logical`(c7);
    if c14 then L53() else L15();
  L29():
    connection4 = force? connection3;
    checkMissing(connection4);
    inherits = ldf inherits in base;
    r5 = dyn inherits(connection4, "connection", FALSE);
    check L30() else D2();
  L31():
    stop = ldf stop;
    check L32() else D3();
  L47():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  D2():
    deopt 12 [r5];
  D3():
    deopt 15 [];
  L9(r10):
    c3 = `as.logical`(r10);
    if c3 then L37() else L10();
  L14(c10, r22):
    c11 = `as.logical`(r22);
    c12 = `&&`(c10, c11);
    goto L13(c12);
  L15():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L30():
    goto L6(r5);
  L32():
    r7 = dyn stop("'connection' must be a connection");
    check L33() else D4();
  L35():
    missing = ldf missing in base;
    r11 = dyn missing(<sym ascii>);
    goto L9(r11);
  L36():
    r9 = dyn base2(<sym ascii>);
    goto L9(r9);
  L48():
    connection7 = ld connection;
    check L50() else D8();
  L49():
    r21 = dyn base3(<sym connection>, "sockconn");
    goto L14(c5, r21);
  L53():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  D4():
    deopt 17 [r7];
  D8():
    deopt 40 [c5, connection7];
  L10():
    goto L11(NULL);
  L11(r18):
    goto L12();
  L16(r25):
    popenv;
    return r25;
  L17(r28):
    c15 = `as.logical`(r28);
    if c15 then L67() else L18();
  L33():
    goto L8();
  L37():
    summary = ldf summary;
    check L38() else D5();
  L50():
    connection8 = force? connection7;
    checkMissing(connection8);
    inherits1 = ldf inherits in base;
    r23 = dyn inherits1(connection8, "sockconn", FALSE);
    check L51() else D9();
  L54():
    object1 = ld object;
    check L56() else D10();
  L55():
    r24 = dyn base4(<lang serializeb(object, connection, xdr, version, refhook)>);
    goto L16(r24);
  L63():
    ascii3 = ld ascii;
    check L65() else D16();
  L64():
    r27 = dyn base5(<sym ascii>);
    goto L17(r27);
  D5():
    deopt 24 [];
  D9():
    deopt 45 [c5, r23];
  D10():
    deopt 49 [object1];
  D16():
    deopt 63 [ascii3];
  L18():
    ascii5 = ld ascii;
    check L69() else D18();
  L19(r30):
    st type = r30;
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L75() else L76();
  L38():
    p = prom<V +>{
      connection5 = ld connection;
      connection6 = force? connection5;
      checkMissing(connection6);
      return connection6;
    };
    r13 = dyn summary(p);
    check L39() else D6();
  L51():
    goto L14(c5, r23);
  L56():
    object2 = force? object1;
    checkMissing(object2);
    connection9 = ld connection;
    check L57() else D11();
  L65():
    ascii4 = force? ascii3;
    checkMissing(ascii4);
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(ascii4);
    check L66() else D17();
  L67():
    goto L19(2);
  D6():
    deopt 26 [r13];
  D11():
    deopt 51 [connection9];
  D17():
    deopt 66 [r29];
  D18():
    deopt 69 [ascii5];
  L22(r33):
    popenv;
    return r33;
  L39():
    c4 = `is.object`(r13);
    if c4 then L41() else L42(r13);
  L57():
    connection10 = force? connection9;
    checkMissing(connection10);
    xdr1 = ld xdr;
    check L58() else D12();
  L66():
    goto L17(r29);
  L69():
    ascii6 = force? ascii5;
    checkMissing(ascii6);
    c16 = `as.logical`(ascii6);
    if c16 then L70() else L20();
  L75():
    object3 = ld object;
    check L77() else D20();
  L76():
    r32 = dyn base6(<lang serialize(object, connection, type, version, refhook)>);
    goto L22(r32);
  D12():
    deopt 53 [xdr1];
  D20():
    deopt 83 [object3];
  L20():
    xdr3 = ld xdr;
    check L72() else D19();
  L40(dx1):
    r17 = `==`(dx1, "text");
    st ascii = r17;
    goto L11(r17);
  L41():
    dr = tryDispatchBuiltin.1("$", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(r15):
    r16 = `$`(r15, <sym text>);
    goto L40(r16);
  L58():
    xdr2 = force? xdr1;
    checkMissing(xdr2);
    version1 = ld version;
    check L59() else D13();
  L70():
    goto L19(1);
  L77():
    object4 = force? object3;
    checkMissing(object4);
    connection11 = ld connection;
    check L78() else D21();
  D13():
    deopt 55 [version1];
  D19():
    deopt 73 [xdr3];
  D21():
    deopt 85 [connection11];
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(dx);
  L59():
    version2 = force? version1;
    checkMissing(version2);
    refhook1 = ld refhook;
    check L60() else D14();
  L72():
    xdr4 = force? xdr3;
    checkMissing(xdr4);
    r31 = `!`(xdr4);
    c17 = `as.logical`(r31);
    if c17 then L73() else L21();
  L78():
    connection12 = force? connection11;
    checkMissing(connection12);
    type = ld type;
    check L79() else D22();
  D14():
    deopt 57 [refhook1];
  D22():
    deopt 87 [type];
  L21():
    goto L19(0);
  L60():
    refhook2 = force? refhook1;
    checkMissing(refhook2);
    serializeb = ldf serializeb in base;
    r26 = dyn serializeb(object2, connection10, xdr2, version2, refhook2);
    check L61() else D15();
  L73():
    goto L19(3);
  L79():
    type1 = force? type;
    checkMissing(type1);
    version3 = ld version;
    check L80() else D23();
  D15():
    deopt 60 [r26];
  D23():
    deopt 89 [version3];
  L61():
    goto L16(r26);
  L80():
    version4 = force? version3;
    checkMissing(version4);
    refhook3 = ld refhook;
    check L81() else D24();
  D24():
    deopt 91 [refhook3];
  L81():
    refhook4 = force? refhook3;
    checkMissing(refhook4);
    serialize = ldf serialize in base;
    r34 = dyn serialize(object4, connection12, type1, version4, refhook4);
    check L82() else D25();
  D25():
    deopt 94 [r34];
  L82():
    goto L22(r34);
  }
}