fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2233096714;
    st check_packages_in_dir_changes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2233096714(dir, old, outputs, sources, `...`) {
  (reg dir:*, reg old:*, reg outputs:*, reg sources:*, reg ddd:dots) -+> V { var dir:*, var old:*, var outputs:*, reg outputs_isMissing:L, reg outputs_orDefault:*, var sources:*, reg sources_isMissing:L, reg sources_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dir1:*, reg dir2:V, reg inherits:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg dir3:*, reg dir4:V, reg attr:cls, reg r5:V, reg r6:V, reg normalizePath:cls, reg dir5:*, reg dir6:V, reg p:p(V +), reg r8:V, reg R_check_outdirs:cls, reg dir7:*, reg dir8:V, reg p1:p(V +), reg sources1:*, reg sources2:V, reg p2:p(V +), reg r11:V, reg file_path:cls, reg outdirs:*, reg outdirs1:V, reg p3:p(V +), reg r13:V, reg logs:*, reg logs1:V, reg c1:L, reg logs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_test:cls, reg logs4:*, reg logs5:V, reg p4:p(V +), reg r15:V, reg __:cls, reg r16:V, reg check_packages_in_dir_details:cls, reg logs6:*, reg logs7:V, reg p5:p(V +), reg ddd1:dots?, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg old1:*, reg old2:V, reg inherits1:cls, reg r21:V, reg r22:V, reg c2:L, reg check_packages_in_dir_details1:cls, reg old3:*, reg old4:V, reg p6:p(V +), reg ddd2:dots?, reg r24:V, reg check_details_changes:cls, reg new:*, reg new1:V, reg p7:p(V +), reg old5:*, reg old6:V, reg p8:p(V +), reg outputs1:*, reg outputs2:V, reg p9:p(V +), reg r29:V |
    mkenv;
    st dir = dir;
    st old = old;
    outputs_isMissing = missing.0(outputs);
    if outputs_isMissing then L0(FALSE) else L0(outputs);
  L0(outputs_orDefault):
    st outputs = outputs_orDefault;
    sources_isMissing = missing.0(sources);
    if sources_isMissing then L1(FALSE) else L1(sources);
  L1(sources_orDefault):
    st sources = sources_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L2(r1):
    c = `as.logical`(r1);
    if c then L14() else L3();
  L10():
    dir1 = ld dir;
    check L12() else D0();
  L11():
    r = dyn base(<sym dir>, "check_packages_in_dir");
    goto L2(r);
  D0():
    deopt 2 [dir1];
  L3():
    normalizePath = ldf normalizePath;
    check L20() else D4();
  L5(r6):
    st dir = r6;
    R_check_outdirs = ldf R_check_outdirs;
    check L22() else D6();
  L12():
    dir2 = force? dir1;
    checkMissing(dir2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(dir2, "check_packages_in_dir", FALSE);
    check L13() else D1();
  L14():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D1():
    deopt 7 [r2];
  D4():
    deopt 17 [];
  D6():
    deopt 22 [];
  L4(r4):
    st dir = r4;
    goto L5(r4);
  L13():
    goto L2(r2);
  L15():
    dir3 = ld dir;
    check L17() else D2();
  L16():
    r3 = dyn base1(<sym dir>, "dir");
    goto L4(r3);
  L20():
    p = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r8 = dyn normalizePath(p);
    check L21() else D5();
  L22():
    p1 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p2 = prom<V +>{
      sources1 = ld sources;
      sources2 = force? sources1;
      checkMissing(sources2);
      return sources2;
    };
    r11 = dyn R_check_outdirs[, all, invert](p1, p2, TRUE);
    check L23() else D7();
  D2():
    deopt 10 [dir3];
  D5():
    deopt 19 [r8];
  D7():
    deopt 28 [r11];
  L17():
    dir4 = force? dir3;
    checkMissing(dir4);
    attr = ldf attr in base;
    r5 = dyn attr(dir4, "dir");
    check L18() else D3();
  L21():
    goto L5(r8);
  L23():
    st outdirs = r11;
    file_path = ldf `file.path`;
    check L24() else D8();
  D3():
    deopt 14 [r5];
  D8():
    deopt 31 [];
  L18():
    goto L4(r5);
  L24():
    p3 = prom<V +>{
      outdirs = ld outdirs;
      outdirs1 = force? outdirs;
      checkMissing(outdirs1);
      return outdirs1;
    };
    r13 = dyn file_path(p3, "00check.log");
    check L25() else D9();
  D9():
    deopt 34 [r13];
  L25():
    st logs = r13;
    logs = ld logs;
    check L26() else D10();
  D10():
    deopt 36 [logs];
  L26():
    logs1 = force? logs;
    checkMissing(logs1);
    c1 = `is.object`(logs1);
    if c1 then L27() else L28(logs1);
  L6(dx1):
    st logs = dx1;
    check_packages_in_dir_details = ldf check_packages_in_dir_details;
    check L32() else D13();
  L27():
    dr = tryDispatchBuiltin.1("[", logs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(logs3):
    file_test = ldf file_test;
    check L30() else D11();
  D11():
    deopt 39 [logs3];
  D13():
    deopt 46 [];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L30():
    p4 = prom<V +>{
      logs4 = ld logs;
      logs5 = force? logs4;
      checkMissing(logs5);
      return logs5;
    };
    r15 = dyn file_test("-f", p4);
    check L31() else D12();
  L32():
    p5 = prom<V +>{
      logs6 = ld logs;
      logs7 = force? logs6;
      checkMissing(logs7);
      return logs7;
    };
    ddd1 = ld `...`;
    r18 = dyn check_packages_in_dir_details[logs, drop_ok, `...`](p5, FALSE, ddd1);
    check L33() else D14();
  D12():
    deopt 42 [logs3, r15];
  D14():
    deopt 52 [r18];
  L31():
    __ = ldf `[` in base;
    r16 = dyn __(logs3, r15);
    goto L6(r16);
  L33():
    st new = r18;
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L7(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L38() else L8();
  L34():
    old1 = ld old;
    check L36() else D15();
  L35():
    r19 = dyn base2(<sym old>, "check_details");
    goto L7(r19);
  D15():
    deopt 56 [old1];
  L8():
    goto L9();
  L9():
    check_details_changes = ldf check_details_changes;
    check L42() else D19();
  L36():
    old2 = force? old1;
    checkMissing(old2);
    inherits1 = ldf inherits in base;
    r21 = dyn inherits1(old2, "check_details", FALSE);
    check L37() else D16();
  L38():
    check_packages_in_dir_details1 = ldf check_packages_in_dir_details;
    check L39() else D17();
  D16():
    deopt 61 [r21];
  D17():
    deopt 64 [];
  D19():
    deopt 74 [];
  L37():
    goto L7(r21);
  L39():
    p6 = prom<V +>{
      old3 = ld old;
      old4 = force? old3;
      checkMissing(old4);
      return old4;
    };
    ddd2 = ld `...`;
    r24 = dyn check_packages_in_dir_details1[, drop_ok, `...`](p6, FALSE, ddd2);
    check L40() else D18();
  L42():
    p7 = prom<V +>{
      new = ld new;
      new1 = force? new;
      checkMissing(new1);
      return new1;
    };
    p8 = prom<V +>{
      old5 = ld old;
      old6 = force? old5;
      checkMissing(old6);
      return old6;
    };
    p9 = prom<V +>{
      outputs1 = ld outputs;
      outputs2 = force? outputs1;
      checkMissing(outputs2);
      return outputs2;
    };
    r29 = dyn check_details_changes(p7, p8, p9);
    check L43() else D20();
  D18():
    deopt 69 [r24];
  D20():
    deopt 78 [r29];
  L40():
    st old = r24;
    goto L9();
  L43():
    popenv;
    return r29;
  }
}