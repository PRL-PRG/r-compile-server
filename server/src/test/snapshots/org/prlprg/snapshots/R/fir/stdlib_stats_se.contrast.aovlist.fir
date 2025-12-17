fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3183409691;
    st `se.contrast.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3183409691(object, `contrast.obj`, coef, data, `...`) {
  (reg object:*, reg contrast_obj:*, reg coef:*, reg data:*, reg ddd:dots) -+> V { var object:*, var `contrast.obj`:*, var coef:*, reg coef_isMissing:L, reg coef_orDefault:*, reg contr_helmert:cls, reg ncol:cls, reg contrast:*, reg contrast1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p2:p(V +), var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, reg r8:cls, reg r9:cls, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg object1:*, reg object2:V, reg attr:cls, reg r14:V, reg c1:V, reg c2:L, reg message:cls, reg r15:V, reg update:cls, reg object3:*, reg object4:V, reg p3:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg data1:*, reg data2:V, reg c3:V, reg c4:L, reg eval:cls, reg contrast_obj1:*, reg contrast_obj2:V, reg p4:p(V +), reg r22:V, reg r23:V, reg eval1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg substitute:cls, reg r26:V, reg p5:p(V +), reg data3:*, reg data4:V, reg p6:p(V +), reg parent_frame:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg contrast_obj3:*, reg contrast_obj4:V, reg is_matrix:cls, reg r34:V, reg r35:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg r39:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg coef1:*, reg coef2:V, reg sum:cls, reg r42:V, reg r43:V, reg c7:L, reg stop:cls, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg coef3:*, reg coef4:V, reg length:cls, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg r53:V, reg contrast_obj5:*, reg contrast_obj6:V, reg length1:cls, reg r54:V, reg r55:V, reg c8:L, reg stop1:cls, reg r56:V, reg r57:V, reg sapply:cls, reg contrast_obj7:*, reg contrast_obj8:V, reg p8:p(V +), reg r60:cls, reg p9:p(V +), reg r62:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg contrast2:*, reg contrast3:V, reg length2:cls, reg r65:V, reg r66:V, reg c9:L, reg c10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg c14:L, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg c17:L, reg r70:V, reg contrast4:*, reg contrast5:V, reg is_na:cls, reg r71:V, reg all:cls, reg r72:V, reg c18:L, reg c19:V, reg c21:L, reg stop2:cls, reg r73:V, reg contrast6:*, reg contrast7:V, reg coef5:*, reg coef6:V, reg ___:cls, reg r75:V, reg contrast_obj9:*, reg contrast_obj10:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg colSums:cls, reg contrast8:*, reg contrast9:V, reg p10:p(V +), reg r82:V, reg abs:cls, reg r83:V, reg r84:V, reg any:cls, reg r85:V, reg c22:L, reg stop3:cls, reg r86:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r88:V, reg r89:V, reg colnames:cls, reg contrast10:*, reg contrast11:V, reg p11:p(V +), reg r91:V, reg length3:cls, reg r92:V, reg r93:V, reg c23:L, reg paste:cls, reg seq:cls, reg ncol1:cls, reg contrast12:*, reg contrast13:V, reg p12:p(V +), reg r95:V, reg p13:p(V +), reg r97:V, reg p14:p(V +), reg r99:V, reg l:*, reg colnames__:cls, reg r100:V, reg contrast_weight_aovlist:cls, reg object5:*, reg object6:V, reg p15:p(V +), reg contrast14:*, reg contrast15:V, reg p16:p(V +), reg r103:V, reg weights:*, reg weights1:V, reg c24:L, reg weights3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg weights6:V, reg r105:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg weights9:V, reg r107:V, reg weights10:*, reg weights11:V, reg names:cls, reg r108:V, reg match:cls, reg r109:V, reg r110:V, reg __1:cls, reg r111:V, reg eff_aovlist:cls, reg object7:*, reg object8:V, reg p17:p(V +), reg r113:V, reg apply:cls, reg effic:*, reg effic1:V, reg p18:p(V +), reg r115:cls, reg p19:p(V +), reg r117:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r118:V, reg r119:V, reg eff_used:*, reg eff_used1:V, reg is_matrix1:cls, reg r120:V, reg c25:L, reg rownames:cls, reg effic2:*, reg effic3:V, reg p20:p(V +), reg r122:V, reg c26:L, reg r124:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg row:cls, reg eff_used2:*, reg eff_used3:V, reg p21:p(V +), reg r126:V, reg c27:L, reg r129:V, reg r130:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r132:V, reg dx7:V, reg eff_used4:*, reg eff_used5:V, reg __2:cls, reg r133:V, reg __3:cls, reg r134:V, reg colnames1:cls, reg effic4:*, reg effic5:V, reg p22:p(V +), reg r136:V, reg c28:L, reg r138:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg col:cls, reg eff_used6:*, reg eff_used7:V, reg p23:p(V +), reg r140:V, reg c29:L, reg r143:V, reg r144:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r146:V, reg dx11:V, reg eff_used8:*, reg eff_used9:V, reg __4:cls, reg r147:V, reg __5:cls, reg r148:V, reg rownames1:cls, reg effic6:*, reg effic7:V, reg p24:p(V +), reg r150:V, reg colnames2:cls, reg effic8:*, reg effic9:V, reg p25:p(V +), reg r152:V, reg sapply1:cls, reg object9:*, reg object10:V, reg c30:L, reg object12:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg unique:cls, reg strata_nms:*, reg strata_nms1:V, reg p26:p(V +), reg r154:V, reg __6:cls, reg r155:V, reg p27:p(V +), reg SS:*, reg SS1:V, reg p28:p(V +), reg r158:V, reg matrix:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r159:V, reg r160:V, reg var_nms:*, reg var_nms1:V, reg length4:cls, reg r161:V, reg p29:p(V +), reg ncol2:cls, reg contrast16:*, reg contrast17:V, reg p30:p(V +), reg r164:V, reg p31:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r166:V, reg r167:V, reg var_nms2:*, reg var_nms3:V, reg colnames3:cls, reg contrast18:*, reg contrast19:V, reg p32:p(V +), reg r169:V, reg list:cls, reg r170:V, reg p33:p(V +), reg r172:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r173:V, reg r174:V, reg var_nms4:*, reg var_nms5:V, reg r175:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg weights12:*, reg weights13:V, reg c32:L, reg i6:I, reg weights15:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i8:I, reg dx16:V, reg strata_nms2:*, reg strata_nms3:V, reg c33:L, reg i10:I, reg weights17:V, reg strata_nms5:V, reg dr16:V, reg dc8:L, reg dx17:V, reg i12:I, reg weights19:V, reg dx18:V, reg i13:*, reg i14:V, reg __7:cls, reg r176:V, reg __8:cls, reg r177:V, reg c34:L, reg i16:I, reg dx20:V, reg dr18:V, reg dc9:L, reg dx21:V, reg i18:I, reg dx22:V, reg var_nms6:*, reg var_nms7:V, reg c35:L, reg i20:I, reg dx24:V, reg var_nms9:V, reg dr20:V, reg dc10:L, reg dx26:V, reg i22:I, reg dx28:V, reg i23:*, reg i24:V, reg __9:cls, reg r178:V, reg __10:cls, reg r179:V, reg l2:*, reg c36:L, reg i26:I, reg dx30:V, reg l4:*, reg dr22:V, reg dc11:L, reg dx32:V, reg i28:I, reg dx34:V, reg i29:*, reg i30:V, reg ___1:cls, reg r180:V, reg rse_list:*, reg rse_list1:V, reg c37:L, reg rse_list3:V, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg strata_nms6:*, reg strata_nms7:V, reg __11:cls, reg r181:V, reg effic10:*, reg effic11:V, reg c38:L, reg effic13:V, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg eff_used10:*, reg eff_used11:V, reg __12:cls, reg r182:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r183:V, reg r184:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r185:V, reg r186:V, reg rse:*, reg rse1:V, reg eff:*, reg eff1:V, reg r187:V, reg r188:V, reg wgt:*, reg wgt1:V, reg ___2:cls, reg r189:V, reg r190:V, reg drop:cls, reg r191:V |
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
    st `contrast.weight.aovlist` = r8;
    r9 = clos inner2337389509;
    st SS = r9;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L57() else L58();
  L3(r11):
    c2 = `as.logical`(r11);
    if c2 then L63() else L5();
  L57():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L58():
    r10 = dyn base(<lang attr(object, "error.qr")>);
    goto L3(r10);
  L4(r13):
    c1 = `==`(r13, NULL);
    goto L3(c1);
  L5():
    goto L6();
  L6():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L59():
    object1 = ld object;
    check L61() else D0();
  L60():
    r12 = dyn base1(<sym object>, "error.qr");
    goto L4(r12);
  L63():
    message = ldf message;
    check L64() else D2();
  D0():
    deopt 9 [object1];
  D2():
    deopt 16 [];
  L7(r20):
    c4 = `as.logical`(r20);
    if c4 then L72() else L8();
  L61():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r14 = dyn attr(object2, "error.qr");
    check L62() else D1();
  L64():
    r15 = dyn message("Refitting model to allow projection");
    check L65() else D3();
  L69():
    data1 = ld data;
    check L71() else D6();
  L70():
    r19 = dyn base2(<sym data>);
    goto L7(r19);
  D1():
    deopt 13 [r14];
  D3():
    deopt 18 [r15];
  D6():
    deopt 29 [data1];
  L8():
    eval1 = ldf eval;
    check L76() else D9();
  L9(r23):
    st `contrast.obj` = r23;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  L62():
    goto L4(r14);
  L65():
    update = ldf update;
    check L66() else D4();
  L71():
    data2 = force? data1;
    checkMissing(data2);
    c3 = `==`(data2, NULL);
    goto L7(c3);
  L72():
    eval = ldf eval;
    check L73() else D7();
  D4():
    deopt 20 [];
  D7():
    deopt 33 [];
  D9():
    deopt 37 [];
  L10(r33):
    r35 = `!`(r33);
    c5 = `as.logical`(r35);
    if c5 then L82() else L11();
  L66():
    p3 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r17 = dyn update[, qr](p3, TRUE);
    check L67() else D5();
  L73():
    p4 = prom<V +>{
      contrast_obj1 = ld `contrast.obj`;
      contrast_obj2 = force? contrast_obj1;
      checkMissing(contrast_obj2);
      return contrast_obj2;
    };
    r22 = dyn eval(p4);
    check L74() else D8();
  L76():
    p5 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      substitute = ldf substitute in base;
      r26 = dyn substitute(<sym contrast.obj>);
      goto L0(r26);
    L2():
      r24 = dyn base3(<sym contrast.obj>);
      goto L0(r24);
    };
    p6 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p7 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r29 = dyn parent_frame();
      return r29;
    };
    r31 = dyn eval1(p5, p6, p7);
    check L77() else D10();
  L78():
    contrast_obj3 = ld `contrast.obj`;
    check L80() else D11();
  L79():
    r32 = dyn base4(<sym contrast.obj>);
    goto L10(r32);
  D5():
    deopt 24 [r17];
  D8():
    deopt 35 [r22];
  D10():
    deopt 41 [r31];
  D11():
    deopt 45 [contrast_obj3];
  L11():
    contrast_obj9 = ld `contrast.obj`;
    check L130() else D35();
  L28():
    contrast_weight_aovlist = ldf `contrast.weight.aovlist`;
    check L154() else D49();
  L67():
    st object = r17;
    goto L6();
  L74():
    goto L9(r22);
  L77():
    goto L9(r31);
  L80():
    contrast_obj4 = force? contrast_obj3;
    checkMissing(contrast_obj4);
    is_matrix = ldf `is.matrix` in base;
    r34 = dyn is_matrix(contrast_obj4);
    check L81() else D12();
  L82():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  D12():
    deopt 48 [r34];
  D35():
    deopt 126 [contrast_obj9];
  D49():
    deopt 171 [];
  L12(r37):
    r39 = `!`(r37);
    c6 = `as.logical`(r39);
    if c6 then L85() else L13();
  L81():
    goto L10(r34);
  L83():
    missing = ldf missing in base;
    r38 = dyn missing(<sym coef>);
    goto L12(r38);
  L84():
    r36 = dyn base5(<sym coef>);
    goto L12(r36);
  L130():
    contrast_obj10 = force? contrast_obj9;
    checkMissing(contrast_obj10);
    st contrast = contrast_obj10;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L131() else L132();
  L154():
    p15 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p16 = prom<V +>{
      contrast14 = ld contrast;
      contrast15 = force? contrast14;
      checkMissing(contrast15);
      return contrast15;
    };
    r103 = dyn contrast_weight_aovlist(p15, p16);
    check L155() else D50();
  D50():
    deopt 174 [r103];
  L13():
    goto L21();
  L21():
    sapply = ldf sapply;
    check L107() else D23();
  L29(r78):
    c22 = `as.logical`(r78);
    if c22 then L139() else L31();
  L85():
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L131():
    sym13 = ldf abs;
    base13 = ldf abs in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L133() else L134();
  L132():
    r77 = dyn base12(<lang `>`(abs(colSums(contrast)), 1.0E-8)>);
    goto L29(r77);
  L155():
    st weights = r103;
    weights = ld weights;
    check L156() else D51();
  D23():
    deopt 89 [];
  D51():
    deopt 176 [weights];
  L14(r41):
    r43 = `!=`(r41, 0.0);
    c7 = `as.logical`(r43);
    if c7 then L90() else L15();
  L30(r80):
    r84 = `>`(r80, 1.0E-8);
    any = ldf any in base;
    r85 = dyn any(r84);
    check L138() else D39();
  L31():
    goto L32();
  L32():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L143() else L144();
  L86():
    coef1 = ld coef;
    check L88() else D13();
  L87():
    r40 = dyn base6(<sym coef>);
    goto L14(r40);
  L107():
    p8 = prom<V +>{
      contrast_obj7 = ld `contrast.obj`;
      contrast_obj8 = force? contrast_obj7;
      checkMissing(contrast_obj8);
      return contrast_obj8;
    };
    p9 = prom<V +>{
      r60 = clos inner2501545716;
      return r60;
    };
    r62 = dyn sapply(p8, p9);
    check L108() else D24();
  L133():
    colSums = ldf colSums;
    check L135() else D36();
  L134():
    r79 = dyn base13(<lang colSums(contrast)>);
    goto L30(r79);
  L139():
    stop3 = ldf stop;
    check L140() else D40();
  L156():
    weights1 = force? weights;
    checkMissing(weights1);
    c24 = `is.object`(weights1);
    if c24 then L157() else L158(weights1);
  D13():
    deopt 56 [coef1];
  D24():
    deopt 92 [r62];
  D36():
    deopt 134 [];
  D39():
    deopt 142 [r85];
  D40():
    deopt 144 [];
  L15():
    goto L16();
  L16():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L33(r89):
    r93 = `!`(r89);
    c23 = `as.logical`(r93);
    if c23 then L148() else L34();
  L35(dx3):
    st weights = dx3;
    eff_aovlist = ldf `eff.aovlist`;
    check L167() else D55();
  L88():
    coef2 = force? coef1;
    checkMissing(coef2);
    sum = ldf sum in base;
    r42 = dyn sum(coef2);
    check L89() else D14();
  L90():
    stop = ldf stop;
    check L91() else D15();
  L108():
    st contrast = r62;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L135():
    p10 = prom<V +>{
      contrast8 = ld contrast;
      contrast9 = force? contrast8;
      checkMissing(contrast9);
      return contrast9;
    };
    r82 = dyn colSums(p10);
    check L136() else D37();
  L138():
    goto L29(r85);
  L140():
    r86 = dyn stop3("columns of 'contrast.obj' must define a contrast(sum to zero)");
    check L141() else D41();
  L143():
    colnames = ldf colnames;
    check L145() else D42();
  L144():
    r88 = dyn base14(<lang colnames(contrast)>);
    goto L33(r88);
  L157():
    dr2 = tryDispatchBuiltin.1("[", weights1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L159() else L158(dr2);
  L158(weights3):
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L160() else L161();
  D14():
    deopt 59 [r42];
  D15():
    deopt 63 [];
  D37():
    deopt 136 [r82];
  D41():
    deopt 146 [r86];
  D42():
    deopt 152 [];
  D55():
    deopt 195 [];
  L17(r47):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  L22(r64):
    r66 = `!`(r64);
    c9 = `as.logical`(r66);
    if c9 then L23(c9) else L113();
  L34():
    goto L28();
  L36(weights6, r105):
    r110 = `-`(<missing>, r105);
    __1 = ldf `[` in base;
    r111 = dyn __1(weights6, r110);
    goto L35(r111);
  L89():
    goto L14(r42);
  L91():
    r44 = dyn stop("'coef' must define a contrast, i.e., sum to 0");
    check L92() else D16();
  L94():
    coef3 = ld coef;
    check L96() else D17();
  L95():
    r46 = dyn base7(<sym coef>);
    goto L17(r46);
  L109():
    contrast2 = ld contrast;
    check L111() else D25();
  L110():
    r63 = dyn base9(<sym contrast>);
    goto L22(r63);
  L136():
    abs = ldf abs in base;
    r83 = dyn abs(r82);
    check L137() else D38();
  L141():
    goto L32();
  L145():
    p11 = prom<V +>{
      contrast10 = ld contrast;
      contrast11 = force? contrast10;
      checkMissing(contrast11);
      return contrast11;
    };
    r91 = dyn colnames(p11);
    check L146() else D43();
  L148():
    paste = ldf paste;
    check L149() else D45();
  L159():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx2);
  L160():
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L162() else L163();
  L161():
    r104 = dyn base15("(Intercept)", <lang names(weights)>);
    goto L36(weights3, r104);
  L167():
    p17 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r113 = dyn eff_aovlist(p17);
    check L168() else D56();
  D16():
    deopt 65 [r44];
  D17():
    deopt 70 [coef3];
  D25():
    deopt 96 [contrast2];
  D38():
    deopt 138 [r83];
  D43():
    deopt 154 [r91];
  D45():
    deopt 159 [];
  D56():
    deopt 197 [r113];
  L18(r52, r53):
    r55 = `!=`(r52, r53);
    c8 = `as.logical`(r55);
    if c8 then L102() else L19();
  L23(c10):
    c21 = `as.logical`(c10);
    if c21 then L122() else L26();
  L37(weights9, r107):
    match = ldf match in base;
    r109 = dyn match("(Intercept)", r107, NA_INT, NULL);
    check L166() else D54();
  L92():
    goto L16();
  L96():
    coef4 = force? coef3;
    checkMissing(coef4);
    length = ldf length in base;
    r48 = dyn length(coef4);
    check L97() else D18();
  L98():
    contrast_obj5 = ld `contrast.obj`;
    check L100() else D19();
  L99():
    r51 = dyn base8(<sym contrast.obj>);
    goto L18(r47, r51);
  L111():
    contrast3 = force? contrast2;
    checkMissing(contrast3);
    length2 = ldf length in base;
    r65 = dyn length2(contrast3);
    check L112() else D26();
  L113():
    sym10 = ldf all;
    base10 = ldf all in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L114() else L115();
  L137():
    goto L30(r83);
  L146():
    length3 = ldf length in base;
    r92 = dyn length3(r91);
    check L147() else D44();
  L149():
    p14 = prom<V +>{
      seq = ldf seq;
      p13 = prom<V +>{
        ncol1 = ldf ncol;
        p12 = prom<V +>{
          contrast12 = ld contrast;
          contrast13 = force? contrast12;
          checkMissing(contrast13);
          return contrast13;
        };
        r95 = dyn ncol1(p12);
        return r95;
      };
      r97 = dyn seq(p13);
      return r97;
    };
    r99 = dyn paste("Contrast", p14);
    check L150() else D46();
  L162():
    weights10 = ld weights;
    check L164() else D52();
  L163():
    r106 = dyn base16(<sym weights>);
    goto L37(weights3, r106);
  L168():
    st effic = r113;
    apply = ldf apply;
    check L169() else D57();
  D18():
    deopt 73 [r48];
  D19():
    deopt 75 [r47, contrast_obj5];
  D26():
    deopt 99 [r65];
  D44():
    deopt 156 [r92];
  D46():
    deopt 162 [r99];
  D52():
    deopt 183 [weights3, weights10];
  D54():
    deopt 190 [weights9, r109];
  D57():
    deopt 200 [];
  L19():
    goto L20(NULL);
  L20(r57):
    goto L21();
  L24(c14, r68):
    c18 = `as.logical`(r68);
    c19 = `||`(c14, c18);
    goto L23(c19);
  L26():
    goto L27();
  L27():
    contrast6 = ld contrast;
    check L126() else D32();
  L97():
    goto L17(r48);
  L100():
    contrast_obj6 = force? contrast_obj5;
    checkMissing(contrast_obj6);
    length1 = ldf length in base;
    r54 = dyn length1(contrast_obj6);
    check L101() else D20();
  L102():
    stop1 = ldf stop;
    check L103() else D21();
  L112():
    goto L22(r65);
  L114():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  L115():
    r67 = dyn base10(<lang is.na(contrast)>);
    goto L24(c9, r67);
  L122():
    stop2 = ldf stop;
    check L123() else D30();
  L147():
    goto L33(r92);
  L150():
    l = ld contrast;
    colnames__ = ldf `colnames<-`;
    check L151() else D47();
  L164():
    weights11 = force? weights10;
    checkMissing(weights11);
    names = ldf names in base;
    r108 = dyn names(weights11);
    check L165() else D53();
  L166():
    goto L36(weights9, r109);
  L169():
    p18 = prom<V +>{
      effic = ld effic;
      effic1 = force? effic;
      checkMissing(effic1);
      return effic1;
    };
    p19 = prom<V +>{
      r115 = clos inner2896059106;
      return r115;
    };
    r117 = dyn apply(p18, 2, p19);
    check L170() else D58();
  D20():
    deopt 78 [r47, r54];
  D21():
    deopt 81 [];
  D30():
    deopt 113 [];
  D32():
    deopt 119 [contrast6];
  D47():
    deopt 164 [r99, l, r99];
  D53():
    deopt 186 [weights3, r108];
  D58():
    deopt 204 [r117];
  L25(c17, r70):
    all = ldf all in base;
    r72 = dyn all(r70);
    check L120() else D29();
  L101():
    goto L18(r47, r54);
  L103():
    r56 = dyn stop1("'coef' must have same length as 'contrast.obj'");
    check L104() else D22();
  L116():
    contrast4 = ld contrast;
    check L118() else D27();
  L117():
    r69 = dyn base11(<sym contrast>);
    goto L25(c9, r69);
  L123():
    r73 = dyn stop2("the contrast defined is empty (has no TRUE elements)");
    check L124() else D31();
  L126():
    contrast7 = force? contrast6;
    checkMissing(contrast7);
    coef5 = ld coef;
    check L127() else D33();
  L151():
    r100 = dyn colnames__(l, NULL, r99);
    check L152() else D48();
  L165():
    goto L37(weights3, r108);
  L170():
    st `eff.used` = r117;
    sym17 = ldf `is.matrix`;
    base17 = ldf `is.matrix` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L171() else L172();
  D22():
    deopt 83 [r56];
  D27():
    deopt 105 [c9, contrast4];
  D29():
    deopt 110 [c17, r72];
  D31():
    deopt 115 [r73];
  D33():
    deopt 121 [coef5];
  D48():
    deopt 166 [r99, r100];
  L38(r119):
    c25 = `as.logical`(r119);
    if c25 then L175() else L39();
  L104():
    goto L20(r56);
  L118():
    contrast5 = force? contrast4;
    checkMissing(contrast5);
    is_na = ldf `is.na` in base;
    r71 = dyn is_na(contrast5);
    check L119() else D28();
  L120():
    goto L24(c17, r72);
  L124():
    goto L27();
  L127():
    coef6 = force? coef5;
    checkMissing(coef6);
    ___ = ldf `%*%` in base;
    r75 = dyn ___(contrast7, coef6);
    check L128() else D34();
  L152():
    st contrast = r100;
    goto L28();
  L171():
    eff_used = ld `eff.used`;
    check L173() else D59();
  L172():
    r118 = dyn base17(<sym eff.used>);
    goto L38(r118);
  D28():
    deopt 108 [c9, r71];
  D34():
    deopt 124 [r75];
  D59():
    deopt 208 [eff_used];
  L39():
    rownames1 = ldf rownames;
    check L199() else D71();
  L44():
    sapply1 = ldf sapply;
    check L203() else D75();
  L119():
    goto L25(c9, r71);
  L128():
    st contrast = r75;
    goto L28();
  L173():
    eff_used1 = force? eff_used;
    checkMissing(eff_used1);
    is_matrix1 = ldf `is.matrix` in base;
    r120 = dyn is_matrix1(eff_used1);
    check L174() else D60();
  L175():
    rownames = ldf rownames;
    check L176() else D61();
  D60():
    deopt 211 [r120];
  D61():
    deopt 213 [];
  D71():
    deopt 239 [];
  D75():
    deopt 249 [];
  L174():
    goto L38(r120);
  L176():
    p20 = prom<V +>{
      effic2 = ld effic;
      effic3 = force? effic2;
      checkMissing(effic3);
      return effic3;
    };
    r122 = dyn rownames(p20);
    check L177() else D62();
  L199():
    p24 = prom<V +>{
      effic6 = ld effic;
      effic7 = force? effic6;
      checkMissing(effic7);
      return effic7;
    };
    r150 = dyn rownames1(p24);
    check L200() else D72();
  L203():
    p27 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c30 = `is.object`(object10);
      if c30 then L1() else L2(object10);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", object10);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object12):
      unique = ldf unique;
      p26 = prom<V +>{
        strata_nms = ld `strata.nms`;
        strata_nms1 = force? strata_nms;
        checkMissing(strata_nms1);
        return strata_nms1;
      };
      r154 = dyn unique(p26);
      __6 = ldf `[` in base;
      r155 = dyn __6(object12, r154);
      goto L0(r155);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    p28 = prom<V +>{
      SS = ld SS;
      SS1 = force? SS;
      checkMissing(SS1);
      return SS1;
    };
    r158 = dyn sapply1(p27, p28);
    check L204() else D76();
  D62():
    deopt 215 [r122];
  D72():
    deopt 241 [r150];
  D76():
    deopt 252 [r158];
  L177():
    c26 = `is.object`(r122);
    if c26 then L178() else L179(r122);
  L200():
    st `strata.nms` = r150;
    colnames2 = ldf colnames;
    check L201() else D73();
  L204():
    st `rse.list` = r158;
    matrix = ldf matrix;
    check L205() else D77();
  D73():
    deopt 244 [];
  D77():
    deopt 255 [];
  L40(dx5):
    st `strata.nms` = dx5;
    colnames1 = ldf colnames;
    check L187() else D66();
  L178():
    dr4 = tryDispatchBuiltin.1("[", r122);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L180() else L179(dr4);
  L179(r124):
    row = ldf row;
    check L181() else D63();
  L201():
    p25 = prom<V +>{
      effic8 = ld effic;
      effic9 = force? effic8;
      checkMissing(effic9);
      return effic9;
    };
    r152 = dyn colnames2(p25);
    check L202() else D74();
  L205():
    p29 = prom<V +>{
      sym18 = ldf length;
      base18 = ldf length in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r160):
      return r160;
    L1():
      var_nms = ld `var.nms`;
      var_nms1 = force? var_nms;
      checkMissing(var_nms1);
      length4 = ldf length in base;
      r161 = dyn length4(var_nms1);
      goto L0(r161);
    L2():
      r159 = dyn base18(<sym var.nms>);
      goto L0(r159);
    };
    p31 = prom<V +>{
      ncol2 = ldf ncol;
      p30 = prom<V +>{
        contrast16 = ld contrast;
        contrast17 = force? contrast16;
        checkMissing(contrast17);
        return contrast17;
      };
      r164 = dyn ncol2(p30);
      return r164;
    };
    p33 = prom<V +>{
      sym19 = ldf list;
      base19 = ldf list in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r167):
      return r167;
    L1():
      var_nms2 = ld `var.nms`;
      var_nms3 = force? var_nms2;
      checkMissing(var_nms3);
      colnames3 = ldf colnames;
      p32 = prom<V +>{
        contrast18 = ld contrast;
        contrast19 = force? contrast18;
        checkMissing(contrast19);
        return contrast19;
      };
      r169 = dyn colnames3(p32);
      list = ldf list in base;
      r170 = dyn list(var_nms3, r169);
      goto L0(r170);
    L2():
      r166 = dyn base19(<sym var.nms>, <lang colnames(contrast)>);
      goto L0(r166);
    };
    r172 = dyn matrix[, nrow, ncol, dimnames](0.0, p29, p31, p33);
    check L206() else D78();
  D63():
    deopt 217 [r124];
  D66():
    deopt 226 [];
  D74():
    deopt 246 [r152];
  D78():
    deopt 263 [r172];
  L180():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(dx4);
  L181():
    p21 = prom<V +>{
      eff_used2 = ld `eff.used`;
      eff_used3 = force? eff_used2;
      checkMissing(eff_used3);
      return eff_used3;
    };
    r126 = dyn row(p21);
    check L182() else D64();
  L187():
    p22 = prom<V +>{
      effic4 = ld effic;
      effic5 = force? effic4;
      checkMissing(effic5);
      return effic5;
    };
    r136 = dyn colnames1(p22);
    check L188() else D67();
  L202():
    st `var.nms` = r152;
    goto L44();
  L206():
    st wgt = r172;
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L207() else L208();
  D64():
    deopt 219 [r124, r126];
  D67():
    deopt 228 [r136];
  L45(r174):
    s = toForSeq(r174);
    l1 = length(s);
    i = 0;
    goto L46(i);
  L182():
    c27 = `is.object`(r126);
    if c27 then L183() else L184(r124, r126);
  L188():
    c28 = `is.object`(r136);
    if c28 then L189() else L190(r136);
  L207():
    var_nms4 = ld `var.nms`;
    check L209() else D79();
  L208():
    r173 = dyn base20(<sym var.nms>);
    goto L45(r173);
  D79():
    deopt 266 [var_nms4];
  L41(r132, dx7):
    __3 = ldf `[` in base;
    r134 = dyn __3(r132, dx7);
    goto L40(r134);
  L42(dx9):
    st `var.nms` = dx9;
    goto L44();
  L46(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l1, i2);
    if c31 then L210() else L52();
  L183():
    dr6 = tryDispatchBuiltin.1("[", r126);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L185() else L184(r124, dr6);
  L184(r129, r130):
    eff_used4 = ld `eff.used`;
    check L186() else D65();
  L189():
    dr8 = tryDispatchBuiltin.1("[", r136);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L191() else L190(dr8);
  L190(r138):
    col = ldf col;
    check L192() else D68();
  L209():
    var_nms5 = force? var_nms4;
    checkMissing(var_nms5);
    r175 = seq_along(var_nms5);
    goto L45(r175);
  D65():
    deopt 220 [r129, r130, eff_used4];
  D68():
    deopt 230 [r138];
  L52():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    weights12 = ld weights;
    check L211() else D80();
  L185():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L41(r124, dx6);
  L186():
    eff_used5 = force? eff_used4;
    __2 = ldf `[` in base;
    r133 = dyn __2(r130, eff_used5);
    goto L41(r129, r133);
  L191():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L192():
    p23 = prom<V +>{
      eff_used6 = ld `eff.used`;
      eff_used7 = force? eff_used6;
      checkMissing(eff_used7);
      return eff_used7;
    };
    r140 = dyn col(p23);
    check L193() else D69();
  L210():
    rse_list = ld `rse.list`;
    check L232() else D86();
  D69():
    deopt 232 [r138, r140];
  D80():
    deopt 269 [i2, weights12];
  D86():
    deopt 297 [rse_list];
  L193():
    c29 = `is.object`(r140);
    if c29 then L194() else L195(r138, r140);
  L211():
    weights13 = force? weights12;
    checkMissing(weights13);
    c32 = `is.object`(weights13);
    if c32 then L212() else L213(i2, weights13);
  L232():
    rse_list1 = force? rse_list;
    checkMissing(rse_list1);
    c37 = `is.object`(rse_list1);
    if c37 then L233() else L234(rse_list1);
  L43(r146, dx11):
    __5 = ldf `[` in base;
    r148 = dyn __5(r146, dx11);
    goto L42(r148);
  L47(i8, dx16):
    c34 = `is.object`(dx16);
    if c34 then L220() else L221(i8, dx16);
  L53(dx36):
    st rse = dx36;
    effic10 = ld effic;
    check L237() else D88();
  L194():
    dr10 = tryDispatchBuiltin.1("[", r140);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L196() else L195(r138, dr10);
  L195(r143, r144):
    eff_used8 = ld `eff.used`;
    check L197() else D70();
  L212():
    dr14 = tryDispatchBuiltin.1("[[", weights13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L214() else L213(i2, dr14);
  L213(i6, weights15):
    strata_nms2 = ld `strata.nms`;
    check L215() else D81();
  L233():
    dr24 = tryDispatchBuiltin.1("[", rse_list1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L235() else L234(dr24);
  L234(rse_list3):
    strata_nms6 = ld `strata.nms`;
    check L236() else D87();
  D70():
    deopt 233 [r143, r144, eff_used8];
  D81():
    deopt 271 [i6, weights15, strata_nms2];
  D87():
    deopt 299 [rse_list3, strata_nms6];
  D88():
    deopt 303 [effic10];
  L49(i18, dx22):
    l2 = ld wgt;
    c36 = `is.object`(l2);
    if c36 then L228() else L229(i18, dx22, l2);
  L196():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L43(r138, dx10);
  L197():
    eff_used9 = force? eff_used8;
    __4 = ldf `[` in base;
    r147 = dyn __4(r144, eff_used9);
    goto L43(r143, r147);
  L214():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L47(i2, dx15);
  L215():
    strata_nms3 = force? strata_nms2;
    checkMissing(strata_nms3);
    c33 = `is.object`(strata_nms3);
    if c33 then L216() else L217(i6, weights15, strata_nms3);
  L220():
    dr18 = tryDispatchBuiltin.1("[", dx16);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L222() else L221(i8, dr18);
  L221(i16, dx20):
    var_nms6 = ld `var.nms`;
    check L223() else D83();
  L235():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L53(dx35);
  L236():
    strata_nms7 = force? strata_nms6;
    __11 = ldf `[` in base;
    r181 = dyn __11(rse_list3, strata_nms7);
    goto L53(r181);
  L237():
    effic11 = force? effic10;
    checkMissing(effic11);
    c38 = `is.object`(effic11);
    if c38 then L238() else L239(effic11);
  D83():
    deopt 277 [i16, dx20, var_nms6];
  L48(i12, weights19, dx18):
    __8 = ldf `[[` in base;
    r177 = dyn __8(weights19, dx18);
    goto L47(i12, r177);
  L51(i28, dx34):
    st wgt = dx34;
    goto L46(i28);
  L54(dx38):
    st eff = dx38;
    sym21 = ldf drop;
    base21 = ldf drop in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L242() else L243();
  L216():
    dr16 = tryDispatchBuiltin.1("[", strata_nms3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L218() else L217(i6, weights15, dr16);
  L217(i10, weights17, strata_nms5):
    i13 = ld i;
    check L219() else D82();
  L222():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L49(i8, dx21);
  L223():
    var_nms7 = force? var_nms6;
    checkMissing(var_nms7);
    c35 = `is.object`(var_nms7);
    if c35 then L224() else L225(i16, dx20, var_nms7);
  L228():
    dr22 = tryDispatchBuiltin.0("[<-", l2, dx22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L230() else L229(i18, dx22, dr22);
  L229(i26, dx30, l4):
    i29 = ld i;
    check L231() else D85();
  L238():
    dr26 = tryDispatchBuiltin.1("[", effic11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L240() else L239(dr26);
  L239(effic13):
    eff_used10 = ld `eff.used`;
    check L241() else D89();
  D82():
    deopt 273 [i10, weights17, strata_nms5, i13];
  D85():
    deopt 288 [i26, dx30, l4, dx22, i29];
  D89():
    deopt 305 [effic13, eff_used10];
  L50(i22, dx28):
    __10 = ldf `[` in base;
    r179 = dyn __10(dx16, dx28, <missing>, FALSE);
    goto L49(i22, r179);
  L55(r184):
    popenv;
    return r184;
  L218():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L48(i6, weights15, dx17);
  L219():
    i14 = force? i13;
    __7 = ldf `[` in base;
    r176 = dyn __7(strata_nms5, i14);
    goto L48(i10, weights17, r176);
  L224():
    dr20 = tryDispatchBuiltin.1("[", var_nms7);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L226() else L225(i16, dx20, dr20);
  L225(i20, dx24, var_nms9):
    i23 = ld i;
    check L227() else D84();
  L230():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L51(i18, dx32);
  L231():
    i30 = force? i29;
    ___1 = ldf `[<-` in base;
    r180 = dyn ___1(l2, i30, <missing>, dx22);
    goto L51(i26, r180);
  L240():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L54(dx37);
  L241():
    eff_used11 = force? eff_used10;
    __12 = ldf `[` in base;
    r182 = dyn __12(effic13, eff_used11);
    goto L54(r182);
  L242():
    sym22 = ldf sqrt;
    base22 = ldf sqrt in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L244() else L245();
  L243():
    r183 = dyn base21(<lang sqrt(`%*%`(`(`(`/`(rse, `^`(eff, 2.0))), wgt))>);
    goto L55(r183);
  D84():
    deopt 279 [i20, dx24, var_nms9, i23];
  L56(r186):
    drop = ldf drop in base;
    r191 = dyn drop(r186);
    check L250() else D94();
  L226():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L50(i16, dx26);
  L227():
    i24 = force? i23;
    __9 = ldf `[` in base;
    r178 = dyn __9(var_nms9, i24);
    goto L50(i20, r178);
  L244():
    rse = ld rse;
    check L246() else D90();
  L245():
    r185 = dyn base22(<lang `%*%`(`(`(`/`(rse, `^`(eff, 2.0))), wgt)>);
    goto L56(r185);
  D90():
    deopt 313 [rse];
  D94():
    deopt 325 [r191];
  L246():
    rse1 = force? rse;
    checkMissing(rse1);
    eff = ld eff;
    check L247() else D91();
  L250():
    goto L55(r191);
  D91():
    deopt 314 [rse1, eff];
  L247():
    eff1 = force? eff;
    checkMissing(eff1);
    r187 = `^`(eff1, 2.0);
    r188 = `/`(rse1, r187);
    wgt = ld wgt;
    check L248() else D92();
  D92():
    deopt 319 [wgt];
  L248():
    wgt1 = force? wgt;
    checkMissing(wgt1);
    ___2 = ldf `%*%` in base;
    r189 = dyn ___2(r188, wgt1);
    check L249() else D93();
  D93():
    deopt 322 [r189];
  L249():
    r190 = sqrt(r189);
    goto L56(r190);
  }
}
fun inner1522250069(object, contrast) {
  (reg object:*, reg contrast:*) -+> V { var object:*, var contrast:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg e_qr:*, reg e_qr1:V, reg inherits:cls, reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg qr_qty:cls, reg e_qr2:*, reg e_qr3:V, reg p:p(V +), reg contrast1:*, reg contrast2:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg e_qr4:*, reg e_qr5:V, reg c1:L, reg e_qr7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg attr1:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg object3:*, reg object4:V, reg length:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg e_assign:*, reg e_assign1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg n_object:*, reg n_object1:V, reg r23:V, reg nrow:cls, reg c_qr:*, reg c_qr1:V, reg p2:p(V +), reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg r30:V, reg e_assign2:*, reg e_assign3:V, reg length1:cls, reg r31:V, reg r32:V, reg rep_int:cls, reg r33:V, reg c2:cls, reg r34:V, reg setNames:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg n_object2:*, reg n_object3:V, reg vector:cls, reg r37:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg object5:*, reg object6:V, reg names:cls, reg r41:V, reg p4:p(V +), reg r43:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg object7:*, reg object8:V, reg names1:cls, reg r48:V, reg r49:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg object9:*, reg object10:V, reg c4:L, reg i6:I, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg j:*, reg j1:V, reg __:cls, reg r50:V, reg is_qr:cls, reg strata:*, reg strata1:V, reg c5:L, reg strata3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r51:V, reg p5:p(V +), reg r53:V, reg c6:L, reg c_qr2:*, reg c_qr3:V, reg c7:L, reg i12:I, reg c_qr5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i14:I, reg dx7:V, reg e_assign4:*, reg e_assign5:V, reg j2:*, reg j3:V, reg r54:V, reg r55:V, reg __1:cls, reg r56:V, reg as_matrix:cls, reg qr_qty1:cls, reg strata4:*, reg strata5:V, reg c8:L, reg strata7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r57:V, reg p6:p(V +), reg scontrast:*, reg scontrast1:V, reg p7:p(V +), reg r60:V, reg p8:p(V +), reg r62:V, reg strata8:*, reg strata9:V, reg c9:L, reg i16:I, reg strata11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i18:I, reg dx11:V, reg r63:V, reg c10:L, reg i20:I, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i22:I, reg dx15:V, reg strata12:*, reg strata13:V, reg c11:L, reg i24:I, reg dx17:V, reg strata15:V, reg dr14:V, reg dc7:L, reg dx19:V, reg i26:I, reg dx20:V, reg dx21:V, reg r64:V, reg c12:L, reg i28:I, reg dx24:V, reg dx25:V, reg dr16:V, reg dc8:L, reg dx27:V, reg i30:I, reg dx28:V, reg dx29:V, reg r65:V, reg c13:L, reg i32:I, reg dx32:V, reg dx33:V, reg dr18:V, reg dc9:L, reg dx35:V, reg i34:I, reg dx36:V, reg dx37:V, reg strata16:*, reg strata17:V, reg c14:L, reg i36:I, reg dx40:V, reg dx41:V, reg r67:I, reg strata19:V, reg dr20:V, reg dc10:L, reg dx44:V, reg i38:I, reg dx45:V, reg dx46:V, reg r69:I, reg dx47:V, reg r70:V, reg r71:V, reg __2:cls, reg r72:V, reg __3:cls, reg r73:V, reg unique:cls, reg asgn:*, reg asgn1:V, reg p9:p(V +), reg r75:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg i41:I, reg r77:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg i44:I, reg r79:V, reg strata20:*, reg strata21:V, reg c15:L, reg i46:I, reg strata23:V, reg dr22:V, reg dc11:L, reg dx48:V, reg i48:I, reg dx49:V, reg r80:V, reg attr2:cls, reg r81:V, reg c16:cls, reg r82:V, reg matrix:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r83:V, reg r84:V, reg uasgn:*, reg uasgn1:V, reg length2:cls, reg r85:V, reg p10:p(V +), reg ncol:cls, reg effects:*, reg effects1:V, reg p11:p(V +), reg r88:V, reg p12:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg nm:*, reg nm1:V, reg c17:L, reg nm3:V, reg dr24:V, reg dc12:L, reg dx50:V, reg dx51:V, reg uasgn2:*, reg uasgn3:V, reg r92:V, reg __4:cls, reg r93:V, reg colnames:cls, reg contrast3:*, reg contrast4:V, reg p13:p(V +), reg r95:V, reg list:cls, reg r96:V, reg p14:p(V +), reg r98:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r99:V, reg i51:I, reg r100:V, reg uasgn4:*, reg uasgn5:V, reg r101:I, reg s1:V, reg l1:I, reg i52:I, reg i53:I, reg i54:I, reg i55:I, reg c18:L, reg x1:V, reg asgn2:*, reg asgn3:V, reg uasgn6:*, reg uasgn7:V, reg c19:L, reg i62:I, reg i63:I, reg asgn5:V, reg uasgn9:V, reg dr26:V, reg dc13:L, reg dx52:V, reg i66:I, reg i67:I, reg asgn7:V, reg dx53:V, reg i68:*, reg i69:V, reg __5:cls, reg r102:V, reg r103:V, reg colSums:cls, reg effects2:*, reg effects3:V, reg c20:L, reg effects5:V, reg dr28:V, reg dc14:L, reg dx54:V, reg dx55:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r104:V, reg effects8:V, reg r105:V, reg asgn8:*, reg asgn9:V, reg r106:I, reg c21:L, reg effects10:V, reg r108:V, reg dr30:V, reg dc15:L, reg dx56:V, reg dx57:V, reg select:*, reg select1:V, reg __6:cls, reg r109:V, reg __7:cls, reg r110:V, reg r111:V, reg p15:p(V +), reg r113:V, reg l2:*, reg c22:L, reg i72:I, reg i73:I, reg r115:V, reg l4:*, reg dr32:V, reg dc16:L, reg dx58:V, reg i76:I, reg i77:I, reg dx59:V, reg i78:*, reg i79:V, reg ___:cls, reg r118:V, reg res_i:*, reg res_i1:V, reg l5:*, reg c23:L, reg i81:I, reg res_i3:V, reg l7:*, reg dr34:V, reg dc17:L, reg dx60:V, reg i83:I, reg res_i5:V, reg dx61:V, reg j4:*, reg j5:V, reg ____:cls, reg r119:V, reg i84:I, reg res:*, reg res1:V |
    mkenv;
    st object = object;
    st contrast = contrast;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r1):
    st `e.qr` = r1;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L27():
    object1 = ld object;
    check L29() else D0();
  L28():
    r = dyn base(<sym object>, "error.qr");
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L35() else L2();
  L29():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r2 = dyn attr(object2, "error.qr");
    check L30() else D1();
  L31():
    e_qr = ld `e.qr`;
    check L33() else D2();
  L32():
    r3 = dyn base1(<sym e.qr>, "qr");
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 10 [e_qr];
  L2():
    goto L3();
  L3():
    qr_qty = ldf `qr.qty`;
    check L39() else D6();
  L30():
    goto L0(r2);
  L33():
    e_qr1 = force? e_qr;
    checkMissing(e_qr1);
    inherits = ldf inherits in base;
    r5 = dyn inherits(e_qr1, "qr", FALSE);
    check L34() else D3();
  L35():
    stop = ldf stop;
    check L36() else D4();
  D3():
    deopt 15 [r5];
  D4():
    deopt 18 [];
  D6():
    deopt 24 [];
  L34():
    goto L1(r5);
  L36():
    r7 = dyn stop("'object' does not include an error 'qr' component");
    check L37() else D5();
  L39():
    p = prom<V +>{
      e_qr2 = ld `e.qr`;
      e_qr3 = force? e_qr2;
      checkMissing(e_qr3);
      return e_qr3;
    };
    p1 = prom<V +>{
      contrast1 = ld contrast;
      contrast2 = force? contrast1;
      checkMissing(contrast2);
      return contrast2;
    };
    r11 = dyn qr_qty(p, p1);
    check L40() else D7();
  D5():
    deopt 20 [r7];
  D7():
    deopt 27 [r11];
  L37():
    goto L3();
  L40():
    st `c.qr` = r11;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L4(r13):
    st `e.assign` = r13;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L41():
    e_qr4 = ld `e.qr`;
    check L43() else D8();
  L42():
    r12 = dyn base2(<lang `$`(e.qr, qr)>, "assign");
    goto L4(r12);
  D8():
    deopt 31 [e_qr4];
  L5(r17):
    st `n.object` = r17;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L43():
    e_qr5 = force? e_qr4;
    checkMissing(e_qr5);
    c1 = `is.object`(e_qr5);
    if c1 then L45() else L46(e_qr5);
  L49():
    object3 = ld object;
    check L51() else D10();
  L50():
    r16 = dyn base3(<sym object>);
    goto L5(r16);
  D10():
    deopt 40 [object3];
  L6(r20):
    st `e.assign` = r20;
    setNames = ldf setNames;
    check L67() else D20();
  L44(dx1):
    attr1 = ldf attr in base;
    r15 = dyn attr1(dx1, "assign");
    check L48() else D9();
  L45():
    dr = tryDispatchBuiltin.1("$", e_qr5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(e_qr7):
    r14 = `$`(e_qr7, <sym qr>);
    goto L44(r14);
  L51():
    object4 = force? object3;
    checkMissing(object4);
    length = ldf length in base;
    r18 = dyn length(object4);
    check L52() else D11();
  L53():
    e_assign = ld `e.assign`;
    check L55() else D12();
  L54():
    r19 = dyn base4(<sym e.assign>, <lang rep.int(`-`(n.object, 1), `-`(nrow(c.qr), length(e.assign)))>);
    goto L6(r19);
  D9():
    deopt 36 [r15];
  D11():
    deopt 43 [r18];
  D12():
    deopt 47 [e_assign];
  D20():
    deopt 71 [];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L44(dx);
  L48():
    goto L4(r15);
  L52():
    goto L5(r18);
  L55():
    e_assign1 = force? e_assign;
    checkMissing(e_assign1);
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L67():
    p3 = prom<V +>{
      sym7 = ldf vector;
      base7 = ldf vector in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      n_object2 = ld `n.object`;
      n_object3 = force? n_object2;
      checkMissing(n_object3);
      vector = ldf vector in base;
      r37 = dyn vector("list", n_object3);
      goto L0(r37);
    L2():
      r35 = dyn base7("list", <sym n.object>);
      goto L0(r35);
    };
    p4 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      names = ldf names in base;
      r41 = dyn names(object6);
      goto L0(r41);
    L2():
      r39 = dyn base8(<sym object>);
      goto L0(r39);
    };
    r43 = dyn setNames(p3, p4);
    check L68() else D21();
  D21():
    deopt 74 [r43];
  L7(r22):
    c2 = ldf c in base;
    r34 = dyn c2(e_assign1, r22);
    check L66() else D19();
  L56():
    n_object = ld `n.object`;
    check L58() else D13();
  L57():
    r21 = dyn base5(<lang `-`(n.object, 1)>, <lang `-`(nrow(c.qr), length(e.assign))>);
    goto L7(r21);
  L68():
    st res = r43;
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L69() else L70();
  D13():
    deopt 51 [n_object];
  D19():
    deopt 68 [r34];
  L9(r45):
    s = toForSeq(r45);
    l = length(s);
    i = 0;
    goto L11(i);
  L58():
    n_object1 = force? n_object;
    checkMissing(n_object1);
    r23 = `-`(n_object1, 1);
    nrow = ldf nrow;
    check L59() else D14();
  L66():
    goto L6(r34);
  L69():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L71() else L72();
  L70():
    r44 = dyn base9(<lang names(object)>);
    goto L9(r44);
  D14():
    deopt 56 [];
  L10(r47):
    r49 = seq_along(r47);
    goto L9(r49);
  L11(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L75() else L26();
  L59():
    p2 = prom<V +>{
      c_qr = ld `c.qr`;
      c_qr1 = force? c_qr;
      checkMissing(c_qr1);
      return c_qr1;
    };
    r25 = dyn nrow(p2);
    check L60() else D15();
  L71():
    object7 = ld object;
    check L73() else D22();
  L72():
    r46 = dyn base10(<sym object>);
    goto L10(r46);
  D15():
    deopt 58 [r25];
  D22():
    deopt 79 [object7];
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    object9 = ld object;
    check L76() else D24();
  L60():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L73():
    object8 = force? object7;
    checkMissing(object8);
    names1 = ldf names in base;
    r48 = dyn names1(object8);
    check L74() else D23();
  L75():
    res = ld res;
    check L154() else D52();
  D23():
    deopt 82 [r48];
  D24():
    deopt 84 [i2, object9];
  D52():
    deopt 194 [res];
  L8(r29, r30):
    r32 = `-`(r29, r30);
    rep_int = ldf `rep.int` in base;
    r33 = dyn rep_int(r23, r32);
    check L65() else D18();
  L61():
    e_assign2 = ld `e.assign`;
    check L63() else D16();
  L62():
    r28 = dyn base6(<sym e.assign>);
    goto L8(r25, r28);
  L74():
    goto L10(r48);
  L76():
    object10 = force? object9;
    checkMissing(object10);
    c4 = `is.object`(object10);
    if c4 then L77() else L78(i2, object10);
  L154():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D16():
    deopt 60 [r25, e_assign2];
  D18():
    deopt 66 [r33];
  L12(i8, dx3):
    st strata = dx3;
    is_qr = ldf `is.qr`;
    check L81() else D26();
  L63():
    e_assign3 = force? e_assign2;
    checkMissing(e_assign3);
    length1 = ldf length in base;
    r31 = dyn length1(e_assign3);
    check L64() else D17();
  L65():
    goto L7(r33);
  L77():
    dr2 = tryDispatchBuiltin.1("[[", object10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(i2, dr2);
  L78(i6, object12):
    j = ld j;
    check L80() else D25();
  D17():
    deopt 63 [r25, r31];
  D25():
    deopt 86 [i6, object12, j];
  D26():
    deopt 91 [i8];
  L64():
    goto L8(r25, r31);
  L79():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(i2, dx2);
  L80():
    j1 = force? j;
    __ = ldf `[[` in base;
    r50 = dyn __(object12, j1);
    goto L12(i6, r50);
  L81():
    p5 = prom<V +>{
      strata = ld strata;
      strata1 = force? strata;
      checkMissing(strata1);
      c5 = `is.object`(strata1);
      if c5 then L1() else L2(strata1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", strata1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(strata3):
      r51 = `$`(strata3, <sym qr>);
      goto L0(r51);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r53 = dyn is_qr(p5);
    check L82() else D27();
  D27():
    deopt 93 [i8, r53];
  L82():
    c6 = `as.logical`(r53);
    if c6 then L83() else L13();
  L13():
    goto L25(i8);
  L25(i84):
    goto L11(i84);
  L83():
    c_qr2 = ld `c.qr`;
    check L84() else D28();
  D28():
    deopt 94 [i8, c_qr2];
  L84():
    c_qr3 = force? c_qr2;
    checkMissing(c_qr3);
    c7 = `is.object`(c_qr3);
    if c7 then L85() else L86(i8, c_qr3);
  L14(i14, dx7):
    st scontrast = dx7;
    as_matrix = ldf `as.matrix`;
    check L90() else D31();
  L85():
    dr6 = tryDispatchBuiltin.1("[", c_qr3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(i8, dr6);
  L86(i12, c_qr5):
    e_assign4 = ld `e.assign`;
    check L88() else D29();
  D29():
    deopt 96 [i12, c_qr5, e_assign4];
  D31():
    deopt 109 [i14];
  L87():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(i8, dx6);
  L88():
    e_assign5 = force? e_assign4;
    checkMissing(e_assign5);
    j2 = ld j;
    check L89() else D30();
  L90():
    p8 = prom<V +>{
      qr_qty1 = ldf `qr.qty`;
      p6 = prom<V +>{
        strata4 = ld strata;
        strata5 = force? strata4;
        checkMissing(strata5);
        c8 = `is.object`(strata5);
        if c8 then L1() else L2(strata5);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", strata5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(strata7):
        r57 = `$`(strata7, <sym qr>);
        goto L0(r57);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      p7 = prom<V +>{
        scontrast = ld scontrast;
        scontrast1 = force? scontrast;
        checkMissing(scontrast1);
        return scontrast1;
      };
      r60 = dyn qr_qty1(p6, p7);
      return r60;
    };
    r62 = dyn as_matrix(p8);
    check L91() else D32();
  D30():
    deopt 97 [i12, c_qr5, e_assign5, j2];
  D32():
    deopt 111 [i14, r62];
  L89():
    j3 = force? j2;
    checkMissing(j3);
    r54 = `-`(j3, 1);
    r55 = `==`(e_assign5, r54);
    __1 = ldf `[` in base;
    r56 = dyn __1(c_qr3, r55, <missing>, FALSE);
    goto L14(i12, r56);
  L91():
    st effects = r62;
    strata8 = ld strata;
    check L92() else D33();
  D33():
    deopt 113 [i14, strata8];
  L92():
    strata9 = force? strata8;
    checkMissing(strata9);
    c9 = `is.object`(strata9);
    if c9 then L94() else L95(i14, strata9);
  L93(i18, dx11):
    c10 = `is.object`(dx11);
    if c10 then L97() else L98(i18, dx11);
  L94():
    dr10 = tryDispatchBuiltin.1("$", strata9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L96() else L95(i14, dr10);
  L95(i16, strata11):
    r63 = `$`(strata11, <sym assign>);
    goto L93(i16, r63);
  L15(i22, dx15):
    st asgn = dx15;
    unique = ldf unique;
    check L117() else D36();
  L96():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L93(i14, dx10);
  L97():
    dr12 = tryDispatchBuiltin.1("[", dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L99() else L98(i18, dr12);
  L98(i20, dx13):
    strata12 = ld strata;
    check L100() else D34();
  D34():
    deopt 116 [i20, dx13, strata12];
  D36():
    deopt 129 [i22];
  L99():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L15(i18, dx14);
  L100():
    strata13 = force? strata12;
    checkMissing(strata13);
    c11 = `is.object`(strata13);
    if c11 then L102() else L103(i20, dx13, strata13);
  L117():
    p9 = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      return asgn1;
    };
    r75 = dyn unique(p9);
    check L118() else D37();
  D37():
    deopt 131 [i22, r75];
  L101(i26, dx20, dx21):
    c12 = `is.object`(dx21);
    if c12 then L106() else L107(i26, dx20, dx21);
  L102():
    dr14 = tryDispatchBuiltin.1("$", strata13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L104() else L103(i20, dx13, dr14);
  L103(i24, dx17, strata15):
    r64 = `$`(strata15, <sym qr>);
    goto L101(i24, dx17, r64);
  L118():
    st uasgn = r75;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L119() else L120();
  L17(i41, r77):
    st nm = r77;
    matrix = ldf matrix;
    check L130() else D41();
  L104():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L101(i20, dx13, dx19);
  L105(i30, dx28, dx29):
    c13 = `is.object`(dx29);
    if c13 then L109() else L110(i30, dx28, dx29);
  L106():
    dr16 = tryDispatchBuiltin.1("$", dx21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L108() else L107(i26, dx20, dr16);
  L107(i28, dx24, dx25):
    r65 = `$`(dx25, <sym pivot>);
    goto L105(i28, dx24, r65);
  L119():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L121() else L122();
  L120():
    r76 = dyn base11("(Intercept)", <lang attr(`$`(strata, terms), "term.labels")>);
    goto L17(i22, r76);
  D41():
    deopt 148 [i41];
  L16(i34, dx36, dx37):
    __3 = ldf `[` in base;
    r73 = dyn __3(dx36, dx37);
    goto L15(i34, r73);
  L18(i44, r79):
    c16 = ldf c in base;
    r82 = dyn c16("(Intercept)", r79);
    check L129() else D40();
  L108():
    dx27 = getTryDispatchBuiltinValue(dr16);
    goto L105(i26, dx20, dx27);
  L109():
    dr18 = tryDispatchBuiltin.1("[", dx29);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L111() else L110(i30, dx28, dr18);
  L110(i32, dx32, dx33):
    strata16 = ld strata;
    check L112() else D35();
  L121():
    strata20 = ld strata;
    check L123() else D38();
  L122():
    r78 = dyn base12(<lang `$`(strata, terms)>, "term.labels");
    goto L18(i22, r78);
  L130():
    p10 = prom<V +>{
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r84):
      return r84;
    L1():
      uasgn = ld uasgn;
      uasgn1 = force? uasgn;
      checkMissing(uasgn1);
      length2 = ldf length in base;
      r85 = dyn length2(uasgn1);
      goto L0(r85);
    L2():
      r83 = dyn base13(<sym uasgn>);
      goto L0(r83);
    };
    p12 = prom<V +>{
      ncol = ldf ncol;
      p11 = prom<V +>{
        effects = ld effects;
        effects1 = force? effects;
        checkMissing(effects1);
        return effects1;
      };
      r88 = dyn ncol(p11);
      return r88;
    };
    p14 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r91):
      return r91;
    L2():
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      c17 = `is.object`(nm1);
      if c17 then L4() else L5(nm1);
    L3():
      r90 = dyn base14(<lang `[`(nm, `+`(1, uasgn))>, <lang colnames(contrast)>);
      goto L0(r90);
    L1(dx51):
      colnames = ldf colnames;
      p13 = prom<V +>{
        contrast3 = ld contrast;
        contrast4 = force? contrast3;
        checkMissing(contrast4);
        return contrast4;
      };
      r95 = dyn colnames(p13);
      list = ldf list in base;
      r96 = dyn list(dx51, r95);
      goto L0(r96);
    L4():
      dr24 = tryDispatchBuiltin.1("[", nm1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L6() else L5(dr24);
    L5(nm3):
      uasgn2 = ld uasgn;
      uasgn3 = force? uasgn2;
      checkMissing(uasgn3);
      r92 = `+`(1, uasgn3);
      __4 = ldf `[` in base;
      r93 = dyn __4(nm3, r92);
      goto L1(r93);
    L6():
      dx50 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx50);
    };
    r98 = dyn matrix[, , , dimnames](0.0, p10, p12, p14);
    check L131() else D42();
  D35():
    deopt 121 [i32, dx32, dx33, 1, strata16];
  D38():
    deopt 138 [i22, strata20];
  D40():
    deopt 145 [i44, r82];
  D42():
    deopt 154 [i41, r98];
  L111():
    dx35 = getTryDispatchBuiltinValue(dr18);
    goto L16(i30, dx28, dx35);
  L112():
    strata17 = force? strata16;
    checkMissing(strata17);
    c14 = `is.object`(strata17);
    if c14 then L114() else L115(i32, dx32, dx33, 1, strata17);
  L123():
    strata21 = force? strata20;
    checkMissing(strata21);
    c15 = `is.object`(strata21);
    if c15 then L125() else L126(i22, strata21);
  L129():
    goto L17(i44, r82);
  L131():
    st `res.i` = r98;
    sym15 = ldf seq_along;
    base15 = ldf seq_along in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L132() else L133();
  L19(i51, r100):
    s1 = toForSeq(r100);
    l1 = length(s1);
    i52 = 0;
    goto L20(i51, i52);
  L113(i38, dx45, dx46, r69, dx47):
    r71 = `:`(r69, dx47);
    __2 = ldf `[` in base;
    r72 = dyn __2(dx46, r71);
    goto L16(i38, dx45, r72);
  L114():
    dr20 = tryDispatchBuiltin.1("$", strata17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L116() else L115(i32, dx32, dx33, 1, dr20);
  L115(i36, dx40, dx41, r67, strata19):
    r70 = `$`(strata19, <sym rank>);
    goto L113(i36, dx40, dx41, r67, r70);
  L124(i48, dx49):
    attr2 = ldf attr in base;
    r81 = dyn attr2(dx49, "term.labels");
    check L128() else D39();
  L125():
    dr22 = tryDispatchBuiltin.1("$", strata21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L127() else L126(i22, dr22);
  L126(i46, strata23):
    r80 = `$`(strata23, <sym terms>);
    goto L124(i46, r80);
  L132():
    uasgn4 = ld uasgn;
    check L134() else D43();
  L133():
    r99 = dyn base15(<sym uasgn>);
    goto L19(i41, r99);
  D39():
    deopt 143 [i48, r81];
  D43():
    deopt 157 [i41, uasgn4];
  L20(i53, i54):
    i55 = `+`.1(i54, 1);
    c18 = `<`.1(l1, i55);
    if c18 then L135() else L23();
  L116():
    dx44 = getTryDispatchBuiltinValue(dr20);
    goto L113(i32, dx32, dx33, 1, dx44);
  L127():
    dx48 = getTryDispatchBuiltinValue(dr22);
    goto L124(i22, dx48);
  L128():
    goto L18(i48, r81);
  L134():
    uasgn5 = force? uasgn4;
    checkMissing(uasgn5);
    r101 = seq_along(uasgn5);
    goto L19(i41, r101);
  L23():
    x1 = `[[`(s1, i55, NULL, TRUE);
    st i = x1;
    asgn2 = ld asgn;
    check L136() else D44();
  L135():
    res_i = ld `res.i`;
    check L148() else D50();
  D44():
    deopt 160 [i53, i55, asgn2];
  D50():
    deopt 182 [i53, res_i];
  L136():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    uasgn6 = ld uasgn;
    check L137() else D45();
  L148():
    res_i1 = force? res_i;
    checkMissing(res_i1);
    l5 = ld res;
    c23 = `is.object`(l5);
    if c23 then L149() else L150(i53, res_i1, l5);
  D45():
    deopt 161 [i53, i55, asgn3, uasgn6];
  L24(i83, res_i5, dx61):
    st res = dx61;
    goto L25(i83);
  L137():
    uasgn7 = force? uasgn6;
    checkMissing(uasgn7);
    c19 = `is.object`(uasgn7);
    if c19 then L138() else L139(i53, i55, asgn3, uasgn7);
  L149():
    dr34 = tryDispatchBuiltin.0("[[<-", l5, res_i1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L151() else L150(i53, res_i1, dr34);
  L150(i81, res_i3, l7):
    j4 = ld j;
    check L152() else D51();
  D51():
    deopt 185 [i81, res_i3, l7, res_i1, j4];
  L21(i66, i67, asgn7, dx53):
    r103 = `==`(asgn7, dx53);
    st select = r103;
    colSums = ldf colSums;
    check L142() else D47();
  L138():
    dr26 = tryDispatchBuiltin.1("[", uasgn7);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L140() else L139(i53, i55, asgn3, dr26);
  L139(i62, i63, asgn5, uasgn9):
    i68 = ld i;
    check L141() else D46();
  L151():
    dx60 = getTryDispatchBuiltinValue(dr34);
    goto L24(i53, res_i1, dx60);
  L152():
    j5 = force? j4;
    ____ = ldf `[[<-` in base;
    r119 = dyn ____(l7, res_i1, j5);
    goto L24(i81, res_i3, r119);
  D46():
    deopt 163 [i62, i63, asgn5, uasgn9, i68];
  D47():
    deopt 169 [i66, i67];
  L140():
    dx52 = getTryDispatchBuiltinValue(dr26);
    goto L21(i53, i55, asgn3, dx52);
  L141():
    i69 = force? i68;
    __5 = ldf `[` in base;
    r102 = dyn __5(uasgn9, i69);
    goto L21(i62, i63, asgn5, r102);
  L142():
    p15 = prom<V +>{
      effects2 = ld effects;
      effects3 = force? effects2;
      checkMissing(effects3);
      c20 = `is.object`(effects3);
      if c20 then L3() else L4(effects3);
    L0(dx55):
      r111 = `^`(dx55, 2.0);
      return r111;
    L3():
      dr28 = tryDispatchBuiltin.1("[", effects3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L5() else L4(dr28);
    L4(effects5):
      sym16 = ldf seq_along;
      base16 = ldf seq_along in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L6() else L7();
    L1(effects8, r105):
      c21 = `is.object`(r105);
      if c21 then L8() else L9(effects8, r105);
    L5():
      dx54 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx54);
    L6():
      asgn8 = ld asgn;
      asgn9 = force? asgn8;
      checkMissing(asgn9);
      r106 = seq_along(asgn9);
      goto L1(effects5, r106);
    L7():
      r104 = dyn base16(<sym asgn>);
      goto L1(effects5, r104);
    L2(dx57):
      __7 = ldf `[` in base;
      r110 = dyn __7(effects3, dx57, <missing>, FALSE);
      goto L0(r110);
    L8():
      dr30 = tryDispatchBuiltin.1("[", r105);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L10() else L9(effects8, dr30);
    L9(effects10, r108):
      select = ld select;
      select1 = force? select;
      __6 = ldf `[` in base;
      r109 = dyn __6(r108, select1);
      goto L2(r109);
    L10():
      dx56 = getTryDispatchBuiltinValue(dr30);
      goto L2(dx56);
    };
    r113 = dyn colSums(p15);
    check L143() else D48();
  D48():
    deopt 171 [i66, i67, r113];
  L143():
    l2 = ld `res.i`;
    c22 = `is.object`(l2);
    if c22 then L144() else L145(i66, i67, r113, l2);
  L22(i76, i77, dx59):
    st `res.i` = dx59;
    goto L20(i76, i77);
  L144():
    dr32 = tryDispatchBuiltin.0("[<-", l2, r113);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L146() else L145(i66, i67, r113, dr32);
  L145(i72, i73, r115, l4):
    i78 = ld i;
    check L147() else D49();
  D49():
    deopt 173 [i72, i73, r115, l4, r113, i78];
  L146():
    dx58 = getTryDispatchBuiltinValue(dr32);
    goto L22(i66, i67, dx58);
  L147():
    i79 = force? i78;
    ___ = ldf `[<-` in base;
    r118 = dyn ___(l2, i79, <missing>, r113);
    goto L22(i72, i73, r118);
  }
}
fun inner2337389509(`aov.object`) {
  (reg aov_object:*) -+> V { var `aov.object`:*, reg aov_object1:*, reg aov_object2:V, reg c:L, reg aov_object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rdf:*, reg rdf1:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg aov_object5:*, reg aov_object6:V, reg c3:L, reg aov_object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg length:cls, reg r6:V, reg aov_object9:*, reg aov_object10:V, reg c4:L, reg aov_object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r7:V, reg nobs:*, reg nobs1:V, reg rank:*, reg rank1:V, reg r8:V, reg rdf2:*, reg rdf3:V, reg r10:V, reg c5:L, reg as_matrix:cls, reg aov_object13:*, reg aov_object14:V, reg c6:L, reg aov_object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p:p(V +), reg r15:V, reg aov_object17:*, reg aov_object18:V, reg c7:L, reg aov_object20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg wt:*, reg wt1:V, reg c8:V, reg r19:V, reg c9:L, reg resid:*, reg resid1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg resid4:V, reg r21:V, reg wt2:*, reg wt3:V, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg resid5:*, reg resid6:V, reg r27:V, reg sum:cls, reg r28:V, reg rdf4:*, reg rdf5:V, reg r29:V |
    mkenv;
    st `aov.object` = aov_object;
    aov_object1 = ld `aov.object`;
    check L11() else D0();
  D0():
    deopt 0 [aov_object1];
  L11():
    aov_object2 = force? aov_object1;
    checkMissing(aov_object2);
    c = `is.object`(aov_object2);
    if c then L13() else L14(aov_object2);
  L12(dx1):
    st rdf = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L13():
    dr = tryDispatchBuiltin.1("$", aov_object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(aov_object4):
    r = `$`(aov_object4, <sym df.residual>);
    goto L12(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L19() else L1();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L16():
    rdf = ld rdf;
    check L18() else D1();
  L17():
    r1 = dyn base(<sym rdf>);
    goto L0(r1);
  D1():
    deopt 5 [rdf];
  L1():
    goto L3();
  L3():
    rdf2 = ld rdf;
    check L36() else D7();
  L18():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    c1 = `==`(rdf1, NULL);
    goto L0(c1);
  L19():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D7():
    deopt 27 [rdf2];
  L2(r4):
    st nobs = r4;
    aov_object9 = ld `aov.object`;
    check L28() else D4();
  L20():
    aov_object5 = ld `aov.object`;
    check L22() else D2();
  L21():
    r3 = dyn base1(<lang `$`(aov.object, residuals)>);
    goto L2(r3);
  L36():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    r10 = `==`(rdf3, 0);
    c5 = `as.logical`(r10);
    if c5 then L37() else L4();
  D2():
    deopt 10 [aov_object5];
  D4():
    deopt 16 [aov_object9];
  L4():
    as_matrix = ldf `as.matrix`;
    check L40() else D8();
  L22():
    aov_object6 = force? aov_object5;
    checkMissing(aov_object6);
    c3 = `is.object`(aov_object6);
    if c3 then L24() else L25(aov_object6);
  L28():
    aov_object10 = force? aov_object9;
    checkMissing(aov_object10);
    c4 = `is.object`(aov_object10);
    if c4 then L30() else L31(aov_object10);
  L37():
    popenv;
    return NA_LGL;
  D8():
    deopt 37 [];
  L23(dx3):
    length = ldf length in base;
    r6 = dyn length(dx3);
    check L27() else D3();
  L24():
    dr2 = tryDispatchBuiltin.1("$", aov_object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(aov_object8):
    r5 = `$`(aov_object8, <sym residuals>);
    goto L23(r5);
  L29(dx5):
    st rank = dx5;
    nobs = ld nobs;
    check L33() else D5();
  L30():
    dr4 = tryDispatchBuiltin.1("$", aov_object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(aov_object12):
    r7 = `$`(aov_object12, <sym rank>);
    goto L29(r7);
  L40():
    p = prom<V +>{
      aov_object13 = ld `aov.object`;
      aov_object14 = force? aov_object13;
      checkMissing(aov_object14);
      c6 = `is.object`(aov_object14);
      if c6 then L1() else L2(aov_object14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", aov_object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(aov_object16):
      r13 = `$`(aov_object16, <sym residuals>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r15 = dyn as_matrix(p);
    check L41() else D9();
  D3():
    deopt 14 [r6];
  D5():
    deopt 20 [nobs];
  D9():
    deopt 39 [r15];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    goto L2(r6);
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(dx4);
  L33():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    rank = ld rank;
    check L34() else D6();
  L41():
    st resid = r15;
    aov_object17 = ld `aov.object`;
    check L42() else D10();
  D6():
    deopt 21 [nobs1, rank];
  D10():
    deopt 41 [aov_object17];
  L34():
    rank1 = force? rank;
    checkMissing(rank1);
    r8 = `-`(nobs1, rank1);
    st rdf = r8;
    goto L3();
  L42():
    aov_object18 = force? aov_object17;
    checkMissing(aov_object18);
    c7 = `is.object`(aov_object18);
    if c7 then L44() else L45(aov_object18);
  L43(dx9):
    st wt = dx9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L44():
    dr8 = tryDispatchBuiltin.1("$", aov_object18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(dr8);
  L45(aov_object20):
    r16 = `$`(aov_object20, <sym weights>);
    goto L43(r16);
  L6(r18):
    r19 = `!`(r18);
    c9 = `as.logical`(r19);
    if c9 then L50() else L7();
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx8);
  L47():
    wt = ld wt;
    check L49() else D11();
  L48():
    r17 = dyn base2(<sym wt>);
    goto L6(r17);
  D11():
    deopt 46 [wt];
  L7():
    goto L9();
  L9():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L49():
    wt1 = force? wt;
    checkMissing(wt1);
    c8 = `==`(wt1, NULL);
    goto L6(c8);
  L50():
    resid = ld resid;
    check L51() else D12();
  D12():
    deopt 50 [resid];
  L10(r26):
    rdf4 = ld rdf;
    check L60() else D16();
  L51():
    resid1 = force? resid;
    checkMissing(resid1);
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L56():
    resid5 = ld resid;
    check L58() else D14();
  L57():
    r25 = dyn base4(<lang `^`(resid, 2.0)>);
    goto L10(r25);
  D14():
    deopt 61 [resid5];
  D16():
    deopt 66 [r26, rdf4];
  L8(resid4, r21):
    r23 = `*`(resid4, r21);
    st resid = r23;
    goto L9();
  L52():
    wt2 = ld wt;
    check L54() else D13();
  L53():
    r20 = dyn base3(<sym wt>);
    goto L8(resid1, r20);
  L58():
    resid6 = force? resid5;
    checkMissing(resid6);
    r27 = `^`(resid6, 2.0);
    sum = ldf sum in base;
    r28 = dyn sum(r27);
    check L59() else D15();
  L60():
    rdf5 = force? rdf4;
    checkMissing(rdf5);
    r29 = `/`(r26, rdf5);
    popenv;
    return r29;
  D13():
    deopt 52 [resid1, wt2];
  D15():
    deopt 66 [r28];
  L54():
    wt3 = force? wt2;
    checkMissing(wt3);
    r22 = sqrt(wt3);
    goto L8(resid1, r22);
  L59():
    goto L10(r28);
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
        r5 = dyn substitute(<sym contrasts.obj>);
        goto L0(r5);
      L2():
        r3 = dyn base1(<sym contrasts.obj>);
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
fun inner2896059106(x, ind) {
  (reg x:*, reg ind:*) -+> V { var x:*, var ind:*, reg ind_isMissing:L, reg ind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg p:p(V +), reg x3:*, reg x4:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg temp:*, reg temp1:V, reg sum:cls, reg r7:V, reg r8:V, reg c:L, reg temp2:*, reg temp3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ind1:*, reg ind2:V, reg c1:L, reg ind4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg temp4:*, reg temp5:V, reg __:cls, reg r11:V, reg max:cls, reg r12:V, reg ind5:*, reg ind6:V, reg r13:V |
    mkenv;
    st x = x;
    ind_isMissing = missing.0(ind);
    if ind_isMissing then L0() else L1(ind);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r2 = seq_along(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(ind_orDefault):
    st ind = ind_orDefault;
    x3 = ld x;
    check L6() else D0();
  D0():
    deopt 0 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    r4 = `>`(x4, 0.0);
    st temp = r4;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r6):
    r8 = `==`(r6, 1.0);
    c = `as.logical`(r8);
    if c then L11() else L3();
  L7():
    temp = ld temp;
    check L9() else D1();
  L8():
    r5 = dyn base1(<sym temp>);
    goto L2(r5);
  D1():
    deopt 7 [temp];
  L3():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L9():
    temp1 = force? temp;
    checkMissing(temp1);
    sum = ldf sum in base;
    r7 = dyn sum(temp1);
    check L10() else D2();
  L11():
    temp2 = ld temp;
    check L12() else D3();
  D2():
    deopt 10 [r7];
  D3():
    deopt 13 [temp2];
  L4(r10):
    ind5 = ld ind;
    check L22() else D7();
  L10():
    goto L2(r7);
  L12():
    temp3 = force? temp2;
    checkMissing(temp3);
    popenv;
    return temp3;
  L14():
    ind1 = ld ind;
    check L16() else D4();
  L15():
    r9 = dyn base2(<lang `[`(ind, temp)>);
    goto L4(r9);
  D4():
    deopt 17 [ind1];
  D7():
    deopt 23 [r10, ind5];
  L16():
    ind2 = force? ind1;
    checkMissing(ind2);
    c1 = `is.object`(ind2);
    if c1 then L17() else L18(ind2);
  L22():
    ind6 = force? ind5;
    checkMissing(ind6);
    r13 = `==`(r10, ind6);
    popenv;
    return r13;
  L5(dx1):
    max = ldf max in base;
    r12 = dyn max(dx1);
    check L21() else D6();
  L17():
    dr = tryDispatchBuiltin.1("[", ind2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(ind4):
    temp4 = ld temp;
    check L20() else D5();
  D5():
    deopt 19 [ind4, temp4];
  D6():
    deopt 23 [r12];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L20():
    temp5 = force? temp4;
    __ = ldf `[` in base;
    r11 = dyn __(ind4, temp5);
    goto L5(r11);
  L21():
    goto L4(r12);
  }
}