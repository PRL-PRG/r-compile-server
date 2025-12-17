fun main() {
  () -+> V { reg r:cls, reg methods:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r5:V, reg methods1:cls, reg summary:*, reg summary1:V, reg p1:p(V +), reg r7:V, reg methods2:cls, reg r8:V, reg print:cls, reg methods3:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg methods4:cls, reg r12:V, reg methods5:cls, reg r13:V, reg methods6:cls, reg r14:V, reg methods7:cls, reg r15:V, reg methods8:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg require1:cls, reg graphics:*, reg graphics1:V, reg p3:p(V +), reg r20:V, reg methods9:cls, reg axis:*, reg axis1:V, reg p4:p(V +), reg r22:V, reg methods10:cls, reg format:*, reg format1:V, reg p5:p(V +), reg r24:V, reg tail:cls, reg cbind:cls, reg format2:cls, reg mf:*, reg mf1:V, reg p6:p(V +), reg r26:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg require2:cls, reg Matrix:*, reg Matrix1:V, reg p9:p(V +), reg r34:V, reg c:L, reg print1:cls, reg methods11:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg methods12:cls, reg dim:*, reg dim1:V, reg p11:p(V +), reg r39:V, reg print2:cls, reg m:*, reg m1:V, reg p12:p(V +), reg r41:V, reg print3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg m2:*, reg m3:V, reg attr:cls, reg r44:V, reg p13:p(V +), reg r46:V |
    mkenv;
    r = clos inner465760038;
    st methods = r;
    methods = ldf methods;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn methods[class]("MethodsFunction");
    check L5() else D1();
  D1():
    deopt 7 [r1];
  L5():
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    methods1 = ldf methods;
    check L10() else D4();
  L6():
    require = ldf require;
    check L8() else D2();
  L7():
    r2 = dyn base(<sym stats>);
    goto L0();
  D2():
    deopt 10 [];
  D4():
    deopt 14 [];
  L8():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r5 = dyn require(p);
    check L9() else D3();
  L10():
    p1 = prom<V +>{
      summary = ld summary;
      summary1 = force? summary;
      checkMissing(summary1);
      return summary1;
    };
    r7 = dyn methods1(p1);
    check L11() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 16 [r7];
  L9():
    goto L0();
  L11():
    methods2 = ldf methods;
    check L12() else D6();
  D6():
    deopt 18 [];
  L12():
    r8 = dyn methods2[class]("aov");
    check L13() else D7();
  D7():
    deopt 21 [r8];
  L13():
    print = ldf print;
    check L14() else D8();
  D8():
    deopt 23 [];
  L14():
    p2 = prom<V +>{
      methods3 = ldf methods;
      r9 = dyn methods3[class]("aov");
      return r9;
    };
    r11 = dyn print[, byclass](p2, FALSE);
    check L15() else D9();
  D9():
    deopt 27 [r11];
  L15():
    methods4 = ldf methods;
    check L16() else D10();
  D10():
    deopt 29 [];
  L16():
    r12 = dyn methods4("[[");
    check L17() else D11();
  D11():
    deopt 31 [r12];
  L17():
    methods5 = ldf methods;
    check L18() else D12();
  D12():
    deopt 33 [];
  L18():
    r13 = dyn methods5("$");
    check L19() else D13();
  D13():
    deopt 35 [r13];
  L19():
    methods6 = ldf methods;
    check L20() else D14();
  D14():
    deopt 37 [];
  L20():
    r14 = dyn methods6("$<-");
    check L21() else D15();
  D15():
    deopt 39 [r14];
  L21():
    methods7 = ldf methods;
    check L22() else D16();
  D16():
    deopt 41 [];
  L22():
    r15 = dyn methods7("+");
    check L23() else D17();
  D17():
    deopt 43 [r15];
  L23():
    methods8 = ldf methods;
    check L24() else D18();
  D18():
    deopt 45 [];
  L24():
    r16 = dyn methods8("Math");
    check L25() else D19();
  D19():
    deopt 47 [r16];
  L25():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L1():
    methods9 = ldf methods;
    check L30() else D22();
  L26():
    require1 = ldf require;
    check L28() else D20();
  L27():
    r17 = dyn base1(<sym graphics>);
    goto L1();
  D20():
    deopt 50 [];
  D22():
    deopt 54 [];
  L28():
    p3 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r20 = dyn require1(p3);
    check L29() else D21();
  L30():
    p4 = prom<V +>{
      axis = ld axis;
      axis1 = force? axis;
      checkMissing(axis1);
      return axis1;
    };
    r22 = dyn methods9(p4);
    check L31() else D23();
  D21():
    deopt 52 [r20];
  D23():
    deopt 56 [r22];
  L29():
    goto L1();
  L31():
    methods10 = ldf methods;
    check L32() else D24();
  D24():
    deopt 58 [];
  L32():
    p5 = prom<V +>{
      format = ld format;
      format1 = force? format;
      checkMissing(format1);
      return format1;
    };
    r24 = dyn methods10(p5);
    check L33() else D25();
  D25():
    deopt 60 [r24];
  L33():
    st mf = r24;
    tail = ldf tail;
    check L34() else D26();
  D26():
    deopt 63 [];
  L34():
    p8 = prom<V +>{
      cbind = ldf cbind;
      p7 = prom<V +>{
        format2 = ldf format;
        p6 = prom<V +>{
          mf = ld mf;
          mf1 = force? mf;
          checkMissing(mf1);
          return mf1;
        };
        r26 = dyn format2(p6);
        return r26;
      };
      r28 = dyn cbind[meth](p7);
      return r28;
    };
    r30 = dyn tail(p8);
    check L35() else D27();
  D27():
    deopt 65 [r30];
  L35():
    sym2 = ldf require;
    base2 = ldf require in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L2(r32):
    c = `as.logical`(r32);
    if c then L40() else L3();
  L36():
    require2 = ldf require;
    check L38() else D28();
  L37():
    r31 = dyn base2[, quietly](<sym Matrix>, TRUE);
    goto L2(r31);
  D28():
    deopt 68 [];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L38():
    p9 = prom<V +>{
      Matrix = ld Matrix;
      Matrix1 = force? Matrix;
      checkMissing(Matrix1);
      return Matrix1;
    };
    r34 = dyn require2[, quietly](p9, TRUE);
    check L39() else D29();
  L40():
    print1 = ldf print;
    check L41() else D30();
  D29():
    deopt 72 [r34];
  D30():
    deopt 74 [];
  L39():
    goto L2(r34);
  L41():
    p10 = prom<V +>{
      methods11 = ldf methods;
      r35 = dyn methods11[class]("Matrix");
      return r35;
    };
    r37 = dyn print1(p10);
    check L42() else D31();
  D31():
    deopt 76 [r37];
  L42():
    methods12 = ldf methods;
    check L43() else D32();
  D32():
    deopt 78 [];
  L43():
    p11 = prom<V +>{
      dim = ld dim;
      dim1 = force? dim;
      checkMissing(dim1);
      return dim1;
    };
    r39 = dyn methods12(p11);
    check L44() else D33();
  D33():
    deopt 80 [r39];
  L44():
    st m = r39;
    print2 = ldf print;
    check L45() else D34();
  D34():
    deopt 83 [];
  L45():
    p12 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r41 = dyn print2(p12);
    check L46() else D35();
  D35():
    deopt 85 [r41];
  L46():
    print3 = ldf print;
    check L47() else D36();
  D36():
    deopt 87 [];
  L47():
    p13 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      attr = ldf attr in base;
      r44 = dyn attr(m3, "info");
      goto L0(r44);
    L2():
      r42 = dyn base3(<sym m>, "info");
      goto L0(r42);
    };
    r46 = dyn print3(p13);
    check L48() else D37();
  D37():
    deopt 89 [r46];
  L48():
    popenv;
    return r46;
  }
}
fun inner465760038(`generic.function`, class, `all.names`, dropPath) {
  (reg generic_function:*, reg class:*, reg all_names:*, reg dropPath:*) -+> V { var `generic.function`:*, var class:*, var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var dropPath:*, reg dropPath_isMissing:L, reg dropPath_orDefault:*, reg parent_frame:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg generic_function1:*, reg generic_function2:V, reg c6:L, reg r7:V, reg c7:L, reg c8:V, reg c10:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg substitute:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg generic_function3:*, reg generic_function4:V, reg is_function:cls, reg r13:V, reg c11:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg c16:L, reg r15:V, reg what:*, reg what1:V, reg is_call:cls, reg r16:V, reg c17:L, reg c18:V, reg c20:L, reg c22:V, reg _in_:cls, reg deparse:cls, reg what2:*, reg what3:V, reg c23:L, reg what5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg p:p(V +), reg r19:V, reg p1:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg c24:cls, reg r23:V, reg p2:p(V +), reg r25:V, reg c25:L, reg c26:V, reg c28:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg what6:*, reg what7:V, reg c29:L, reg what9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r28:V, reg as_character:cls, reg r29:V, reg asNamespace:cls, reg what10:*, reg what11:V, reg c30:L, reg what13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r30:V, reg p3:p(V +), reg r32:V, reg what14:*, reg what15:V, reg c31:L, reg what17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r33:V, reg dx8:V, reg deparse1:cls, reg what18:*, reg what19:V, reg p4:p(V +), reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg missing1:cls, reg r38:V, reg r39:V, reg c32:L, reg c34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg c37:L, reg r41:V, reg class1:*, reg class2:V, reg c38:L, reg r42:V, reg c39:L, reg c40:V, reg c42:L, reg deparse2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg substitute1:cls, reg r45:V, reg p5:p(V +), reg r47:V, reg _S3methods:cls, reg generic_function5:*, reg generic_function6:V, reg p6:p(V +), reg class3:*, reg class4:V, reg p7:p(V +), reg envir:*, reg envir1:V, reg p8:p(V +), reg all_names1:*, reg all_names2:V, reg p9:p(V +), reg dropPath1:*, reg dropPath2:V, reg p10:p(V +), reg useNS:*, reg useNS1:V, reg p11:p(V +), reg r55:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg _isMethodsDispatchOn:cls, reg r58:V, reg c43:L, reg __4:cls, reg r59:V, reg r60:cls, reg generic_function7:*, reg generic_function8:V, reg p12:p(V +), reg class5:*, reg class6:V, reg p13:p(V +), reg r63:V, reg r64:V, reg _MethodsFunction:cls, reg s3:*, reg s4:V, reg p14:p(V +), reg s5:*, reg s6:V, reg p15:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg missing2:cls, reg r69:V, reg p16:p(V +), reg r71:V |
    mkenv;
    st `generic.function` = generic_function;
    st class = class;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L0(FALSE) else L0(all_names);
  L0(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    dropPath_isMissing = missing.0(dropPath);
    if dropPath_isMissing then L1(FALSE) else L1(dropPath);
  L1(dropPath_orDefault):
    st dropPath = dropPath_orDefault;
    parent_frame = ldf `parent.frame`;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    r = dyn parent_frame();
    check L26() else D1();
  D1():
    deopt 2 [r];
  L26():
    st envir = r;
    st useNS = FALSE;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L2(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L29() else L3(c);
  L27():
    missing = ldf missing in base;
    r3 = dyn missing(<sym generic.function>);
    goto L2(r3);
  L28():
    r1 = dyn base(<sym generic.function>);
    goto L2(r1);
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L34() else L5();
  L29():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L4(c5, r6):
    r7 = `!`(r6);
    c7 = `as.logical`(r7);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5():
    goto L16();
  L16():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L30():
    generic_function1 = ld `generic.function`;
    check L32() else D2();
  L31():
    r5 = dyn base1(<sym generic.function>);
    goto L4(c, r5);
  L34():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  D2():
    deopt 12 [c, generic_function1];
  L6(r9):
    st what = r9;
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L17(r37):
    r39 = `!`(r37);
    c32 = `as.logical`(r39);
    if c32 then L71() else L18(c32);
  L32():
    generic_function2 = force? generic_function1;
    checkMissing(generic_function2);
    c6 = `is.character`(generic_function2);
    goto L4(c, c6);
  L35():
    substitute = ldf substitute in base;
    r10 = dyn substitute(<sym generic.function>);
    goto L6(r10);
  L36():
    r8 = dyn base2(<sym generic.function>);
    goto L6(r8);
  L69():
    missing1 = ldf missing in base;
    r38 = dyn missing1(<sym class>);
    goto L17(r38);
  L70():
    r36 = dyn base7(<sym class>);
    goto L17(r36);
  L7(r12):
    c11 = `as.logical`(r12);
    if c11 then L41() else L8(c11);
  L18(c34):
    c42 = `as.logical`(c34);
    if c42 then L76() else L20();
  L37():
    generic_function3 = ld `generic.function`;
    check L39() else D3();
  L38():
    r11 = dyn base3(<sym generic.function>);
    goto L7(r11);
  L71():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  D3():
    deopt 23 [generic_function3];
  L8(c13):
    c20 = `as.logical`(c13);
    if c20 then L47() else L10(c20);
  L19(c37, r41):
    r42 = `!`(r41);
    c39 = `as.logical`(r42);
    c40 = `&&`(c37, c39);
    goto L18(c40);
  L20():
    goto L21();
  L21():
    _S3methods = ldf `.S3methods`;
    check L80() else D19();
  L39():
    generic_function4 = force? generic_function3;
    checkMissing(generic_function4);
    is_function = ldf `is.function` in base;
    r13 = dyn is_function(generic_function4);
    check L40() else D4();
  L41():
    sym4 = ldf `is.call`;
    base4 = ldf `is.call` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L72():
    class1 = ld class;
    check L74() else D16();
  L73():
    r40 = dyn base8(<sym class>);
    goto L19(c32, r40);
  L76():
    deparse2 = ldf deparse1;
    check L77() else D17();
  D4():
    deopt 26 [r13];
  D16():
    deopt 75 [c32, class1];
  D17():
    deopt 81 [];
  D19():
    deopt 88 [];
  L9(c16, r15):
    c17 = `as.logical`(r15);
    c18 = `&&`(c16, c17);
    goto L8(c18);
  L10(c22):
    c28 = `as.logical`(c22);
    if c28 then L51() else L11();
  L40():
    goto L7(r13);
  L42():
    what = ld what;
    check L44() else D5();
  L43():
    r14 = dyn base4(<sym what>);
    goto L9(c11, r14);
  L47():
    _in_ = ldf `%in%`;
    check L48() else D7();
  L74():
    class2 = force? class1;
    checkMissing(class2);
    c38 = `is.character`(class2);
    goto L19(c32, c38);
  L77():
    p5 = prom<V +>{
      sym9 = ldf substitute;
      base9 = ldf substitute in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      substitute1 = ldf substitute in base;
      r45 = dyn substitute1(<sym class>);
      goto L0(r45);
    L2():
      r43 = dyn base9(<sym class>);
      goto L0(r43);
    };
    r47 = dyn deparse2(p5);
    check L78() else D18();
  L80():
    p6 = prom<V +>{
      generic_function5 = ld `generic.function`;
      generic_function6 = force? generic_function5;
      checkMissing(generic_function6);
      return generic_function6;
    };
    p7 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    p8 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    p9 = prom<V +>{
      all_names1 = ld `all.names`;
      all_names2 = force? all_names1;
      checkMissing(all_names2);
      return all_names2;
    };
    p10 = prom<V +>{
      dropPath1 = ld dropPath;
      dropPath2 = force? dropPath1;
      checkMissing(dropPath2);
      return dropPath2;
    };
    p11 = prom<V +>{
      useNS = ld useNS;
      useNS1 = force? useNS;
      checkMissing(useNS1);
      return useNS1;
    };
    r55 = dyn _S3methods[, , , `all.names`, dropPath, useEnv](p6, p7, p8, p9, p10, p11);
    check L81() else D20();
  D5():
    deopt 29 [c11, what];
  D7():
    deopt 35 [c20];
  D18():
    deopt 83 [r47];
  D20():
    deopt 98 [r55];
  L11():
    deparse1 = ldf deparse;
    check L66() else D14();
  L15(dx8):
    st `generic.function` = dx8;
    goto L16();
  L44():
    what1 = force? what;
    checkMissing(what1);
    is_call = ldf `is.call` in base;
    r16 = dyn is_call(what1);
    check L45() else D6();
  L48():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        what2 = ld what;
        what3 = force? what2;
        checkMissing(what3);
        c23 = `is.object`(what3);
        if c23 then L1() else L2(what3);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", what3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(what5):
        __ = ldf `[[` in base;
        r17 = dyn __(what5, 1);
        goto L0(r17);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r19 = dyn deparse[, nlines](p, 1);
      return r19;
    };
    p2 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c24 = ldf c in base;
      r23 = dyn c24("::", ":::");
      goto L0(r23);
    L2():
      r21 = dyn base5("::", ":::");
      goto L0(r21);
    };
    r25 = dyn _in_(p1, p2);
    check L49() else D8();
  L51():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L78():
    st class = r47;
    goto L21();
  L81():
    st s3 = r55;
    sym10 = ldf `.isMethodsDispatchOn`;
    base10 = ldf `.isMethodsDispatchOn` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L82() else L83();
  D6():
    deopt 32 [c11, r16];
  D8():
    deopt 38 [c20, r25];
  D14():
    deopt 64 [];
  L12(r27):
    st what = r27;
    asNamespace = ldf asNamespace;
    check L59() else D11();
  L22(r57):
    c43 = `as.logical`(r57);
    if c43 then L85() else L23();
  L45():
    goto L9(c11, r16);
  L49():
    c25 = `as.logical`(r25);
    c26 = `&&`(c20, c25);
    goto L10(c26);
  L52():
    what6 = ld what;
    check L54() else D9();
  L53():
    r26 = dyn base6(<lang `[`(what, `:`(2.0, 3.0))>);
    goto L12(r26);
  L66():
    p4 = prom<V +>{
      what18 = ld what;
      what19 = force? what18;
      checkMissing(what19);
      return what19;
    };
    r35 = dyn deparse1(p4);
    check L67() else D15();
  L82():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r58 = dyn _isMethodsDispatchOn();
    check L84() else D21();
  L83():
    r56 = dyn base10();
    goto L22(r56);
  D9():
    deopt 42 [what6];
  D11():
    deopt 51 [];
  D15():
    deopt 66 [r35];
  D21():
    deopt 103 [r58];
  L23():
    goto L24(NULL);
  L24(r64):
    st s4 = r64;
    _MethodsFunction = ldf `.MethodsFunction`;
    check L90() else D25();
  L54():
    what7 = force? what6;
    checkMissing(what7);
    c29 = `is.object`(what7);
    if c29 then L55() else L56(what7);
  L59():
    p3 = prom<V +>{
      what10 = ld what;
      what11 = force? what10;
      checkMissing(what11);
      c30 = `is.object`(what11);
      if c30 then L1() else L2(what11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", what11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(what13):
      __2 = ldf `[[` in base;
      r30 = dyn __2(what13, 1);
      goto L0(r30);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r32 = dyn asNamespace(p3);
    check L60() else D12();
  L67():
    goto L15(r35);
  L84():
    goto L22(r58);
  L85():
    __4 = ldf `::`;
    check L86() else D22();
  D12():
    deopt 53 [r32];
  D22():
    deopt 105 [];
  D25():
    deopt 117 [];
  L13(dx3):
    as_character = ldf `as.character` in base;
    r29 = dyn as_character(dx3);
    check L58() else D10();
  L55():
    dr2 = tryDispatchBuiltin.1("[", what7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(what9):
    __1 = ldf `[` in base;
    r28 = dyn __1(what9, <int 2, 3>);
    goto L13(r28);
  L60():
    st envir = r32;
    st useNS = TRUE;
    what14 = ld what;
    check L61() else D13();
  L86():
    r59 = dyn __4("methods", ".S4methods");
    check L87() else D23();
  L90():
    p14 = prom<V +>{
      s3 = ld s3;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    p15 = prom<V +>{
      s5 = ld s4;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    p16 = prom<V +>{
      sym11 = ldf missing;
      base11 = ldf missing in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      missing2 = ldf missing in base;
      r69 = dyn missing2(<sym generic.function>);
      goto L0(r69);
    L2():
      r67 = dyn base11(<sym generic.function>);
      goto L0(r67);
    };
    r71 = dyn _MethodsFunction(p14, p15, p16);
    check L91() else D26();
  D10():
    deopt 48 [r29];
  D13():
    deopt 58 [what14];
  D23():
    deopt 108 [r59];
  D26():
    deopt 121 [r71];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L58():
    goto L12(r29);
  L61():
    what15 = force? what14;
    checkMissing(what15);
    c31 = `is.object`(what15);
    if c31 then L62() else L63(what15);
  L87():
    checkFun.0(r59);
    r60 = r59 as cls;
    p12 = prom<V +>{
      generic_function7 = ld `generic.function`;
      generic_function8 = force? generic_function7;
      checkMissing(generic_function8);
      return generic_function8;
    };
    p13 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    r63 = dyn r60(p12, p13);
    check L88() else D24();
  L91():
    popenv;
    return r71;
  D24():
    deopt 112 [r63];
  L14(dx7):
    goto L15(dx7);
  L62():
    dr6 = tryDispatchBuiltin.1("[[", what15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(dr6);
  L63(what17):
    __3 = ldf `[[` in base;
    r33 = dyn __3(what17, 2);
    goto L14(r33);
  L88():
    goto L24(r63);
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx6);
  }
}