fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner864454559;
    st `dump.frames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner864454559(dumpto, `to.file`, `include.GlobalEnv`) {
  (reg dumpto:*, reg to_file:*, reg include_GlobalEnv:*) -+> V { var dumpto:*, reg dumpto_isMissing:L, reg dumpto_orDefault:*, var `to.file`:*, reg to_file_isMissing:L, reg to_file_orDefault:*, var `include.GlobalEnv`:*, reg include_GlobalEnv_isMissing:L, reg include_GlobalEnv_orDefault:*, reg sys_calls:cls, reg r:V, reg sys_frames:cls, reg r1:V, reg limitedLabels:cls, reg calls:*, reg calls1:V, reg p:p(V +), reg r3:V, reg l:*, reg names__:cls, reg r4:V, reg include_GlobalEnv1:*, reg include_GlobalEnv2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg as_list:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p1:p(V +), reg r10:V, reg as_environment:cls, reg r11:V, reg last_dump:*, reg last_dump1:V, reg c1:cls, reg r12:V, reg last_dump2:*, reg last_dump3:V, reg c2:L, reg last_dump5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg last_dump8:V, reg r15:V, reg last_dump9:*, reg last_dump10:V, reg length:cls, reg r16:V, reg r17:V, reg __:cls, reg r18:V, reg geterrmessage:cls, reg r19:V, reg l1:*, reg attr__:cls, reg r20:V, reg l2:*, reg class__:cls, reg r21:V, reg dumpto1:*, reg dumpto2:V, reg r22:V, reg c3:L, reg assign:cls, reg dumpto3:*, reg dumpto4:V, reg p2:p(V +), reg last_dump11:*, reg last_dump12:V, reg p3:p(V +), reg r25:V, reg to_file1:*, reg to_file2:V, reg c4:L, reg save:cls, reg dumpto5:*, reg dumpto6:V, reg p4:p(V +), reg paste0:cls, reg dumpto7:*, reg dumpto8:V, reg p5:p(V +), reg r29:V, reg p6:p(V +), reg r31:V, reg assign1:cls, reg dumpto9:*, reg dumpto10:V, reg p7:p(V +), reg last_dump13:*, reg last_dump14:V, reg p8:p(V +), reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p9:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg invisible:cls, reg r39:V |
    mkenv;
    dumpto_isMissing = missing.0(dumpto);
    if dumpto_isMissing then L0("last.dump") else L0(dumpto);
  L0(dumpto_orDefault):
    st dumpto = dumpto_orDefault;
    to_file_isMissing = missing.0(to_file);
    if to_file_isMissing then L1(FALSE) else L1(to_file);
  L1(to_file_orDefault):
    st `to.file` = to_file_orDefault;
    include_GlobalEnv_isMissing = missing.0(include_GlobalEnv);
    if include_GlobalEnv_isMissing then L2(FALSE) else L2(include_GlobalEnv);
  L2(include_GlobalEnv_orDefault):
    st `include.GlobalEnv` = include_GlobalEnv_orDefault;
    sys_calls = ldf `sys.calls`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    r = dyn sys_calls();
    check L15() else D1();
  D1():
    deopt 2 [r];
  L15():
    st calls = r;
    sys_frames = ldf `sys.frames`;
    check L16() else D2();
  D2():
    deopt 5 [];
  L16():
    r1 = dyn sys_frames();
    check L17() else D3();
  D3():
    deopt 6 [r1];
  L17():
    st `last.dump` = r1;
    limitedLabels = ldf limitedLabels;
    check L18() else D4();
  D4():
    deopt 9 [];
  L18():
    p = prom<V +>{
      calls = ld calls;
      calls1 = force? calls;
      checkMissing(calls1);
      return calls1;
    };
    r3 = dyn limitedLabels(p);
    check L19() else D5();
  D5():
    deopt 11 [r3];
  L19():
    l = ld `last.dump`;
    names__ = ldf `names<-`;
    check L20() else D6();
  D6():
    deopt 13 [r3, l, r3];
  L20():
    r4 = dyn names__(l, NULL, r3);
    check L21() else D7();
  D7():
    deopt 15 [r3, r4];
  L21():
    st `last.dump` = r4;
    include_GlobalEnv1 = ld `include.GlobalEnv`;
    check L22() else D8();
  D8():
    deopt 17 [include_GlobalEnv1];
  L22():
    include_GlobalEnv2 = force? include_GlobalEnv1;
    checkMissing(include_GlobalEnv2);
    c = `as.logical`(include_GlobalEnv2);
    if c then L23() else L3();
  L3():
    goto L6();
  L6():
    last_dump2 = ld `last.dump`;
    check L34() else D14();
  L23():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  D14():
    deopt 39 [last_dump2];
  L4(r6):
    st `last.dump` = r6;
    goto L6();
  L24():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L25():
    r5 = dyn base[`.GlobalEnv`, ](<lang as.environment(as.list(.GlobalEnv, all.names=TRUE))>, <sym last.dump>);
    goto L4(r5);
  L34():
    last_dump3 = force? last_dump2;
    checkMissing(last_dump3);
    c2 = `is.object`(last_dump3);
    if c2 then L35() else L36(last_dump3);
  L5(r8):
    last_dump = ld `last.dump`;
    check L31() else D12();
  L7(dx1):
    st `last.dump` = dx1;
    geterrmessage = ldf geterrmessage;
    check L42() else D17();
  L26():
    as_list = ldf `as.list`;
    check L28() else D9();
  L27():
    r7 = dyn base1(<lang as.list(.GlobalEnv, all.names=TRUE)>);
    goto L5(r7);
  L35():
    dr = tryDispatchBuiltin.1("[", last_dump3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(last_dump5):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D9():
    deopt 24 [];
  D12():
    deopt 32 [last_dump];
  D17():
    deopt 51 [];
  L8(last_dump8, r15):
    r17 = `-`(<missing>, r15);
    __ = ldf `[` in base;
    r18 = dyn __(last_dump8, r17);
    goto L7(r18);
  L28():
    p1 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r10 = dyn as_list[, `all.names`](p1, TRUE);
    check L29() else D10();
  L31():
    last_dump1 = force? last_dump;
    checkMissing(last_dump1);
    c1 = ldf c in base;
    r12 = dyn c1(r8, last_dump1);
    check L32() else D13();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L38():
    last_dump9 = ld `last.dump`;
    check L40() else D15();
  L39():
    r14 = dyn base2(<sym last.dump>);
    goto L8(last_dump5, r14);
  L42():
    r19 = dyn geterrmessage();
    check L43() else D18();
  D10():
    deopt 28 [r10];
  D13():
    deopt 35 [r12];
  D15():
    deopt 43 [last_dump5, last_dump9];
  D18():
    deopt 52 [r19];
  L29():
    as_environment = ldf `as.environment` in base;
    r11 = dyn as_environment(r10);
    check L30() else D11();
  L32():
    goto L4(r12);
  L40():
    last_dump10 = force? last_dump9;
    checkMissing(last_dump10);
    length = ldf length in base;
    r16 = dyn length(last_dump10);
    check L41() else D16();
  L43():
    l1 = ld `last.dump`;
    attr__ = ldf `attr<-`;
    check L44() else D19();
  D11():
    deopt 30 [r11];
  D16():
    deopt 46 [last_dump5, r16];
  D19():
    deopt 54 [r19, l1, r19];
  L30():
    goto L5(r11);
  L41():
    goto L8(last_dump5, r16);
  L44():
    r20 = dyn attr__(l1, NULL, "error.message", r19);
    check L45() else D20();
  D20():
    deopt 57 [r19, r20];
  L45():
    st `last.dump` = r20;
    l2 = ld `last.dump`;
    class__ = ldf `class<-`;
    check L46() else D21();
  D21():
    deopt 62 ["dump.frames", l2, "dump.frames"];
  L46():
    r21 = dyn class__(l2, NULL, "dump.frames");
    check L47() else D22();
  D22():
    deopt 64 ["dump.frames", r21];
  L47():
    st `last.dump` = r21;
    dumpto1 = ld dumpto;
    check L48() else D23();
  D23():
    deopt 66 [dumpto1];
  L48():
    dumpto2 = force? dumpto1;
    checkMissing(dumpto2);
    r22 = `!=`(dumpto2, "last.dump");
    c3 = `as.logical`(r22);
    if c3 then L49() else L9();
  L9():
    goto L10();
  L10():
    to_file1 = ld `to.file`;
    check L53() else D26();
  L49():
    assign = ldf assign;
    check L50() else D24();
  D24():
    deopt 71 [];
  D26():
    deopt 77 [to_file1];
  L50():
    p2 = prom<V +>{
      dumpto3 = ld dumpto;
      dumpto4 = force? dumpto3;
      checkMissing(dumpto4);
      return dumpto4;
    };
    p3 = prom<V +>{
      last_dump11 = ld `last.dump`;
      last_dump12 = force? last_dump11;
      checkMissing(last_dump12);
      return last_dump12;
    };
    r25 = dyn assign(p2, p3);
    check L51() else D25();
  L53():
    to_file2 = force? to_file1;
    checkMissing(to_file2);
    c4 = `as.logical`(to_file2);
    if c4 then L54() else L11();
  D25():
    deopt 74 [r25];
  L11():
    assign1 = ldf assign;
    check L58() else D29();
  L12():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L51():
    goto L10();
  L54():
    save = ldf save;
    check L55() else D27();
  D27():
    deopt 80 [];
  D29():
    deopt 87 [];
  L13(r38):
    popenv;
    return r38;
  L55():
    p4 = prom<V +>{
      dumpto5 = ld dumpto;
      dumpto6 = force? dumpto5;
      checkMissing(dumpto6);
      return dumpto6;
    };
    p6 = prom<V +>{
      paste0 = ldf paste0;
      p5 = prom<V +>{
        dumpto7 = ld dumpto;
        dumpto8 = force? dumpto7;
        checkMissing(dumpto8);
        return dumpto8;
      };
      r29 = dyn paste0(p5, ".rda");
      return r29;
    };
    r31 = dyn save[list, file](p4, p6);
    check L56() else D28();
  L58():
    p7 = prom<V +>{
      dumpto9 = ld dumpto;
      dumpto10 = force? dumpto9;
      checkMissing(dumpto10);
      return dumpto10;
    };
    p8 = prom<V +>{
      last_dump13 = ld `last.dump`;
      last_dump14 = force? last_dump13;
      checkMissing(last_dump14);
      return last_dump14;
    };
    p9 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r36 = dyn assign1[, , envir](p7, p8, p9);
    check L59() else D30();
  L60():
    invisible = ldf invisible in base;
    r39 = dyn invisible();
    check L62() else D31();
  L61():
    r37 = dyn base3();
    goto L13(r37);
  D28():
    deopt 85 [r31];
  D30():
    deopt 92 [r36];
  D31():
    deopt 96 [r39];
  L56():
    goto L12();
  L59():
    goto L12();
  L62():
    goto L13(r39);
  }
}