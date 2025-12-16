fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2061289090;
    st `R.home` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2061289090(component) {
  (reg component:*) -+> V { var component:*, reg component_isMissing:L, reg component_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg R_home:cls, reg r2:V, reg component1:*, reg component2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg i_ddd:dots, reg i:V, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg rh:*, reg rh1:V, reg _Platform:*, reg _Platform1:V, reg c16:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg r4:V, reg c17:L, reg c19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c22:L, reg r6:V, reg _Platform4:*, reg _Platform5:V, reg c23:L, reg c25:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c27:L, reg dx3:V, reg r7:V, reg nzchar:cls, reg r8:V, reg c28:L, reg c29:V, reg c31:L, reg file_path:cls, reg rh2:*, reg rh3:V, reg p:p(V +), reg component3:*, reg component4:V, reg p1:p(V +), reg p2:*, reg p3:V, reg p4:p(V +), reg r12:V, reg file_path1:cls, reg rh4:*, reg rh5:V, reg p5:p(V +), reg component5:*, reg component6:V, reg p6:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg Sys_getenv:cls, reg r18:V, reg nzchar1:cls, reg r19:V, reg c32:L, reg p7:*, reg p8:V, reg file_path2:cls, reg rh6:*, reg rh7:V, reg p9:p(V +), reg component7:*, reg component8:V, reg p10:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg Sys_getenv1:cls, reg r25:V, reg nzchar2:cls, reg r26:V, reg c33:L, reg p11:*, reg p12:V, reg file_path3:cls, reg rh8:*, reg rh9:V, reg p13:p(V +), reg component9:*, reg component10:V, reg p14:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg Sys_getenv2:cls, reg r32:V, reg nzchar3:cls, reg r33:V, reg c34:L, reg p15:*, reg p16:V, reg file_path4:cls, reg rh10:*, reg rh11:V, reg p17:p(V +), reg component11:*, reg component12:V, reg p18:p(V +), reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg _Platform8:*, reg _Platform9:V, reg c35:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r39:V, reg nzchar4:cls, reg r40:V, reg c36:L, reg file_path5:cls, reg rh12:*, reg rh13:V, reg p19:p(V +), reg component13:*, reg component14:V, reg p20:p(V +), reg p21:*, reg p22:V, reg p23:p(V +), reg r44:V, reg file_path6:cls, reg rh14:*, reg rh15:V, reg p24:p(V +), reg component15:*, reg component16:V, reg p25:p(V +), reg r47:V, reg file_path7:cls, reg rh16:*, reg rh17:V, reg p26:p(V +), reg component17:*, reg component18:V, reg p27:p(V +), reg r50:V |
    mkenv;
    component_isMissing = missing.0(component);
    if component_isMissing then L0("home") else L0(component);
  L0(component_orDefault):
    st component = component_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r1):
    st rh = r1;
    component1 = ld component;
    check L24() else D1();
  L21():
    R_home = ldf `R.home` in base;
    r2 = dyn R_home();
    check L23() else D0();
  L22():
    r = dyn base(<lang R.home()>);
    goto L1(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 5 [component1];
  L23():
    goto L1(r2);
  L24():
    component2 = force? component1;
    checkMissing(component2);
    c = `is.vector`(component2, "any");
    if c then L25() else L26();
  L25():
    c1 = inherits(component2, "factor", FALSE);
    if c1 then L27() else L28();
  L26():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L27():
    c2 = `is.character`(component2);
    if c2 then L29() else L30();
  L28():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L27();
  L2():
    rh = ld rh;
    check L45() else D2();
  L3():
    _Platform = ld `.Platform`;
    check L47() else D3();
  L4():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L5():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L6():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L7():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L102() else L103();
  L8():
    file_path7 = ldf `file.path`;
    check L117() else D34();
  L29():
    c3 = `==`.6(component2, "home");
    if c3 then L2() else L31();
  L30():
    i_ddd = dots[component2];
    i = `as.integer`(i_ddd);
    c9 = `==`.5(i, 1);
    if c9 then L2() else L37();
  D2():
    deopt 10 [rh];
  D3():
    deopt 12 [_Platform];
  D34():
    deopt 105 [];
  L13(r17):
    c32 = `as.logical`(r17);
    if c32 then L74() else L14();
  L15(r24):
    c33 = `as.logical`(r24);
    if c33 then L85() else L16();
  L17(r31):
    c34 = `as.logical`(r31);
    if c34 then L96() else L18();
  L19(r38):
    c36 = `as.logical`(r38);
    if c36 then L110() else L20();
  L31():
    c4 = `==`.6(component2, "bin");
    if c4 then L3() else L32();
  L37():
    c10 = `==`.5(i, 2);
    if c10 then L3() else L38();
  L45():
    rh1 = force? rh;
    checkMissing(rh1);
    popenv;
    return rh1;
  L47():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c16 = `is.object`(_Platform1);
    if c16 then L49() else L50(_Platform1);
  L69():
    Sys_getenv = ldf `Sys.getenv`;
    check L71() else D10();
  L70():
    r16 = dyn base2(<lang `<-`(p, Sys.getenv("R_SHARE_DIR"))>);
    goto L13(r16);
  L80():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L82() else D16();
  L81():
    r23 = dyn base3(<lang `<-`(p, Sys.getenv("R_DOC_DIR"))>);
    goto L15(r23);
  L91():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L93() else D22();
  L92():
    r30 = dyn base4(<lang `<-`(p, Sys.getenv("R_INCLUDE_DIR"))>);
    goto L17(r30);
  L102():
    _Platform8 = ld `.Platform`;
    check L104() else D28();
  L103():
    r37 = dyn base5(<lang `<-`(p, `$`(.Platform, r_arch))>);
    goto L19(r37);
  L117():
    p26 = prom<V +>{
      rh16 = ld rh;
      rh17 = force? rh16;
      checkMissing(rh17);
      return rh17;
    };
    p27 = prom<V +>{
      component17 = ld component;
      component18 = force? component17;
      checkMissing(component18);
      return component18;
    };
    r50 = dyn file_path7(p26, p27);
    check L118() else D35();
  D10():
    deopt 40 [];
  D16():
    deopt 56 [];
  D22():
    deopt 72 [];
  D28():
    deopt 87 [_Platform8];
  D35():
    deopt 108 [r50];
  L14():
    file_path2 = ldf `file.path`;
    check L77() else D14();
  L16():
    file_path3 = ldf `file.path`;
    check L88() else D20();
  L18():
    file_path4 = ldf `file.path`;
    check L99() else D26();
  L20():
    file_path6 = ldf `file.path`;
    check L114() else D32();
  L32():
    c5 = `==`.6(component2, "share");
    if c5 then L4() else L33();
  L38():
    c11 = `==`.5(i, 3);
    if c11 then L4() else L39();
  L48(dx1):
    r4 = `==`(dx1, "windows");
    c17 = `as.logical`(r4);
    if c17 then L52() else L10(c17);
  L49():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(_Platform3):
    r3 = `$`(_Platform3, <sym OS.type>);
    goto L48(r3);
  L71():
    r18 = dyn Sys_getenv("R_SHARE_DIR");
    check L72() else D11();
  L74():
    p7 = ld p;
    check L75() else D13();
  L82():
    r25 = dyn Sys_getenv1("R_DOC_DIR");
    check L83() else D17();
  L85():
    p11 = ld p;
    check L86() else D19();
  L93():
    r32 = dyn Sys_getenv2("R_INCLUDE_DIR");
    check L94() else D23();
  L96():
    p15 = ld p;
    check L97() else D25();
  L104():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c35 = `is.object`(_Platform9);
    if c35 then L106() else L107(_Platform9);
  L110():
    file_path5 = ldf `file.path`;
    check L111() else D30();
  L118():
    popenv;
    return r50;
  D11():
    deopt 42 [r18];
  D13():
    deopt 46 [p7];
  D14():
    deopt 49 [];
  D17():
    deopt 58 [r25];
  D19():
    deopt 62 [p11];
  D20():
    deopt 65 [];
  D23():
    deopt 74 [r32];
  D25():
    deopt 78 [p15];
  D26():
    deopt 81 [];
  D30():
    deopt 94 [];
  D32():
    deopt 100 [];
  L10(c19):
    c31 = `as.logical`(c19);
    if c31 then L62() else L12();
  L33():
    c6 = `==`.6(component2, "doc");
    if c6 then L5() else L34();
  L39():
    c12 = `==`.5(i, 4);
    if c12 then L5() else L40();
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L48(dx);
  L52():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L53() else L54();
  L72():
    st p = r18;
    nzchar1 = ldf nzchar in base;
    r19 = dyn nzchar1(r18);
    check L73() else D12();
  L75():
    p8 = force? p7;
    checkMissing(p8);
    popenv;
    return p8;
  L77():
    p9 = prom<V +>{
      rh6 = ld rh;
      rh7 = force? rh6;
      checkMissing(rh7);
      return rh7;
    };
    p10 = prom<V +>{
      component7 = ld component;
      component8 = force? component7;
      checkMissing(component8);
      return component8;
    };
    r22 = dyn file_path2(p9, p10);
    check L78() else D15();
  L83():
    st p = r25;
    nzchar2 = ldf nzchar in base;
    r26 = dyn nzchar2(r25);
    check L84() else D18();
  L86():
    p12 = force? p11;
    checkMissing(p12);
    popenv;
    return p12;
  L88():
    p13 = prom<V +>{
      rh8 = ld rh;
      rh9 = force? rh8;
      checkMissing(rh9);
      return rh9;
    };
    p14 = prom<V +>{
      component9 = ld component;
      component10 = force? component9;
      checkMissing(component10);
      return component10;
    };
    r29 = dyn file_path3(p13, p14);
    check L89() else D21();
  L94():
    st p = r32;
    nzchar3 = ldf nzchar in base;
    r33 = dyn nzchar3(r32);
    check L95() else D24();
  L97():
    p16 = force? p15;
    checkMissing(p16);
    popenv;
    return p16;
  L99():
    p17 = prom<V +>{
      rh10 = ld rh;
      rh11 = force? rh10;
      checkMissing(rh11);
      return rh11;
    };
    p18 = prom<V +>{
      component11 = ld component;
      component12 = force? component11;
      checkMissing(component12);
      return component12;
    };
    r36 = dyn file_path4(p17, p18);
    check L100() else D27();
  L105(dx5):
    st p = dx5;
    nzchar4 = ldf nzchar in base;
    r40 = dyn nzchar4(dx5);
    check L109() else D29();
  L106():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L108() else L107(dr4);
  L107(_Platform11):
    r39 = `$`(_Platform11, <sym r_arch>);
    goto L105(r39);
  L111():
    p19 = prom<V +>{
      rh12 = ld rh;
      rh13 = force? rh12;
      checkMissing(rh13);
      return rh13;
    };
    p20 = prom<V +>{
      component13 = ld component;
      component14 = force? component13;
      checkMissing(component14);
      return component14;
    };
    p23 = prom<V +>{
      p21 = ld p;
      p22 = force? p21;
      checkMissing(p22);
      return p22;
    };
    r44 = dyn file_path5(p19, p20, p23);
    check L112() else D31();
  L114():
    p24 = prom<V +>{
      rh14 = ld rh;
      rh15 = force? rh14;
      checkMissing(rh15);
      return rh15;
    };
    p25 = prom<V +>{
      component15 = ld component;
      component16 = force? component15;
      checkMissing(component16);
      return component16;
    };
    r47 = dyn file_path6(p24, p25);
    check L115() else D33();
  D12():
    deopt 45 [r19];
  D15():
    deopt 52 [r22];
  D18():
    deopt 61 [r26];
  D21():
    deopt 68 [r29];
  D24():
    deopt 77 [r33];
  D27():
    deopt 84 [r36];
  D29():
    deopt 92 [r40];
  D31():
    deopt 98 [r44];
  D33():
    deopt 103 [r47];
  L11(c22, r6):
    c28 = `as.logical`(r6);
    c29 = `&&`(c22, c28);
    goto L10(c29);
  L12():
    file_path1 = ldf `file.path`;
    check L66() else D8();
  L34():
    c7 = `==`.6(component2, "include");
    if c7 then L6() else L35();
  L40():
    c13 = `==`.5(i, 5);
    if c13 then L6() else L41();
  L53():
    _Platform4 = ld `.Platform`;
    check L55() else D4();
  L54():
    r5 = dyn base1(<lang `<-`(p, `$`(.Platform, r_arch))>);
    goto L11(c17, r5);
  L62():
    file_path = ldf `file.path`;
    check L63() else D6();
  L73():
    goto L13(r19);
  L78():
    popenv;
    return r22;
  L84():
    goto L15(r26);
  L89():
    popenv;
    return r29;
  L95():
    goto L17(r33);
  L100():
    popenv;
    return r36;
  L108():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L105(dx4);
  L109():
    goto L19(r40);
  L112():
    popenv;
    return r44;
  L115():
    popenv;
    return r47;
  D4():
    deopt 19 [c17, _Platform4];
  D6():
    deopt 27 [];
  D8():
    deopt 33 [];
  L35():
    c8 = `==`.6(component2, "modules");
    if c8 then L7() else L36();
  L41():
    c14 = `==`.5(i, 6);
    if c14 then L7() else L42();
  L55():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c23 = `is.object`(_Platform5);
    if c23 then L57() else L58(c17, _Platform5);
  L63():
    p = prom<V +>{
      rh2 = ld rh;
      rh3 = force? rh2;
      checkMissing(rh3);
      return rh3;
    };
    p1 = prom<V +>{
      component3 = ld component;
      component4 = force? component3;
      checkMissing(component4);
      return component4;
    };
    p4 = prom<V +>{
      p2 = ld p;
      p3 = force? p2;
      checkMissing(p3);
      return p3;
    };
    r12 = dyn file_path(p, p1, p4);
    check L64() else D7();
  L66():
    p5 = prom<V +>{
      rh4 = ld rh;
      rh5 = force? rh4;
      checkMissing(rh5);
      return rh5;
    };
    p6 = prom<V +>{
      component5 = ld component;
      component6 = force? component5;
      checkMissing(component6);
      return component6;
    };
    r15 = dyn file_path1(p5, p6);
    check L67() else D9();
  D7():
    deopt 31 [r12];
  D9():
    deopt 36 [r15];
  L36():
    goto L8();
  L42():
    c15 = `==`.5(i, 7);
    if c15 then L8() else L43();
  L56(c27, dx3):
    st p = dx3;
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(dx3);
    check L60() else D5();
  L57():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(c17, dr2);
  L58(c25, _Platform7):
    r7 = `$`(_Platform7, <sym r_arch>);
    goto L56(c25, r7);
  L64():
    popenv;
    return r12;
  L67():
    popenv;
    return r15;
  D5():
    deopt 24 [c27, r8];
  L43():
    invisible.0();
    popenv;
    return NULL;
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L56(c17, dx2);
  L60():
    goto L11(c27, r8);
  }
}