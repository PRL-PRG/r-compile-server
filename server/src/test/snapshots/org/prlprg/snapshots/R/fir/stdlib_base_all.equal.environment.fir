fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1204728016;
    st `all.equal.environment` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1204728016(target, current, `all.names`, evaluate, `...`) {
  (reg target:*, reg current:*, reg all_names:*, reg evaluate:*, reg ddd:dots) -+> V { var target:*, var current:*, var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var evaluate:*, reg evaluate_isMissing:L, reg evaluate_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg target1:*, reg target2:V, reg is_environment:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg current1:*, reg current2:V, reg is_environment1:cls, reg r8:V, reg r9:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg target3:*, reg target4:V, reg current3:*, reg current4:V, reg identical:cls, reg r14:V, reg c2:L, reg dynGet:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg ae_run:*, reg ae_run1:V, reg c3:V, reg c4:L, reg environment:cls, reg r20:V, reg r22:cls, reg do1:cls, reg ae_run2:*, reg ae_run3:V, reg p:p(V +), reg r24:V, reg c5:L, reg evaluate1:*, reg evaluate2:V, reg c6:L, reg as_list_environment:cls, reg target5:*, reg target6:V, reg p1:p(V +), reg all_names1:*, reg all_names2:V, reg p2:p(V +), reg r28:V, reg as_list_environment1:cls, reg current5:*, reg current6:V, reg p3:p(V +), reg all_names3:*, reg all_names4:V, reg p4:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg Lt:*, reg Lt1:V, reg Lc:*, reg Lc1:V, reg identical1:cls, reg r34:V, reg c7:L, reg all_equal_list:cls, reg Lt2:*, reg Lt3:V, reg p5:p(V +), reg Lc2:*, reg Lc3:V, reg p6:p(V +), reg ddd1:dots?, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg sort:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg target7:*, reg target8:V, reg names:cls, reg r42:V, reg p7:p(V +), reg r44:V, reg sort1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg current7:*, reg current8:V, reg names1:cls, reg r47:V, reg p8:p(V +), reg r49:V, reg identical2:cls, reg r50:V, reg r51:V, reg c8:L, reg paste:cls, reg all_equal:cls, reg nt:*, reg nt1:V, reg p9:p(V +), reg nc:*, reg nc1:V, reg p10:p(V +), reg ddd2:dots?, reg r54:V, reg p11:p(V +), reg r56:V |
    mkenv;
    st target = target;
    st current = current;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L0(TRUE) else L0(all_names);
  L0(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    evaluate_isMissing = missing.0(evaluate);
    if evaluate_isMissing then L1(TRUE) else L1(evaluate);
  L1(evaluate_orDefault):
    st evaluate = evaluate_orDefault;
    st `...` = ddd;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L24() else L3();
  L20():
    target1 = ld target;
    check L22() else D0();
  L21():
    r = dyn base(<sym target>);
    goto L2(r);
  D0():
    deopt 2 [target1];
  L3():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L22():
    target2 = force? target1;
    checkMissing(target2);
    is_environment = ldf `is.environment` in base;
    r2 = dyn is_environment(target2);
    check L23() else D1();
  L24():
    popenv;
    return "'target' is not an environment";
  D1():
    deopt 5 [r2];
  L5(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L31() else L6();
  L23():
    goto L2(r2);
  L27():
    current1 = ld current;
    check L29() else D2();
  L28():
    r6 = dyn base1(<sym current>);
    goto L5(r6);
  D2():
    deopt 14 [current1];
  L6():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L29():
    current2 = force? current1;
    checkMissing(current2);
    is_environment1 = ldf `is.environment` in base;
    r8 = dyn is_environment1(current2);
    check L30() else D3();
  L31():
    popenv;
    return "'current' is not an environment";
  D3():
    deopt 17 [r8];
  L8(r13):
    c2 = `as.logical`(r13);
    if c2 then L39() else L9();
  L30():
    goto L5(r8);
  L34():
    target3 = ld target;
    check L36() else D4();
  L35():
    r12 = dyn base2(<sym target>, <sym current>);
    goto L8(r12);
  D4():
    deopt 26 [target3];
  L9():
    dynGet = ldf dynGet;
    check L42() else D7();
  L36():
    target4 = force? target3;
    checkMissing(target4);
    current3 = ld current;
    check L37() else D5();
  L39():
    popenv;
    return TRUE;
  D5():
    deopt 28 [current3];
  D7():
    deopt 45 [];
  L37():
    current4 = force? current3;
    checkMissing(current4);
    identical = ldf identical in base;
    r14 = dyn identical(target4, current4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L38() else D6();
  L42():
    r17 = dyn dynGet("__all.eq.E__", NULL);
    check L43() else D8();
  D6():
    deopt 38 [r14];
  D8():
    deopt 48 [r17];
  L38():
    goto L8(r14);
  L43():
    st `ae.run` = r17;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L11(r19):
    c4 = `as.logical`(r19);
    if c4 then L47() else L12();
  L44():
    ae_run = ld `ae.run`;
    check L46() else D9();
  L45():
    r18 = dyn base3(<sym ae.run>);
    goto L11(r18);
  D9():
    deopt 51 [ae_run];
  L12():
    r22 = clos inner3233253192;
    st do1 = r22;
    do1 = ldf do1;
    check L51() else D12();
  L13():
    evaluate1 = ld evaluate;
    check L56() else D14();
  L46():
    ae_run1 = force? ae_run;
    checkMissing(ae_run1);
    c3 = `==`(ae_run1, NULL);
    goto L11(c3);
  L47():
    environment = ldf environment;
    check L48() else D10();
  D10():
    deopt 55 [];
  D12():
    deopt 62 [];
  D14():
    deopt 70 [evaluate1];
  L48():
    r20 = dyn environment();
    check L49() else D11();
  L51():
    p = prom<V +>{
      ae_run2 = ld `ae.run`;
      ae_run3 = force? ae_run2;
      checkMissing(ae_run3);
      return ae_run3;
    };
    r24 = dyn do1(p);
    check L52() else D13();
  L56():
    evaluate2 = force? evaluate1;
    checkMissing(evaluate2);
    c6 = `as.logical`(evaluate2);
    if c6 then L57() else L15();
  D11():
    deopt 56 [r20];
  D13():
    deopt 64 [r24];
  L15():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L49():
    st `__all.eq.E__` = r20;
    goto L13();
  L52():
    c5 = `as.logical`(r24);
    if c5 then L53() else L14();
  L57():
    as_list_environment = ldf `as.list.environment`;
    check L58() else D15();
  D15():
    deopt 73 [];
  L14():
    goto L13();
  L18(r39):
    r51 = `!`(r39);
    c8 = `as.logical`(r51);
    if c8 then L79() else L19();
  L53():
    popenv;
    return TRUE;
  L58():
    p1 = prom<V +>{
      target5 = ld target;
      target6 = force? target5;
      checkMissing(target6);
      return target6;
    };
    p2 = prom<V +>{
      all_names1 = ld `all.names`;
      all_names2 = force? all_names1;
      checkMissing(all_names2);
      return all_names2;
    };
    r28 = dyn as_list_environment[, `all.names`, sorted](p1, p2, TRUE);
    check L59() else D16();
  L72():
    sort = ldf sort;
    check L74() else D24();
  L73():
    r38 = dyn base5(<lang `<-`(nt, sort(names(target)))>, <lang `<-`(nc, sort(names(current)))>);
    goto L18(r38);
  D16():
    deopt 79 [r28];
  D24():
    deopt 116 [];
  L19():
    popenv;
    return "environments contain objects of the same names, but are not identical";
  L59():
    st Lt = r28;
    as_list_environment1 = ldf `as.list.environment`;
    check L60() else D17();
  L74():
    p7 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      target7 = ld target;
      target8 = force? target7;
      checkMissing(target8);
      names = ldf names in base;
      r42 = dyn names(target8);
      goto L0(r42);
    L2():
      r40 = dyn base6(<sym target>);
      goto L0(r40);
    };
    r44 = dyn sort(p7);
    check L75() else D25();
  L79():
    paste = ldf paste;
    check L80() else D29();
  D17():
    deopt 82 [];
  D25():
    deopt 118 [r44];
  D29():
    deopt 136 [];
  L60():
    p3 = prom<V +>{
      current5 = ld current;
      current6 = force? current5;
      checkMissing(current6);
      return current6;
    };
    p4 = prom<V +>{
      all_names3 = ld `all.names`;
      all_names4 = force? all_names3;
      checkMissing(all_names4);
      return all_names4;
    };
    r31 = dyn as_list_environment1[, `all.names`, sorted](p3, p4, TRUE);
    check L61() else D18();
  L75():
    st nt = r44;
    sort1 = ldf sort;
    check L76() else D26();
  L80():
    p11 = prom<V +>{
      all_equal = ldf `all.equal`;
      p9 = prom<V +>{
        nt = ld nt;
        nt1 = force? nt;
        checkMissing(nt1);
        return nt1;
      };
      p10 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        return nc1;
      };
      ddd2 = ld `...`;
      r54 = dyn all_equal[, , `...`](p9, p10, ddd2);
      return r54;
    };
    r56 = dyn paste[, , collapse]("names of environments differ:", p11, " ");
    check L81() else D30();
  D18():
    deopt 88 [r31];
  D26():
    deopt 121 [];
  D30():
    deopt 141 [r56];
  L61():
    st Lc = r31;
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L76():
    p8 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      current7 = ld current;
      current8 = force? current7;
      checkMissing(current8);
      names1 = ldf names in base;
      r47 = dyn names1(current8);
      goto L0(r47);
    L2():
      r45 = dyn base7(<sym current>);
      goto L0(r45);
    };
    r49 = dyn sort1(p8);
    check L77() else D27();
  L81():
    popenv;
    return r56;
  D27():
    deopt 123 [r49];
  L16(r33):
    c7 = `as.logical`(r33);
    if c7 then L67() else L17();
  L62():
    Lt = ld Lt;
    check L64() else D19();
  L63():
    r32 = dyn base4(<sym Lt>, <sym Lc>);
    goto L16(r32);
  L77():
    st nc = r49;
    identical2 = ldf identical in base;
    r50 = dyn identical2(r44, r49, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L78() else D28();
  D19():
    deopt 92 [Lt];
  D28():
    deopt 133 [r50];
  L17():
    all_equal_list = ldf `all.equal.list`;
    check L69() else D22();
  L64():
    Lt1 = force? Lt;
    checkMissing(Lt1);
    Lc = ld Lc;
    check L65() else D20();
  L67():
    popenv;
    return TRUE;
  L78():
    goto L18(r50);
  D20():
    deopt 94 [Lc];
  D22():
    deopt 108 [];
  L65():
    Lc1 = force? Lc;
    checkMissing(Lc1);
    identical1 = ldf identical in base;
    r34 = dyn identical1(Lt1, Lc1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L66() else D21();
  L69():
    p5 = prom<V +>{
      Lt2 = ld Lt;
      Lt3 = force? Lt2;
      checkMissing(Lt3);
      return Lt3;
    };
    p6 = prom<V +>{
      Lc2 = ld Lc;
      Lc3 = force? Lc2;
      checkMissing(Lc3);
      return Lc3;
    };
    ddd1 = ld `...`;
    r37 = dyn all_equal_list[, , `...`](p5, p6, ddd1);
    check L70() else D23();
  D21():
    deopt 104 [r34];
  D23():
    deopt 112 [r37];
  L66():
    goto L16(r34);
  L70():
    popenv;
    return r37;
  }
}
fun inner3233253192(em) {
  (reg em:*) -+> V { var em:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg target:*, reg target1:V, reg em1:*, reg em2:V, reg c:L, reg em4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg identical:cls, reg r3:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c6:L, reg r5:V, reg current:*, reg current1:V, reg em5:*, reg em6:V, reg c7:L, reg c9:L, reg em8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c11:L, reg dx3:V, reg r6:V, reg identical1:cls, reg r7:V, reg c12:L, reg c13:V, reg c15:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg em9:*, reg em10:V, reg c16:L, reg em12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg c17:V, reg r11:V, reg c18:L, reg do1:cls, reg em13:*, reg em14:V, reg c19:L, reg em16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p:p(V +), reg r14:V, reg new_env:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg emptyenv:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg target2:*, reg target3:V, reg l:*, reg c20:L, reg target5:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r20:V, reg current2:*, reg current3:V, reg l3:*, reg c21:L, reg current5:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r21:V, reg e:*, reg e1:V, reg l6:*, reg c22:L, reg e3:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r22:V |
    mkenv;
    st em = em;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L1(c1);
  L6():
    target = ld target;
    check L8() else D0();
  L7():
    r = dyn base(<sym target>, <lang `$`(em, target)>);
    goto L0(r);
  D0():
    deopt 2 [target];
  L1(c3):
    c15 = `as.logical`(c3);
    if c15 then L26() else L3();
  L8():
    target1 = force? target;
    checkMissing(target1);
    em1 = ld em;
    check L9() else D1();
  L15():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D1():
    deopt 4 [em1];
  L2(c6, r5):
    c12 = `as.logical`(r5);
    c13 = `&&`(c6, c12);
    goto L1(c13);
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L9():
    em2 = force? em1;
    checkMissing(em2);
    c = `is.object`(em2);
    if c then L11() else L12(em2);
  L16():
    current = ld current;
    check L18() else D3();
  L17():
    r4 = dyn base1(<sym current>, <lang `$`(em, current)>);
    goto L2(c1, r4);
  L26():
    popenv;
    return TRUE;
  D3():
    deopt 18 [c1, current];
  L4(r9):
    r11 = `!`(r9);
    c18 = `as.logical`(r11);
    if c18 then L35() else L5();
  L10(dx1):
    identical = ldf identical in base;
    r3 = dyn identical(target1, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L14() else D2();
  L11():
    dr = tryDispatchBuiltin.1("$", em2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(em4):
    r2 = `$`(em4, <sym target>);
    goto L10(r2);
  L18():
    current1 = force? current;
    checkMissing(current1);
    em5 = ld em;
    check L19() else D4();
  L28():
    em9 = ld em;
    check L30() else D6();
  L29():
    r8 = dyn base2(<lang `$`(em, mm)>);
    goto L4(r8);
  D2():
    deopt 15 [r3];
  D4():
    deopt 20 [c1, em5];
  D6():
    deopt 36 [em9];
  L5():
    new_env = ldf `new.env`;
    check L39() else D9();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    goto L0(r3);
  L19():
    em6 = force? em5;
    checkMissing(em6);
    c7 = `is.object`(em6);
    if c7 then L21() else L22(c1, em6);
  L30():
    em10 = force? em9;
    checkMissing(em10);
    c16 = `is.object`(em10);
    if c16 then L32() else L33(em10);
  L35():
    do1 = ldf do1;
    check L36() else D7();
  D7():
    deopt 42 [];
  D9():
    deopt 46 [];
  L20(c11, dx3):
    identical1 = ldf identical in base;
    r7 = dyn identical1(current1, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D5();
  L21():
    dr2 = tryDispatchBuiltin.1("$", em6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(c1, dr2);
  L22(c9, em8):
    r6 = `$`(em8, <sym current>);
    goto L20(c9, r6);
  L31(dx5):
    c17 = `==`(dx5, NULL);
    goto L4(c17);
  L32():
    dr4 = tryDispatchBuiltin.1("$", em10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(em12):
    r10 = `$`(em12, <sym mm>);
    goto L31(r10);
  L36():
    p = prom<V +>{
      em13 = ld em;
      em14 = force? em13;
      checkMissing(em14);
      c19 = `is.object`(em14);
      if c19 then L1() else L2(em14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", em14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(em16):
      r12 = `$`(em16, <sym mm>);
      goto L0(r12);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r14 = dyn do1(p);
    check L37() else D8();
  L39():
    p1 = prom<V +>{
      sym3 = ldf emptyenv;
      base3 = ldf emptyenv in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      emptyenv = ldf emptyenv in base;
      r17 = dyn emptyenv();
      goto L0(r17);
    L2():
      r15 = dyn base3();
      goto L0(r15);
    };
    r19 = dyn new_env[parent](p1);
    check L40() else D10();
  D5():
    deopt 31 [c11, r7];
  D8():
    deopt 44 [r14];
  D10():
    deopt 49 [r19];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(c1, dx2);
  L24():
    goto L2(c11, r7);
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L37():
    popenv;
    return r14;
  L40():
    st e = r19;
    target2 = ld target;
    check L41() else D11();
  D11():
    deopt 51 [target2];
  L41():
    target3 = force? target2;
    checkMissing(target3);
    l = ld e;
    c20 = `is.object`(l);
    if c20 then L43() else L44(target3, l);
  L42(dx9):
    st e = dx9;
    current2 = ld current;
    check L46() else D12();
  L43():
    dr8 = tryDispatchBuiltin.0("$<-", l, target3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(target3, dr8);
  L44(target5, l2):
    r20 = `$<-`(l2, <sym target>, target3);
    goto L42(r20);
  D12():
    deopt 56 [current2];
  L45():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L46():
    current3 = force? current2;
    checkMissing(current3);
    l3 = ld e;
    c21 = `is.object`(l3);
    if c21 then L48() else L49(current3, l3);
  L47(dx11):
    st e = dx11;
    e = ld e;
    check L51() else D13();
  L48():
    dr10 = tryDispatchBuiltin.0("$<-", l3, current3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L50() else L49(current3, dr10);
  L49(current5, l5):
    r21 = `$<-`(l5, <sym current>, current3);
    goto L47(r21);
  D13():
    deopt 61 [e];
  L50():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L47(dx10);
  L51():
    e1 = force? e;
    checkMissing(e1);
    l6 = ld em;
    c22 = `is.object`(l6);
    if c22 then L53() else L54(e1, l6);
  L52(dx13):
    st em = dx13;
    popenv;
    return FALSE;
  L53():
    dr12 = tryDispatchBuiltin.0("$<-", l6, e1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L55() else L54(e1, dr12);
  L54(e3, l8):
    r22 = `$<-`(l8, <sym mm>, e1);
    goto L52(r22);
  L55():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L52(dx12);
  }
}