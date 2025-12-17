fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1109396459;
    st `.newOrMultipleMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1109396459(obj, what, table) {
  (reg obj:*, reg what:*, reg table:*) -+> V { var obj:*, var what:*, var table:*, reg _duplicateClassesExist:cls, reg r:V, reg r1:V, reg c:L, reg obj1:*, reg obj2:V, reg get:cls, reg what1:*, reg what2:V, reg p:p(V +), reg table1:*, reg table2:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg current:*, reg current1:V, reg is_environment:cls, reg r9:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg obj3:*, reg obj4:V, reg is_environment1:cls, reg r12:V, reg c2:L, reg list2env:cls, reg as_list:cls, reg obj5:*, reg obj6:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg current2:*, reg current3:V, reg p4:p(V +), reg r17:V, reg is:cls, reg obj7:*, reg obj8:V, reg p5:p(V +), reg r20:V, reg c3:L, reg _pkgMethodLabel:cls, reg obj9:*, reg obj10:V, reg p6:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg var:*, reg var1:V, reg nzchar:cls, reg r25:V, reg c4:L, reg assign:cls, reg var2:*, reg var3:V, reg p7:p(V +), reg obj11:*, reg obj12:V, reg p8:p(V +), reg current4:*, reg current5:V, reg p9:p(V +), reg r29:V, reg r30:V, reg current6:*, reg current7:V, reg is1:cls, reg current8:*, reg current9:V, reg p10:p(V +), reg r32:V, reg c5:L, reg packageSlot:cls, reg __:cls, reg r33:V, reg p11:p(V +), reg r35:V, reg is2:cls, reg obj13:*, reg obj14:V, reg p12:p(V +), reg r37:V, reg c6:L, reg packageSlot1:cls, reg __1:cls, reg r38:V, reg p13:p(V +), reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg curPkg:*, reg curPkg1:V, reg c7:V, reg c8:L, reg c9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg c13:L, reg r44:V, reg objPkg:*, reg objPkg1:V, reg c14:V, reg c15:L, reg c16:V, reg c18:L, reg c19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg c23:L, reg r46:V, reg curPkg2:*, reg curPkg3:V, reg objPkg2:*, reg objPkg3:V, reg identical:cls, reg r47:V, reg c24:L, reg c25:V, reg c27:L, reg obj15:*, reg obj16:V, reg new_env:cls, reg r48:V, reg _pkgMethodLabel1:cls, reg obj17:*, reg obj18:V, reg p14:p(V +), reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg var4:*, reg var5:V, reg nzchar1:cls, reg r53:V, reg c28:L, reg assign1:cls, reg var6:*, reg var7:V, reg p15:p(V +), reg obj19:*, reg obj20:V, reg p16:p(V +), reg merge:*, reg merge1:V, reg p17:p(V +), reg r57:V, reg _pkgMethodLabel2:cls, reg current10:*, reg current11:V, reg p18:p(V +), reg r60:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg var8:*, reg var9:V, reg nzchar2:cls, reg r63:V, reg c29:L, reg assign2:cls, reg var10:*, reg var11:V, reg p19:p(V +), reg current12:*, reg current13:V, reg p20:p(V +), reg merge2:*, reg merge3:V, reg p21:p(V +), reg r67:V, reg merge4:*, reg merge5:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg obj21:*, reg obj22:V, reg is_environment2:cls, reg r71:V, reg c30:L, reg new_env1:cls, reg r72:V, reg assign3:cls, reg _pkgMethodLabel3:cls, reg current14:*, reg current15:V, reg p22:p(V +), reg r74:V, reg p23:p(V +), reg current16:*, reg current17:V, reg p24:p(V +), reg merge6:*, reg merge7:V, reg p25:p(V +), reg r78:V, reg list2env1:cls, reg as_list1:cls, reg obj23:*, reg obj24:V, reg p26:p(V +), reg r80:V, reg p27:p(V +), reg merge8:*, reg merge9:V, reg p28:p(V +), reg r83:V, reg merge10:*, reg merge11:V, reg current18:*, reg current19:V |
    mkenv;
    st obj = obj;
    st what = what;
    st table = table;
    _duplicateClassesExist = ldf `.duplicateClassesExist`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    r = dyn _duplicateClassesExist();
    check L28() else D1();
  D1():
    deopt 2 [r];
  L28():
    r1 = `!`(r);
    c = `as.logical`(r1);
    if c then L29() else L0();
  L0():
    get = ldf get;
    check L33() else D3();
  L29():
    obj1 = ld obj;
    check L30() else D2();
  D2():
    deopt 4 [obj1];
  D3():
    deopt 10 [];
  L30():
    obj2 = force? obj1;
    checkMissing(obj2);
    popenv;
    return obj2;
  L33():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p1 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r6 = dyn get[, envir](p, p1);
    check L34() else D4();
  D4():
    deopt 14 [r6];
  L34():
    st current = r6;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L39() else L3();
  L35():
    current = ld current;
    check L37() else D5();
  L36():
    r7 = dyn base(<sym current>);
    goto L2(r7);
  D5():
    deopt 18 [current];
  L3():
    is1 = ldf is;
    check L64() else D20();
  L37():
    current1 = force? current;
    checkMissing(current1);
    is_environment = ldf `is.environment` in base;
    r9 = dyn is_environment(current1);
    check L38() else D6();
  L39():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  D6():
    deopt 21 [r9];
  D20():
    deopt 63 [];
  L4(r11):
    c2 = `as.logical`(r11);
    if c2 then L44() else L5();
  L38():
    goto L2(r9);
  L40():
    obj3 = ld obj;
    check L42() else D7();
  L41():
    r10 = dyn base1(<sym obj>);
    goto L4(r10);
  L64():
    p10 = prom<V +>{
      current8 = ld current;
      current9 = force? current8;
      checkMissing(current9);
      return current9;
    };
    r32 = dyn is1(p10, "MethodDefinition");
    check L65() else D21();
  D7():
    deopt 24 [obj3];
  D21():
    deopt 66 [r32];
  L5():
    is = ldf is;
    check L48() else D11();
  L6():
    current6 = ld current;
    check L62() else D19();
  L42():
    obj4 = force? obj3;
    checkMissing(obj4);
    is_environment1 = ldf `is.environment` in base;
    r12 = dyn is_environment1(obj4);
    check L43() else D8();
  L44():
    list2env = ldf list2env;
    check L45() else D9();
  L65():
    c5 = `as.logical`(r32);
    if c5 then L66() else L11();
  D8():
    deopt 27 [r12];
  D9():
    deopt 29 [];
  D11():
    deopt 34 [];
  D19():
    deopt 60 [current6];
  L11():
    invisible.0();
    popenv;
    return NULL;
  L43():
    goto L4(r12);
  L45():
    p3 = prom<V +>{
      as_list = ldf `as.list`;
      p2 = prom<V +>{
        obj5 = ld obj;
        obj6 = force? obj5;
        checkMissing(obj6);
        return obj6;
      };
      r14 = dyn as_list[, `all.names`](p2, TRUE);
      return r14;
    };
    p4 = prom<V +>{
      current2 = ld current;
      current3 = force? current2;
      checkMissing(current3);
      return current3;
    };
    r17 = dyn list2env(p3, p4);
    check L46() else D10();
  L48():
    p5 = prom<V +>{
      obj7 = ld obj;
      obj8 = force? obj7;
      checkMissing(obj8);
      return obj8;
    };
    r20 = dyn is(p5, "MethdodDefinition");
    check L49() else D12();
  L62():
    current7 = force? current6;
    checkMissing(current7);
    popenv;
    return current7;
  L66():
    packageSlot = ldf packageSlot;
    check L67() else D22();
  D10():
    deopt 32 [r17];
  D12():
    deopt 37 [r20];
  D22():
    deopt 68 [];
  L46():
    goto L6();
  L49():
    c3 = `as.logical`(r20);
    if c3 then L50() else L7();
  L67():
    p11 = prom<V +>{
      __ = ldf `@` in base;
      r33 = dyn __(<sym current>, <sym defined>);
      return r33;
    };
    r35 = dyn packageSlot(p11);
    check L68() else D23();
  D23():
    deopt 70 [r35];
  L7():
    goto L6();
  L50():
    _pkgMethodLabel = ldf `.pkgMethodLabel`;
    check L51() else D13();
  L68():
    st curPkg = r35;
    is2 = ldf is;
    check L69() else D24();
  D13():
    deopt 39 [];
  D24():
    deopt 73 [];
  L51():
    p6 = prom<V +>{
      obj9 = ld obj;
      obj10 = force? obj9;
      checkMissing(obj10);
      return obj10;
    };
    r22 = dyn _pkgMethodLabel(p6);
    check L52() else D14();
  L69():
    p12 = prom<V +>{
      obj13 = ld obj;
      obj14 = force? obj13;
      checkMissing(obj14);
      return obj14;
    };
    r37 = dyn is2(p12, "MethodDefinition");
    check L70() else D25();
  D14():
    deopt 41 [r22];
  D25():
    deopt 76 [r37];
  L52():
    st var = r22;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  L70():
    c6 = `as.logical`(r37);
    if c6 then L71() else L12();
  L8(r24):
    c4 = `as.logical`(r24);
    if c4 then L57() else L9();
  L12():
    sym8 = ldf `is.environment`;
    base8 = ldf `is.environment` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L116() else L117();
  L53():
    var = ld var;
    check L55() else D15();
  L54():
    r23 = dyn base2(<sym var>);
    goto L8(r23);
  L71():
    packageSlot1 = ldf packageSlot;
    check L72() else D26();
  D15():
    deopt 45 [var];
  D26():
    deopt 78 [];
  L9():
    goto L10(NULL);
  L10(r30):
    goto L6();
  L25(r70):
    c30 = `as.logical`(r70);
    if c30 then L120() else L26();
  L55():
    var1 = force? var;
    checkMissing(var1);
    nzchar = ldf nzchar in base;
    r25 = dyn nzchar(var1);
    check L56() else D16();
  L57():
    assign = ldf assign;
    check L58() else D17();
  L72():
    p13 = prom<V +>{
      __1 = ldf `@` in base;
      r38 = dyn __1(<sym obj>, <sym defined>);
      return r38;
    };
    r40 = dyn packageSlot1(p13);
    check L73() else D27();
  L116():
    obj21 = ld obj;
    check L118() else D49();
  L117():
    r69 = dyn base8(<sym obj>);
    goto L25(r69);
  D16():
    deopt 48 [r25];
  D17():
    deopt 50 [];
  D27():
    deopt 80 [r40];
  D49():
    deopt 157 [obj21];
  L26():
    current18 = ld current;
    check L129() else D58();
  L56():
    goto L8(r25);
  L58():
    p7 = prom<V +>{
      var2 = ld var;
      var3 = force? var2;
      checkMissing(var3);
      return var3;
    };
    p8 = prom<V +>{
      obj11 = ld obj;
      obj12 = force? obj11;
      checkMissing(obj12);
      return obj12;
    };
    p9 = prom<V +>{
      current4 = ld current;
      current5 = force? current4;
      checkMissing(current5);
      return current5;
    };
    r29 = dyn assign[, , envir](p7, p8, p9);
    check L59() else D18();
  L73():
    st objPkg = r40;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L118():
    obj22 = force? obj21;
    checkMissing(obj22);
    is_environment2 = ldf `is.environment` in base;
    r71 = dyn is_environment2(obj22);
    check L119() else D50();
  L120():
    new_env1 = ldf `new.env`;
    check L121() else D51();
  D18():
    deopt 55 [r29];
  D50():
    deopt 160 [r71];
  D51():
    deopt 162 [];
  D58():
    deopt 179 [current18];
  L13(r42):
    c8 = `as.logical`(r42);
    if c8 then L14(c8) else L77();
  L59():
    goto L10(r29);
  L74():
    curPkg = ld curPkg;
    check L76() else D28();
  L75():
    r41 = dyn base3(<sym curPkg>);
    goto L13(r41);
  L119():
    goto L25(r71);
  L121():
    r72 = dyn new_env1();
    check L122() else D52();
  L129():
    current19 = force? current18;
    checkMissing(current19);
    popenv;
    return current19;
  D28():
    deopt 83 [curPkg];
  D52():
    deopt 163 [r72];
  L14(c9):
    c18 = `as.logical`(c9);
    if c18 then L16(c18) else L82();
  L76():
    curPkg1 = force? curPkg;
    checkMissing(curPkg1);
    c7 = `==`(curPkg1, NULL);
    goto L13(c7);
  L77():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  L122():
    st merge = r72;
    assign3 = ldf assign;
    check L123() else D53();
  D53():
    deopt 166 [];
  L15(c13, r44):
    c15 = `as.logical`(r44);
    c16 = `||`(c13, c15);
    goto L14(c16);
  L16(c19):
    c27 = `as.logical`(c19);
    if c27 then L89() else L18();
  L78():
    objPkg = ld objPkg;
    check L80() else D29();
  L79():
    r43 = dyn base4(<sym objPkg>);
    goto L15(c8, r43);
  L82():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L123():
    p23 = prom<V +>{
      _pkgMethodLabel3 = ldf `.pkgMethodLabel`;
      p22 = prom<V +>{
        current14 = ld current;
        current15 = force? current14;
        checkMissing(current15);
        return current15;
      };
      r74 = dyn _pkgMethodLabel3(p22);
      return r74;
    };
    p24 = prom<V +>{
      current16 = ld current;
      current17 = force? current16;
      checkMissing(current17);
      return current17;
    };
    p25 = prom<V +>{
      merge6 = ld merge;
      merge7 = force? merge6;
      checkMissing(merge7);
      return merge7;
    };
    r78 = dyn assign3[, , envir](p23, p24, p25);
    check L124() else D54();
  D29():
    deopt 87 [c8, objPkg];
  D54():
    deopt 171 [r78];
  L17(c23, r46):
    c24 = `as.logical`(r46);
    c25 = `||`(c23, c24);
    goto L16(c25);
  L18():
    new_env = ldf `new.env`;
    check L92() else D34();
  L80():
    objPkg1 = force? objPkg;
    checkMissing(objPkg1);
    c14 = `==`(objPkg1, NULL);
    goto L15(c8, c14);
  L83():
    curPkg2 = ld curPkg;
    check L85() else D30();
  L84():
    r45 = dyn base5(<sym curPkg>, <sym objPkg>);
    goto L17(c18, r45);
  L89():
    obj15 = ld obj;
    check L90() else D33();
  L124():
    list2env1 = ldf list2env;
    check L125() else D55();
  D30():
    deopt 93 [c18, curPkg2];
  D33():
    deopt 107 [obj15];
  D34():
    deopt 110 [];
  D55():
    deopt 173 [];
  L85():
    curPkg3 = force? curPkg2;
    checkMissing(curPkg3);
    objPkg2 = ld objPkg;
    check L86() else D31();
  L90():
    obj16 = force? obj15;
    checkMissing(obj16);
    popenv;
    return obj16;
  L92():
    r48 = dyn new_env();
    check L93() else D35();
  L125():
    p27 = prom<V +>{
      as_list1 = ldf `as.list`;
      p26 = prom<V +>{
        obj23 = ld obj;
        obj24 = force? obj23;
        checkMissing(obj24);
        return obj24;
      };
      r80 = dyn as_list1[, `all.names`](p26, TRUE);
      return r80;
    };
    p28 = prom<V +>{
      merge8 = ld merge;
      merge9 = force? merge8;
      checkMissing(merge9);
      return merge9;
    };
    r83 = dyn list2env1(p27, p28);
    check L126() else D56();
  D31():
    deopt 95 [c18, objPkg2];
  D35():
    deopt 111 [r48];
  D56():
    deopt 176 [r83];
  L86():
    objPkg3 = force? objPkg2;
    checkMissing(objPkg3);
    identical = ldf identical in base;
    r47 = dyn identical(curPkg3, objPkg3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L87() else D32();
  L93():
    st merge = r48;
    _pkgMethodLabel1 = ldf `.pkgMethodLabel`;
    check L94() else D36();
  L126():
    merge10 = ld merge;
    check L127() else D57();
  D32():
    deopt 105 [c18, r47];
  D36():
    deopt 114 [];
  D57():
    deopt 177 [merge10];
  L87():
    goto L17(c18, r47);
  L94():
    p14 = prom<V +>{
      obj17 = ld obj;
      obj18 = force? obj17;
      checkMissing(obj18);
      return obj18;
    };
    r50 = dyn _pkgMethodLabel1(p14);
    check L95() else D37();
  L127():
    merge11 = force? merge10;
    checkMissing(merge11);
    popenv;
    return merge11;
  D37():
    deopt 116 [r50];
  L95():
    st var = r50;
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L96() else L97();
  L19(r52):
    c28 = `as.logical`(r52);
    if c28 then L100() else L20();
  L96():
    var4 = ld var;
    check L98() else D38();
  L97():
    r51 = dyn base6(<sym var>);
    goto L19(r51);
  D38():
    deopt 120 [var4];
  L20():
    goto L21();
  L21():
    _pkgMethodLabel2 = ldf `.pkgMethodLabel`;
    check L104() else D42();
  L98():
    var5 = force? var4;
    checkMissing(var5);
    nzchar1 = ldf nzchar in base;
    r53 = dyn nzchar1(var5);
    check L99() else D39();
  L100():
    assign1 = ldf assign;
    check L101() else D40();
  D39():
    deopt 123 [r53];
  D40():
    deopt 125 [];
  D42():
    deopt 134 [];
  L99():
    goto L19(r53);
  L101():
    p15 = prom<V +>{
      var6 = ld var;
      var7 = force? var6;
      checkMissing(var7);
      return var7;
    };
    p16 = prom<V +>{
      obj19 = ld obj;
      obj20 = force? obj19;
      checkMissing(obj20);
      return obj20;
    };
    p17 = prom<V +>{
      merge = ld merge;
      merge1 = force? merge;
      checkMissing(merge1);
      return merge1;
    };
    r57 = dyn assign1[, , envir](p15, p16, p17);
    check L102() else D41();
  L104():
    p18 = prom<V +>{
      current10 = ld current;
      current11 = force? current10;
      checkMissing(current11);
      return current11;
    };
    r60 = dyn _pkgMethodLabel2(p18);
    check L105() else D43();
  D41():
    deopt 130 [r57];
  D43():
    deopt 136 [r60];
  L102():
    goto L21();
  L105():
    st var = r60;
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L22(r62):
    c29 = `as.logical`(r62);
    if c29 then L110() else L23();
  L106():
    var8 = ld var;
    check L108() else D44();
  L107():
    r61 = dyn base7(<sym var>);
    goto L22(r61);
  D44():
    deopt 140 [var8];
  L23():
    goto L24();
  L24():
    merge4 = ld merge;
    check L114() else D48();
  L108():
    var9 = force? var8;
    checkMissing(var9);
    nzchar2 = ldf nzchar in base;
    r63 = dyn nzchar2(var9);
    check L109() else D45();
  L110():
    assign2 = ldf assign;
    check L111() else D46();
  D45():
    deopt 143 [r63];
  D46():
    deopt 145 [];
  D48():
    deopt 153 [merge4];
  L109():
    goto L22(r63);
  L111():
    p19 = prom<V +>{
      var10 = ld var;
      var11 = force? var10;
      checkMissing(var11);
      return var11;
    };
    p20 = prom<V +>{
      current12 = ld current;
      current13 = force? current12;
      checkMissing(current13);
      return current13;
    };
    p21 = prom<V +>{
      merge2 = ld merge;
      merge3 = force? merge2;
      checkMissing(merge3);
      return merge3;
    };
    r67 = dyn assign2[, , envir](p19, p20, p21);
    check L112() else D47();
  L114():
    merge5 = force? merge4;
    checkMissing(merge5);
    popenv;
    return merge5;
  D47():
    deopt 150 [r67];
  L112():
    goto L24();
  }
}