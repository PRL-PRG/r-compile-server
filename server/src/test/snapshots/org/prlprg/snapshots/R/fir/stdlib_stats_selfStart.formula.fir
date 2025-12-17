fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1728497165;
    st `selfStart.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1728497165(model, initial, parameters, template) {
  (reg model:*, reg initial:*, reg parameters:*, reg template:*) -+> V { var model:*, var initial:*, var parameters:*, var template:*, reg template_isMissing:L, reg template_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg template1:*, reg template2:V, reg c:V, reg c1:L, reg all_vars:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg parameters1:*, reg parameters2:V, reg nm:*, reg nm1:V, reg match:cls, reg r10:V, reg is_na:cls, reg r11:V, reg any:cls, reg r12:V, reg c2:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg msng:*, reg msng1:V, reg sum:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg paste:cls, reg sQuote:cls, reg parameters3:*, reg parameters4:V, reg c3:L, reg parameters6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg msng2:*, reg msng3:V, reg __:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg r29:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg nm2:*, reg nm3:V, reg c4:L, reg nm5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg nm8:V, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg nm11:V, reg r35:V, reg nm12:*, reg nm13:V, reg parameters7:*, reg parameters8:V, reg match1:cls, reg r36:V, reg is_na1:cls, reg r37:V, reg __1:cls, reg r38:V, reg parameters9:*, reg parameters10:V, reg c5:cls, reg r39:V, reg setNames:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg rep:cls, reg r42:V, reg p7:p(V +), reg argNams:*, reg argNams1:V, reg p8:p(V +), reg r45:V, reg args:*, reg args1:V, reg l:*, reg formals__:cls, reg r46:V, reg structure:cls, reg deriv:cls, reg model3:*, reg model4:V, reg p9:p(V +), reg parameters11:*, reg parameters12:V, reg p10:p(V +), reg template3:*, reg template4:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg as_function:cls, reg initial1:*, reg initial2:V, reg p13:p(V +), reg r53:V, reg p14:p(V +), reg parameters13:*, reg parameters14:V, reg p15:p(V +), reg r56:V |
    mkenv;
    st model = model;
    st initial = initial;
    st parameters = parameters;
    template_isMissing = missing.0(template);
    if template_isMissing then L0(NULL) else L0(template);
  L0(template_orDefault):
    st template = template_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L16() else L2();
  L13():
    template1 = ld template;
    check L15() else D0();
  L14():
    r = dyn base(<sym template>);
    goto L1(r);
  D0():
    deopt 1 [template1];
  L2():
    goto L12();
  L12():
    structure = ldf structure;
    check L56() else D22();
  L15():
    template2 = force? template1;
    checkMissing(template2);
    c = `==`(template2, NULL);
    goto L1(c);
  L16():
    all_vars = ldf `all.vars`;
    check L17() else D1();
  D1():
    deopt 5 [];
  D22():
    deopt 79 [];
  L17():
    p = prom<V +>{
      model1 = ld model;
      model2 = force? model1;
      checkMissing(model2);
      return model2;
    };
    r3 = dyn all_vars(p);
    check L18() else D2();
  L56():
    p12 = prom<V +>{
      deriv = ldf deriv;
      p9 = prom<V +>{
        model3 = ld model;
        model4 = force? model3;
        checkMissing(model4);
        return model4;
      };
      p10 = prom<V +>{
        parameters11 = ld parameters;
        parameters12 = force? parameters11;
        checkMissing(parameters12);
        return parameters12;
      };
      p11 = prom<V +>{
        template3 = ld template;
        template4 = force? template3;
        checkMissing(template4);
        return template4;
      };
      r50 = dyn deriv(p9, p10, p11);
      return r50;
    };
    p14 = prom<V +>{
      as_function = ldf `as.function`;
      p13 = prom<V +>{
        initial1 = ld initial;
        initial2 = force? initial1;
        checkMissing(initial2);
        return initial2;
      };
      r53 = dyn as_function(p13);
      return r53;
    };
    p15 = prom<V +>{
      parameters13 = ld parameters;
      parameters14 = force? parameters13;
      checkMissing(parameters14);
      return parameters14;
    };
    r56 = dyn structure[, initial, pnames, class](p12, p14, p15, "selfStart");
    check L57() else D23();
  D2():
    deopt 7 [r3];
  D23():
    deopt 87 [r56];
  L18():
    st nm = r3;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L57():
    popenv;
    return r56;
  L3(r5):
    c2 = `as.logical`(r5);
    if c2 then L30() else L6();
  L19():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L20():
    r4 = dyn base1(<lang `<-`(msng, is.na(match(parameters, nm)))>);
    goto L3(r4);
  L4(r7):
    st msng = r7;
    any = ldf any in base;
    r12 = dyn any(r7);
    check L29() else D7();
  L6():
    goto L7();
  L7():
    r29 = clos inner2708337952;
    st template = r29;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L21():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L22():
    r6 = dyn base2(<lang match(parameters, nm)>);
    goto L4(r6);
  L30():
    stop = ldf stop;
    check L31() else D8();
  D7():
    deopt 27 [r12];
  D8():
    deopt 29 [];
  L5(r9):
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(r9);
    check L28() else D6();
  L8(r31):
    st argNams = r31;
    setNames = ldf setNames;
    check L50() else D17();
  L23():
    parameters1 = ld parameters;
    check L25() else D3();
  L24():
    r8 = dyn base3(<sym parameters>, <sym nm>);
    goto L5(r8);
  L29():
    goto L3(r12);
  L31():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        ngettext = ldf ngettext;
        p1 = prom<V +>{
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r14):
          return r14;
        L1():
          msng = ld msng;
          msng1 = force? msng;
          checkMissing(msng1);
          sum = ldf sum in base;
          r15 = dyn sum(msng1);
          goto L0(r15);
        L2():
          r13 = dyn base4(<sym msng>);
          goto L0(r13);
        };
        r17 = dyn ngettext(p1, "parameter %s does not occur in the model formula", "parameters %s do not occur in the model formula");
        return r17;
      };
      p5 = prom<V +>{
        paste = ldf paste;
        p4 = prom<V +>{
          sQuote = ldf sQuote;
          p3 = prom<V +>{
            parameters3 = ld parameters;
            parameters4 = force? parameters3;
            checkMissing(parameters4);
            c3 = `is.object`(parameters4);
            if c3 then L1() else L2(parameters4);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", parameters4);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(parameters6):
            msng2 = ld msng;
            msng3 = force? msng2;
            __ = ldf `[` in base;
            r19 = dyn __(parameters6, msng3);
            goto L0(r19);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r21 = dyn sQuote(p3);
          return r21;
        };
        r23 = dyn paste[, collapse](p4, ", ");
        return r23;
      };
      r25 = dyn sprintf(p2, p5);
      return r25;
    };
    r27 = dyn stop[, domain](p6, NA_LGL);
    check L32() else D9();
  L34():
    nm2 = ld nm;
    check L36() else D10();
  L35():
    r30 = dyn base5(<lang `[`(nm, is.na(match(nm, parameters)))>, <sym parameters>);
    goto L8(r30);
  D3():
    deopt 15 [parameters1];
  D6():
    deopt 24 [r11];
  D9():
    deopt 33 [r27];
  D10():
    deopt 41 [nm2];
  D17():
    deopt 64 [];
  L25():
    parameters2 = force? parameters1;
    checkMissing(parameters2);
    nm = ld nm;
    check L26() else D4();
  L28():
    goto L4(r11);
  L32():
    goto L7();
  L36():
    nm3 = force? nm2;
    checkMissing(nm3);
    c4 = `is.object`(nm3);
    if c4 then L37() else L38(nm3);
  L50():
    p7 = prom<V +>{
      sym8 = ldf rep;
      base8 = ldf rep in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      rep = ldf rep in base;
      r42 = dyn rep(<lang alist(a=)>, <lang length(argNams)>);
      goto L0(r42);
    L2():
      r40 = dyn base8(<lang alist(a=)>, <lang length(argNams)>);
      goto L0(r40);
    };
    p8 = prom<V +>{
      argNams = ld argNams;
      argNams1 = force? argNams;
      checkMissing(argNams1);
      return argNams1;
    };
    r45 = dyn setNames(p7, p8);
    check L51() else D18();
  D4():
    deopt 17 [nm];
  D18():
    deopt 67 [r45];
  L9(dx3):
    parameters9 = ld parameters;
    check L48() else D15();
  L26():
    nm1 = force? nm;
    checkMissing(nm1);
    match = ldf match in base;
    r10 = dyn match(parameters2, nm1, NA_INT, NULL);
    check L27() else D5();
  L37():
    dr2 = tryDispatchBuiltin.1("[", nm3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(nm5):
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L40() else L41();
  L51():
    st args = r45;
    args = ld args;
    check L52() else D19();
  D5():
    deopt 22 [r10];
  D15():
    deopt 58 [parameters9];
  D19():
    deopt 69 [args];
  L10(nm8, r33):
    __1 = ldf `[` in base;
    r38 = dyn __1(nm8, r33);
    goto L9(r38);
  L27():
    goto L5(r10);
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L40():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L42() else L43();
  L41():
    r32 = dyn base6(<lang match(nm, parameters)>);
    goto L10(nm5, r32);
  L48():
    parameters10 = force? parameters9;
    checkMissing(parameters10);
    c5 = ldf c in base;
    r39 = dyn c5(dx3, parameters10);
    check L49() else D16();
  L52():
    args1 = force? args;
    checkMissing(args1);
    l = ld template;
    formals__ = ldf `formals<-`;
    check L53() else D20();
  D16():
    deopt 61 [r39];
  D20():
    deopt 72 [args1, l, args1];
  L11(nm11, r35):
    is_na1 = ldf `is.na` in base;
    r37 = dyn is_na1(r35);
    check L47() else D14();
  L42():
    nm12 = ld nm;
    check L44() else D11();
  L43():
    r34 = dyn base7(<sym nm>, <sym parameters>);
    goto L11(nm5, r34);
  L49():
    goto L8(r39);
  L53():
    r46 = dyn formals__(l, NULL, args1);
    check L54() else D21();
  D11():
    deopt 47 [nm5, nm12];
  D14():
    deopt 56 [nm11, r37];
  D21():
    deopt 74 [args1, r46];
  L44():
    nm13 = force? nm12;
    checkMissing(nm13);
    parameters7 = ld parameters;
    check L45() else D12();
  L47():
    goto L10(nm11, r37);
  L54():
    st template = r46;
    goto L12();
  D12():
    deopt 49 [nm5, parameters7];
  L45():
    parameters8 = force? parameters7;
    checkMissing(parameters8);
    match1 = ldf match in base;
    r36 = dyn match1(nm13, parameters8, NA_INT, NULL);
    check L46() else D13();
  D13():
    deopt 54 [nm5, r36];
  L46():
    goto L11(nm5, r36);
  }
}
fun inner2708337952() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}