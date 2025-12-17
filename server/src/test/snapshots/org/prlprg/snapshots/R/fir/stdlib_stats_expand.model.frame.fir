fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg trees:*, reg trees1:V, reg p1:p(V +), reg r4:V, reg expand_model_frame:cls, reg model:*, reg model1:V, reg p2:p(V +), reg __1:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg data_frame:cls, reg p4:p(V +), reg rnorm:cls, reg r10:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg c:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg glm:cls, reg __2:cls, reg r17:V, reg p7:p(V +), reg dd:*, reg dd1:V, reg p8:p(V +), reg p9:p(V +), reg na_omit:*, reg na_omit1:V, reg p10:p(V +), reg r22:V, reg expand_model_frame1:cls, reg model2:*, reg model3:V, reg p11:p(V +), reg r24:V, reg expand_model_frame2:cls, reg model4:*, reg model5:V, reg p12:p(V +), reg r26:V |
    mkenv;
    r = clos inner3418170569;
    st `expand.model.frame` = r;
    lm = ldf lm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<lang log(Volume)>, <lang `+`(log(Girth), log(Height))>);
      return r1;
    };
    p1 = prom<V +>{
      trees = ld trees;
      trees1 = force? trees;
      checkMissing(trees1);
      return trees1;
    };
    r4 = dyn lm[, data](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    st model = r4;
    expand_model_frame = ldf `expand.model.frame`;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p2 = prom<V +>{
      model = ld model;
      model1 = force? model;
      checkMissing(model1);
      return model1;
    };
    p3 = prom<V +>{
      __1 = ldf `~` in base;
      r6 = dyn __1(<sym Girth>);
      return r6;
    };
    r8 = dyn expand_model_frame(p2, p3);
    check L3() else D3();
  D3():
    deopt 14 [r8];
  L3():
    data_frame = ldf `data.frame`;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p4 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p5 = prom<V +>{
      rnorm = ldf rnorm;
      r10 = dyn rnorm(5.0);
      return r10;
    };
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c = ldf c in base;
      r14 = dyn c(1.0, 2.0, NA_LGL, 4.0, 5.0);
      goto L0(r14);
    L2():
      r12 = dyn base(1.0, 2.0, NA_LGL, 4.0, 5.0);
      goto L0(r12);
    };
    r16 = dyn data_frame[x, y, z](p4, p5, p6);
    check L5() else D5();
  D5():
    deopt 23 [r16];
  L5():
    st dd = r16;
    glm = ldf glm;
    check L6() else D6();
  D6():
    deopt 26 [];
  L6():
    p7 = prom<V +>{
      __2 = ldf `~` in base;
      r17 = dyn __2(<sym y>, <sym x>);
      return r17;
    };
    p8 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    p9 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p10 = prom<V +>{
      na_omit = ld `na.omit`;
      na_omit1 = force? na_omit;
      checkMissing(na_omit1);
      return na_omit1;
    };
    r22 = dyn glm[, data, subset, `na.action`](p7, p8, p9, p10);
    check L7() else D7();
  D7():
    deopt 34 [r22];
  L7():
    st model = r22;
    expand_model_frame1 = ldf `expand.model.frame`;
    check L8() else D8();
  D8():
    deopt 37 [];
  L8():
    p11 = prom<V +>{
      model2 = ld model;
      model3 = force? model2;
      checkMissing(model3);
      return model3;
    };
    r24 = dyn expand_model_frame1[, , `na.expand`](p11, "z", FALSE);
    check L9() else D9();
  D9():
    deopt 42 [r24];
  L9():
    expand_model_frame2 = ldf `expand.model.frame`;
    check L10() else D10();
  D10():
    deopt 44 [];
  L10():
    p12 = prom<V +>{
      model4 = ld model;
      model5 = force? model4;
      checkMissing(model5);
      return model5;
    };
    r26 = dyn expand_model_frame2[, , `na.expand`](p12, "z", TRUE);
    check L11() else D11();
  D11():
    deopt 49 [r26];
  L11():
    popenv;
    return r26;
  }
}
fun inner3418170569(model, extras, envir, `na.expand`) {
  (reg model:*, reg extras:*, reg envir:*, reg na_expand:*) -+> V { var model:*, var extras:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg environment:cls, reg formula:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var `na.expand`:*, reg na_expand_isMissing:L, reg na_expand_orDefault:*, reg getCall:cls, reg model3:*, reg model4:V, reg p3:p(V +), reg r6:V, reg formula1:cls, reg model5:*, reg model6:V, reg p4:p(V +), reg r8:V, reg __:cls, reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg extras1:*, reg extras2:V, reg is_call:cls, reg r12:V, reg c:L, reg extras3:*, reg extras4:V, reg extras5:V, reg str2lang:cls, reg paste:cls, reg paste1:cls, reg extras6:*, reg extras7:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg f:*, reg f1:V, reg c1:L, reg f3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r19:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg ____:cls, reg r20:V, reg f4:*, reg f5:V, reg c3:L, reg f7:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r21:V, reg l3:*, reg c4:L, reg dx12:V, reg l6:*, reg dx13:V, reg l7:*, reg dr6:V, reg dc3:L, reg dx16:V, reg dx17:V, reg l9:*, reg dx18:V, reg dx19:V, reg __3:cls, reg r22:V, reg c5:L, reg dx22:V, reg l11:*, reg dx23:V, reg dr8:V, reg dc4:L, reg dx25:V, reg dx26:V, reg l13:*, reg dx27:V, reg ____1:cls, reg r23:V, reg c6:L, reg dx29:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx31:V, reg dx33:V, reg ____2:cls, reg r24:V, reg gg:*, reg gg1:V, reg c7:L, reg gg3:V, reg dr12:V, reg dc6:L, reg dx34:V, reg dx35:V, reg __4:cls, reg r25:V, reg l16:*, reg c8:L, reg dx38:V, reg l19:*, reg dx39:V, reg l20:*, reg dr14:V, reg dc7:L, reg dx42:V, reg dx43:V, reg l22:*, reg dx44:V, reg dx45:V, reg __5:cls, reg r26:V, reg c9:L, reg dx48:V, reg l24:*, reg dx49:V, reg dr16:V, reg dc8:L, reg dx51:V, reg dx52:V, reg l26:*, reg dx53:V, reg ____3:cls, reg r27:V, reg c10:L, reg dx55:V, reg l28:*, reg dr18:V, reg dc9:L, reg dx57:V, reg dx59:V, reg ____4:cls, reg r28:V, reg envir1:*, reg envir2:V, reg l29:*, reg environment__:cls, reg r29:V, reg na_expand1:*, reg na_expand2:V, reg r30:V, reg c11:L, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg call:cls, reg r33:V, reg p8:p(V +), reg envir3:*, reg envir4:V, reg p9:p(V +), reg r36:V, reg eval1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg call1:cls, reg r40:V, reg p10:p(V +), reg envir5:*, reg envir6:V, reg p11:p(V +), reg r43:V, reg model_frame:cls, reg model7:*, reg model8:V, reg p12:p(V +), reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg rownames:cls, reg oldmf:*, reg oldmf1:V, reg p13:p(V +), reg r49:V, reg rownames1:cls, reg rval:*, reg rval1:V, reg p14:p(V +), reg r51:V, reg match:cls, reg r52:V, reg rval2:*, reg rval3:V, reg c12:L, reg rval5:V, reg dr20:V, reg dc10:L, reg dx60:V, reg dx61:V, reg keep:*, reg keep1:V, reg __6:cls, reg r53:V, reg l30:*, reg class__:cls, reg r54:V, reg rval6:*, reg rval7:V |
    mkenv;
    st model = model;
    st extras = extras;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        formula = ldf formula;
        p = prom<V +>{
          model1 = ld model;
          model2 = force? model1;
          checkMissing(model2);
          return model2;
        };
        r1 = dyn formula(p);
        return r1;
      };
      r3 = dyn environment(p1);
      return r3;
    };
    goto L1(p2);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    na_expand_isMissing = missing.0(na_expand);
    if na_expand_isMissing then L2(FALSE) else L2(na_expand);
  L2(na_expand_orDefault):
    st `na.expand` = na_expand_orDefault;
    getCall = ldf getCall;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p3 = prom<V +>{
      model3 = ld model;
      model4 = force? model3;
      checkMissing(model4);
      return model4;
    };
    r6 = dyn getCall(p3);
    check L21() else D1();
  D1():
    deopt 3 [r6];
  L21():
    st cl = r6;
    formula1 = ldf formula;
    check L22() else D2();
  D2():
    deopt 6 [];
  L22():
    p4 = prom<V +>{
      model5 = ld model;
      model6 = force? model5;
      checkMissing(model6);
      return model6;
    };
    r8 = dyn formula1(p4);
    check L23() else D3();
  D3():
    deopt 8 [r8];
  L23():
    st f = r8;
    __ = ldf `~` in base;
    r9 = dyn __(<sym foo>, <lang `+`(bar, baz)>);
    st ff = r9;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L3(r11):
    c = `as.logical`(r11);
    if c then L28() else L4();
  L24():
    extras1 = ld extras;
    check L26() else D4();
  L25():
    r10 = dyn base(<sym extras>);
    goto L3(r10);
  D4():
    deopt 15 [extras1];
  L4():
    str2lang = ldf str2lang;
    check L31() else D7();
  L5(extras5):
    st gg = extras5;
    f = ld f;
    check L33() else D9();
  L26():
    extras2 = force? extras1;
    checkMissing(extras2);
    is_call = ldf `is.call` in base;
    r12 = dyn is_call(extras2);
    check L27() else D5();
  L28():
    extras3 = ld extras;
    check L29() else D6();
  D5():
    deopt 18 [r12];
  D6():
    deopt 19 [extras3];
  D7():
    deopt 22 [];
  D9():
    deopt 26 [f];
  L27():
    goto L3(r12);
  L29():
    extras4 = force? extras3;
    checkMissing(extras4);
    goto L5(extras4);
  L31():
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        paste1 = ldf paste;
        p5 = prom<V +>{
          extras6 = ld extras;
          extras7 = force? extras6;
          checkMissing(extras7);
          return extras7;
        };
        r14 = dyn paste1[, collapse](p5, "+");
        return r14;
      };
      r16 = dyn paste("~", p6);
      return r16;
    };
    r18 = dyn str2lang(p7);
    check L32() else D8();
  L33():
    f1 = force? f;
    checkMissing(f1);
    c1 = `is.object`(f1);
    if c1 then L34() else L35(f1);
  D8():
    deopt 24 [r18];
  L6(dx1):
    l = ld ff;
    c2 = `is.object`(l);
    if c2 then L37() else L38(dx1, l);
  L32():
    goto L5(r18);
  L34():
    dr = tryDispatchBuiltin.1("[[", f1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(f3):
    __1 = ldf `[[` in base;
    r19 = dyn __1(f3, 2);
    goto L6(r19);
  L7(dx7):
    st ff = dx7;
    f4 = ld f;
    check L40() else D10();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L37():
    dr2 = tryDispatchBuiltin.0("[[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dx1, dr2);
  L38(dx3, l2):
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l2, dx1, 2);
    goto L7(r20);
  D10():
    deopt 36 [f4];
  L39():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx5);
  L40():
    f5 = force? f4;
    checkMissing(f5);
    c3 = `is.object`(f5);
    if c3 then L41() else L42(f5);
  L8(dx9):
    l3 = ld ff;
    c4 = `is.object`(l3);
    if c4 then L44() else L45(dx9, l3, dx9, l3);
  L41():
    dr4 = tryDispatchBuiltin.1("[[", f5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(dr4);
  L42(f7):
    __2 = ldf `[[` in base;
    r21 = dyn __2(f7, 3);
    goto L8(r21);
  L9(dx17, l9, dx18, dx19):
    c5 = `is.object`(dx19);
    if c5 then L47() else L48(dx17, l9, dx19);
  L43():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx8);
  L44():
    dr6 = tryDispatchBuiltin.1("[[", l3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L46() else L45(dx9, l3, dx9, dr6);
  L45(dx12, l6, dx13, l7):
    __3 = ldf `[[` in base;
    r22 = dyn __3(l7, 3);
    goto L9(dx12, l6, dx13, r22);
  L10(dx26, l13, dx27):
    c6 = `is.object`(l13);
    if c6 then L50() else L51(dx26, l13);
  L46():
    dx16 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx9, l3, dx9, dx16);
  L47():
    dr8 = tryDispatchBuiltin.0("[[<-", dx19, dx18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L49() else L48(dx17, l9, dr8);
  L48(dx22, l11, dx23):
    ____1 = ldf `[[<-` in base;
    r23 = dyn ____1(dx23, dx18, 2);
    goto L10(dx22, l11, r23);
  L11(dx33):
    st ff = dx33;
    gg = ld gg;
    check L53() else D11();
  L49():
    dx25 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx17, l9, dx25);
  L50():
    dr10 = tryDispatchBuiltin.0("[[<-", l13, dx27);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L52() else L51(dx26, dr10);
  L51(dx29, l15):
    ____2 = ldf `[[<-` in base;
    r24 = dyn ____2(l15, dx27, 3);
    goto L11(r24);
  D11():
    deopt 54 [gg];
  L52():
    dx31 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx31);
  L53():
    gg1 = force? gg;
    checkMissing(gg1);
    c7 = `is.object`(gg1);
    if c7 then L54() else L55(gg1);
  L12(dx35):
    l16 = ld ff;
    c8 = `is.object`(l16);
    if c8 then L57() else L58(dx35, l16, dx35, l16);
  L54():
    dr12 = tryDispatchBuiltin.1("[[", gg1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L56() else L55(dr12);
  L55(gg3):
    __4 = ldf `[[` in base;
    r25 = dyn __4(gg3, 2);
    goto L12(r25);
  L13(dx43, l22, dx44, dx45):
    c9 = `is.object`(dx45);
    if c9 then L60() else L61(dx43, l22, dx45);
  L56():
    dx34 = getTryDispatchBuiltinValue(dr12);
    goto L12(dx34);
  L57():
    dr14 = tryDispatchBuiltin.1("[[", l16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L59() else L58(dx35, l16, dx35, dr14);
  L58(dx38, l19, dx39, l20):
    __5 = ldf `[[` in base;
    r26 = dyn __5(l20, 3);
    goto L13(dx38, l19, dx39, r26);
  L14(dx52, l26, dx53):
    c10 = `is.object`(l26);
    if c10 then L63() else L64(dx52, l26);
  L59():
    dx42 = getTryDispatchBuiltinValue(dr14);
    goto L13(dx35, l16, dx35, dx42);
  L60():
    dr16 = tryDispatchBuiltin.0("[[<-", dx45, dx44);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L62() else L61(dx43, l22, dr16);
  L61(dx48, l24, dx49):
    ____3 = ldf `[[<-` in base;
    r27 = dyn ____3(dx49, dx44, 3);
    goto L14(dx48, l24, r27);
  L15(dx59):
    st ff = dx59;
    envir1 = ld envir;
    check L66() else D12();
  L62():
    dx51 = getTryDispatchBuiltinValue(dr16);
    goto L14(dx43, l22, dx51);
  L63():
    dr18 = tryDispatchBuiltin.0("[[<-", l26, dx53);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L65() else L64(dx52, dr18);
  L64(dx55, l28):
    ____4 = ldf `[[<-` in base;
    r28 = dyn ____4(l28, dx53, 3);
    goto L15(r28);
  D12():
    deopt 72 [envir1];
  L65():
    dx57 = getTryDispatchBuiltinValue(dr18);
    goto L15(dx57);
  L66():
    envir2 = force? envir1;
    checkMissing(envir2);
    l29 = ld ff;
    environment__ = ldf `environment<-`;
    check L67() else D13();
  D13():
    deopt 75 [envir2, l29, envir2];
  L67():
    r29 = dyn environment__(l29, NULL, envir2);
    check L68() else D14();
  D14():
    deopt 77 [envir2, r29];
  L68():
    st ff = r29;
    na_expand1 = ld `na.expand`;
    check L69() else D15();
  D15():
    deopt 79 [na_expand1];
  L69():
    na_expand2 = force? na_expand1;
    checkMissing(na_expand2);
    r30 = `!`(na_expand2);
    c11 = `as.logical`(r30);
    if c11 then L70() else L16();
  L16():
    eval1 = ldf eval;
    check L74() else D18();
  L17():
    rval6 = ld rval;
    check L92() else D31();
  L70():
    eval = ldf eval;
    check L71() else D16();
  D16():
    deopt 83 [];
  D18():
    deopt 89 [];
  D31():
    deopt 129 [rval6];
  L71():
    p8 = prom<V +>{
      sym1 = ldf call;
      base1 = ldf call in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      call = ldf call in base;
      r33 = dyn call("model.frame", <sym ff>, <lang `$`(cl, data)>, <lang `$`(cl, subset)>, <lang `$`(cl, na.action)>);
      goto L0(r33);
    L2():
      r31 = dyn base1[, , data, subset, `na.action`]("model.frame", <sym ff>, <lang `$`(cl, data)>, <lang `$`(cl, subset)>, <lang `$`(cl, na.action)>);
      goto L0(r31);
    };
    p9 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r36 = dyn eval(p8, p9);
    check L72() else D17();
  L74():
    p10 = prom<V +>{
      sym2 = ldf call;
      base2 = ldf call in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      call1 = ldf call in base;
      r40 = dyn call1("model.frame", <sym ff>, <lang `$`(cl, data)>, <lang `$`(cl, subset)>, <sym I>);
      goto L0(r40);
    L2():
      r38 = dyn base2[, , data, subset, `na.action`]("model.frame", <sym ff>, <lang `$`(cl, data)>, <lang `$`(cl, subset)>, <sym I>);
      goto L0(r38);
    };
    p11 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    r43 = dyn eval1(p10, p11);
    check L75() else D19();
  L92():
    rval7 = force? rval6;
    checkMissing(rval7);
    popenv;
    return rval7;
  D17():
    deopt 86 [r36];
  D19():
    deopt 92 [r43];
  L72():
    st rval = r36;
    goto L17();
  L75():
    st rval = r43;
    model_frame = ldf `model.frame`;
    check L76() else D20();
  D20():
    deopt 95 [];
  L76():
    p12 = prom<V +>{
      model7 = ld model;
      model8 = force? model7;
      checkMissing(model8);
      return model8;
    };
    r45 = dyn model_frame(p12);
    check L77() else D21();
  D21():
    deopt 97 [r45];
  L77():
    st oldmf = r45;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  L18(r47):
    st keep = r47;
    rval2 = ld rval;
    check L85() else D27();
  L78():
    rownames = ldf rownames;
    check L80() else D22();
  L79():
    r46 = dyn base3(<lang rownames(oldmf)>, <lang rownames(rval)>);
    goto L18(r46);
  D22():
    deopt 102 [];
  D27():
    deopt 114 [rval2];
  L80():
    p13 = prom<V +>{
      oldmf = ld oldmf;
      oldmf1 = force? oldmf;
      checkMissing(oldmf1);
      return oldmf1;
    };
    r49 = dyn rownames(p13);
    check L81() else D23();
  L85():
    rval3 = force? rval2;
    checkMissing(rval3);
    c12 = `is.object`(rval3);
    if c12 then L86() else L87(rval3);
  D23():
    deopt 104 [r49];
  L19(dx61):
    st rval = dx61;
    l30 = ld rval;
    class__ = ldf `class<-`;
    check L90() else D29();
  L81():
    rownames1 = ldf rownames;
    check L82() else D24();
  L86():
    dr20 = tryDispatchBuiltin.1("[", rval3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L88() else L87(dr20);
  L87(rval5):
    keep = ld keep;
    check L89() else D28();
  D24():
    deopt 106 [];
  D28():
    deopt 116 [rval5, keep];
  D29():
    deopt 125 ["data.frame", l30, "data.frame"];
  L82():
    p14 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    r51 = dyn rownames1(p14);
    check L83() else D25();
  L88():
    dx60 = getTryDispatchBuiltinValue(dr20);
    goto L19(dx60);
  L89():
    keep1 = force? keep;
    __6 = ldf `[` in base;
    r53 = dyn __6(rval3, keep1, <missing>);
    goto L19(r53);
  L90():
    r54 = dyn class__(l30, NULL, "data.frame");
    check L91() else D30();
  D25():
    deopt 108 [r51];
  D30():
    deopt 127 ["data.frame", r54];
  L83():
    match = ldf match in base;
    r52 = dyn match(r49, r51, NA_INT, NULL);
    check L84() else D26();
  L91():
    st rval = r54;
    goto L17();
  D26():
    deopt 112 [r52];
  L84():
    goto L18(r52);
  }
}