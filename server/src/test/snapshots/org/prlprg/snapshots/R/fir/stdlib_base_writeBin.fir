fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1738296145;
    st writeBin = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1738296145(object, con, size, endian, useBytes) {
  (reg object:*, reg con:*, reg size:*, reg endian:*, reg useBytes:*) -+> V { var object:*, var con:*, var size:*, reg size_isMissing:L, reg size_orDefault:*, var endian:*, reg endian_isMissing:L, reg endian_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg _in_:cls, reg endian1:*, reg endian2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg r8:V, reg c2:L, reg stop:cls, reg r9:V, reg endian3:*, reg endian4:V, reg _Platform4:*, reg _Platform5:V, reg c3:L, reg endian6:V, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg endian8:V, reg dx3:V, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg object1:*, reg object2:V, reg is_vector:cls, reg r15:V, reg r16:V, reg c4:L, reg c5:V, reg mode:cls, reg object3:*, reg object4:V, reg p3:p(V +), reg r18:V, reg r19:V, reg c7:L, reg c8:V, reg c10:L, reg stop1:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg con1:*, reg con2:V, reg c11:L, reg c12:L, reg file:cls, reg con3:*, reg con4:V, reg p4:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg on_exit:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg object5:*, reg object6:V, reg con5:*, reg con6:V, reg size1:*, reg size2:V, reg swap:*, reg swap1:V, reg useBytes1:*, reg useBytes2:V, reg writeBin:cls, reg r32:V |
    mkenv;
    st object = object;
    st con = con;
    size_isMissing = missing.0(size);
    if size_isMissing then L0(NA_INT) else L0(size);
  L0(size_orDefault):
    st size = size_orDefault;
    endian_isMissing = missing.0(endian);
    if endian_isMissing then L1() else L2(endian);
  L1():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym endian>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L2(p);
  L2(endian_orDefault):
    st endian = endian_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    _in_ = ldf `%in%`;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p1 = prom<V +>{
      endian1 = ld endian;
      endian2 = force? endian1;
      checkMissing(endian2);
      return endian2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c1 = ldf c in base;
      r5 = dyn c1("big", "little", "swap");
      goto L0(r5);
    L2():
      r3 = dyn base("big", "little", "swap");
      goto L0(r3);
    };
    r7 = dyn _in_(p1, p2);
    check L16() else D1();
  D1():
    deopt 4 [r7];
  L16():
    r8 = `!`(r7);
    c2 = `as.logical`(r8);
    if c2 then L17() else L4();
  L4():
    goto L5();
  L5():
    endian3 = ld endian;
    check L21() else D4();
  L17():
    stop = ldf stop;
    check L18() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 12 [endian3];
  L18():
    r9 = dyn stop("invalid 'endian' argument");
    check L19() else D3();
  L21():
    endian4 = force? endian3;
    checkMissing(endian4);
    _Platform4 = ld `.Platform`;
    check L22() else D5();
  D3():
    deopt 9 [r9];
  D5():
    deopt 13 [endian4, _Platform4];
  L19():
    goto L5();
  L22():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c3 = `is.object`(_Platform5);
    if c3 then L24() else L25(endian4, _Platform5);
  L23(endian8, dx3):
    r12 = `!=`(endian8, dx3);
    st swap = r12;
    sym1 = ldf `is.vector`;
    base1 = ldf `is.vector` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L24():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(endian4, dr2);
  L25(endian6, _Platform7):
    r11 = `$`(_Platform7, <sym endian>);
    goto L23(endian6, r11);
  L6(r14):
    r16 = `!`(r14);
    c4 = `as.logical`(r16);
    if c4 then L7(c4) else L31();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(endian4, dx2);
  L27():
    object1 = ld object;
    check L29() else D6();
  L28():
    r13 = dyn base1(<sym object>);
    goto L6(r13);
  D6():
    deopt 20 [object1];
  L7(c5):
    c10 = `as.logical`(c5);
    if c10 then L35() else L8();
  L29():
    object2 = force? object1;
    checkMissing(object2);
    is_vector = ldf `is.vector` in base;
    r15 = dyn is_vector(object2, "any");
    check L30() else D7();
  L31():
    mode = ldf mode;
    check L32() else D8();
  D7():
    deopt 24 [r15];
  D8():
    deopt 27 [c4];
  L8():
    goto L9();
  L9():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L30():
    goto L6(r15);
  L32():
    p3 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r18 = dyn mode(p3);
    check L33() else D9();
  L35():
    stop1 = ldf stop;
    check L36() else D10();
  D9():
    deopt 29 [c4, r18];
  D10():
    deopt 34 [];
  L10(r23):
    c12 = `as.logical`(r23);
    if c12 then L42() else L11();
  L33():
    r19 = `==`(r18, "list");
    c7 = `as.logical`(r19);
    c8 = `||`(c4, c7);
    goto L7(c8);
  L36():
    r20 = dyn stop1("can only write vector objects");
    check L37() else D11();
  L39():
    con1 = ld con;
    check L41() else D12();
  L40():
    r22 = dyn base2(<sym con>);
    goto L10(r22);
  D11():
    deopt 36 [r20];
  D12():
    deopt 40 [con1];
  L11():
    goto L13();
  L13():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L37():
    goto L9();
  L41():
    con2 = force? con1;
    checkMissing(con2);
    c11 = `is.character`(con2);
    goto L10(c11);
  L42():
    file = ldf file;
    check L43() else D13();
  D13():
    deopt 44 [];
  L14(r31):
    popenv;
    return r31;
  L43():
    p4 = prom<V +>{
      con3 = ld con;
      con4 = force? con3;
      checkMissing(con4);
      return con4;
    };
    r25 = dyn file(p4, "wb");
    check L44() else D14();
  L48():
    object5 = ld object;
    check L50() else D15();
  L49():
    r30 = dyn base4(<lang writeBin(object, con, size, swap, useBytes)>);
    goto L14(r30);
  D14():
    deopt 47 [r25];
  D15():
    deopt 56 [object5];
  L44():
    st con = r25;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L50():
    object6 = force? object5;
    checkMissing(object6);
    con5 = ld con;
    check L51() else D16();
  D16():
    deopt 58 [con5];
  L12(r27):
    goto L13();
  L45():
    on_exit = ldf `on.exit` in base;
    r28 = dyn on_exit(<lang close(con)>);
    goto L12(r28);
  L46():
    r26 = dyn base3(<lang close(con)>);
    goto L12(r26);
  L51():
    con6 = force? con5;
    checkMissing(con6);
    size1 = ld size;
    check L52() else D17();
  D17():
    deopt 60 [size1];
  L52():
    size2 = force? size1;
    checkMissing(size2);
    swap = ld swap;
    check L53() else D18();
  D18():
    deopt 62 [swap];
  L53():
    swap1 = force? swap;
    checkMissing(swap1);
    useBytes1 = ld useBytes;
    check L54() else D19();
  D19():
    deopt 64 [useBytes1];
  L54():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    writeBin = ldf writeBin in base;
    r32 = dyn writeBin(object6, con6, size2, swap1, useBytes2);
    check L55() else D20();
  D20():
    deopt 67 [r32];
  L55():
    goto L14(r32);
  }
}