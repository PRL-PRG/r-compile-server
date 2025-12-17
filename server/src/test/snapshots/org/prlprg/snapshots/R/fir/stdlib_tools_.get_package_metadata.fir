fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2045738975;
    st `.get_package_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2045738975(dir, installed) {
  (reg dir:*, reg installed:*) -+> V { var dir:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p2:p(V +), reg r5:V, reg c:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p3:p(V +), reg r7:V, reg installed1:*, reg installed2:V, reg c1:L, reg stop:cls, reg r10:V, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg r13:V, reg file_test1:cls, reg dfile4:*, reg dfile5:V, reg p5:p(V +), reg r15:V, reg c2:L, reg _read_description1:cls, reg dfile6:*, reg dfile7:V, reg p6:p(V +), reg r17:V, reg stop1:cls, reg r19:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg meta:*, reg meta1:V, reg c3:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r24:V, reg as_character:cls, reg r25:V, reg identical:cls, reg r26:V, reg c4:L, reg meta4:*, reg meta5:V, reg stop2:cls, reg r29:V |
    mkenv;
    st dir = dir;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L13() else D1();
  D1():
    deopt 3 [r1];
  L13():
    st dir = r1;
    file_path = ldf `file.path`;
    check L14() else D2();
  D2():
    deopt 6 [];
  L14():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "DESCRIPTION");
    check L15() else D3();
  D3():
    deopt 9 [r3];
  L15():
    st dfile = r3;
    file_test = ldf file_test;
    check L16() else D4();
  D4():
    deopt 12 [];
  L16():
    p2 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r5 = dyn file_test("-f", p2);
    check L17() else D5();
  D5():
    deopt 15 [r5];
  L17():
    c = `as.logical`(r5);
    if c then L18() else L1();
  L1():
    installed1 = ld installed;
    check L23() else D8();
  L18():
    _read_description = ldf `.read_description`;
    check L19() else D6();
  D6():
    deopt 17 [];
  D8():
    deopt 23 [installed1];
  L19():
    p3 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r7 = dyn _read_description(p3);
    check L20() else D7();
  L23():
    installed2 = force? installed1;
    checkMissing(installed2);
    c1 = `as.logical`(installed2);
    if c1 then L24() else L3();
  D7():
    deopt 19 [r7];
  L3():
    goto L4();
  L4():
    file_path1 = ldf `file.path`;
    check L28() else D11();
  L20():
    popenv;
    return r7;
  L24():
    stop = ldf stop;
    check L25() else D9();
  D9():
    deopt 26 [];
  D11():
    deopt 32 [];
  L25():
    r10 = dyn stop("File 'DESCRIPTION' is missing.");
    check L26() else D10();
  L28():
    p4 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r13 = dyn file_path1(p4, "DESCRIPTION.in");
    check L29() else D12();
  D10():
    deopt 28 [r10];
  D12():
    deopt 35 [r13];
  L26():
    goto L4();
  L29():
    st dfile = r13;
    file_test1 = ldf file_test;
    check L30() else D13();
  D13():
    deopt 38 [];
  L30():
    p5 = prom<V +>{
      dfile4 = ld dfile;
      dfile5 = force? dfile4;
      checkMissing(dfile5);
      return dfile5;
    };
    r15 = dyn file_test1("-f", p5);
    check L31() else D14();
  D14():
    deopt 41 [r15];
  L31():
    c2 = `as.logical`(r15);
    if c2 then L32() else L5();
  L5():
    stop1 = ldf stop;
    check L36() else D17();
  L6():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L32():
    _read_description1 = ldf `.read_description`;
    check L33() else D15();
  D15():
    deopt 43 [];
  D17():
    deopt 48 [];
  L7(r21):
    c4 = `as.logical`(r21);
    if c4 then L48() else L10();
  L33():
    p6 = prom<V +>{
      dfile6 = ld dfile;
      dfile7 = force? dfile6;
      checkMissing(dfile7);
      return dfile7;
    };
    r17 = dyn _read_description1(p6);
    check L34() else D16();
  L36():
    r19 = dyn stop1("Files 'DESCRIPTION' and 'DESCRIPTION.in' are missing.");
    check L37() else D18();
  L38():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L39():
    r20 = dyn base(<lang as.character(`[`(meta, "Priority"))>, "base");
    goto L7(r20);
  D16():
    deopt 45 [r17];
  D18():
    deopt 50 [r19];
  L8(r23):
    identical = ldf identical in base;
    r26 = dyn identical(r23, "base", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L47() else D21();
  L10():
    stop2 = ldf stop;
    check L52() else D23();
  L34():
    st meta = r17;
    goto L6();
  L37():
    goto L6();
  L40():
    meta = ld meta;
    check L42() else D19();
  L41():
    r22 = dyn base1(<lang `[`(meta, "Priority")>);
    goto L8(r22);
  L48():
    meta4 = ld meta;
    check L49() else D22();
  D19():
    deopt 55 [meta];
  D21():
    deopt 71 [r26];
  D22():
    deopt 72 [meta4];
  D23():
    deopt 78 [];
  L42():
    meta1 = force? meta;
    checkMissing(meta1);
    c3 = `is.object`(meta1);
    if c3 then L43() else L44(meta1);
  L47():
    goto L7(r26);
  L49():
    meta5 = force? meta4;
    checkMissing(meta5);
    popenv;
    return meta5;
  L52():
    r29 = dyn stop2("invalid package layout");
    check L53() else D24();
  D24():
    deopt 80 [r29];
  L9(dx1):
    as_character = ldf `as.character` in base;
    r25 = dyn as_character(dx1);
    check L46() else D20();
  L43():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(meta3):
    __ = ldf `[` in base;
    r24 = dyn __(meta3, "Priority");
    goto L9(r24);
  L53():
    popenv;
    return r29;
  D20():
    deopt 61 [r25];
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L46():
    goto L8(r25);
  }
}