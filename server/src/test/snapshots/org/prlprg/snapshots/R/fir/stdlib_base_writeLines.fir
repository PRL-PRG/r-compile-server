fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-892181816`;
    st writeLines = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-892181816`(text, con, sep, useBytes) {
  (reg text:*, reg con:*, reg sep:*, reg useBytes:*) -+> V { var text:*, var con:*, reg con_isMissing:L, reg con_orDefault:*, reg stdout:cls, reg r:V, reg p:p(V +), var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg text1:*, reg text2:V, reg c:L, reg r4:V, reg c1:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg con1:*, reg con2:V, reg c2:L, reg c3:L, reg file:cls, reg con3:*, reg con4:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg on_exit:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg text3:*, reg text4:V, reg con5:*, reg con6:V, reg sep1:*, reg sep2:V, reg useBytes1:*, reg useBytes2:V, reg writeLines:cls, reg r17:V |
    mkenv;
    st text = text;
    con_isMissing = missing.0(con);
    if con_isMissing then L0() else L1(con);
  L0():
    p = prom<V +>{
      stdout = ldf stdout;
      r = dyn stdout();
      return r;
    };
    goto L1(p);
  L1(con_orDefault):
    st con = con_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L2("\n") else L2(sep);
  L2(sep_orDefault):
    st sep = sep_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L4(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L15() else L5();
  L12():
    text1 = ld text;
    check L14() else D0();
  L13():
    r2 = dyn base(<sym text>);
    goto L4(r2);
  D0():
    deopt 1 [text1];
  L5():
    goto L6();
  L6():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    text2 = force? text1;
    checkMissing(text2);
    c = `is.character`(text2);
    goto L4(c);
  L15():
    stop = ldf stop;
    check L16() else D1();
  D1():
    deopt 6 [];
  L7(r8):
    c3 = `as.logical`(r8);
    if c3 then L22() else L8();
  L16():
    r5 = dyn stop("can only write character objects");
    check L17() else D2();
  L19():
    con1 = ld con;
    check L21() else D3();
  L20():
    r7 = dyn base1(<sym con>);
    goto L7(r7);
  D2():
    deopt 8 [r5];
  D3():
    deopt 12 [con1];
  L8():
    goto L10();
  L10():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L17():
    goto L6();
  L21():
    con2 = force? con1;
    checkMissing(con2);
    c2 = `is.character`(con2);
    goto L7(c2);
  L22():
    file = ldf file;
    check L23() else D4();
  D4():
    deopt 16 [];
  L11(r16):
    popenv;
    return r16;
  L23():
    p1 = prom<V +>{
      con3 = ld con;
      con4 = force? con3;
      checkMissing(con4);
      return con4;
    };
    r10 = dyn file(p1, "w");
    check L24() else D5();
  L28():
    text3 = ld text;
    check L30() else D6();
  L29():
    r15 = dyn base3(<lang writeLines(text, con, sep, useBytes)>);
    goto L11(r15);
  D5():
    deopt 19 [r10];
  D6():
    deopt 28 [text3];
  L24():
    st con = r10;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L30():
    text4 = force? text3;
    checkMissing(text4);
    con5 = ld con;
    check L31() else D7();
  D7():
    deopt 30 [con5];
  L9(r12):
    goto L10();
  L25():
    on_exit = ldf `on.exit` in base;
    r13 = dyn on_exit(<lang close(con)>);
    goto L9(r13);
  L26():
    r11 = dyn base2(<lang close(con)>);
    goto L9(r11);
  L31():
    con6 = force? con5;
    checkMissing(con6);
    sep1 = ld sep;
    check L32() else D8();
  D8():
    deopt 32 [sep1];
  L32():
    sep2 = force? sep1;
    checkMissing(sep2);
    useBytes1 = ld useBytes;
    check L33() else D9();
  D9():
    deopt 34 [useBytes1];
  L33():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    writeLines = ldf writeLines in base;
    r17 = dyn writeLines(text4, con6, sep2, useBytes2);
    check L34() else D10();
  D10():
    deopt 37 [r17];
  L34():
    goto L11(r17);
  }
}