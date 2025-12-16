fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1876842339`;
    st infoRDS = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1876842339`(file) {
  (reg file:*) -+> V { var file:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg gzfile:cls, reg file3:*, reg file4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg file5:*, reg file6:V, reg inherits:cls, reg r10:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg file7:*, reg file8:V, reg inherits1:cls, reg r13:V, reg c3:L, reg gzcon:cls, reg file9:*, reg file10:V, reg p1:p(V +), reg r15:V, reg r16:V, reg file11:*, reg file12:V, reg stop:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg con:*, reg con1:V, reg serializeInfoFromConn:cls, reg r20:V |
    mkenv;
    st file = file;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L1();
  L10():
    file1 = ld file;
    check L12() else D0();
  L11():
    r = dyn base(<sym file>);
    goto L0(r);
  D0():
    deopt 1 [file1];
  L1():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L3():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L12():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L0(c);
  L13():
    gzfile = ldf gzfile;
    check L14() else D1();
  D1():
    deopt 5 [];
  L4(r9):
    c2 = `as.logical`(r9);
    if c2 then L23() else L5();
  L9(r19):
    popenv;
    return r19;
  L14():
    p = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r3 = dyn gzfile(p, "rb");
    check L15() else D2();
  L19():
    file5 = ld file;
    check L21() else D3();
  L20():
    r8 = dyn base2(<sym file>, "connection");
    goto L4(r8);
  L36():
    con = ld con;
    check L38() else D12();
  L37():
    r18 = dyn base4(<lang serializeInfoFromConn(con)>);
    goto L9(r18);
  D2():
    deopt 8 [r3];
  D3():
    deopt 15 [file5];
  D12():
    deopt 42 [con];
  L5():
    stop = ldf stop;
    check L34() else D10();
  L15():
    st con = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L21():
    file6 = force? file5;
    checkMissing(file6);
    inherits = ldf inherits in base;
    r10 = dyn inherits(file6, "connection", FALSE);
    check L22() else D4();
  L23():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L38():
    con1 = force? con;
    checkMissing(con1);
    serializeInfoFromConn = ldf serializeInfoFromConn in base;
    r20 = dyn serializeInfoFromConn(con1);
    check L39() else D13();
  D4():
    deopt 20 [r10];
  D10():
    deopt 37 [];
  D13():
    deopt 45 [r20];
  L2(r5):
    goto L3();
  L6(r12):
    c3 = `as.logical`(r12);
    if c3 then L28() else L7();
  L16():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(con)>);
    goto L2(r6);
  L17():
    r4 = dyn base1(<lang close(con)>);
    goto L2(r4);
  L22():
    goto L4(r10);
  L24():
    file7 = ld file;
    check L26() else D5();
  L25():
    r11 = dyn base3(<sym file>, "url");
    goto L6(r11);
  L34():
    r17 = dyn stop("bad 'file' argument");
    check L35() else D11();
  L39():
    goto L9(r20);
  D5():
    deopt 23 [file7];
  D11():
    deopt 39 [r17];
  L7():
    file11 = ld file;
    check L32() else D9();
  L8(r16):
    st con = r16;
    goto L3();
  L26():
    file8 = force? file7;
    checkMissing(file8);
    inherits1 = ldf inherits in base;
    r13 = dyn inherits1(file8, "url", FALSE);
    check L27() else D6();
  L28():
    gzcon = ldf gzcon;
    check L29() else D7();
  L35():
    goto L3();
  D6():
    deopt 28 [r13];
  D7():
    deopt 30 [];
  D9():
    deopt 33 [file11];
  L27():
    goto L6(r13);
  L29():
    p1 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r15 = dyn gzcon(p1);
    check L30() else D8();
  L32():
    file12 = force? file11;
    checkMissing(file12);
    goto L8(file12);
  D8():
    deopt 32 [r15];
  L30():
    goto L8(r15);
  }
}