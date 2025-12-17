fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3183409691;
    st `se.contrast.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3183409691(object, `contrast.obj`, coef, data, `...`) {
  (reg object:*, reg contrast_obj:*, reg coef:*, reg data:*, reg ddd:dots) -+> V { var object:*, var `contrast.obj`:*, var coef:*, reg coef_isMissing:L, reg coef_orDefault:*, reg contr_helmert:cls, reg ncol:cls, reg contrast:*, reg contrast1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p2:p(V +), var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, reg r8:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg data1:*, reg data2:V, reg c1:V, reg c2:L, reg eval:cls, reg contrast_obj1:*, reg contrast_obj2:V, reg p3:p(V +), reg r12:V, reg eval1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg p4:p(V +), reg data3:*, reg data4:V, reg p5:p(V +), reg parent_frame:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg contrast_obj3:*, reg contrast_obj4:V, reg is_matrix:cls, reg r24:V, reg r25:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg missing:cls, reg r28:V, reg r29:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg coef1:*, reg coef2:V, reg sum:cls, reg r32:V, reg r33:V, reg c5:L, reg stop:cls, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg coef3:*, reg coef4:V, reg length:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg r43:V, reg contrast_obj5:*, reg contrast_obj6:V, reg length1:cls, reg r44:V, reg r45:V, reg c6:L, reg stop1:cls, reg r46:V, reg r47:V, reg sapply:cls, reg contrast_obj7:*, reg contrast_obj8:V, reg p7:p(V +), reg r50:cls, reg p8:p(V +), reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg contrast2:*, reg contrast3:V, reg length2:cls, reg r55:V, reg r56:V, reg c7:L, reg c8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg c12:L, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg c15:L, reg r60:V, reg contrast4:*, reg contrast5:V, reg is_na:cls, reg r61:V, reg all:cls, reg r62:V, reg c16:L, reg c17:V, reg c19:L, reg stop2:cls, reg r63:V, reg contrast6:*, reg contrast7:V, reg coef5:*, reg coef6:V, reg ___:cls, reg r65:V, reg contrast_obj9:*, reg contrast_obj10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg colSums:cls, reg contrast8:*, reg contrast9:V, reg p9:p(V +), reg r72:V, reg abs:cls, reg r73:V, reg r74:V, reg any:cls, reg r75:V, reg c20:L, reg stop3:cls, reg r76:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg r79:V, reg colnames:cls, reg contrast10:*, reg contrast11:V, reg p10:p(V +), reg r81:V, reg length3:cls, reg r82:V, reg r83:V, reg c21:L, reg paste:cls, reg seq:cls, reg ncol1:cls, reg contrast12:*, reg contrast13:V, reg p11:p(V +), reg r85:V, reg p12:p(V +), reg r87:V, reg p13:p(V +), reg r89:V, reg l:*, reg colnames__:cls, reg r90:V, reg contrast_weight_aov:cls, reg object1:*, reg object2:V, reg p14:p(V +), reg contrast14:*, reg contrast15:V, reg p15:p(V +), reg r93:V, reg object3:*, reg object4:V, reg c22:L, reg object6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r94:V, reg rdf:*, reg rdf1:V, reg r95:V, reg c23:L, reg stop4:cls, reg r96:V, reg as_matrix:cls, reg object7:*, reg object8:V, reg c24:L, reg object10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r98:V, reg p16:p(V +), reg r100:V, reg object11:*, reg object12:V, reg c25:L, reg object14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r101:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r102:V, reg r103:V, reg wt:*, reg wt1:V, reg c26:V, reg r104:V, reg c27:L, reg resid:*, reg resid1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg resid4:V, reg r106:V, reg wt2:*, reg wt3:V, reg r107:V, reg r108:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r110:V, reg r111:V, reg resid5:*, reg resid6:V, reg r112:V, reg sum1:cls, reg r113:V, reg rdf2:*, reg rdf3:V, reg r114:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r115:V, reg r116:V, reg contrast_obj11:*, reg contrast_obj12:V, reg is_matrix1:cls, reg r117:V, reg r118:V, reg c28:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r119:V, reg r120:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r121:V, reg r122:V, reg weights:*, reg weights1:V, reg sum2:cls, reg r123:V, reg rse:*, reg rse1:V, reg r124:V, reg r125:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r126:V, reg r127:V, reg rse2:*, reg rse3:V, reg colSums1:cls, reg weights2:*, reg weights3:V, reg p17:p(V +), reg r129:V, reg r130:V, reg r131:V |
    mkenv;
    st object = object;
    st `contrast.obj` = contrast_obj;
    coef_isMissing = missing.0(coef);
    if coef_isMissing then L0() else L1(coef);
  L0():
    p2 = prom<V +>{
      contr_helmert = ldf `contr.helmert`;
      p1 = prom<V +>{
        ncol = ldf ncol;
        p = prom<V +>{
          contrast = ld contrast;
          contrast1 = force? contrast;
          checkMissing(contrast1);
          return contrast1;
        };
        r1 = dyn ncol(p);
        return r1;
      };
      r3 = dyn contr_helmert(p1);
      c = `is.object`(r3);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r6 = dyn __(r3, <missing>, 1);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p2);
  L1(coef_orDefault):
    st coef = coef_orDefault;
    data_isMissing = missing.0(data);
    if data_isMissing then L2(NULL) else L2(data);
  L2(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    r8 = clos inner1522250069;
    st `contrast.weight.aov` = r8;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L3(r10):
    c2 = `as.logical`(r10);
    if c2 then L46() else L4();
  L43():
    data1 = ld data;
    check L45() else D0();
  L44():
    r9 = dyn base(<sym data>);
    goto L3(r9);
  D0():
    deopt 4 [data1];
  L4():
    eval1 = ldf eval;
    check L50() else D3();
  L5():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L45():
    data2 = force? data1;
    checkMissing(data2);
    c1 = `==`(data2, NULL);
    goto L3(c1);
  L46():
    eval = ldf eval;
    check L47() else D1();
  D1():
    deopt 8 [];
  D3():
    deopt 13 [];
  L6(r23):
    r25 = `!`(r23);
    c3 = `as.logical`(r25);
    if c3 then L56() else L7();
  L47():
    p3 = prom<V +>{
      contrast_obj1 = ld `contrast.obj`;
      contrast_obj2 = force? contrast_obj1;
      checkMissing(contrast_obj2);
      return contrast_obj2;
    };
    r12 = dyn eval(p3);
    check L48() else D2();
  L50():
    p4 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      substitute = ldf substitute in base;
      r16 = dyn substitute(<sym contrast.obj>);
      goto L0(r16);
    L2():
      r14 = dyn base1(<sym contrast.obj>);
      goto L0(r14);
    };
    p5 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p6 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r19 = dyn parent_frame();
      return r19;
    };
    r21 = dyn eval1(p4, p5, p6);
    check L51() else D4();
  L52():
    contrast_obj3 = ld `contrast.obj`;
    check L54() else D5();
  L53():
    r22 = dyn base2(<sym contrast.obj>);
    goto L6(r22);
  D2():
    deopt 10 [r12];
  D4():
    deopt 17 [r21];
  D5():
    deopt 21 [contrast_obj3];
  L7():
    contrast_obj9 = ld `contrast.obj`;
    check L104() else D29();
  L24():
    contrast_weight_aov = ldf `contrast.weight.aov`;
    check L128() else D43();
  L48():
    st `contrast.obj` = r12;
    goto L5();
  L51():
    st `contrast.obj` = r21;
    goto L5();
  L54():
    contrast_obj4 = force? contrast_obj3;
    checkMissing(contrast_obj4);
    is_matrix = ldf `is.matrix` in base;
    r24 = dyn is_matrix(contrast_obj4);
    check L55() else D6();
  L56():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  D6():
    deopt 24 [r24];
  D29():
    deopt 102 [contrast_obj9];
  D43():
    deopt 147 [];
  L8(r27):
    r29 = `!`(r27);
    c4 = `as.logical`(r29);
    if c4 then L59() else L9();
  L55():
    goto L6(r24);
  L57():
    missing = ldf missing in base;
    r28 = dyn missing(<sym coef>);
    goto L8(r28);
  L58():
    r26 = dyn base3(<sym coef>);
    goto L8(r26);
  L104():
    contrast_obj10 = force? contrast_obj9;
    checkMissing(contrast_obj10);
    st contrast = contrast_obj10;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L105() else L106();
  L128():
    p14 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p15 = prom<V +>{
      contrast14 = ld contrast;
      contrast15 = force? contrast14;
      checkMissing(contrast15);
      return contrast15;
    };
    r93 = dyn contrast_weight_aov(p14, p15);
    check L129() else D44();
  D44():
    deopt 150 [r93];
  L9():
    goto L17();
  L17():
    sapply = ldf sapply;
    check L81() else D17();
  L25(r68):
    c20 = `as.logical`(r68);
    if c20 then L113() else L27();
  L59():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L105():
    sym11 = ldf abs;
    base11 = ldf abs in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L107() else L108();
  L106():
    r67 = dyn base10(<lang `>`(abs(colSums(contrast)), 1.0E-8)>);
    goto L25(r67);
  L129():
    st weights = r93;
    object3 = ld object;
    check L130() else D45();
  D17():
    deopt 65 [];
  D45():
    deopt 152 [object3];
  L10(r31):
    r33 = `!=`(r31, 0.0);
    c5 = `as.logical`(r33);
    if c5 then L64() else L11();
  L26(r70):
    r74 = `>`(r70, 1.0E-8);
    any = ldf any in base;
    r75 = dyn any(r74);
    check L112() else D33();
  L27():
    goto L28();
  L28():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  L60():
    coef1 = ld coef;
    check L62() else D7();
  L61():
    r30 = dyn base4(<sym coef>);
    goto L10(r30);
  L81():
    p7 = prom<V +>{
      contrast_obj7 = ld `contrast.obj`;
      contrast_obj8 = force? contrast_obj7;
      checkMissing(contrast_obj8);
      return contrast_obj8;
    };
    p8 = prom<V +>{
      r50 = clos inner2501545716;
      return r50;
    };
    r52 = dyn sapply(p7, p8);
    check L82() else D18();
  L107():
    colSums = ldf colSums;
    check L109() else D30();
  L108():
    r69 = dyn base11(<lang colSums(contrast)>);
    goto L26(r69);
  L113():
    stop3 = ldf stop;
    check L114() else D34();
  L130():
    object4 = force? object3;
    checkMissing(object4);
    c22 = `is.object`(object4);
    if c22 then L132() else L133(object4);
  D7():
    deopt 32 [coef1];
  D18():
    deopt 68 [r52];
  D30():
    deopt 110 [];
  D33():
    deopt 118 [r75];
  D34():
    deopt 120 [];
  L11():
    goto L12();
  L12():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L29(r79):
    r83 = `!`(r79);
    c21 = `as.logical`(r83);
    if c21 then L122() else L30();
  L62():
    coef2 = force? coef1;
    checkMissing(coef2);
    sum = ldf sum in base;
    r32 = dyn sum(coef2);
    check L63() else D8();
  L64():
    stop = ldf stop;
    check L65() else D9();
  L82():
    st contrast = r52;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L109():
    p9 = prom<V +>{
      contrast8 = ld contrast;
      contrast9 = force? contrast8;
      checkMissing(contrast9);
      return contrast9;
    };
    r72 = dyn colSums(p9);
    check L110() else D31();
  L112():
    goto L25(r75);
  L114():
    r76 = dyn stop3("columns of 'contrast.obj' must define a contrast (sum to zero)");
    check L115() else D35();
  L117():
    colnames = ldf colnames;
    check L119() else D36();
  L118():
    r78 = dyn base12(<lang colnames(contrast)>);
    goto L29(r78);
  L131(dx3):
    st rdf = dx3;
    rdf = ld rdf;
    check L135() else D46();
  L132():
    dr2 = tryDispatchBuiltin.1("$", object4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L134() else L133(dr2);
  L133(object6):
    r94 = `$`(object6, <sym df.residual>);
    goto L131(r94);
  D8():
    deopt 35 [r32];
  D9():
    deopt 39 [];
  D31():
    deopt 112 [r72];
  D35():
    deopt 122 [r76];
  D36():
    deopt 128 [];
  D46():
    deopt 156 [rdf];
  L13(r37):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L18(r54):
    r56 = `!`(r54);
    c7 = `as.logical`(r56);
    if c7 then L19(c7) else L87();
  L30():
    goto L24();
  L63():
    goto L10(r32);
  L65():
    r34 = dyn stop("'coef' must define a contrast, i.e., sum to 0");
    check L66() else D10();
  L68():
    coef3 = ld coef;
    check L70() else D11();
  L69():
    r36 = dyn base5(<sym coef>);
    goto L13(r36);
  L83():
    contrast2 = ld contrast;
    check L85() else D19();
  L84():
    r53 = dyn base7(<sym contrast>);
    goto L18(r53);
  L110():
    abs = ldf abs in base;
    r73 = dyn abs(r72);
    check L111() else D32();
  L115():
    goto L28();
  L119():
    p10 = prom<V +>{
      contrast10 = ld contrast;
      contrast11 = force? contrast10;
      checkMissing(contrast11);
      return contrast11;
    };
    r81 = dyn colnames(p10);
    check L120() else D37();
  L122():
    paste = ldf paste;
    check L123() else D39();
  L134():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L131(dx2);
  L135():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r95 = `==`(rdf1, 0);
    c23 = `as.logical`(r95);
    if c23 then L136() else L31();
  D10():
    deopt 41 [r34];
  D11():
    deopt 46 [coef3];
  D19():
    deopt 72 [contrast2];
  D32():
    deopt 114 [r73];
  D37():
    deopt 130 [r81];
  D39():
    deopt 135 [];
  L14(r42, r43):
    r45 = `!=`(r42, r43);
    c6 = `as.logical`(r45);
    if c6 then L76() else L15();
  L19(c8):
    c19 = `as.logical`(c8);
    if c19 then L96() else L22();
  L31():
    goto L32();
  L32():
    as_matrix = ldf `as.matrix`;
    check L140() else D49();
  L66():
    goto L12();
  L70():
    coef4 = force? coef3;
    checkMissing(coef4);
    length = ldf length in base;
    r38 = dyn length(coef4);
    check L71() else D12();
  L72():
    contrast_obj5 = ld `contrast.obj`;
    check L74() else D13();
  L73():
    r41 = dyn base6(<sym contrast.obj>);
    goto L14(r37, r41);
  L85():
    contrast3 = force? contrast2;
    checkMissing(contrast3);
    length2 = ldf length in base;
    r55 = dyn length2(contrast3);
    check L86() else D20();
  L87():
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L111():
    goto L26(r73);
  L120():
    length3 = ldf length in base;
    r82 = dyn length3(r81);
    check L121() else D38();
  L123():
    p13 = prom<V +>{
      seq = ldf seq;
      p12 = prom<V +>{
        ncol1 = ldf ncol;
        p11 = prom<V +>{
          contrast12 = ld contrast;
          contrast13 = force? contrast12;
          checkMissing(contrast13);
          return contrast13;
        };
        r85 = dyn ncol1(p11);
        return r85;
      };
      r87 = dyn seq(p12);
      return r87;
    };
    r89 = dyn paste("Contrast", p13);
    check L124() else D40();
  L136():
    stop4 = ldf stop;
    check L137() else D47();
  D12():
    deopt 49 [r38];
  D13():
    deopt 51 [r37, contrast_obj5];
  D20():
    deopt 75 [r55];
  D38():
    deopt 132 [r82];
  D40():
    deopt 138 [r89];
  D47():
    deopt 161 [];
  D49():
    deopt 167 [];
  L15():
    goto L16(NULL);
  L16(r47):
    goto L17();
  L20(c12, r58):
    c16 = `as.logical`(r58);
    c17 = `||`(c12, c16);
    goto L19(c17);
  L22():
    goto L23();
  L23():
    contrast6 = ld contrast;
    check L100() else D26();
  L71():
    goto L13(r38);
  L74():
    contrast_obj6 = force? contrast_obj5;
    checkMissing(contrast_obj6);
    length1 = ldf length in base;
    r44 = dyn length1(contrast_obj6);
    check L75() else D14();
  L76():
    stop1 = ldf stop;
    check L77() else D15();
  L86():
    goto L18(r55);
  L88():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  L89():
    r57 = dyn base8(<lang is.na(contrast)>);
    goto L20(c7, r57);
  L96():
    stop2 = ldf stop;
    check L97() else D24();
  L121():
    goto L29(r82);
  L124():
    l = ld contrast;
    colnames__ = ldf `colnames<-`;
    check L125() else D41();
  L137():
    r96 = dyn stop4("no degrees of freedom for residuals");
    check L138() else D48();
  L140():
    p16 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c24 = `is.object`(object8);
      if c24 then L1() else L2(object8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object10):
      r98 = `$`(object10, <sym residuals>);
      goto L0(r98);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r100 = dyn as_matrix(p16);
    check L141() else D50();
  D14():
    deopt 54 [r37, r44];
  D15():
    deopt 57 [];
  D24():
    deopt 89 [];
  D26():
    deopt 95 [contrast6];
  D41():
    deopt 140 [r89, l, r89];
  D48():
    deopt 163 [r96];
  D50():
    deopt 169 [r100];
  L21(c15, r60):
    all = ldf all in base;
    r62 = dyn all(r60);
    check L94() else D23();
  L75():
    goto L14(r37, r44);
  L77():
    r46 = dyn stop1("'coef' must have same length as 'contrast.obj'");
    check L78() else D16();
  L90():
    contrast4 = ld contrast;
    check L92() else D21();
  L91():
    r59 = dyn base9(<sym contrast>);
    goto L21(c7, r59);
  L97():
    r63 = dyn stop2("the contrast defined is empty (has no TRUE elements)");
    check L98() else D25();
  L100():
    contrast7 = force? contrast6;
    checkMissing(contrast7);
    coef5 = ld coef;
    check L101() else D27();
  L125():
    r90 = dyn colnames__(l, NULL, r89);
    check L126() else D42();
  L138():
    goto L32();
  L141():
    st resid = r100;
    object11 = ld object;
    check L142() else D51();
  D16():
    deopt 59 [r46];
  D21():
    deopt 81 [c7, contrast4];
  D23():
    deopt 86 [c15, r62];
  D25():
    deopt 91 [r63];
  D27():
    deopt 97 [coef5];
  D42():
    deopt 142 [r89, r90];
  D51():
    deopt 171 [object11];
  L78():
    goto L16(r46);
  L92():
    contrast5 = force? contrast4;
    checkMissing(contrast5);
    is_na = ldf `is.na` in base;
    r61 = dyn is_na(contrast5);
    check L93() else D22();
  L94():
    goto L20(c15, r62);
  L98():
    goto L23();
  L101():
    coef6 = force? coef5;
    checkMissing(coef6);
    ___ = ldf `%*%` in base;
    r65 = dyn ___(contrast7, coef6);
    check L102() else D28();
  L126():
    st contrast = r90;
    goto L24();
  L142():
    object12 = force? object11;
    checkMissing(object12);
    c25 = `is.object`(object12);
    if c25 then L144() else L145(object12);
  D22():
    deopt 84 [c7, r61];
  D28():
    deopt 100 [r65];
  L93():
    goto L21(c7, r61);
  L102():
    st contrast = r65;
    goto L24();
  L143(dx7):
    st wt = dx7;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L144():
    dr6 = tryDispatchBuiltin.1("$", object12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L146() else L145(dr6);
  L145(object14):
    r101 = `$`(object14, <sym weights>);
    goto L143(r101);
  L33(r103):
    r104 = `!`(r103);
    c27 = `as.logical`(r104);
    if c27 then L150() else L34();
  L146():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L143(dx6);
  L147():
    wt = ld wt;
    check L149() else D52();
  L148():
    r102 = dyn base13(<sym wt>);
    goto L33(r102);
  D52():
    deopt 176 [wt];
  L34():
    goto L36();
  L36():
    sym15 = ldf sum;
    base15 = ldf sum in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L156() else L157();
  L149():
    wt1 = force? wt;
    checkMissing(wt1);
    c26 = `==`(wt1, NULL);
    goto L33(c26);
  L150():
    resid = ld resid;
    check L151() else D53();
  D53():
    deopt 180 [resid];
  L37(r111):
    rdf2 = ld rdf;
    check L160() else D57();
  L151():
    resid1 = force? resid;
    checkMissing(resid1);
    sym14 = ldf sqrt;
    base14 = ldf sqrt in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L152() else L153();
  L156():
    resid5 = ld resid;
    check L158() else D55();
  L157():
    r110 = dyn base15(<lang `^`(resid, 2.0)>);
    goto L37(r110);
  D55():
    deopt 191 [resid5];
  D57():
    deopt 196 [r111, rdf2];
  L35(resid4, r106):
    r108 = `*`(resid4, r106);
    st resid = r108;
    goto L36();
  L152():
    wt2 = ld wt;
    check L154() else D54();
  L153():
    r105 = dyn base14(<sym wt>);
    goto L35(resid1, r105);
  L158():
    resid6 = force? resid5;
    checkMissing(resid6);
    r112 = `^`(resid6, 2.0);
    sum1 = ldf sum in base;
    r113 = dyn sum1(r112);
    check L159() else D56();
  L160():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    r114 = `/`(r111, rdf3);
    st rse = r114;
    sym16 = ldf `is.matrix`;
    base16 = ldf `is.matrix` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L161() else L162();
  D54():
    deopt 182 [resid1, wt2];
  D56():
    deopt 196 [r113];
  L38(r116):
    r118 = `!`(r116);
    c28 = `as.logical`(r118);
    if c28 then L165() else L39();
  L154():
    wt3 = force? wt2;
    checkMissing(wt3);
    r107 = sqrt(wt3);
    goto L35(resid1, r107);
  L159():
    goto L37(r113);
  L161():
    contrast_obj11 = ld `contrast.obj`;
    check L163() else D58();
  L162():
    r115 = dyn base16(<sym contrast.obj>);
    goto L38(r115);
  D58():
    deopt 202 [contrast_obj11];
  L39():
    sym19 = ldf sqrt;
    base19 = ldf sqrt in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L174() else L175();
  L163():
    contrast_obj12 = force? contrast_obj11;
    checkMissing(contrast_obj12);
    is_matrix1 = ldf `is.matrix` in base;
    r117 = dyn is_matrix1(contrast_obj12);
    check L164() else D59();
  L165():
    sym17 = ldf sqrt;
    base17 = ldf sqrt in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L166() else L167();
  D59():
    deopt 205 [r117];
  L40(r120):
    popenv;
    return r120;
  L42(r127):
    popenv;
    return r127;
  L164():
    goto L38(r117);
  L166():
    sym18 = ldf sum;
    base18 = ldf sum in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L168() else L169();
  L167():
    r119 = dyn base17(<lang `*`(sum(weights), rse)>);
    goto L40(r119);
  L174():
    rse2 = ld rse;
    check L176() else D63();
  L175():
    r126 = dyn base19(<lang `*`(rse, colSums(weights))>);
    goto L42(r126);
  D63():
    deopt 218 [rse2];
  L41(r122):
    rse = ld rse;
    check L172() else D62();
  L168():
    weights = ld weights;
    check L170() else D60();
  L169():
    r121 = dyn base18(<sym weights>);
    goto L41(r121);
  L176():
    rse3 = force? rse2;
    checkMissing(rse3);
    colSums1 = ldf colSums;
    check L177() else D64();
  D60():
    deopt 210 [weights];
  D62():
    deopt 213 [r122, rse];
  D64():
    deopt 220 [rse3];
  L170():
    weights1 = force? weights;
    checkMissing(weights1);
    sum2 = ldf sum in base;
    r123 = dyn sum2(weights1);
    check L171() else D61();
  L172():
    rse1 = force? rse;
    checkMissing(rse1);
    r124 = `*`(r122, rse1);
    r125 = sqrt(r124);
    goto L40(r125);
  L177():
    p17 = prom<V +>{
      weights2 = ld weights;
      weights3 = force? weights2;
      checkMissing(weights3);
      return weights3;
    };
    r129 = dyn colSums1(p17);
    check L178() else D65();
  D61():
    deopt 213 [r123];
  D65():
    deopt 222 [rse3, r129];
  L171():
    goto L41(r123);
  L178():
    r130 = `*`(rse3, r129);
    r131 = sqrt(r130);
    goto L42(r131);
  }
}
fun inner1522250069(object, contrast) {
  (reg object:*, reg contrast:*) -+> V { var object:*, var contrast:*, reg qr:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg object3:*, reg object4:V, reg c:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg qro:*, reg qro1:V, reg c2:L, reg dx7:V, reg qro3:V, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg dx11:V, reg r3:V, reg c3:L, reg dx14:V, reg dx15:V, reg dr6:V, reg dc3:L, reg dx17:V, reg dx18:V, reg dx19:V, reg object7:*, reg object8:V, reg c4:L, reg dx22:V, reg dx23:V, reg r5:I, reg object10:V, reg dr8:V, reg dc4:L, reg dx26:V, reg dx27:V, reg dx28:V, reg r7:I, reg dx29:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg __1:cls, reg r11:V, reg unique:cls, reg asgn:*, reg asgn1:V, reg p1:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg uasgn:*, reg uasgn1:V, reg length:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg object11:*, reg object12:V, reg c5:L, reg object14:V, reg dr10:V, reg dc5:L, reg dx30:V, reg dx31:V, reg r21:V, reg attr:cls, reg r22:V, reg c6:cls, reg r23:V, reg c7:L, reg r25:V, reg dr12:V, reg dc6:L, reg dx32:V, reg dx33:V, reg uasgn2:*, reg uasgn3:V, reg r26:V, reg __2:cls, reg r27:V, reg as_matrix:cls, reg qr_qty:cls, reg qro4:*, reg qro5:V, reg p2:p(V +), reg contrast1:*, reg contrast2:V, reg p3:p(V +), reg r30:V, reg p4:p(V +), reg r32:V, reg matrix:cls, reg nterms:*, reg nterms1:V, reg p5:p(V +), reg ncol:cls, reg effects:*, reg effects1:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg nmeffect:*, reg nmeffect1:V, reg colnames:cls, reg contrast3:*, reg contrast4:V, reg p8:p(V +), reg r40:V, reg list:cls, reg r41:V, reg p9:p(V +), reg r43:V, reg seq:cls, reg nterms2:*, reg nterms3:V, reg p10:p(V +), reg r45:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg asgn2:*, reg asgn3:V, reg uasgn4:*, reg uasgn5:V, reg c9:L, reg i6:I, reg asgn5:V, reg uasgn7:V, reg dr14:V, reg dc7:L, reg dx34:V, reg i8:I, reg asgn7:V, reg dx35:V, reg i9:*, reg i10:V, reg __3:cls, reg r46:V, reg r47:V, reg colSums:cls, reg effects2:*, reg effects3:V, reg c10:L, reg effects5:V, reg dr16:V, reg dc8:L, reg dx36:V, reg dx37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg effects8:V, reg r49:V, reg asgn8:*, reg asgn9:V, reg r50:I, reg c11:L, reg effects10:V, reg r52:V, reg dr18:V, reg dc9:L, reg dx38:V, reg dx39:V, reg select:*, reg select1:V, reg __4:cls, reg r53:V, reg __5:cls, reg r54:V, reg r55:V, reg p11:p(V +), reg r57:V, reg l1:*, reg c12:L, reg i12:I, reg r59:V, reg l3:*, reg dr20:V, reg dc10:L, reg dx40:V, reg i14:I, reg dx41:V, reg i15:*, reg i16:V, reg ___:cls, reg r62:V, reg res:*, reg res1:V |
    mkenv;
    st object = object;
    st contrast = contrast;
    qr = ldf qr;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn qr(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    st qro = r1;
    object3 = ld object;
    check L12() else D2();
  D2():
    deopt 5 [object3];
  L12():
    object4 = force? object3;
    checkMissing(object4);
    c = `is.object`(object4);
    if c then L14() else L15(object4);
  L13(dx1):
    c1 = `is.object`(dx1);
    if c1 then L17() else L18(dx1);
  L14():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(object6):
    r2 = `$`(object6, <sym assign>);
    goto L13(r2);
  L0(dx5):
    st asgn = dx5;
    unique = ldf unique;
    check L33() else D5();
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L17():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(dx3):
    qro = ld qro;
    check L20() else D3();
  D3():
    deopt 8 [dx3, qro];
  D5():
    deopt 20 [];
  L19():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx4);
  L20():
    qro1 = force? qro;
    checkMissing(qro1);
    c2 = `is.object`(qro1);
    if c2 then L22() else L23(dx3, qro1);
  L33():
    p1 = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      return asgn1;
    };
    r13 = dyn unique(p1);
    check L34() else D6();
  D6():
    deopt 22 [r13];
  L21(dx10, dx11):
    c3 = `is.object`(dx11);
    if c3 then L25() else L26(dx10, dx11);
  L22():
    dr4 = tryDispatchBuiltin.1("$", qro1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dx3, dr4);
  L23(dx7, qro3):
    r3 = `$`(qro3, <sym pivot>);
    goto L21(dx7, r3);
  L34():
    st uasgn = r13;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L1(dx18, dx19):
    __1 = ldf `[` in base;
    r11 = dyn __1(dx18, dx19);
    goto L0(r11);
  L2(r15):
    st nterms = r15;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L24():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx3, dx9);
  L25():
    dr6 = tryDispatchBuiltin.1("[", dx11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L27() else L26(dx10, dr6);
  L26(dx14, dx15):
    object7 = ld object;
    check L28() else D4();
  L35():
    uasgn = ld uasgn;
    check L37() else D7();
  L36():
    r14 = dyn base(<sym uasgn>);
    goto L2(r14);
  D4():
    deopt 12 [dx14, dx15, 1, object7];
  D7():
    deopt 26 [uasgn];
  L3(r18):
    c7 = `is.object`(r18);
    if c7 then L50() else L51(r18);
  L27():
    dx17 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx10, dx17);
  L28():
    object8 = force? object7;
    checkMissing(object8);
    c4 = `is.object`(object8);
    if c4 then L30() else L31(dx14, dx15, 1, object8);
  L37():
    uasgn1 = force? uasgn;
    checkMissing(uasgn1);
    length = ldf length in base;
    r16 = dyn length(uasgn1);
    check L38() else D8();
  L39():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L40():
    r17 = dyn base1("(Intercept)", <lang attr(`$`(object, terms), "term.labels")>);
    goto L3(r17);
  D8():
    deopt 29 [r16];
  L4(r20):
    c6 = ldf c in base;
    r23 = dyn c6("(Intercept)", r20);
    check L49() else D11();
  L5(dx33):
    st nmeffect = dx33;
    as_matrix = ldf `as.matrix`;
    check L54() else D13();
  L29(dx27, dx28, r7, dx29):
    r9 = `:`(r7, dx29);
    __ = ldf `[` in base;
    r10 = dyn __(dx28, r9);
    goto L1(dx27, r10);
  L30():
    dr8 = tryDispatchBuiltin.1("$", object8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L32() else L31(dx14, dx15, 1, dr8);
  L31(dx22, dx23, r5, object10):
    r8 = `$`(object10, <sym rank>);
    goto L29(dx22, dx23, r5, r8);
  L38():
    goto L2(r16);
  L41():
    object11 = ld object;
    check L43() else D9();
  L42():
    r19 = dyn base2(<lang `$`(object, terms)>, "term.labels");
    goto L4(r19);
  L50():
    dr12 = tryDispatchBuiltin.1("[", r18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51(dr12);
  L51(r25):
    uasgn2 = ld uasgn;
    check L53() else D12();
  D9():
    deopt 36 [object11];
  D11():
    deopt 43 [r23];
  D12():
    deopt 45 [r25, 1, uasgn2];
  D13():
    deopt 51 [];
  L32():
    dx26 = getTryDispatchBuiltinValue(dr8);
    goto L29(dx14, dx15, 1, dx26);
  L43():
    object12 = force? object11;
    checkMissing(object12);
    c5 = `is.object`(object12);
    if c5 then L45() else L46(object12);
  L49():
    goto L3(r23);
  L52():
    dx32 = getTryDispatchBuiltinValue(dr12);
    goto L5(dx32);
  L53():
    uasgn3 = force? uasgn2;
    checkMissing(uasgn3);
    r26 = `+`(1, uasgn3);
    __2 = ldf `[` in base;
    r27 = dyn __2(r25, r26);
    goto L5(r27);
  L54():
    p4 = prom<V +>{
      qr_qty = ldf `qr.qty`;
      p2 = prom<V +>{
        qro4 = ld qro;
        qro5 = force? qro4;
        checkMissing(qro5);
        return qro5;
      };
      p3 = prom<V +>{
        contrast1 = ld contrast;
        contrast2 = force? contrast1;
        checkMissing(contrast2);
        return contrast2;
      };
      r30 = dyn qr_qty(p2, p3);
      return r30;
    };
    r32 = dyn as_matrix(p4);
    check L55() else D14();
  D14():
    deopt 53 [r32];
  L44(dx31):
    attr = ldf attr in base;
    r22 = dyn attr(dx31, "term.labels");
    check L48() else D10();
  L45():
    dr10 = tryDispatchBuiltin.1("$", object12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L47() else L46(dr10);
  L46(object14):
    r21 = `$`(object14, <sym terms>);
    goto L44(r21);
  L55():
    st effects = r32;
    matrix = ldf matrix;
    check L56() else D15();
  D10():
    deopt 41 [r22];
  D15():
    deopt 56 [];
  L47():
    dx30 = getTryDispatchBuiltinValue(dr10);
    goto L44(dx30);
  L48():
    goto L4(r22);
  L56():
    p5 = prom<V +>{
      nterms = ld nterms;
      nterms1 = force? nterms;
      checkMissing(nterms1);
      return nterms1;
    };
    p7 = prom<V +>{
      ncol = ldf ncol;
      p6 = prom<V +>{
        effects = ld effects;
        effects1 = force? effects;
        checkMissing(effects1);
        return effects1;
      };
      r35 = dyn ncol(p6);
      return r35;
    };
    p9 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      nmeffect = ld nmeffect;
      nmeffect1 = force? nmeffect;
      checkMissing(nmeffect1);
      colnames = ldf colnames;
      p8 = prom<V +>{
        contrast3 = ld contrast;
        contrast4 = force? contrast3;
        checkMissing(contrast4);
        return contrast4;
      };
      r40 = dyn colnames(p8);
      list = ldf list in base;
      r41 = dyn list(nmeffect1, r40);
      goto L0(r41);
    L2():
      r37 = dyn base3(<sym nmeffect>, <lang colnames(contrast)>);
      goto L0(r37);
    };
    r43 = dyn matrix[, nrow, ncol, dimnames](0.0, p5, p7, p9);
    check L57() else D16();
  D16():
    deopt 64 [r43];
  L57():
    st res = r43;
    seq = ldf seq;
    check L58() else D17();
  D17():
    deopt 67 [];
  L58():
    p10 = prom<V +>{
      nterms2 = ld nterms;
      nterms3 = force? nterms2;
      checkMissing(nterms3);
      return nterms3;
    };
    r45 = dyn seq(p10);
    check L59() else D18();
  D18():
    deopt 69 [r45];
  L59():
    s = toForSeq(r45);
    l = length(s);
    i = 0;
    goto L6(i);
  L6(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L60() else L9();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    asgn2 = ld asgn;
    check L61() else D19();
  L60():
    res = ld res;
    check L73() else D25();
  D19():
    deopt 70 [i2, asgn2];
  D25():
    deopt 92 [res];
  L61():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    uasgn4 = ld uasgn;
    check L62() else D20();
  L73():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D20():
    deopt 71 [i2, asgn3, uasgn4];
  L62():
    uasgn5 = force? uasgn4;
    checkMissing(uasgn5);
    c9 = `is.object`(uasgn5);
    if c9 then L63() else L64(i2, asgn3, uasgn5);
  L7(i8, asgn7, dx35):
    r47 = `==`(asgn7, dx35);
    st select = r47;
    colSums = ldf colSums;
    check L67() else D22();
  L63():
    dr14 = tryDispatchBuiltin.1("[", uasgn5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L65() else L64(i2, asgn3, dr14);
  L64(i6, asgn5, uasgn7):
    i9 = ld i;
    check L66() else D21();
  D21():
    deopt 73 [i6, asgn5, uasgn7, i9];
  D22():
    deopt 79 [i8];
  L65():
    dx34 = getTryDispatchBuiltinValue(dr14);
    goto L7(i2, asgn3, dx34);
  L66():
    i10 = force? i9;
    __3 = ldf `[` in base;
    r46 = dyn __3(uasgn7, i10);
    goto L7(i6, asgn5, r46);
  L67():
    p11 = prom<V +>{
      effects2 = ld effects;
      effects3 = force? effects2;
      checkMissing(effects3);
      c10 = `is.object`(effects3);
      if c10 then L3() else L4(effects3);
    L0(dx37):
      r55 = `^`(dx37, 2.0);
      return r55;
    L3():
      dr16 = tryDispatchBuiltin.1("[", effects3);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L5() else L4(dr16);
    L4(effects5):
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L6() else L7();
    L1(effects8, r49):
      c11 = `is.object`(r49);
      if c11 then L8() else L9(effects8, r49);
    L5():
      dx36 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx36);
    L6():
      asgn8 = ld asgn;
      asgn9 = force? asgn8;
      checkMissing(asgn9);
      r50 = seq_along(asgn9);
      goto L1(effects5, r50);
    L7():
      r48 = dyn base4(<sym asgn>);
      goto L1(effects5, r48);
    L2(dx39):
      __5 = ldf `[` in base;
      r54 = dyn __5(effects3, dx39, <missing>, FALSE);
      goto L0(r54);
    L8():
      dr18 = tryDispatchBuiltin.1("[", r49);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L10() else L9(effects8, dr18);
    L9(effects10, r52):
      select = ld select;
      select1 = force? select;
      __4 = ldf `[` in base;
      r53 = dyn __4(r52, select1);
      goto L2(r53);
    L10():
      dx38 = getTryDispatchBuiltinValue(dr18);
      goto L2(dx38);
    };
    r57 = dyn colSums(p11);
    check L68() else D23();
  D23():
    deopt 81 [i8, r57];
  L68():
    l1 = ld res;
    c12 = `is.object`(l1);
    if c12 then L69() else L70(i8, r57, l1);
  L8(i14, dx41):
    st res = dx41;
    goto L6(i14);
  L69():
    dr20 = tryDispatchBuiltin.0("[<-", l1, r57);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L71() else L70(i8, r57, dr20);
  L70(i12, r59, l3):
    i15 = ld i;
    check L72() else D24();
  D24():
    deopt 83 [i12, r59, l3, r57, i15];
  L71():
    dx40 = getTryDispatchBuiltinValue(dr20);
    goto L8(i8, dx40);
  L72():
    i16 = force? i15;
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l1, i16, <missing>, r57);
    goto L8(i12, r62);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg x3:*, reg x4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg x7:V, reg r12:V, reg x8:*, reg x9:V, reg sum:cls, reg r13:V, reg r14:V |
    mkenv;
    st x = x;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L7() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    x3 = ld x;
    check L11() else D3();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L0(c);
  L7():
    stop = ldf stop;
    check L8() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 13 [x3];
  L8():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r4):
        return r4;
      L1():
        substitute = ldf substitute in base;
        r5 = dyn substitute(<sym contrasts.list>);
        goto L0(r5);
      L2():
        r3 = dyn base1(<sym contrasts.list>);
        goto L0(r3);
      };
      r7 = dyn gettextf("each element of '%s' must be logical", p);
      return r7;
    };
    r9 = dyn stop[, domain](p1, NA_LGL);
    check L9() else D2();
  L11():
    x4 = force? x3;
    checkMissing(x4);
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  D2():
    deopt 10 [r9];
  L3(x7, r12):
    r14 = `/`(x7, r12);
    popenv;
    return r14;
  L9():
    goto L2();
  L12():
    x8 = ld x;
    check L14() else D4();
  L13():
    r11 = dyn base2(<sym x>);
    goto L3(x4, r11);
  D4():
    deopt 16 [x4, x8];
  L14():
    x9 = force? x8;
    checkMissing(x9);
    sum = ldf sum in base;
    r13 = dyn sum(x9);
    check L15() else D5();
  D5():
    deopt 19 [x4, r13];
  L15():
    goto L3(x4, r13);
  }
}