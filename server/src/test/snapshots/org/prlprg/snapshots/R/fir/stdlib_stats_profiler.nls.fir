fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner468771924;
    st `profiler.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner468771924(fitted, `...`) {
  (reg fitted:*, reg ddd:dots) -+> V { var fitted:*, var `...`:dots?, reg fitted1:*, reg fitted2:V, reg c:L, reg fitted4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg fitted5:*, reg fitted6:V, reg c1:L, reg fitted8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r2:V, reg fitted9:*, reg fitted10:V, reg c3:L, reg fitted12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r3:V, reg c4:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r4:V, reg fitted13:*, reg fitted14:V, reg c5:L, reg fitted16:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r5:V, reg c6:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r6:V, reg fittedModel:*, reg fittedModel1:V, reg c7:L, reg fittedModel3:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r7:V, reg dx22:cls, reg r8:V, reg fitted17:*, reg fitted18:V, reg c8:L, reg fitted20:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg r9:V, reg c9:L, reg dx26:V, reg dr18:V, reg dc9:L, reg dx27:V, reg dx28:V, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg lower:*, reg lower1:V, reg c10:V, reg r15:V, reg c11:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg lower2:*, reg lower3:V, reg as_double:cls, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg defaultPars:*, reg defaultPars1:V, reg length:cls, reg r22:V, reg rep_len:cls, reg r23:V, reg fitted21:*, reg fitted22:V, reg c12:L, reg fitted24:V, reg dr20:V, reg dc10:L, reg dx29:V, reg dx30:V, reg r24:V, reg c13:L, reg dx32:V, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg upper:*, reg upper1:V, reg c14:V, reg r30:V, reg c15:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg upper2:*, reg upper3:V, reg as_double1:cls, reg r33:V, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg defaultPars2:*, reg defaultPars3:V, reg length1:cls, reg r37:V, reg rep_len1:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg defaultPars4:*, reg defaultPars5:V, reg length2:cls, reg r43:V, reg rep_int:cls, reg r44:V, reg deviance:cls, reg fitted25:*, reg fitted26:V, reg p:p(V +), reg r46:V, reg summary:cls, reg fitted27:*, reg fitted28:V, reg p1:p(V +), reg r48:V, reg c16:L, reg r50:V, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg r51:V, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg on_exit:cls, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg r58:cls, reg r59:cls, reg r60:cls, reg r61:cls, reg list:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg c17:cls, reg r65:V, reg l:*, reg class__:cls, reg r66:V, reg prof:*, reg prof1:V |
    mkenv;
    st fitted = fitted;
    st `...` = ddd;
    fitted1 = ld fitted;
    check L17() else D0();
  D0():
    deopt 0 [fitted1];
  L17():
    fitted2 = force? fitted1;
    checkMissing(fitted2);
    c = `is.object`(fitted2);
    if c then L19() else L20(fitted2);
  L18(dx1):
    st fittedModel = dx1;
    fitted5 = ld fitted;
    check L22() else D1();
  L19():
    dr = tryDispatchBuiltin.1("$", fitted2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(fitted4):
    r = `$`(fitted4, <sym m>);
    goto L18(r);
  D1():
    deopt 4 [fitted5];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    fitted6 = force? fitted5;
    checkMissing(fitted6);
    c1 = `is.object`(fitted6);
    if c1 then L24() else L25(fitted6);
  L23(dx3):
    c2 = `is.object`(dx3);
    if c2 then L28() else L29(dx3);
  L24():
    dr2 = tryDispatchBuiltin.1("$", fitted6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(fitted8):
    r1 = `$`(fitted8, <sym call>);
    goto L23(r1);
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27(dx7):
    st algorithm = dx7;
    fitted9 = ld fitted;
    check L31() else D2();
  L28():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(dr4);
  L29(dx5):
    r2 = `$`(dx5, <sym algorithm>);
    goto L27(r2);
  D2():
    deopt 9 [fitted9];
  L30():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L27(dx6);
  L31():
    fitted10 = force? fitted9;
    checkMissing(fitted10);
    c3 = `is.object`(fitted10);
    if c3 then L33() else L34(fitted10);
  L32(dx9):
    c4 = `is.object`(dx9);
    if c4 then L37() else L38(dx9);
  L33():
    dr6 = tryDispatchBuiltin.1("$", fitted10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(dr6);
  L34(fitted12):
    r3 = `$`(fitted12, <sym call>);
    goto L32(r3);
  L35():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx8);
  L36(dx13):
    st ctrl = dx13;
    fitted13 = ld fitted;
    check L40() else D3();
  L37():
    dr8 = tryDispatchBuiltin.1("$", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L39() else L38(dr8);
  L38(dx11):
    r4 = `$`(dx11, <sym control>);
    goto L36(r4);
  D3():
    deopt 14 [fitted13];
  L39():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L36(dx12);
  L40():
    fitted14 = force? fitted13;
    checkMissing(fitted14);
    c5 = `is.object`(fitted14);
    if c5 then L42() else L43(fitted14);
  L41(dx15):
    c6 = `is.object`(dx15);
    if c6 then L46() else L47(dx15);
  L42():
    dr10 = tryDispatchBuiltin.1("$", fitted14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L44() else L43(dr10);
  L43(fitted16):
    r5 = `$`(fitted16, <sym call>);
    goto L41(r5);
  L44():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L41(dx14);
  L45(dx19):
    st trace = dx19;
    fittedModel = ld fittedModel;
    check L49() else D4();
  L46():
    dr12 = tryDispatchBuiltin.1("$", dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L48() else L47(dr12);
  L47(dx17):
    r6 = `$`(dx17, <sym trace>);
    goto L45(r6);
  D4():
    deopt 19 [fittedModel];
  L48():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L45(dx18);
  L49():
    fittedModel1 = force? fittedModel;
    checkMissing(fittedModel1);
    c7 = `is.object`(fittedModel1);
    if c7 then L51() else L52(fittedModel1);
  L50(dx21):
    checkFun.0(dx21);
    dx22 = dx21 as cls;
    r8 = dyn dx22();
    check L54() else D5();
  L51():
    dr14 = tryDispatchBuiltin.1("$", fittedModel1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L53() else L52(dr14);
  L52(fittedModel3):
    r7 = `$`(fittedModel3, <sym getPars>);
    goto L50(r7);
  D5():
    deopt 23 [r8];
  L53():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L50(dx20);
  L54():
    st fittedPars = r8;
    st defaultPars = r8;
    fitted17 = ld fitted;
    check L55() else D6();
  D6():
    deopt 26 [fitted17];
  L55():
    fitted18 = force? fitted17;
    checkMissing(fitted18);
    c8 = `is.object`(fitted18);
    if c8 then L57() else L58(fitted18);
  L56(dx24):
    c9 = `is.object`(dx24);
    if c9 then L61() else L62(dx24);
  L57():
    dr16 = tryDispatchBuiltin.1("$", fitted18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L59() else L58(dr16);
  L58(fitted20):
    r9 = `$`(fitted20, <sym call>);
    goto L56(r9);
  L59():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L56(dx23);
  L60(dx28):
    st lower = dx28;
    sym = ldf rep_len;
    base = ldf rep_len in base;
    guard = `==`.4(sym, base);
    if guard then L64() else L65();
  L61():
    dr18 = tryDispatchBuiltin.1("$", dx24);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L63() else L62(dr18);
  L62(dx26):
    r10 = `$`(dx26, <sym lower>);
    goto L60(r10);
  L0(r12):
    st lower = r12;
    fitted21 = ld fitted;
    check L80() else D13();
  L63():
    dx27 = getTryDispatchBuiltinValue(dr18);
    goto L60(dx27);
  L64():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L65():
    r11 = dyn base(<lang if(`!`(is.null(lower)), as.double(lower), +Infinity)>, <lang length(defaultPars)>);
    goto L0(r11);
  D13():
    deopt 55 [fitted21];
  L1(r14):
    r15 = `!`(r14);
    c11 = `as.logical`(r15);
    if c11 then L69() else L2();
  L66():
    lower = ld lower;
    check L68() else D7();
  L67():
    r13 = dyn base1(<sym lower>);
    goto L1(r13);
  L80():
    fitted22 = force? fitted21;
    checkMissing(fitted22);
    c12 = `is.object`(fitted22);
    if c12 then L82() else L83(fitted22);
  D7():
    deopt 34 [lower];
  L2():
    goto L4(+Infinity);
  L4(r19):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L68():
    lower1 = force? lower;
    checkMissing(lower1);
    c10 = `==`(lower1, NULL);
    goto L1(c10);
  L69():
    sym2 = ldf `as.double`;
    base2 = ldf `as.double` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L81(dx30):
    c13 = `is.object`(dx30);
    if c13 then L86() else L87(dx30);
  L82():
    dr20 = tryDispatchBuiltin.1("$", fitted22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L84() else L83(dr20);
  L83(fitted24):
    r24 = `$`(fitted24, <sym call>);
    goto L81(r24);
  L3(r17):
    goto L4(r17);
  L5(r21):
    rep_len = ldf rep_len in base;
    r23 = dyn rep_len(r19, r21);
    check L79() else D12();
  L70():
    lower2 = ld lower;
    check L72() else D8();
  L71():
    r16 = dyn base2(<sym lower>);
    goto L3(r16);
  L75():
    defaultPars = ld defaultPars;
    check L77() else D10();
  L76():
    r20 = dyn base3(<sym defaultPars>);
    goto L5(r20);
  L84():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L81(dx29);
  L85(dx34):
    st upper = dx34;
    sym4 = ldf rep_len;
    base4 = ldf rep_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L89() else L90();
  L86():
    dr22 = tryDispatchBuiltin.1("$", dx30);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L88() else L87(dr22);
  L87(dx32):
    r25 = `$`(dx32, <sym upper>);
    goto L85(r25);
  D8():
    deopt 40 [lower2];
  D10():
    deopt 48 [defaultPars];
  D12():
    deopt 53 [r23];
  L6(r27):
    st upper = r27;
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L72():
    lower3 = force? lower2;
    checkMissing(lower3);
    as_double = ldf `as.double` in base;
    r18 = dyn as_double(lower3);
    check L73() else D9();
  L77():
    defaultPars1 = force? defaultPars;
    checkMissing(defaultPars1);
    length = ldf length in base;
    r22 = dyn length(defaultPars1);
    check L78() else D11();
  L79():
    goto L0(r23);
  L88():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L85(dx33);
  L89():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L91() else L92();
  L90():
    r26 = dyn base4(<lang if(`!`(is.null(upper)), as.double(upper), +Infinity)>, <lang length(defaultPars)>);
    goto L6(r26);
  D9():
    deopt 43 [r18];
  D11():
    deopt 51 [r22];
  L7(r29):
    r30 = `!`(r29);
    c15 = `as.logical`(r30);
    if c15 then L94() else L8();
  L12(r40):
    st defaultVary = r40;
    deviance = ldf deviance;
    check L112() else D23();
  L73():
    goto L3(r18);
  L78():
    goto L5(r22);
  L91():
    upper = ld upper;
    check L93() else D14();
  L92():
    r28 = dyn base5(<sym upper>);
    goto L7(r28);
  L105():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  L106():
    r39 = dyn base8(TRUE, <lang length(defaultPars)>);
    goto L12(r39);
  D14():
    deopt 63 [upper];
  D23():
    deopt 97 [];
  L8():
    goto L10(+Infinity);
  L10(r34):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L13(r42):
    rep_int = ldf `rep.int` in base;
    r44 = dyn rep_int(TRUE, r42);
    check L111() else D22();
  L93():
    upper1 = force? upper;
    checkMissing(upper1);
    c14 = `==`(upper1, NULL);
    goto L7(c14);
  L94():
    sym6 = ldf `as.double`;
    base6 = ldf `as.double` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L107():
    defaultPars4 = ld defaultPars;
    check L109() else D20();
  L108():
    r41 = dyn base9(<sym defaultPars>);
    goto L13(r41);
  L112():
    p = prom<V +>{
      fitted25 = ld fitted;
      fitted26 = force? fitted25;
      checkMissing(fitted26);
      return fitted26;
    };
    r46 = dyn deviance(p);
    check L113() else D24();
  D20():
    deopt 89 [defaultPars4];
  D22():
    deopt 94 [r44];
  D24():
    deopt 99 [r46];
  L9(r32):
    goto L10(r32);
  L11(r36):
    rep_len1 = ldf rep_len in base;
    r38 = dyn rep_len1(r34, r36);
    check L104() else D19();
  L95():
    upper2 = ld upper;
    check L97() else D15();
  L96():
    r31 = dyn base6(<sym upper>);
    goto L9(r31);
  L100():
    defaultPars2 = ld defaultPars;
    check L102() else D17();
  L101():
    r35 = dyn base7(<sym defaultPars>);
    goto L11(r35);
  L109():
    defaultPars5 = force? defaultPars4;
    checkMissing(defaultPars5);
    length2 = ldf length in base;
    r43 = dyn length2(defaultPars5);
    check L110() else D21();
  L111():
    goto L12(r44);
  L113():
    st `S.hat` = r46;
    summary = ldf summary;
    check L114() else D25();
  D15():
    deopt 69 [upper2];
  D17():
    deopt 77 [defaultPars2];
  D19():
    deopt 82 [r38];
  D21():
    deopt 92 [r43];
  D25():
    deopt 102 [];
  L97():
    upper3 = force? upper2;
    checkMissing(upper3);
    as_double1 = ldf `as.double` in base;
    r33 = dyn as_double1(upper3);
    check L98() else D16();
  L102():
    defaultPars3 = force? defaultPars2;
    checkMissing(defaultPars3);
    length1 = ldf length in base;
    r37 = dyn length1(defaultPars3);
    check L103() else D18();
  L104():
    goto L6(r38);
  L110():
    goto L13(r43);
  L114():
    p1 = prom<V +>{
      fitted27 = ld fitted;
      fitted28 = force? fitted27;
      checkMissing(fitted28);
      return fitted28;
    };
    r48 = dyn summary(p1);
    check L115() else D26();
  D16():
    deopt 72 [r33];
  D18():
    deopt 80 [r37];
  D26():
    deopt 104 [r48];
  L98():
    goto L9(r33);
  L103():
    goto L11(r37);
  L115():
    c16 = `is.object`(r48);
    if c16 then L117() else L118(r48);
  L116(dx36):
    r52 = `^`(dx36, 2.0);
    st `s2.hat` = r52;
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L120() else L121();
  L117():
    dr24 = tryDispatchBuiltin.1("$", r48);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L119() else L118(dr24);
  L118(r50):
    r51 = `$`(r50, <sym sigma>);
    goto L116(r51);
  L14():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L119():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L116(dx35);
  L120():
    on_exit = ldf `on.exit` in base;
    r55 = dyn on_exit(<lang remove(fitted)>);
    goto L14();
  L121():
    r53 = dyn base10(<lang remove(fitted)>);
    goto L14();
  L15(r57):
    st prof = r57;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L125() else L126();
  L122():
    r58 = clos inner2708337952;
    r59 = clos inner2708337952;
    r60 = clos inner2827293414;
    r61 = clos inner1246119658;
    list = ldf list in base;
    r62 = dyn list(r58, r59, r60, r61);
    check L124() else D27();
  L123():
    r56 = dyn base11[getFittedPars, getFittedModel, setDefault, getProfile](<lang function(NULL, fittedPars, NULL)>, <lang function(NULL, fittedModel, NULL)>, <lang function((varying=, params=), {
        if(`&&`(missing(params), missing(varying)), {
            `$`(fittedModel, setVarying)();
            `$`(fittedModel, setPars)(fittedPars);
            `<<-`(defaultPars, fittedPars);
            `<<-`(defaultVary, rep.int(TRUE, length(defaultPars)))
          }, {
            if(`!`(missing(params)), {
                if(`!=`(length(params), length(fittedPars)), stop("'params' has wrong length"));
                `<<-`(defaultPars, params)
              });
            if(`!`(missing(varying)), {
                if(is.numeric(varying), {
                    if(`!`(all(`%in%`(varying, seq_along(fittedPars)))), stop("'varying' must be in seq_along(pars)"));
                    `<-`(varying, `!`(`(`(`%in%`(`(`(seq_along(fittedPars)), varying))))
                  }, if(is.logical(varying), {
                      if(`!=`(length(varying), length(fittedPars)), stop("'varying' has wrong length"))
                    }, if(is.character(varying), {
                        if(`!`(all(`%in%`(varying, names(fittedPars)))), stop("'varying' must be in seq_along(pars)"));
                        `<-`(varying, `!`(`(`(`%in%`(names(fittedPars), varying))))
                      }, stop("'varying' must be logical, integer or character"))));
                `<<-`(defaultVary, varying)
              })
          })
      }, NULL)>, <lang function((...=), {
        `<-`(args, list(...));
        if(`==`(length(args), 0), {
            `<-`(vary, defaultVary);
            `<-`(startPars, defaultPars)
          }, if(`&&`(`==`(length(args), 2), is.logical(`[[`(args, 1))), {
              `<-`(vary, `[[`(args, 1));
              `<-`(params, unlist(`[[`(args, 2)));
              `<-`(startPars, defaultPars);
              `<-`(`[`(startPars, `!`(vary)), params)
            }, {
              if(`&&`(`==`(length(args), 1.0), is.list(`[[`(args, 1))), {
                  `<-`(params, unlist(`[[`(args, 1)))
                }, if(all(sapply(args, is.numeric)), {
                    `<-`(params, unlist(args))
                  }, stop("invalid argument to 'getProfile'")));
              if(`!`(all(`%in%`(names(params), names(fittedPars)))), stop("cannot recognize parameter name"));
              `<-`(startPars, defaultPars);
              `<-`(vary, `!`(`(`(`%in%`(names(fittedPars), names(params)))));
              `<-`(`[`(startPars, `!`(vary)), params)
            }));
        `$`(fittedModel, setVarying)();
        `$`(fittedModel, setPars)(startPars);
        `$`(fittedModel, setVarying)(vary);
        `$`(fittedModel, setPars)(`[`(startPars, vary));
        if(`!=`(algorithm, "port"), {
            if(sum(vary), .Call(C_nls_iter, fittedModel, ctrl, trace));
            `<-`(dev, `$`(fittedModel, deviance)())
          }, {
            `<-`(iv, nls_port_fit(fittedModel, `[`(startPars, vary), `[`(lower, vary), `[`(upper, vary), ctrl, trace));
            `<-`(dev, if(`!`(`%in%`(`[`(iv, 1), `:`(3.0, 6.0))), NA_REAL, `$`(fittedModel, deviance)()))
          });
        `<-`(profiledModel, fittedModel);
        `<-`(fstat, `/`(`(`(`-`(dev, S.hat)), s2.hat));
        `$`(fittedModel, setVarying)();
        `<-`(ans, list(fstat=fstat, parameters=`$`(profiledModel, getAllPars)(), varying=vary));
        `$`(fittedModel, setPars)(defaultPars);
        ans
      }, NULL)>);
    goto L15(r56);
  D27():
    deopt 127 [r62];
  L16(r64):
    l = ld prof;
    class__ = ldf `class<-`;
    check L128() else D29();
  L124():
    goto L15(r62);
  L125():
    c17 = ldf c in base;
    r65 = dyn c17("profiler.nls", "profiler");
    check L127() else D28();
  L126():
    r63 = dyn base12("profiler.nls", "profiler");
    goto L16(r63);
  D28():
    deopt 134 [r65];
  D29():
    deopt 136 [r64, l, r64];
  L127():
    goto L16(r65);
  L128():
    r66 = dyn class__(l, NULL, r64);
    check L129() else D30();
  D30():
    deopt 138 [r64, r66];
  L129():
    st prof = r66;
    prof = ld prof;
    check L130() else D31();
  D31():
    deopt 140 [prof];
  L130():
    prof1 = force? prof;
    checkMissing(prof1);
    popenv;
    return prof1;
  }
}
fun inner2708337952() {
  () -+> V { reg fittedPars:*, reg fittedPars1:V |
    mkenv;
    fittedPars = ld fittedPars;
    check L0() else D0();
  D0():
    deopt 0 [fittedPars];
  L0():
    fittedPars1 = force? fittedPars;
    checkMissing(fittedPars1);
    popenv;
    return fittedPars1;
  }
}
fun inner2827293414(varying, params) {
  (reg varying:*, reg params:*) -+> V { var varying:*, var params:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg missing1:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg fittedModel:*, reg fittedModel1:V, reg c10:L, reg fittedModel3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg dx2:cls, reg r7:V, reg fittedModel4:*, reg fittedModel5:V, reg c11:L, reg fittedModel7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r8:V, reg dx5:cls, reg fittedPars:*, reg fittedPars1:V, reg p:p(V +), reg r10:V, reg fittedPars2:*, reg fittedPars3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg defaultPars:*, reg defaultPars1:V, reg length:cls, reg r15:V, reg rep_int:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg missing2:cls, reg r19:V, reg r20:V, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg params1:*, reg params2:V, reg length1:cls, reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg r28:V, reg fittedPars4:*, reg fittedPars5:V, reg length2:cls, reg r29:V, reg r30:V, reg c13:L, reg stop:cls, reg r31:V, reg params3:*, reg params4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg missing3:cls, reg r35:V, reg r36:V, reg c14:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg varying1:*, reg varying2:V, reg is_numeric:cls, reg r39:V, reg c15:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg _in_:cls, reg varying3:*, reg varying4:V, reg p1:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg fittedPars6:*, reg fittedPars7:V, reg r45:I, reg p2:p(V +), reg r47:V, reg all:cls, reg r48:V, reg r49:V, reg c16:L, reg stop1:cls, reg r50:V, reg _in_1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg fittedPars8:*, reg fittedPars9:V, reg r54:I, reg p3:p(V +), reg varying5:*, reg varying6:V, reg p4:p(V +), reg r57:V, reg r58:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r60:V, reg r61:V, reg varying7:*, reg varying8:V, reg c17:L, reg c18:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r62:V, reg r63:V, reg varying9:*, reg varying10:V, reg length3:cls, reg r64:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r67:V, reg r68:V, reg r69:V, reg fittedPars10:*, reg fittedPars11:V, reg length4:cls, reg r70:V, reg r71:V, reg c19:L, reg stop2:cls, reg r72:V, reg r73:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r74:V, reg r75:V, reg varying11:*, reg varying12:V, reg c20:L, reg c21:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r76:V, reg r77:V, reg _in_2:cls, reg varying13:*, reg varying14:V, reg p5:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r79:V, reg r80:V, reg fittedPars12:*, reg fittedPars13:V, reg names:cls, reg r81:V, reg p6:p(V +), reg r83:V, reg all1:cls, reg r84:V, reg r85:V, reg c22:L, reg stop3:cls, reg r86:V, reg _in_3:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r88:V, reg r89:V, reg fittedPars14:*, reg fittedPars15:V, reg names1:cls, reg r90:V, reg p7:p(V +), reg varying15:*, reg varying16:V, reg p8:p(V +), reg r93:V, reg r94:V, reg stop4:cls, reg r95:V, reg varying17:*, reg varying18:V |
    mkenv;
    st varying = varying;
    st params = params;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L0(r1):
    c = `as.logical`(r1);
    if c then L34() else L1(c);
  L32():
    missing = ldf missing in base;
    r2 = dyn missing(<sym params>);
    goto L0(r2);
  L33():
    r = dyn base(<sym params>);
    goto L0(r);
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L38() else L3();
  L34():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L35():
    missing1 = ldf missing in base;
    r5 = dyn missing1(<sym varying>);
    goto L2(c, r5);
  L36():
    r3 = dyn base1(<sym varying>);
    goto L2(c, r3);
  L38():
    fittedModel = ld fittedModel;
    check L39() else D0();
  D0():
    deopt 7 [fittedModel];
  L6(r18):
    r20 = `!`(r18);
    c12 = `as.logical`(r20);
    if c12 then L62() else L7();
  L39():
    fittedModel1 = force? fittedModel;
    checkMissing(fittedModel1);
    c10 = `is.object`(fittedModel1);
    if c10 then L41() else L42(fittedModel1);
  L60():
    missing2 = ldf missing in base;
    r19 = dyn missing2(<sym params>);
    goto L6(r19);
  L61():
    r17 = dyn base4(<sym params>);
    goto L6(r17);
  L7():
    goto L12();
  L12():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L40(dx1):
    checkFun.0(dx1);
    dx2 = dx1 as cls;
    r7 = dyn dx2();
    check L44() else D1();
  L41():
    dr = tryDispatchBuiltin.1("$", fittedModel1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(fittedModel3):
    r6 = `$`(fittedModel3, <sym setVarying>);
    goto L40(r6);
  L62():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D1():
    deopt 11 [r7];
  L8(r22):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L13(r34):
    r36 = `!`(r34);
    c14 = `as.logical`(r36);
    if c14 then L79() else L14();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(dx);
  L44():
    fittedModel4 = ld fittedModel;
    check L45() else D2();
  L63():
    params1 = ld params;
    check L65() else D8();
  L64():
    r21 = dyn base5(<sym params>);
    goto L8(r21);
  L77():
    missing3 = ldf missing in base;
    r35 = dyn missing3(<sym varying>);
    goto L13(r35);
  L78():
    r33 = dyn base7(<sym varying>);
    goto L13(r33);
  D2():
    deopt 12 [fittedModel4];
  D8():
    deopt 40 [params1];
  L9(r27, r28):
    r30 = `!=`(r27, r28);
    c13 = `as.logical`(r30);
    if c13 then L71() else L10();
  L14():
    invisible.0();
    popenv;
    return NULL;
  L45():
    fittedModel5 = force? fittedModel4;
    checkMissing(fittedModel5);
    c11 = `is.object`(fittedModel5);
    if c11 then L47() else L48(fittedModel5);
  L65():
    params2 = force? params1;
    checkMissing(params2);
    length1 = ldf length in base;
    r23 = dyn length1(params2);
    check L66() else D9();
  L67():
    fittedPars4 = ld fittedPars;
    check L69() else D10();
  L68():
    r26 = dyn base6(<sym fittedPars>);
    goto L9(r22, r26);
  L79():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  D9():
    deopt 43 [r23];
  D10():
    deopt 45 [r22, fittedPars4];
  L10():
    goto L11();
  L11():
    params3 = ld params;
    check L75() else D14();
  L15(r38):
    c15 = `as.logical`(r38);
    if c15 then L84() else L16();
  L46(dx4):
    checkFun.0(dx4);
    dx5 = dx4 as cls;
    p = prom<V +>{
      fittedPars = ld fittedPars;
      fittedPars1 = force? fittedPars;
      checkMissing(fittedPars1);
      return fittedPars1;
    };
    r10 = dyn dx5(p);
    check L50() else D3();
  L47():
    dr2 = tryDispatchBuiltin.1("$", fittedModel5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(fittedModel7):
    r8 = `$`(fittedModel7, <sym setPars>);
    goto L46(r8);
  L66():
    goto L8(r23);
  L69():
    fittedPars5 = force? fittedPars4;
    checkMissing(fittedPars5);
    length2 = ldf length in base;
    r29 = dyn length2(fittedPars5);
    check L70() else D11();
  L71():
    stop = ldf stop;
    check L72() else D12();
  L80():
    varying1 = ld varying;
    check L82() else D15();
  L81():
    r37 = dyn base8(<sym varying>);
    goto L15(r37);
  D3():
    deopt 17 [r10];
  D11():
    deopt 48 [r22, r29];
  D12():
    deopt 51 [];
  D14():
    deopt 56 [params3];
  D15():
    deopt 67 [varying1];
  L16():
    sym12 = ldf `is.logical`;
    base12 = ldf `is.logical` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L97() else L98();
  L20():
    varying17 = ld varying;
    check L132() else D41();
  L49():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L46(dx3);
  L50():
    fittedPars2 = ld fittedPars;
    check L51() else D4();
  L70():
    goto L9(r22, r29);
  L72():
    r31 = dyn stop("'params' has wrong length");
    check L73() else D13();
  L75():
    params4 = force? params3;
    checkMissing(params4);
    sst defaultPars = params4;
    goto L12();
  L82():
    varying2 = force? varying1;
    checkMissing(varying2);
    is_numeric = ldf `is.numeric` in base;
    r39 = dyn is_numeric(varying2);
    check L83() else D16();
  L84():
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L85() else L86();
  D4():
    deopt 18 [fittedPars2];
  D13():
    deopt 53 [r31];
  D16():
    deopt 70 [r39];
  D41():
    deopt 147 [varying17];
  L17(r41):
    r49 = `!`(r41);
    c16 = `as.logical`(r49);
    if c16 then L90() else L18();
  L21(r61):
    c18 = `as.logical`(r61);
    if c18 then L100() else L22();
  L51():
    fittedPars3 = force? fittedPars2;
    checkMissing(fittedPars3);
    sst defaultPars = fittedPars3;
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L73():
    goto L11();
  L83():
    goto L15(r39);
  L85():
    _in_ = ldf `%in%`;
    check L87() else D17();
  L86():
    r40 = dyn base9(<lang `%in%`(varying, seq_along(fittedPars))>);
    goto L17(r40);
  L97():
    varying7 = ld varying;
    check L99() else D24();
  L98():
    r60 = dyn base12(<sym varying>);
    goto L21(r60);
  L132():
    varying18 = force? varying17;
    checkMissing(varying18);
    sst defaultVary = varying18;
    invisible.0();
    popenv;
    return varying18;
  D17():
    deopt 74 [];
  D24():
    deopt 95 [varying7];
  L4(r12):
    sst defaultVary = r12;
    invisible.0();
    popenv;
    return r12;
  L18():
    goto L19();
  L19():
    _in_1 = ldf `%in%`;
    check L94() else D22();
  L22():
    sym15 = ldf `is.character`;
    base15 = ldf `is.character` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L114() else L115();
  L52():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L53():
    r11 = dyn base2(TRUE, <lang length(defaultPars)>);
    goto L4(r11);
  L87():
    p1 = prom<V +>{
      varying3 = ld varying;
      varying4 = force? varying3;
      checkMissing(varying4);
      return varying4;
    };
    p2 = prom<V +>{
      sym10 = ldf seq_along;
      base10 = ldf seq_along in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      fittedPars6 = ld fittedPars;
      fittedPars7 = force? fittedPars6;
      checkMissing(fittedPars7);
      r45 = seq_along(fittedPars7);
      goto L0(r45);
    L2():
      r43 = dyn base10(<sym fittedPars>);
      goto L0(r43);
    };
    r47 = dyn _in_(p1, p2);
    check L88() else D18();
  L90():
    stop1 = ldf stop;
    check L91() else D20();
  L99():
    varying8 = force? varying7;
    checkMissing(varying8);
    c17 = `is.logical`(varying8);
    goto L21(c17);
  L100():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L101() else L102();
  D18():
    deopt 77 [r47];
  D20():
    deopt 82 [];
  D22():
    deopt 88 [];
  L5(r14):
    rep_int = ldf `rep.int` in base;
    r16 = dyn rep_int(TRUE, r14);
    check L58() else D7();
  L23(r63):
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L105() else L106();
  L27(r75):
    c21 = `as.logical`(r75);
    if c21 then L117() else L28();
  L54():
    defaultPars = ld defaultPars;
    check L56() else D5();
  L55():
    r13 = dyn base3(<sym defaultPars>);
    goto L5(r13);
  L88():
    all = ldf all in base;
    r48 = dyn all(r47);
    check L89() else D19();
  L91():
    r50 = dyn stop1("'varying' must be in seq_along(pars)");
    check L92() else D21();
  L94():
    p3 = prom<V +>{
      sym11 = ldf seq_along;
      base11 = ldf seq_along in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r53):
      visible.0();
      return r53;
    L1():
      fittedPars8 = ld fittedPars;
      fittedPars9 = force? fittedPars8;
      checkMissing(fittedPars9);
      r54 = seq_along(fittedPars9);
      goto L0(r54);
    L2():
      r52 = dyn base11(<sym fittedPars>);
      goto L0(r52);
    };
    p4 = prom<V +>{
      varying5 = ld varying;
      varying6 = force? varying5;
      checkMissing(varying6);
      return varying6;
    };
    r57 = dyn _in_1(p3, p4);
    check L95() else D23();
  L101():
    varying9 = ld varying;
    check L103() else D25();
  L102():
    r62 = dyn base13(<sym varying>);
    goto L23(r62);
  L114():
    varying11 = ld varying;
    check L116() else D31();
  L115():
    r74 = dyn base15(<sym varying>);
    goto L27(r74);
  D5():
    deopt 26 [defaultPars];
  D7():
    deopt 31 [r16];
  D19():
    deopt 79 [r48];
  D21():
    deopt 84 [r50];
  D23():
    deopt 91 [r57];
  D25():
    deopt 100 [varying9];
  D31():
    deopt 117 [varying11];
  L24(r68, r69):
    r71 = `!=`(r68, r69);
    c19 = `as.logical`(r71);
    if c19 then L109() else L25();
  L28():
    stop4 = ldf stop;
    check L130() else D39();
  L56():
    defaultPars1 = force? defaultPars;
    checkMissing(defaultPars1);
    length = ldf length in base;
    r15 = dyn length(defaultPars1);
    check L57() else D6();
  L58():
    goto L4(r16);
  L89():
    goto L17(r48);
  L92():
    goto L19();
  L95():
    r58 = `!`(r57);
    st varying = r58;
    goto L20();
  L103():
    varying10 = force? varying9;
    checkMissing(varying10);
    length3 = ldf length in base;
    r64 = dyn length3(varying10);
    check L104() else D26();
  L105():
    fittedPars10 = ld fittedPars;
    check L107() else D27();
  L106():
    r67 = dyn base14(<sym fittedPars>);
    goto L24(r63, r67);
  L116():
    varying12 = force? varying11;
    checkMissing(varying12);
    c20 = `is.character`(varying12);
    goto L27(c20);
  L117():
    sym16 = ldf all;
    base16 = ldf all in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L118() else L119();
  D6():
    deopt 29 [r15];
  D26():
    deopt 103 [r64];
  D27():
    deopt 105 [r63, fittedPars10];
  D39():
    deopt 144 [];
  L25():
    goto L26(NULL);
  L26(r73):
    goto L20();
  L29(r77):
    r85 = `!`(r77);
    c22 = `as.logical`(r85);
    if c22 then L123() else L30();
  L57():
    goto L5(r15);
  L104():
    goto L23(r64);
  L107():
    fittedPars11 = force? fittedPars10;
    checkMissing(fittedPars11);
    length4 = ldf length in base;
    r70 = dyn length4(fittedPars11);
    check L108() else D28();
  L109():
    stop2 = ldf stop;
    check L110() else D29();
  L118():
    _in_2 = ldf `%in%`;
    check L120() else D32();
  L119():
    r76 = dyn base16(<lang `%in%`(varying, names(fittedPars))>);
    goto L29(r76);
  L130():
    r95 = dyn stop4("'varying' must be logical, integer or character");
    check L131() else D40();
  D28():
    deopt 108 [r63, r70];
  D29():
    deopt 111 [];
  D32():
    deopt 123 [];
  D40():
    deopt 146 [r95];
  L30():
    goto L31();
  L31():
    _in_3 = ldf `%in%`;
    check L127() else D37();
  L108():
    goto L24(r63, r70);
  L110():
    r72 = dyn stop2("'varying' has wrong length");
    check L111() else D30();
  L120():
    p5 = prom<V +>{
      varying13 = ld varying;
      varying14 = force? varying13;
      checkMissing(varying14);
      return varying14;
    };
    p6 = prom<V +>{
      sym17 = ldf names;
      base17 = ldf names in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      fittedPars12 = ld fittedPars;
      fittedPars13 = force? fittedPars12;
      checkMissing(fittedPars13);
      names = ldf names in base;
      r81 = dyn names(fittedPars13);
      goto L0(r81);
    L2():
      r79 = dyn base17(<sym fittedPars>);
      goto L0(r79);
    };
    r83 = dyn _in_2(p5, p6);
    check L121() else D33();
  L123():
    stop3 = ldf stop;
    check L124() else D35();
  L131():
    goto L20();
  D30():
    deopt 113 [r72];
  D33():
    deopt 126 [r83];
  D35():
    deopt 131 [];
  D37():
    deopt 137 [];
  L111():
    goto L26(r72);
  L121():
    all1 = ldf all in base;
    r84 = dyn all1(r83);
    check L122() else D34();
  L124():
    r86 = dyn stop3("'varying' must be in seq_along(pars)");
    check L125() else D36();
  L127():
    p7 = prom<V +>{
      sym18 = ldf names;
      base18 = ldf names in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      fittedPars14 = ld fittedPars;
      fittedPars15 = force? fittedPars14;
      checkMissing(fittedPars15);
      names1 = ldf names in base;
      r90 = dyn names1(fittedPars15);
      goto L0(r90);
    L2():
      r88 = dyn base18(<sym fittedPars>);
      goto L0(r88);
    };
    p8 = prom<V +>{
      varying15 = ld varying;
      varying16 = force? varying15;
      checkMissing(varying16);
      return varying16;
    };
    r93 = dyn _in_3(p7, p8);
    check L128() else D38();
  D34():
    deopt 128 [r84];
  D36():
    deopt 133 [r86];
  D38():
    deopt 140 [r93];
  L122():
    goto L29(r84);
  L125():
    goto L31();
  L128():
    r94 = `!`(r93);
    st varying = r94;
    goto L20();
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg args:*, reg args1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg defaultVary:*, reg defaultVary1:V, reg defaultPars:*, reg defaultPars1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg args2:*, reg args3:V, reg length1:cls, reg r9:V, reg r10:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c6:L, reg r12:V, reg args4:*, reg args5:V, reg c7:L, reg c9:L, reg args7:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r13:V, reg c12:L, reg c13:L, reg c14:V, reg c16:L, reg args8:*, reg args9:V, reg c17:L, reg args11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg unlist:cls, reg args12:*, reg args13:V, reg c18:L, reg args15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r15:V, reg p:p(V +), reg r17:V, reg defaultPars3:*, reg defaultPars4:V, reg params:*, reg params1:V, reg l:*, reg c19:L, reg params3:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg params5:V, reg dx7:V, reg vary:*, reg vary1:V, reg r18:V, reg ___:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg args16:*, reg args17:V, reg length2:cls, reg r22:V, reg r23:V, reg c20:L, reg c22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c25:L, reg r25:V, reg args18:*, reg args19:V, reg c26:L, reg c28:L, reg args21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c30:L, reg dx9:V, reg __3:cls, reg r26:V, reg is_list:cls, reg r27:V, reg c31:L, reg c32:V, reg c34:L, reg unlist1:cls, reg args22:*, reg args23:V, reg c35:L, reg args25:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r28:V, reg p1:p(V +), reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg sapply:cls, reg args26:*, reg args27:V, reg p2:p(V +), reg is_numeric:*, reg is_numeric1:V, reg p3:p(V +), reg r36:V, reg all:cls, reg r37:V, reg c36:L, reg unlist2:cls, reg args28:*, reg args29:V, reg p4:p(V +), reg r39:V, reg stop:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg _in_:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg params6:*, reg params7:V, reg names:cls, reg r45:V, reg p5:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg fittedPars:*, reg fittedPars1:V, reg names1:cls, reg r49:V, reg p6:p(V +), reg r51:V, reg all1:cls, reg r52:V, reg r53:V, reg c37:L, reg stop1:cls, reg r54:V, reg defaultPars5:*, reg defaultPars6:V, reg _in_1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg fittedPars2:*, reg fittedPars3:V, reg names2:cls, reg r58:V, reg p7:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg r61:V, reg params8:*, reg params9:V, reg names3:cls, reg r62:V, reg p8:p(V +), reg r64:V, reg r65:V, reg params10:*, reg params11:V, reg l3:*, reg c38:L, reg params13:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg params15:V, reg dx13:V, reg vary2:*, reg vary3:V, reg r66:V, reg ___1:cls, reg r67:V, reg fittedModel:*, reg fittedModel1:V, reg c39:L, reg fittedModel3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r68:V, reg dx16:cls, reg r69:V, reg fittedModel4:*, reg fittedModel5:V, reg c40:L, reg fittedModel7:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r70:V, reg dx19:cls, reg startPars:*, reg startPars1:V, reg p9:p(V +), reg r72:V, reg fittedModel8:*, reg fittedModel9:V, reg c41:L, reg fittedModel11:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r73:V, reg dx22:cls, reg vary4:*, reg vary5:V, reg p10:p(V +), reg r75:V, reg fittedModel12:*, reg fittedModel13:V, reg c42:L, reg fittedModel15:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg r76:V, reg dx25:cls, reg startPars2:*, reg startPars3:V, reg c43:L, reg startPars5:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg vary6:*, reg vary7:V, reg __5:cls, reg r77:V, reg p11:p(V +), reg r79:V, reg algorithm:*, reg algorithm1:V, reg r80:V, reg c44:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg vary8:*, reg vary9:V, reg sum:cls, reg r83:V, reg c45:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg C_nls_iter:*, reg C_nls_iter1:V, reg fittedModel16:*, reg fittedModel17:V, reg ctrl:*, reg ctrl1:V, reg trace:*, reg trace1:V, reg vargs:dots, reg r86:V, reg fittedModel18:*, reg fittedModel19:V, reg c46:L, reg fittedModel21:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r88:V, reg dx30:cls, reg r89:V, reg nls_port_fit:cls, reg fittedModel22:*, reg fittedModel23:V, reg p12:p(V +), reg startPars6:*, reg startPars7:V, reg c47:L, reg startPars9:V, reg dr26:V, reg dc13:L, reg dx31:V, reg dx32:V, reg vary10:*, reg vary11:V, reg __6:cls, reg r92:V, reg p13:p(V +), reg lower:*, reg lower1:V, reg c48:L, reg lower3:V, reg dr28:V, reg dc14:L, reg dx33:V, reg dx34:V, reg vary12:*, reg vary13:V, reg __7:cls, reg r94:V, reg p14:p(V +), reg upper:*, reg upper1:V, reg c49:L, reg upper3:V, reg dr30:V, reg dc15:L, reg dx35:V, reg dx36:V, reg vary14:*, reg vary15:V, reg __8:cls, reg r96:V, reg p15:p(V +), reg ctrl2:*, reg ctrl3:V, reg p16:p(V +), reg trace2:*, reg trace3:V, reg p17:p(V +), reg r100:V, reg _in_2:cls, reg iv:*, reg iv1:V, reg c50:L, reg iv3:V, reg dr32:V, reg dc16:L, reg dx37:V, reg dx38:V, reg __9:cls, reg r101:V, reg p18:p(V +), reg p19:p(V +), reg r104:V, reg r105:V, reg c51:L, reg r106:V, reg fittedModel24:*, reg fittedModel25:V, reg c52:L, reg fittedModel27:V, reg dr34:V, reg dc17:L, reg dx39:V, reg dx40:V, reg r107:V, reg dx41:cls, reg r108:V, reg fittedModel28:*, reg fittedModel29:V, reg dev:*, reg dev1:V, reg S_hat:*, reg S_hat1:V, reg r109:V, reg s2_hat:*, reg s2_hat1:V, reg r110:V, reg fittedModel30:*, reg fittedModel31:V, reg c53:L, reg fittedModel33:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg r111:V, reg dx44:cls, reg r112:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r113:V, reg r114:V, reg fstat:*, reg fstat1:V, reg profiledModel:*, reg profiledModel1:V, reg c54:L, reg profiledModel3:V, reg dr38:V, reg dc19:L, reg dx45:V, reg dx46:V, reg r115:V, reg dx47:cls, reg r116:V, reg vary16:*, reg vary17:V, reg list1:cls, reg r117:V, reg fittedModel34:*, reg fittedModel35:V, reg c55:L, reg fittedModel37:V, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg r118:V, reg dx50:cls, reg defaultPars7:*, reg defaultPars8:V, reg p20:p(V +), reg r120:V, reg ans:*, reg ans1:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L0(r1):
    st args = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L32():
    list = ldf list;
    check L34() else D0();
  L33():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    r6 = `==`(r4, 0);
    c = `as.logical`(r6);
    if c then L40() else L2();
  L34():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L35() else D1();
  L36():
    args = ld args;
    check L38() else D2();
  L37():
    r3 = dyn base1(<sym args>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [args];
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L3():
    fittedModel = ld fittedModel;
    check L115() else D38();
  L35():
    goto L0(r2);
  L38():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r5 = dyn length(args1);
    check L39() else D3();
  L40():
    defaultVary = ld defaultVary;
    check L41() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 14 [defaultVary];
  D38():
    deopt 133 [fittedModel];
  L4(r8):
    r10 = `==`(r8, 2);
    c1 = `as.logical`(r10);
    if c1 then L48() else L5(c1);
  L39():
    goto L1(r5);
  L41():
    defaultVary1 = force? defaultVary;
    checkMissing(defaultVary1);
    st vary = defaultVary1;
    defaultPars = ld defaultPars;
    check L42() else D5();
  L44():
    args2 = ld args;
    check L46() else D6();
  L45():
    r7 = dyn base2(<sym args>);
    goto L4(r7);
  L115():
    fittedModel1 = force? fittedModel;
    checkMissing(fittedModel1);
    c39 = `is.object`(fittedModel1);
    if c39 then L117() else L118(fittedModel1);
  D5():
    deopt 17 [defaultPars];
  D6():
    deopt 22 [args2];
  L5(c3):
    c16 = `as.logical`(c3);
    if c16 then L56() else L8();
  L42():
    defaultPars1 = force? defaultPars;
    checkMissing(defaultPars1);
    st startPars = defaultPars1;
    goto L3();
  L46():
    args3 = force? args2;
    checkMissing(args3);
    length1 = ldf length in base;
    r9 = dyn length1(args3);
    check L47() else D7();
  L48():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L116(dx15):
    checkFun.0(dx15);
    dx16 = dx15 as cls;
    r69 = dyn dx16();
    check L120() else D39();
  L117():
    dr14 = tryDispatchBuiltin.1("$", fittedModel1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L119() else L118(dr14);
  L118(fittedModel3):
    r68 = `$`(fittedModel3, <sym setVarying>);
    goto L116(r68);
  D7():
    deopt 25 [r9];
  D39():
    deopt 137 [r69];
  L6(c6, r12):
    c13 = `as.logical`(r12);
    c14 = `&&`(c6, c13);
    goto L5(c14);
  L8():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L47():
    goto L4(r9);
  L49():
    args4 = ld args;
    check L51() else D8();
  L50():
    r11 = dyn base3(<lang `[[`(args, 1)>);
    goto L6(c1, r11);
  L56():
    args8 = ld args;
    check L57() else D9();
  L119():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L116(dx14);
  L120():
    fittedModel4 = ld fittedModel;
    check L121() else D40();
  D8():
    deopt 29 [c1, args4];
  D9():
    deopt 36 [args8];
  D40():
    deopt 138 [fittedModel4];
  L11(r21):
    r23 = `==`(r21, 1.0);
    c20 = `as.logical`(r23);
    if c20 then L74() else L12(c20);
  L51():
    args5 = force? args4;
    checkMissing(args5);
    c7 = `is.object`(args5);
    if c7 then L52() else L53(c1, args5);
  L57():
    args9 = force? args8;
    checkMissing(args9);
    c17 = `is.object`(args9);
    if c17 then L58() else L59(args9);
  L70():
    args16 = ld args;
    check L72() else D15();
  L71():
    r20 = dyn base4(<sym args>);
    goto L11(r20);
  L121():
    fittedModel5 = force? fittedModel4;
    checkMissing(fittedModel5);
    c40 = `is.object`(fittedModel5);
    if c40 then L123() else L124(fittedModel5);
  D15():
    deopt 60 [args16];
  L7(c11, dx1):
    c12 = `is.logical`(dx1);
    goto L6(c11, c12);
  L9(dx3):
    st vary = dx3;
    unlist = ldf unlist;
    check L61() else D10();
  L12(c22):
    c34 = `as.logical`(c22);
    if c34 then L83() else L15();
  L52():
    dr = tryDispatchBuiltin.1("[[", args5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(c1, dr);
  L53(c9, args7):
    __ = ldf `[[` in base;
    r13 = dyn __(args7, 1);
    goto L7(c9, r13);
  L58():
    dr2 = tryDispatchBuiltin.1("[[", args9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(args11):
    __1 = ldf `[[` in base;
    r14 = dyn __1(args11, 1);
    goto L9(r14);
  L72():
    args17 = force? args16;
    checkMissing(args17);
    length2 = ldf length in base;
    r22 = dyn length2(args17);
    check L73() else D16();
  L74():
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L122(dx18):
    checkFun.0(dx18);
    dx19 = dx18 as cls;
    p9 = prom<V +>{
      startPars = ld startPars;
      startPars1 = force? startPars;
      checkMissing(startPars1);
      return startPars1;
    };
    r72 = dyn dx19(p9);
    check L126() else D41();
  L123():
    dr16 = tryDispatchBuiltin.1("$", fittedModel5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L125() else L124(dr16);
  L124(fittedModel7):
    r70 = `$`(fittedModel7, <sym setPars>);
    goto L122(r70);
  D10():
    deopt 43 [];
  D16():
    deopt 63 [r22];
  D41():
    deopt 143 [r72];
  L13(c25, r25):
    c31 = `as.logical`(r25);
    c32 = `&&`(c25, c31);
    goto L12(c32);
  L15():
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  L16():
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(c1, dx);
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L61():
    p = prom<V +>{
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      c18 = `is.object`(args13);
      if c18 then L1() else L2(args13);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", args13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(args15):
      __2 = ldf `[[` in base;
      r15 = dyn __2(args15, 2);
      goto L0(r15);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r17 = dyn unlist(p);
    check L62() else D11();
  L73():
    goto L11(r22);
  L75():
    args18 = ld args;
    check L77() else D17();
  L76():
    r24 = dyn base5(<lang `[[`(args, 1)>);
    goto L13(c20, r24);
  L83():
    unlist1 = ldf unlist;
    check L84() else D19();
  L125():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L122(dx17);
  L126():
    fittedModel8 = ld fittedModel;
    check L127() else D42();
  D11():
    deopt 45 [r17];
  D17():
    deopt 68 [c20, args18];
  D19():
    deopt 77 [];
  D42():
    deopt 144 [fittedModel8];
  L17(r33):
    c36 = `as.logical`(r33);
    if c36 then L92() else L18();
  L19(r42):
    r53 = `!`(r42);
    c37 = `as.logical`(r53);
    if c37 then L103() else L20();
  L62():
    st params = r17;
    defaultPars3 = ld defaultPars;
    check L63() else D12();
  L77():
    args19 = force? args18;
    checkMissing(args19);
    c26 = `is.object`(args19);
    if c26 then L78() else L79(c20, args19);
  L84():
    p1 = prom<V +>{
      args22 = ld args;
      args23 = force? args22;
      checkMissing(args23);
      c35 = `is.object`(args23);
      if c35 then L1() else L2(args23);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", args23);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(args25):
      __4 = ldf `[[` in base;
      r28 = dyn __4(args25, 1);
      goto L0(r28);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r30 = dyn unlist1(p1);
    check L85() else D20();
  L87():
    sapply = ldf sapply;
    check L89() else D21();
  L88():
    r32 = dyn base6(<lang sapply(args, is.numeric)>);
    goto L17(r32);
  L98():
    _in_ = ldf `%in%`;
    check L100() else D28();
  L99():
    r41 = dyn base7(<lang `%in%`(names(params), names(fittedPars))>);
    goto L19(r41);
  L127():
    fittedModel9 = force? fittedModel8;
    checkMissing(fittedModel9);
    c41 = `is.object`(fittedModel9);
    if c41 then L129() else L130(fittedModel9);
  D12():
    deopt 47 [defaultPars3];
  D20():
    deopt 79 [r30];
  D21():
    deopt 84 [];
  D28():
    deopt 102 [];
  L14(c30, dx9):
    is_list = ldf `is.list` in base;
    r27 = dyn is_list(dx9);
    check L81() else D18();
  L18():
    stop = ldf stop;
    check L96() else D26();
  L20():
    goto L21();
  L21():
    defaultPars5 = ld defaultPars;
    check L107() else D33();
  L63():
    defaultPars4 = force? defaultPars3;
    checkMissing(defaultPars4);
    st startPars = defaultPars4;
    params = ld params;
    check L64() else D13();
  L78():
    dr8 = tryDispatchBuiltin.1("[[", args19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L80() else L79(c20, dr8);
  L79(c28, args21):
    __3 = ldf `[[` in base;
    r26 = dyn __3(args21, 1);
    goto L14(c28, r26);
  L85():
    st params = r30;
    goto L16();
  L89():
    p2 = prom<V +>{
      args26 = ld args;
      args27 = force? args26;
      checkMissing(args27);
      return args27;
    };
    p3 = prom<V +>{
      is_numeric = ld `is.numeric`;
      is_numeric1 = force? is_numeric;
      checkMissing(is_numeric1);
      return is_numeric1;
    };
    r36 = dyn sapply(p2, p3);
    check L90() else D22();
  L92():
    unlist2 = ldf unlist;
    check L93() else D24();
  L100():
    p5 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      params6 = ld params;
      params7 = force? params6;
      checkMissing(params7);
      names = ldf names in base;
      r45 = dyn names(params7);
      goto L0(r45);
    L2():
      r43 = dyn base8(<sym params>);
      goto L0(r43);
    };
    p6 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      fittedPars = ld fittedPars;
      fittedPars1 = force? fittedPars;
      checkMissing(fittedPars1);
      names1 = ldf names in base;
      r49 = dyn names1(fittedPars1);
      goto L0(r49);
    L2():
      r47 = dyn base9(<sym fittedPars>);
      goto L0(r47);
    };
    r51 = dyn _in_(p5, p6);
    check L101() else D29();
  L103():
    stop1 = ldf stop;
    check L104() else D31();
  L128(dx21):
    checkFun.0(dx21);
    dx22 = dx21 as cls;
    p10 = prom<V +>{
      vary4 = ld vary;
      vary5 = force? vary4;
      checkMissing(vary5);
      return vary5;
    };
    r75 = dyn dx22(p10);
    check L132() else D43();
  L129():
    dr18 = tryDispatchBuiltin.1("$", fittedModel9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L131() else L130(dr18);
  L130(fittedModel11):
    r73 = `$`(fittedModel11, <sym setVarying>);
    goto L128(r73);
  D13():
    deopt 50 [params];
  D18():
    deopt 74 [c30, r27];
  D22():
    deopt 87 [r36];
  D24():
    deopt 91 [];
  D26():
    deopt 96 [];
  D29():
    deopt 105 [r51];
  D31():
    deopt 110 [];
  D33():
    deopt 115 [defaultPars5];
  D43():
    deopt 149 [r75];
  L64():
    params1 = force? params;
    checkMissing(params1);
    l = ld startPars;
    c19 = `is.object`(l);
    if c19 then L65() else L66(params1, l);
  L80():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(c20, dx8);
  L81():
    goto L13(c30, r27);
  L90():
    all = ldf all in base;
    r37 = dyn all(r36);
    check L91() else D23();
  L93():
    p4 = prom<V +>{
      args28 = ld args;
      args29 = force? args28;
      checkMissing(args29);
      return args29;
    };
    r39 = dyn unlist2(p4);
    check L94() else D25();
  L96():
    r40 = dyn stop("invalid argument to 'getProfile'");
    check L97() else D27();
  L101():
    all1 = ldf all in base;
    r52 = dyn all1(r51);
    check L102() else D30();
  L104():
    r54 = dyn stop1("cannot recognize parameter name");
    check L105() else D32();
  L107():
    defaultPars6 = force? defaultPars5;
    checkMissing(defaultPars6);
    st startPars = defaultPars6;
    _in_1 = ldf `%in%`;
    check L108() else D34();
  L131():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L128(dx20);
  L132():
    fittedModel12 = ld fittedModel;
    check L133() else D44();
  D23():
    deopt 89 [r37];
  D25():
    deopt 93 [r39];
  D27():
    deopt 98 [r40];
  D30():
    deopt 107 [r52];
  D32():
    deopt 112 [r54];
  D34():
    deopt 119 [];
  D44():
    deopt 150 [fittedModel12];
  L10(params5, dx7):
    st startPars = dx7;
    goto L3();
  L65():
    dr6 = tryDispatchBuiltin.0("[<-", l, params1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L67() else L66(params1, dr6);
  L66(params3, l2):
    vary = ld vary;
    check L68() else D14();
  L91():
    goto L17(r37);
  L94():
    st params = r39;
    goto L16();
  L97():
    goto L16();
  L102():
    goto L19(r52);
  L105():
    goto L21();
  L108():
    p7 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      fittedPars2 = ld fittedPars;
      fittedPars3 = force? fittedPars2;
      checkMissing(fittedPars3);
      names2 = ldf names in base;
      r58 = dyn names2(fittedPars3);
      goto L0(r58);
    L2():
      r56 = dyn base10(<sym fittedPars>);
      goto L0(r56);
    };
    p8 = prom<V +>{
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      params8 = ld params;
      params9 = force? params8;
      checkMissing(params9);
      names3 = ldf names in base;
      r62 = dyn names3(params9);
      goto L0(r62);
    L2():
      r60 = dyn base11(<sym params>);
      goto L0(r60);
    };
    r64 = dyn _in_1(p7, p8);
    check L109() else D35();
  L133():
    fittedModel13 = force? fittedModel12;
    checkMissing(fittedModel13);
    c42 = `is.object`(fittedModel13);
    if c42 then L135() else L136(fittedModel13);
  D14():
    deopt 53 [params3, l2, params1, vary];
  D35():
    deopt 122 [r64];
  L67():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(params1, dx6);
  L68():
    vary1 = force? vary;
    checkMissing(vary1);
    r18 = `!`(vary1);
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l2, params1, r18);
    goto L10(params3, r19);
  L109():
    r65 = `!`(r64);
    st vary = r65;
    params10 = ld params;
    check L110() else D36();
  L134(dx24):
    checkFun.0(dx24);
    dx25 = dx24 as cls;
    p11 = prom<V +>{
      startPars2 = ld startPars;
      startPars3 = force? startPars2;
      checkMissing(startPars3);
      c43 = `is.object`(startPars3);
      if c43 then L1() else L2(startPars3);
    L0(dx27):
      return dx27;
    L1():
      dr22 = tryDispatchBuiltin.1("[", startPars3);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(startPars5):
      vary6 = ld vary;
      vary7 = force? vary6;
      __5 = ldf `[` in base;
      r77 = dyn __5(startPars5, vary7);
      goto L0(r77);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    r79 = dyn dx25(p11);
    check L138() else D45();
  L135():
    dr20 = tryDispatchBuiltin.1("$", fittedModel13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L137() else L136(dr20);
  L136(fittedModel15):
    r76 = `$`(fittedModel15, <sym setPars>);
    goto L134(r76);
  D36():
    deopt 125 [params10];
  D45():
    deopt 155 [r79];
  L110():
    params11 = force? params10;
    checkMissing(params11);
    l3 = ld startPars;
    c38 = `is.object`(l3);
    if c38 then L111() else L112(params11, l3);
  L137():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L134(dx23);
  L138():
    algorithm = ld algorithm;
    check L139() else D46();
  D46():
    deopt 156 [algorithm];
  L22(params15, dx13):
    st startPars = dx13;
    goto L3();
  L111():
    dr12 = tryDispatchBuiltin.0("[<-", l3, params11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L113() else L112(params11, dr12);
  L112(params13, l5):
    vary2 = ld vary;
    check L114() else D37();
  L139():
    algorithm1 = force? algorithm;
    checkMissing(algorithm1);
    r80 = `!=`(algorithm1, "port");
    c44 = `as.logical`(r80);
    if c44 then L140() else L23();
  D37():
    deopt 128 [params13, l5, params11, vary2];
  L23():
    nls_port_fit = ldf nls_port_fit;
    check L160() else D55();
  L28():
    fittedModel28 = ld fittedModel;
    check L172() else D61();
  L113():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L22(params11, dx12);
  L114():
    vary3 = force? vary2;
    checkMissing(vary3);
    r66 = `!`(vary3);
    ___1 = ldf `[<-` in base;
    r67 = dyn ___1(l5, params11, r66);
    goto L22(params13, r67);
  L140():
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L141() else L142();
  D55():
    deopt 182 [];
  D61():
    deopt 205 [fittedModel28];
  L24(r82):
    c45 = `as.logical`(r82);
    if c45 then L145() else L25();
  L141():
    vary8 = ld vary;
    check L143() else D47();
  L142():
    r81 = dyn base12(<sym vary>);
    goto L24(r81);
  L160():
    p12 = prom<V +>{
      fittedModel22 = ld fittedModel;
      fittedModel23 = force? fittedModel22;
      checkMissing(fittedModel23);
      return fittedModel23;
    };
    p13 = prom<V +>{
      startPars6 = ld startPars;
      startPars7 = force? startPars6;
      checkMissing(startPars7);
      c47 = `is.object`(startPars7);
      if c47 then L1() else L2(startPars7);
    L0(dx32):
      return dx32;
    L1():
      dr26 = tryDispatchBuiltin.1("[", startPars7);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(startPars9):
      vary10 = ld vary;
      vary11 = force? vary10;
      __6 = ldf `[` in base;
      r92 = dyn __6(startPars9, vary11);
      goto L0(r92);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx31);
    };
    p14 = prom<V +>{
      lower = ld lower;
      lower1 = force? lower;
      checkMissing(lower1);
      c48 = `is.object`(lower1);
      if c48 then L1() else L2(lower1);
    L0(dx34):
      return dx34;
    L1():
      dr28 = tryDispatchBuiltin.1("[", lower1);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(lower3):
      vary12 = ld vary;
      vary13 = force? vary12;
      __7 = ldf `[` in base;
      r94 = dyn __7(lower3, vary13);
      goto L0(r94);
    L3():
      dx33 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx33);
    };
    p15 = prom<V +>{
      upper = ld upper;
      upper1 = force? upper;
      checkMissing(upper1);
      c49 = `is.object`(upper1);
      if c49 then L1() else L2(upper1);
    L0(dx36):
      return dx36;
    L1():
      dr30 = tryDispatchBuiltin.1("[", upper1);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(upper3):
      vary14 = ld vary;
      vary15 = force? vary14;
      __8 = ldf `[` in base;
      r96 = dyn __8(upper3, vary15);
      goto L0(r96);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx35);
    };
    p16 = prom<V +>{
      ctrl2 = ld ctrl;
      ctrl3 = force? ctrl2;
      checkMissing(ctrl3);
      return ctrl3;
    };
    p17 = prom<V +>{
      trace2 = ld trace;
      trace3 = force? trace2;
      checkMissing(trace3);
      return trace3;
    };
    r100 = dyn nls_port_fit(p12, p13, p14, p15, p16, p17);
    check L161() else D56();
  L172():
    fittedModel29 = force? fittedModel28;
    checkMissing(fittedModel29);
    st profiledModel = fittedModel29;
    dev = ld dev;
    check L173() else D62();
  D47():
    deopt 162 [vary8];
  D56():
    deopt 189 [r100];
  D62():
    deopt 208 [dev];
  L25():
    goto L27();
  L27():
    fittedModel18 = ld fittedModel;
    check L153() else D53();
  L143():
    vary9 = force? vary8;
    checkMissing(vary9);
    sum = ldf sum in base;
    r83 = dyn sum(vary9);
    check L144() else D48();
  L145():
    sym13 = ldf `.Call`;
    base13 = ldf `.Call` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L146() else L147();
  L161():
    st iv = r100;
    _in_2 = ldf `%in%`;
    check L162() else D57();
  L173():
    dev1 = force? dev;
    checkMissing(dev1);
    S_hat = ld `S.hat`;
    check L174() else D63();
  D48():
    deopt 165 [r83];
  D53():
    deopt 175 [fittedModel18];
  D57():
    deopt 192 [];
  D63():
    deopt 209 [dev1, S_hat];
  L26(r85):
    goto L27();
  L144():
    goto L24(r83);
  L146():
    C_nls_iter = ld C_nls_iter;
    check L148() else D49();
  L147():
    r84 = dyn base13(<sym C_nls_iter>, <sym fittedModel>, <sym ctrl>, <sym trace>);
    goto L26(r84);
  L153():
    fittedModel19 = force? fittedModel18;
    checkMissing(fittedModel19);
    c46 = `is.object`(fittedModel19);
    if c46 then L155() else L156(fittedModel19);
  L162():
    p18 = prom<V +>{
      iv = ld iv;
      iv1 = force? iv;
      checkMissing(iv1);
      c50 = `is.object`(iv1);
      if c50 then L1() else L2(iv1);
    L0(dx38):
      return dx38;
    L1():
      dr32 = tryDispatchBuiltin.1("[", iv1);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(iv3):
      __9 = ldf `[` in base;
      r101 = dyn __9(iv3, 1);
      goto L0(r101);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx37);
    };
    p19 = prom<V +>{
      return <int 3, 4, 5, 6>;
    };
    r104 = dyn _in_2(p18, p19);
    check L163() else D58();
  L174():
    S_hat1 = force? S_hat;
    checkMissing(S_hat1);
    r109 = `-`(dev1, S_hat1);
    s2_hat = ld `s2.hat`;
    check L175() else D64();
  D49():
    deopt 167 [C_nls_iter];
  D58():
    deopt 195 [r104];
  D64():
    deopt 211 [r109, s2_hat];
  L148():
    C_nls_iter1 = force? C_nls_iter;
    checkMissing(C_nls_iter1);
    fittedModel16 = ld fittedModel;
    check L149() else D50();
  L154(dx29):
    checkFun.0(dx29);
    dx30 = dx29 as cls;
    r89 = dyn dx30();
    check L158() else D54();
  L155():
    dr24 = tryDispatchBuiltin.1("$", fittedModel19);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L157() else L156(dr24);
  L156(fittedModel21):
    r88 = `$`(fittedModel21, <sym deviance>);
    goto L154(r88);
  L163():
    r105 = `!`(r104);
    c51 = `as.logical`(r105);
    if c51 then L164() else L29();
  L175():
    s2_hat1 = force? s2_hat;
    checkMissing(s2_hat1);
    r110 = `/`(r109, s2_hat1);
    st fstat = r110;
    fittedModel30 = ld fittedModel;
    check L176() else D65();
  D50():
    deopt 168 [C_nls_iter1, fittedModel16];
  D54():
    deopt 179 [r89];
  D65():
    deopt 215 [fittedModel30];
  L29():
    fittedModel24 = ld fittedModel;
    check L166() else D59();
  L30(r106):
    st dev = r106;
    goto L28();
  L149():
    fittedModel17 = force? fittedModel16;
    checkMissing(fittedModel17);
    ctrl = ld ctrl;
    check L150() else D51();
  L157():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L154(dx28);
  L158():
    st dev = r89;
    goto L28();
  L164():
    goto L30(NA_REAL);
  L176():
    fittedModel31 = force? fittedModel30;
    checkMissing(fittedModel31);
    c53 = `is.object`(fittedModel31);
    if c53 then L178() else L179(fittedModel31);
  D51():
    deopt 169 [C_nls_iter1, fittedModel17, ctrl];
  D59():
    deopt 199 [fittedModel24];
  L150():
    ctrl1 = force? ctrl;
    checkMissing(ctrl1);
    trace = ld trace;
    check L151() else D52();
  L166():
    fittedModel25 = force? fittedModel24;
    checkMissing(fittedModel25);
    c52 = `is.object`(fittedModel25);
    if c52 then L168() else L169(fittedModel25);
  L177(dx43):
    checkFun.0(dx43);
    dx44 = dx43 as cls;
    r112 = dyn dx44();
    check L181() else D66();
  L178():
    dr36 = tryDispatchBuiltin.1("$", fittedModel31);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L180() else L179(dr36);
  L179(fittedModel33):
    r111 = `$`(fittedModel33, <sym setVarying>);
    goto L177(r111);
  D52():
    deopt 170 [C_nls_iter1, fittedModel17, ctrl1, trace];
  D66():
    deopt 219 [r112];
  L151():
    trace1 = force? trace;
    checkMissing(trace1);
    vargs = dots[fittedModel17, ctrl1, trace1];
    r86 = `.Call`(C_nls_iter1, vargs, <missing>);
    goto L26(r86);
  L167(dx40):
    checkFun.0(dx40);
    dx41 = dx40 as cls;
    r108 = dyn dx41();
    check L171() else D60();
  L168():
    dr34 = tryDispatchBuiltin.1("$", fittedModel25);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L170() else L169(dr34);
  L169(fittedModel27):
    r107 = `$`(fittedModel27, <sym deviance>);
    goto L167(r107);
  L180():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L177(dx42);
  L181():
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L182() else L183();
  D60():
    deopt 203 [r108];
  L31(r114):
    st ans = r114;
    fittedModel34 = ld fittedModel;
    check L193() else D72();
  L170():
    dx39 = getTryDispatchBuiltinValue(dr34);
    goto L167(dx39);
  L171():
    goto L30(r108);
  L182():
    fstat = ld fstat;
    check L184() else D67();
  L183():
    r113 = dyn base14[fstat, parameters, varying](<sym fstat>, <lang `$`(profiledModel, getAllPars)()>, <sym vary>);
    goto L31(r113);
  D67():
    deopt 222 [fstat];
  D72():
    deopt 237 [fittedModel34];
  L184():
    fstat1 = force? fstat;
    checkMissing(fstat1);
    profiledModel = ld profiledModel;
    check L185() else D68();
  L193():
    fittedModel35 = force? fittedModel34;
    checkMissing(fittedModel35);
    c55 = `is.object`(fittedModel35);
    if c55 then L195() else L196(fittedModel35);
  D68():
    deopt 225 [profiledModel];
  L185():
    profiledModel1 = force? profiledModel;
    checkMissing(profiledModel1);
    c54 = `is.object`(profiledModel1);
    if c54 then L187() else L188(profiledModel1);
  L194(dx49):
    checkFun.0(dx49);
    dx50 = dx49 as cls;
    p20 = prom<V +>{
      defaultPars7 = ld defaultPars;
      defaultPars8 = force? defaultPars7;
      checkMissing(defaultPars8);
      return defaultPars8;
    };
    r120 = dyn dx50(p20);
    check L198() else D73();
  L195():
    dr40 = tryDispatchBuiltin.1("$", fittedModel35);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L197() else L196(dr40);
  L196(fittedModel37):
    r118 = `$`(fittedModel37, <sym setPars>);
    goto L194(r118);
  D73():
    deopt 242 [r120];
  L186(dx46):
    checkFun.0(dx46);
    dx47 = dx46 as cls;
    r116 = dyn dx47();
    check L190() else D69();
  L187():
    dr38 = tryDispatchBuiltin.1("$", profiledModel1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L189() else L188(dr38);
  L188(profiledModel3):
    r115 = `$`(profiledModel3, <sym getAllPars>);
    goto L186(r115);
  L197():
    dx48 = getTryDispatchBuiltinValue(dr40);
    goto L194(dx48);
  L198():
    ans = ld ans;
    check L199() else D74();
  D69():
    deopt 229 [r116];
  D74():
    deopt 243 [ans];
  L189():
    dx45 = getTryDispatchBuiltinValue(dr38);
    goto L186(dx45);
  L190():
    vary16 = ld vary;
    check L191() else D70();
  L199():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D70():
    deopt 231 [vary16];
  L191():
    vary17 = force? vary16;
    checkMissing(vary17);
    list1 = ldf list in base;
    r117 = dyn list1(fstat1, r116, vary17);
    check L192() else D71();
  D71():
    deopt 235 [r117];
  L192():
    goto L31(r117);
  }
}