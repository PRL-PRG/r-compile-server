fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner525436677;
    st writeChar = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner525436677(object, con, nchars, eos, useBytes) {
  (reg object:*, reg con:*, reg nchars:*, reg eos:*, reg useBytes:*) -+> V { var object:*, var con:*, var nchars:*, reg nchars_isMissing:L, reg nchars_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg nchar:cls, reg r2:V, reg p:p(V +), var eos:*, reg eos_isMissing:L, reg eos_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object3:*, reg object4:V, reg c:L, reg r6:V, reg c1:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg con1:*, reg con2:V, reg c2:L, reg c3:L, reg file:cls, reg con3:*, reg con4:V, reg p1:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg on_exit:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg object5:*, reg object6:V, reg con5:*, reg con6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg nchars1:*, reg nchars2:V, reg as_integer:cls, reg r21:V, reg eos1:*, reg eos2:V, reg useBytes1:*, reg useBytes2:V, reg writeChar:cls, reg r22:V |
    mkenv;
    st object = object;
    st con = con;
    nchars_isMissing = missing.0(nchars);
    if nchars_isMissing then L0() else L1(nchars);
  L0():
    p = prom<V +>{
      sym = ldf nchar;
      base = ldf nchar in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      nchar = ldf nchar in base;
      r2 = dyn nchar(object2, "chars", FALSE, NA_LGL);
      goto L0(r2);
    L2():
      r = dyn base[, type](<sym object>, "chars");
      goto L0(r);
    };
    goto L1(p);
  L1(nchars_orDefault):
    st nchars = nchars_orDefault;
    eos_isMissing = missing.0(eos);
    if eos_isMissing then L2("") else L2(eos);
  L2(eos_orDefault):
    st eos = eos_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L4(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L16() else L5();
  L13():
    object3 = ld object;
    check L15() else D0();
  L14():
    r4 = dyn base1(<sym object>);
    goto L4(r4);
  D0():
    deopt 1 [object3];
  L5():
    goto L6();
  L6():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L15():
    object4 = force? object3;
    checkMissing(object4);
    c = `is.character`(object4);
    goto L4(c);
  L16():
    stop = ldf stop;
    check L17() else D1();
  D1():
    deopt 6 [];
  L7(r10):
    c3 = `as.logical`(r10);
    if c3 then L23() else L8();
  L17():
    r7 = dyn stop("can only write character objects");
    check L18() else D2();
  L20():
    con1 = ld con;
    check L22() else D3();
  L21():
    r9 = dyn base2(<sym con>);
    goto L7(r9);
  D2():
    deopt 8 [r7];
  D3():
    deopt 12 [con1];
  L8():
    goto L10();
  L10():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L18():
    goto L6();
  L22():
    con2 = force? con1;
    checkMissing(con2);
    c2 = `is.character`(con2);
    goto L7(c2);
  L23():
    file = ldf file;
    check L24() else D4();
  D4():
    deopt 16 [];
  L11(r18):
    popenv;
    return r18;
  L24():
    p1 = prom<V +>{
      con3 = ld con;
      con4 = force? con3;
      checkMissing(con4);
      return con4;
    };
    r12 = dyn file(p1, "wb");
    check L25() else D5();
  L29():
    object5 = ld object;
    check L31() else D6();
  L30():
    r17 = dyn base4(<lang writeChar(object, con, as.integer(nchars), eos, useBytes)>);
    goto L11(r17);
  D5():
    deopt 19 [r12];
  D6():
    deopt 28 [object5];
  L25():
    st con = r12;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L31():
    object6 = force? object5;
    checkMissing(object6);
    con5 = ld con;
    check L32() else D7();
  D7():
    deopt 30 [con5];
  L9(r14):
    goto L10();
  L26():
    on_exit = ldf `on.exit` in base;
    r15 = dyn on_exit(<lang close(con)>);
    goto L9(r15);
  L27():
    r13 = dyn base3(<lang close(con)>);
    goto L9(r13);
  L32():
    con6 = force? con5;
    checkMissing(con6);
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L12(r20):
    eos1 = ld eos;
    check L37() else D10();
  L33():
    nchars1 = ld nchars;
    check L35() else D8();
  L34():
    r19 = dyn base5(<sym nchars>);
    goto L12(r19);
  D8():
    deopt 34 [nchars1];
  D10():
    deopt 38 [eos1];
  L35():
    nchars2 = force? nchars1;
    checkMissing(nchars2);
    as_integer = ldf `as.integer` in base;
    r21 = dyn as_integer(nchars2);
    check L36() else D9();
  L37():
    eos2 = force? eos1;
    checkMissing(eos2);
    useBytes1 = ld useBytes;
    check L38() else D11();
  D9():
    deopt 37 [r21];
  D11():
    deopt 40 [useBytes1];
  L36():
    goto L12(r21);
  L38():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    writeChar = ldf writeChar in base;
    r22 = dyn writeChar(object6, con6, r20, eos2, useBytes2);
    check L39() else D12();
  D12():
    deopt 43 [r22];
  L39():
    goto L11(r22);
  }
}