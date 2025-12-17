fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner193889137;
    st `all.equal.numeric` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner193889137(target, current, tolerance, scale, countEQ, formatFUN, `...`, `check.attributes`, `check.class`, giveErr) {
  (reg target:*, reg current:*, reg tolerance:*, reg scale:*, reg countEQ:*, reg formatFUN:*, reg ddd:dots, reg check_attributes:*, reg check_class:*, reg giveErr:*) -+> V { var target:*, var current:*, var tolerance:*, reg tolerance_isMissing:L, reg tolerance_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg p:p(V +), var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var countEQ:*, reg countEQ_isMissing:L, reg countEQ_orDefault:*, var formatFUN:*, reg formatFUN_isMissing:L, reg formatFUN_orDefault:*, reg r5:cls, reg p1:p(V +), var `...`:dots?, var `check.attributes`:*, reg check_attributes_isMissing:L, reg check_attributes_orDefault:*, var `check.class`:*, reg check_class_isMissing:L, reg check_class_orDefault:*, var giveErr:*, reg giveErr_isMissing:L, reg giveErr_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg tolerance1:*, reg tolerance2:V, reg is_numeric:cls, reg r9:V, reg r10:V, reg c1:L, reg stop:cls, reg r11:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg tolerance3:*, reg tolerance4:V, reg length:cls, reg r15:V, reg r16:V, reg p2:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg scale1:*, reg scale2:V, reg is_numeric1:cls, reg r21:V, reg r22:V, reg c2:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg c7:L, reg r24:V, reg scale3:*, reg scale4:V, reg c8:V, reg r25:V, reg c9:L, reg c10:V, reg c12:L, reg stop1:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg check_attributes1:*, reg check_attributes2:V, reg c13:L, reg r30:V, reg c14:L, reg stop2:cls, reg gettextf:cls, reg r31:V, reg p3:p(V +), reg r33:V, reg check_attributes3:*, reg check_attributes4:V, reg c15:L, reg attr_all_equal:cls, reg target1:*, reg target2:V, reg p4:p(V +), reg current1:*, reg current2:V, reg p5:p(V +), reg tolerance5:*, reg tolerance6:V, reg p6:p(V +), reg scale5:*, reg scale6:V, reg p7:p(V +), reg ddd1:dots?, reg r39:V, reg r40:V, reg check_class1:*, reg check_class2:V, reg c16:L, reg c18:V, reg data_class:cls, reg target3:*, reg target4:V, reg p8:p(V +), reg r42:V, reg data_class1:cls, reg current3:*, reg current4:V, reg p9:p(V +), reg r44:V, reg r45:V, reg c19:L, reg c20:V, reg c22:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg msg:*, reg msg1:V, reg paste0:cls, reg data_class2:cls, reg target5:*, reg target6:V, reg p10:p(V +), reg r49:V, reg p11:p(V +), reg data_class3:cls, reg current5:*, reg current6:V, reg p12:p(V +), reg r52:V, reg p13:p(V +), reg r54:V, reg c23:cls, reg r55:V, reg msg2:*, reg msg3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg target7:*, reg target8:V, reg length1:cls, reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg current7:*, reg current8:V, reg length2:cls, reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg target9:*, reg target10:V, reg c24:L, reg lt:*, reg lt1:V, reg lc:*, reg lc1:V, reg r66:V, reg c25:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg msg4:*, reg msg5:V, reg c26:V, reg r69:V, reg c27:L, reg msg6:*, reg msg7:V, reg c28:L, reg msg9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grep:cls, reg msg10:*, reg msg11:V, reg p14:p(V +), reg r71:V, reg r72:V, reg __:cls, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg msg12:*, reg msg13:V, reg paste1:cls, reg cplx:*, reg cplx1:V, reg c29:L, reg p15:p(V +), reg lt2:*, reg lt3:V, reg p16:p(V +), reg lc2:*, reg lc3:V, reg p17:p(V +), reg r79:V, reg c30:cls, reg r80:V, reg msg14:*, reg msg15:V, reg as_vector:cls, reg target11:*, reg target12:V, reg p18:p(V +), reg r84:V, reg as_vector1:cls, reg current9:*, reg current10:V, reg p19:p(V +), reg r86:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg r88:V, reg target13:*, reg target14:V, reg is_na:cls, reg r89:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r90:V, reg r91:V, reg out:*, reg out1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r92:V, reg out4:V, reg r93:V, reg current11:*, reg current12:V, reg is_na1:cls, reg r94:V, reg r95:V, reg any:cls, reg r96:V, reg c31:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r97:V, reg r98:V, reg msg16:*, reg msg17:V, reg paste2:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r99:V, reg r100:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r101:V, reg r102:V, reg current13:*, reg current14:V, reg is_na2:cls, reg r103:V, reg sum:cls, reg r104:V, reg p20:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r106:V, reg r107:V, reg out5:*, reg out6:V, reg sum1:cls, reg r108:V, reg p21:p(V +), reg r110:V, reg c32:cls, reg r111:V, reg msg18:*, reg msg19:V, reg out7:*, reg out8:V, reg target15:*, reg target16:V, reg current15:*, reg current16:V, reg r114:V, reg r115:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r116:V, reg r117:V, reg out9:*, reg out10:V, reg all:cls, reg r118:V, reg c33:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r119:V, reg r120:V, reg msg20:*, reg msg21:V, reg c34:V, reg c35:L, reg r121:V, reg msg22:*, reg msg23:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r124:V, reg r125:V, reg out11:*, reg out12:V, reg any1:cls, reg r126:V, reg countEQ1:*, reg countEQ2:V, reg c36:L, reg c38:V, reg anyO:*, reg anyO1:V, reg c39:L, reg c40:V, reg c42:L, reg mean:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r127:V, reg r128:V, reg target17:*, reg target18:V, reg c43:L, reg target20:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg out13:*, reg out14:V, reg __1:cls, reg r129:V, reg abs:cls, reg r130:V, reg p22:p(V +), reg r132:V, reg r133:V, reg anyO2:*, reg anyO3:V, reg c44:L, reg which:cls, reg out15:*, reg out16:V, reg r134:V, reg p23:p(V +), reg r136:V, reg target21:*, reg target22:V, reg c45:L, reg target24:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg keep:*, reg keep1:V, reg __2:cls, reg r137:V, reg current17:*, reg current18:V, reg c46:L, reg current20:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg keep2:*, reg keep3:V, reg __3:cls, reg r138:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r139:V, reg r140:V, reg scale7:*, reg scale8:V, reg c47:V, reg r141:V, reg c48:L, reg c50:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r142:V, reg c53:L, reg r143:V, reg scale9:*, reg scale10:V, reg length3:cls, reg r144:V, reg r145:V, reg c54:L, reg c55:V, reg c57:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r146:V, reg r147:V, reg scale11:*, reg scale12:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r148:V, reg r149:V, reg out17:*, reg out18:V, reg length4:cls, reg r150:V, reg rep_len:cls, reg r151:V, reg c58:L, reg r153:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg keep4:*, reg keep5:V, reg __4:cls, reg r154:V, reg dx13:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r155:V, reg r156:V, reg target25:*, reg target26:V, reg length5:cls, reg r157:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r158:V, reg r159:V, reg target27:*, reg target28:V, reg c59:L, reg c60:L, reg c62:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r160:V, reg c65:L, reg r161:V, reg current21:*, reg current22:V, reg c66:L, reg c67:L, reg c68:V, reg c70:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r162:V, reg r163:V, reg target29:*, reg target30:V, reg as_double:cls, reg r164:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r166:V, reg r167:V, reg scale13:*, reg scale14:V, reg c71:V, reg c72:L, reg sabst0:*, reg sabst1:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r168:V, reg sabst4:V, reg r169:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r170:V, reg sabst7:V, reg r171:V, reg target31:*, reg target32:V, reg abs1:cls, reg r172:V, reg N:*, reg N1:V, reg r173:V, reg sum2:cls, reg r174:V, reg r175:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r176:V, reg r177:V, reg scale15:*, reg scale16:V, reg is_finite:cls, reg r178:V, reg c73:L, reg c75:V, reg scale17:*, reg scale18:V, reg tolerance7:*, reg tolerance8:V, reg r179:V, reg c76:L, reg c77:V, reg c79:L, reg r180:S, reg r181:S, reg stopifnot1:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r182:V, reg r183:V, reg scale19:*, reg scale20:V, reg r184:V, reg all1:cls, reg r185:V, reg p24:p(V +), reg r187:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r188:V, reg r189:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r190:V, reg r191:V, reg scale21:*, reg scale22:V, reg r192:V, reg abs2:cls, reg r193:V, reg r194:V, reg all2:cls, reg r195:V, reg c80:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r196:V, reg r197:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r198:V, reg r199:V, reg target33:*, reg target34:V, reg current23:*, reg current24:V, reg r200:V, reg abs3:cls, reg r201:V, reg N2:*, reg N3:V, reg scale23:*, reg scale24:V, reg r202:V, reg r203:V, reg sum3:cls, reg r204:V, reg cplx2:*, reg cplx3:V, reg c81:L, reg paste3:cls, reg what:*, reg what1:V, reg p25:p(V +), reg r206:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r208:V, reg r209:V, reg xy:*, reg xy1:V, reg is_na3:cls, reg r210:V, reg c82:L, reg c83:V, reg xy2:*, reg xy3:V, reg tolerance9:*, reg tolerance10:V, reg r211:V, reg c85:L, reg c86:V, reg c88:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r212:V, reg r213:V, reg msg24:*, reg msg25:V, reg paste4:cls, reg what2:*, reg what3:V, reg p26:p(V +), reg formatFUN1:cls, reg xy4:*, reg xy5:V, reg p27:p(V +), reg what4:*, reg what5:V, reg p28:p(V +), reg r217:V, reg p29:p(V +), reg r219:V, reg c89:cls, reg r220:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r222:V, reg r223:V, reg msg26:*, reg msg27:V, reg c90:V, reg c91:L, reg r224:V, reg msg28:*, reg msg29:V, reg giveErr1:*, reg giveErr2:V, reg c92:L, reg structure:cls, reg r225:*, reg r226:V, reg p30:p(V +), reg xy6:*, reg xy7:V, reg p31:p(V +), reg what6:*, reg what7:V, reg p32:p(V +), reg r230:V, reg r231:*, reg r232:V |
    mkenv;
    st target = target;
    st current = current;
    tolerance_isMissing = missing.0(tolerance);
    if tolerance_isMissing then L0() else L1(tolerance);
  L0():
    p = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L4() else L5(_Machine1);
    L2():
      r = dyn base(<lang `$`(.Machine, double.eps)>);
      goto L0(r);
    L3(dx1):
      r3 = sqrt(dx1);
      goto L0(r3);
    L4():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(_Machine3):
      r2 = `$`(_Machine3, <sym double.eps>);
      goto L3(r2);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L1(p);
  L1(tolerance_orDefault):
    st tolerance = tolerance_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L2(NULL) else L2(scale);
  L2(scale_orDefault):
    st scale = scale_orDefault;
    countEQ_isMissing = missing.0(countEQ);
    if countEQ_isMissing then L3(FALSE) else L3(countEQ);
  L3(countEQ_orDefault):
    st countEQ = countEQ_orDefault;
    formatFUN_isMissing = missing.0(formatFUN);
    if formatFUN_isMissing then L4() else L5(formatFUN);
  L4():
    p1 = prom<V +>{
      r5 = clos inner3974543257;
      return r5;
    };
    goto L5(p1);
  L5(formatFUN_orDefault):
    st formatFUN = formatFUN_orDefault;
    st `...` = ddd;
    check_attributes_isMissing = missing.0(check_attributes);
    if check_attributes_isMissing then L6(TRUE) else L6(check_attributes);
  L6(check_attributes_orDefault):
    st `check.attributes` = check_attributes_orDefault;
    check_class_isMissing = missing.0(check_class);
    if check_class_isMissing then L7(TRUE) else L7(check_class);
  L7(check_class_orDefault):
    st `check.class` = check_class_orDefault;
    giveErr_isMissing = missing.0(giveErr);
    if giveErr_isMissing then L8(FALSE) else L8(giveErr);
  L8(giveErr_orDefault):
    st giveErr = giveErr_orDefault;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L9(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L100() else L10();
  L96():
    tolerance1 = ld tolerance;
    check L98() else D0();
  L97():
    r7 = dyn base1(<sym tolerance>);
    goto L9(r7);
  D0():
    deopt 2 [tolerance1];
  L10():
    goto L11();
  L11():
    stopifnot = ldf stopifnot;
    check L104() else D4();
  L98():
    tolerance2 = force? tolerance1;
    checkMissing(tolerance2);
    is_numeric = ldf `is.numeric` in base;
    r9 = dyn is_numeric(tolerance2);
    check L99() else D1();
  L100():
    stop = ldf stop;
    check L101() else D2();
  D1():
    deopt 5 [r9];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L99():
    goto L9(r9);
  L101():
    r11 = dyn stop("'tolerance' should be numeric");
    check L102() else D3();
  L104():
    p2 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      r16 = `==`(r14, 1);
      return r16;
    L1():
      tolerance3 = ld tolerance;
      tolerance4 = force? tolerance3;
      checkMissing(tolerance4);
      length = ldf length in base;
      r15 = dyn length(tolerance4);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym tolerance>);
      goto L0(r13);
    };
    r18 = dyn stopifnot(p2);
    check L105() else D5();
  D3():
    deopt 10 [r11];
  D5():
    deopt 16 [r18];
  L102():
    goto L11();
  L105():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L106() else L107();
  L12(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L110() else L13(c2);
  L106():
    scale1 = ld scale;
    check L108() else D6();
  L107():
    r19 = dyn base3(<sym scale>);
    goto L12(r19);
  D6():
    deopt 19 [scale1];
  L13(c4):
    c12 = `as.logical`(c4);
    if c12 then L115() else L15();
  L108():
    scale2 = force? scale1;
    checkMissing(scale2);
    is_numeric1 = ldf `is.numeric` in base;
    r21 = dyn is_numeric1(scale2);
    check L109() else D7();
  L110():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L111() else L112();
  D7():
    deopt 22 [r21];
  L14(c7, r24):
    r25 = `!`(r24);
    c9 = `as.logical`(r25);
    c10 = `&&`(c7, c9);
    goto L13(c10);
  L15():
    goto L16();
  L16():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L119() else L120();
  L109():
    goto L12(r21);
  L111():
    scale3 = ld scale;
    check L113() else D8();
  L112():
    r23 = dyn base4(<sym scale>);
    goto L14(c2, r23);
  L115():
    stop1 = ldf stop;
    check L116() else D9();
  D8():
    deopt 25 [c2, scale3];
  D9():
    deopt 31 [];
  L17(r29):
    r30 = `!`(r29);
    c14 = `as.logical`(r30);
    if c14 then L122() else L18();
  L113():
    scale4 = force? scale3;
    checkMissing(scale4);
    c8 = `==`(scale4, NULL);
    goto L14(c2, c8);
  L116():
    r26 = dyn stop1("'scale' should be numeric or NULL");
    check L117() else D10();
  L119():
    check_attributes1 = ld `check.attributes`;
    check L121() else D11();
  L120():
    r28 = dyn base5(<sym check.attributes>);
    goto L17(r28);
  D10():
    deopt 33 [r26];
  D11():
    deopt 37 [check_attributes1];
  L18():
    goto L19();
  L19():
    check_attributes3 = ld `check.attributes`;
    check L126() else D14();
  L117():
    goto L16();
  L121():
    check_attributes2 = force? check_attributes1;
    checkMissing(check_attributes2);
    c13 = `is.logical`(check_attributes2);
    goto L17(c13);
  L122():
    stop2 = ldf stop;
    check L123() else D12();
  D12():
    deopt 42 [];
  D14():
    deopt 49 [check_attributes3];
  L123():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      r31 = dyn gettextf("'%s' must be logical", "check.attributes");
      return r31;
    };
    r33 = dyn stop2[, domain](p3, NA_LGL);
    check L124() else D13();
  L126():
    check_attributes4 = force? check_attributes3;
    checkMissing(check_attributes4);
    c15 = `as.logical`(check_attributes4);
    if c15 then L127() else L20();
  D13():
    deopt 46 [r33];
  L20():
    goto L21(NULL);
  L21(r40):
    st msg = r40;
    check_class1 = ld `check.class`;
    check L131() else D17();
  L124():
    goto L19();
  L127():
    attr_all_equal = ldf `attr.all.equal`;
    check L128() else D15();
  D15():
    deopt 52 [];
  D17():
    deopt 64 [check_class1];
  L128():
    p4 = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    p5 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    p6 = prom<V +>{
      tolerance5 = ld tolerance;
      tolerance6 = force? tolerance5;
      checkMissing(tolerance6);
      return tolerance6;
    };
    p7 = prom<V +>{
      scale5 = ld scale;
      scale6 = force? scale5;
      checkMissing(scale6);
      return scale6;
    };
    ddd1 = ld `...`;
    r39 = dyn attr_all_equal[, , tolerance, scale, `...`](p4, p5, p6, p7, ddd1);
    check L129() else D16();
  L131():
    check_class2 = force? check_class1;
    checkMissing(check_class2);
    c16 = `as.logical`(check_class2);
    if c16 then L132() else L22(c16);
  D16():
    deopt 60 [r39];
  L22(c18):
    c22 = `as.logical`(c18);
    if c22 then L138() else L23();
  L129():
    goto L21(r39);
  L132():
    data_class = ldf `data.class`;
    check L133() else D18();
  D18():
    deopt 67 [c16];
  L23():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L148() else L149();
  L133():
    p8 = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    r42 = dyn data_class(p8);
    check L134() else D19();
  L138():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L139() else L140();
  D19():
    deopt 69 [c16, r42];
  L24(r47):
    st msg = r47;
    msg2 = ld msg;
    check L145() else D26();
  L26(r59):
    st lt = r59;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L152() else L153();
  L134():
    data_class1 = ldf `data.class`;
    check L135() else D20();
  L139():
    msg = ld msg;
    check L141() else D22();
  L140():
    r46 = dyn base6(<sym msg>, <lang paste0("target is ", data.class(target), ", current is ", data.class(current))>);
    goto L24(r46);
  L148():
    target7 = ld target;
    check L150() else D27();
  L149():
    r58 = dyn base7(<sym target>);
    goto L26(r58);
  D20():
    deopt 70 [c16, r42];
  D22():
    deopt 77 [msg];
  D26():
    deopt 89 [msg2];
  D27():
    deopt 96 [target7];
  L27(r62):
    st lc = r62;
    sym9 = ldf `is.complex`;
    base9 = ldf `is.complex` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L156() else L157();
  L135():
    p9 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    r44 = dyn data_class1(p9);
    check L136() else D21();
  L141():
    msg1 = force? msg;
    checkMissing(msg1);
    paste0 = ldf paste0;
    check L142() else D23();
  L145():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  L150():
    target8 = force? target7;
    checkMissing(target8);
    length1 = ldf length in base;
    r60 = dyn length1(target8);
    check L151() else D28();
  L152():
    current7 = ld current;
    check L154() else D29();
  L153():
    r61 = dyn base8(<sym current>);
    goto L27(r61);
  D21():
    deopt 72 [c16, r42, r44];
  D23():
    deopt 80 [];
  D28():
    deopt 99 [r60];
  D29():
    deopt 103 [current7];
  L28(r65):
    st cplx = r65;
    lt = ld lt;
    check L159() else D32();
  L136():
    r45 = `!=`(r42, r44);
    c19 = `as.logical`(r45);
    c20 = `&&`(c16, c19);
    goto L22(c20);
  L142():
    p11 = prom<V +>{
      data_class2 = ldf `data.class`;
      p10 = prom<V +>{
        target5 = ld target;
        target6 = force? target5;
        checkMissing(target6);
        return target6;
      };
      r49 = dyn data_class2(p10);
      return r49;
    };
    p13 = prom<V +>{
      data_class3 = ldf `data.class`;
      p12 = prom<V +>{
        current5 = ld current;
        current6 = force? current5;
        checkMissing(current6);
        return current6;
      };
      r52 = dyn data_class3(p12);
      return r52;
    };
    r54 = dyn paste0("target is ", p11, ", current is ", p13);
    check L143() else D24();
  L151():
    goto L26(r60);
  L154():
    current8 = force? current7;
    checkMissing(current8);
    length2 = ldf length in base;
    r63 = dyn length2(current8);
    check L155() else D30();
  L156():
    target9 = ld target;
    check L158() else D31();
  L157():
    r64 = dyn base9(<sym target>);
    goto L28(r64);
  D24():
    deopt 85 [r54];
  D30():
    deopt 106 [r63];
  D31():
    deopt 109 [target9];
  D32():
    deopt 113 [lt];
  L143():
    c23 = ldf c in base;
    r55 = dyn c23(msg1, r54);
    check L144() else D25();
  L155():
    goto L27(r63);
  L158():
    target10 = force? target9;
    checkMissing(target10);
    c24 = `is.complex`(target10);
    goto L28(c24);
  L159():
    lt1 = force? lt;
    checkMissing(lt1);
    lc = ld lc;
    check L160() else D33();
  D25():
    deopt 87 [r55];
  D33():
    deopt 114 [lt1, lc];
  L144():
    goto L24(r55);
  L160():
    lc1 = force? lc;
    checkMissing(lc1);
    r66 = `!=`(lt1, lc1);
    c25 = `as.logical`(r66);
    if c25 then L161() else L29();
  L29():
    as_vector = ldf `as.vector`;
    check L182() else D43();
  L161():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L162() else L163();
  D43():
    deopt 156 [];
  L30(r68):
    r69 = `!`(r68);
    c27 = `as.logical`(r69);
    if c27 then L165() else L31();
  L162():
    msg4 = ld msg;
    check L164() else D34();
  L163():
    r67 = dyn base10(<sym msg>);
    goto L30(r67);
  L182():
    p18 = prom<V +>{
      target11 = ld target;
      target12 = force? target11;
      checkMissing(target12);
      return target12;
    };
    r84 = dyn as_vector(p18);
    check L183() else D44();
  D34():
    deopt 118 [msg4];
  D44():
    deopt 158 [r84];
  L31():
    goto L33();
  L33():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L173() else L174();
  L164():
    msg5 = force? msg4;
    checkMissing(msg5);
    c26 = `==`(msg5, NULL);
    goto L30(c26);
  L165():
    msg6 = ld msg;
    check L166() else D35();
  L183():
    st target = r84;
    as_vector1 = ldf `as.vector`;
    check L184() else D45();
  D35():
    deopt 122 [msg6];
  D45():
    deopt 161 [];
  L34(r75):
    st msg = r75;
    msg14 = ld msg;
    check L179() else D42();
  L166():
    msg7 = force? msg6;
    checkMissing(msg7);
    c28 = `is.object`(msg7);
    if c28 then L167() else L168(msg7);
  L173():
    msg12 = ld msg;
    check L175() else D38();
  L174():
    r74 = dyn base11(<sym msg>, <lang paste0(if(cplx, "Complex", "Numeric"), ": lengths (", lt, ", ", lc, ") differ")>);
    goto L34(r74);
  L184():
    p19 = prom<V +>{
      current9 = ld current;
      current10 = force? current9;
      checkMissing(current10);
      return current10;
    };
    r86 = dyn as_vector1(p19);
    check L185() else D46();
  D38():
    deopt 136 [msg12];
  D42():
    deopt 150 [msg14];
  D46():
    deopt 163 [r86];
  L32(dx3):
    st msg = dx3;
    goto L33();
  L167():
    dr2 = tryDispatchBuiltin.1("[", msg7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L169() else L168(dr2);
  L168(msg9):
    grep = ldf grep;
    check L170() else D36();
  L175():
    msg13 = force? msg12;
    checkMissing(msg13);
    paste1 = ldf paste0;
    check L176() else D39();
  L179():
    msg15 = force? msg14;
    checkMissing(msg15);
    popenv;
    return msg15;
  L185():
    st current = r86;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L186() else L187();
  D36():
    deopt 125 [msg9];
  D39():
    deopt 139 [];
  L36(r88):
    st out = r88;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L190() else L191();
  L169():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L170():
    p14 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r71 = dyn grep("\\bLengths\\b", p14);
    check L171() else D37();
  L176():
    p15 = prom<V +>{
      cplx = ld cplx;
      cplx1 = force? cplx;
      checkMissing(cplx1);
      c29 = `as.logical`(cplx1);
      if c29 then L1() else L0();
    L0():
      return "Numeric";
    L1():
      return "Complex";
    };
    p16 = prom<V +>{
      lt2 = ld lt;
      lt3 = force? lt2;
      checkMissing(lt3);
      return lt3;
    };
    p17 = prom<V +>{
      lc2 = ld lc;
      lc3 = force? lc2;
      checkMissing(lc3);
      return lc3;
    };
    r79 = dyn paste1(p15, ": lengths (", p16, ", ", p17, ") differ");
    check L177() else D40();
  L186():
    target13 = ld target;
    check L188() else D47();
  L187():
    r87 = dyn base12(<sym target>);
    goto L36(r87);
  D37():
    deopt 128 [msg9, r71];
  D40():
    deopt 146 [r79];
  D47():
    deopt 167 [target13];
  L37(r91):
    c31 = `as.logical`(r91);
    if c31 then L198() else L39();
  L171():
    r72 = `-`(<missing>, r71);
    __ = ldf `[` in base;
    r73 = dyn __(msg9, r72);
    goto L32(r73);
  L177():
    c30 = ldf c in base;
    r80 = dyn c30(msg13, r79);
    check L178() else D41();
  L188():
    target14 = force? target13;
    checkMissing(target14);
    is_na = ldf `is.na` in base;
    r89 = dyn is_na(target14);
    check L189() else D48();
  L190():
    out = ld out;
    check L192() else D49();
  L191():
    r90 = dyn base13(<lang `!=`(out, is.na(current))>);
    goto L37(r90);
  D41():
    deopt 148 [r80];
  D48():
    deopt 170 [r89];
  D49():
    deopt 174 [out];
  L39():
    out7 = ld out;
    check L208() else D58();
  L178():
    goto L34(r80);
  L189():
    goto L36(r89);
  L192():
    out1 = force? out;
    checkMissing(out1);
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L193() else L194();
  L198():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L199() else L200();
  D58():
    deopt 204 [out7];
  L38(out4, r93):
    r95 = `!=`(out4, r93);
    any = ldf any in base;
    r96 = dyn any(r95);
    check L197() else D52();
  L40(r98):
    st msg = r98;
    msg18 = ld msg;
    check L205() else D57();
  L193():
    current11 = ld current;
    check L195() else D50();
  L194():
    r92 = dyn base14(<sym current>);
    goto L38(out1, r92);
  L199():
    msg16 = ld msg;
    check L201() else D53();
  L200():
    r97 = dyn base15(<sym msg>, <lang paste("'is.NA' value mismatch:", sum(is.na(current)), "in current", sum(out), "in target")>);
    goto L40(r97);
  L208():
    out8 = force? out7;
    checkMissing(out8);
    target15 = ld target;
    check L209() else D59();
  D50():
    deopt 177 [out1, current11];
  D52():
    deopt 183 [r96];
  D53():
    deopt 186 [msg16];
  D57():
    deopt 199 [msg18];
  D59():
    deopt 205 [out8, target15];
  L195():
    current12 = force? current11;
    checkMissing(current12);
    is_na1 = ldf `is.na` in base;
    r94 = dyn is_na1(current12);
    check L196() else D51();
  L197():
    goto L37(r96);
  L201():
    msg17 = force? msg16;
    checkMissing(msg17);
    paste2 = ldf paste;
    check L202() else D54();
  L205():
    msg19 = force? msg18;
    checkMissing(msg19);
    popenv;
    return msg19;
  L209():
    target16 = force? target15;
    checkMissing(target16);
    current15 = ld current;
    check L210() else D60();
  D51():
    deopt 180 [out1, r94];
  D54():
    deopt 189 [];
  D60():
    deopt 206 [out8, target16, current15];
  L196():
    goto L38(out1, r94);
  L202():
    p20 = prom<V +>{
      sym16 = ldf sum;
      base16 = ldf sum in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L2() else L3();
    L0(r100):
      return r100;
    L2():
      sym17 = ldf `is.na`;
      base17 = ldf `is.na` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L4() else L5();
    L3():
      r99 = dyn base16(<lang is.na(current)>);
      goto L0(r99);
    L1(r102):
      sum = ldf sum in base;
      r104 = dyn sum(r102);
      goto L0(r104);
    L4():
      current13 = ld current;
      current14 = force? current13;
      checkMissing(current14);
      is_na2 = ldf `is.na` in base;
      r103 = dyn is_na2(current14);
      goto L1(r103);
    L5():
      r101 = dyn base17(<sym current>);
      goto L1(r101);
    };
    p21 = prom<V +>{
      sym18 = ldf sum;
      base18 = ldf sum in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      out5 = ld out;
      out6 = force? out5;
      checkMissing(out6);
      sum1 = ldf sum in base;
      r108 = dyn sum1(out6);
      goto L0(r108);
    L2():
      r106 = dyn base18(<sym out>);
      goto L0(r106);
    };
    r110 = dyn paste2("'is.NA' value mismatch:", p20, "in current", p21, "in target");
    check L203() else D55();
  L210():
    current16 = force? current15;
    checkMissing(current16);
    r114 = `==`(target16, current16);
    r115 = `||`(out8, r114);
    st out = r115;
    sym19 = ldf all;
    base19 = ldf all in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L211() else L212();
  D55():
    deopt 195 [r110];
  L42(r117):
    c33 = `as.logical`(r117);
    if c33 then L215() else L43();
  L203():
    c32 = ldf c in base;
    r111 = dyn c32(msg17, r110);
    check L204() else D56();
  L211():
    out9 = ld out;
    check L213() else D61();
  L212():
    r116 = dyn base19(<sym out>);
    goto L42(r116);
  D56():
    deopt 197 [r111];
  D61():
    deopt 213 [out9];
  L43():
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L224() else L225();
  L204():
    goto L40(r111);
  L213():
    out10 = force? out9;
    checkMissing(out10);
    all = ldf all in base;
    r118 = dyn all(out10);
    check L214() else D62();
  L215():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L216() else L217();
  D62():
    deopt 216 [r118];
  L44(r120):
    c35 = `as.logical`(r120);
    if c35 then L219() else L45();
  L48(r125):
    st anyO = r125;
    countEQ1 = ld countEQ;
    check L228() else D67();
  L214():
    goto L42(r118);
  L216():
    msg20 = ld msg;
    check L218() else D63();
  L217():
    r119 = dyn base20(<sym msg>);
    goto L44(r119);
  L224():
    out11 = ld out;
    check L226() else D65();
  L225():
    r124 = dyn base21(<sym out>);
    goto L48(r124);
  D63():
    deopt 218 [msg20];
  D65():
    deopt 230 [out11];
  D67():
    deopt 235 [countEQ1];
  L45():
    msg22 = ld msg;
    check L221() else D64();
  L46(r121):
    popenv;
    return r121;
  L218():
    msg21 = force? msg20;
    checkMissing(msg21);
    c34 = `==`(msg21, NULL);
    goto L44(c34);
  L219():
    goto L46(TRUE);
  L226():
    out12 = force? out11;
    checkMissing(out12);
    any1 = ldf any in base;
    r126 = dyn any1(out12);
    check L227() else D66();
  L228():
    countEQ2 = force? countEQ1;
    checkMissing(countEQ2);
    c36 = `as.logical`(countEQ2);
    if c36 then L229() else L49(c36);
  D64():
    deopt 223 [msg22];
  D66():
    deopt 233 [r126];
  L49(c38):
    c42 = `as.logical`(c38);
    if c42 then L232() else L50();
  L221():
    msg23 = force? msg22;
    checkMissing(msg23);
    goto L46(msg23);
  L227():
    goto L48(r126);
  L229():
    anyO = ld anyO;
    check L230() else D68();
  D68():
    deopt 237 [c36, anyO];
  L50():
    goto L51(0.0);
  L51(r133):
    st sabst0 = r133;
    anyO2 = ld anyO;
    check L236() else D71();
  L230():
    anyO1 = force? anyO;
    checkMissing(anyO1);
    c39 = `as.logical`(anyO1);
    c40 = `&&`(c36, c39);
    goto L49(c40);
  L232():
    mean = ldf mean;
    check L233() else D69();
  D69():
    deopt 241 [];
  D71():
    deopt 247 [anyO2];
  L233():
    p22 = prom<V +>{
      sym22 = ldf abs;
      base22 = ldf abs in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L2() else L3();
    L0(r128):
      return r128;
    L2():
      target17 = ld target;
      target18 = force? target17;
      checkMissing(target18);
      c43 = `is.object`(target18);
      if c43 then L4() else L5(target18);
    L3():
      r127 = dyn base22(<lang `[`(target, out)>);
      goto L0(r127);
    L1(dx6):
      abs = ldf abs in base;
      r130 = dyn abs(dx6);
      goto L0(r130);
    L4():
      dr4 = tryDispatchBuiltin.1("[", target18);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(target20):
      out13 = ld out;
      out14 = force? out13;
      __1 = ldf `[` in base;
      r129 = dyn __1(target20, out14);
      goto L1(r129);
    L6():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx5);
    };
    r132 = dyn mean(p22);
    check L234() else D70();
  L236():
    anyO3 = force? anyO2;
    checkMissing(anyO3);
    c44 = `as.logical`(anyO3);
    if c44 then L237() else L52();
  D70():
    deopt 243 [r132];
  L52():
    goto L63();
  L63():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L274() else L275();
  L234():
    goto L51(r132);
  L237():
    which = ldf which;
    check L238() else D72();
  D72():
    deopt 250 [];
  L64(r156):
    st N = r156;
    sym28 = ldf `is.integer`;
    base28 = ldf `is.integer` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L278() else L279();
  L238():
    p23 = prom<V +>{
      out15 = ld out;
      out16 = force? out15;
      checkMissing(out16);
      r134 = `!`(out16);
      return r134;
    };
    r136 = dyn which(p23);
    check L239() else D73();
  L274():
    target25 = ld target;
    check L276() else D86();
  L275():
    r155 = dyn base27(<sym target>);
    goto L64(r155);
  D73():
    deopt 252 [r136];
  D86():
    deopt 302 [target25];
  L65(r159):
    c60 = `as.logical`(r159);
    if c60 then L281() else L66(c60);
  L239():
    st keep = r136;
    target21 = ld target;
    check L240() else D74();
  L276():
    target26 = force? target25;
    checkMissing(target26);
    length5 = ldf length in base;
    r157 = dyn length5(target26);
    check L277() else D87();
  L278():
    target27 = ld target;
    check L280() else D88();
  L279():
    r158 = dyn base28(<sym target>);
    goto L65(r158);
  D74():
    deopt 254 [target21];
  D87():
    deopt 305 [r157];
  D88():
    deopt 308 [target27];
  L66(c62):
    c70 = `as.logical`(c62);
    if c70 then L286() else L68();
  L240():
    target22 = force? target21;
    checkMissing(target22);
    c45 = `is.object`(target22);
    if c45 then L241() else L242(target22);
  L277():
    goto L64(r157);
  L280():
    target28 = force? target27;
    checkMissing(target28);
    c59 = `is.integer`(target28);
    goto L65(c59);
  L281():
    sym29 = ldf `is.integer`;
    base29 = ldf `is.integer` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L282() else L283();
  L53(dx8):
    st target = dx8;
    current17 = ld current;
    check L245() else D76();
  L67(c65, r161):
    c67 = `as.logical`(r161);
    c68 = `&&`(c65, c67);
    goto L66(c68);
  L68():
    goto L70();
  L70():
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L292() else L293();
  L241():
    dr6 = tryDispatchBuiltin.1("[", target22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L243() else L242(dr6);
  L242(target24):
    keep = ld keep;
    check L244() else D75();
  L282():
    current21 = ld current;
    check L284() else D89();
  L283():
    r160 = dyn base29(<sym current>);
    goto L67(c60, r160);
  L286():
    sym30 = ldf `as.double`;
    base30 = ldf `as.double` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L287() else L288();
  D75():
    deopt 256 [target24, keep];
  D76():
    deopt 260 [current17];
  D89():
    deopt 312 [c60, current21];
  L69(r163):
    st target = r163;
    goto L70();
  L71(r167):
    c72 = `as.logical`(r167);
    if c72 then L295() else L72();
  L243():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L53(dx7);
  L244():
    keep1 = force? keep;
    __2 = ldf `[` in base;
    r137 = dyn __2(target24, keep1);
    goto L53(r137);
  L245():
    current18 = force? current17;
    checkMissing(current18);
    c46 = `is.object`(current18);
    if c46 then L246() else L247(current18);
  L284():
    current22 = force? current21;
    checkMissing(current22);
    c66 = `is.integer`(current22);
    goto L67(c60, c66);
  L287():
    target29 = ld target;
    check L289() else D90();
  L288():
    r162 = dyn base30(<sym target>);
    goto L69(r162);
  L292():
    scale13 = ld scale;
    check L294() else D92();
  L293():
    r166 = dyn base31(<sym scale>);
    goto L71(r166);
  D90():
    deopt 318 [target29];
  D92():
    deopt 326 [scale13];
  L54(dx10):
    st current = dx10;
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L250() else L251();
  L72():
    stopifnot1 = ldf stopifnot;
    check L316() else D102();
  L79(r181):
    st what = r181;
    sym38 = ldf sum;
    base38 = ldf sum in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L327() else L328();
  L246():
    dr8 = tryDispatchBuiltin.1("[", current18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L248() else L247(dr8);
  L247(current20):
    keep2 = ld keep;
    check L249() else D77();
  L289():
    target30 = force? target29;
    checkMissing(target30);
    as_double = ldf `as.double` in base;
    r164 = dyn as_double(target30);
    check L290() else D91();
  L294():
    scale14 = force? scale13;
    checkMissing(scale14);
    c71 = `==`(scale14, NULL);
    goto L71(c71);
  L295():
    sabst0 = ld sabst0;
    check L296() else D93();
  D77():
    deopt 262 [current20, keep2];
  D91():
    deopt 321 [r164];
  D93():
    deopt 329 [sabst0];
  D102():
    deopt 363 [];
  L55(r140):
    r141 = `!`(r140);
    c48 = `as.logical`(r141);
    if c48 then L253() else L56(c48);
  L83(r197):
    st xy = r197;
    cplx2 = ld cplx;
    check L337() else D113();
  L248():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L54(dx9);
  L249():
    keep3 = force? keep2;
    __3 = ldf `[` in base;
    r138 = dyn __3(current20, keep3);
    goto L54(r138);
  L250():
    scale7 = ld scale;
    check L252() else D78();
  L251():
    r139 = dyn base23(<sym scale>);
    goto L55(r139);
  L290():
    goto L69(r164);
  L296():
    sabst1 = force? sabst0;
    checkMissing(sabst1);
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L297() else L298();
  L316():
    p24 = prom<V +>{
      sym35 = ldf all;
      base35 = ldf all in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r183):
      return r183;
    L1():
      scale19 = ld scale;
      scale20 = force? scale19;
      checkMissing(scale20);
      r184 = `>`(scale20, 0.0);
      all1 = ldf all in base;
      r185 = dyn all1(r184);
      goto L0(r185);
    L2():
      r182 = dyn base35(<lang `>`(scale, 0.0)>);
      goto L0(r182);
    };
    r187 = dyn stopifnot1(p24);
    check L317() else D103();
  L327():
    sym39 = ldf abs;
    base39 = ldf abs in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L329() else L330();
  L328():
    r196 = dyn base38(<lang `/`(abs(`-`(target, current)), `(`(`*`(N, scale)))>);
    goto L83(r196);
  D78():
    deopt 267 [scale7];
  D103():
    deopt 365 [r187];
  D113():
    deopt 402 [cplx2];
  L56(c50):
    c57 = `as.logical`(c50);
    if c57 then L259() else L58();
  L73(sabst4, r169):
    r175 = `+`(sabst4, r169);
    st scale = r175;
    sym34 = ldf `is.finite`;
    base34 = ldf `is.finite` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L305() else L306();
  L84(r199):
    N2 = ld N;
    check L334() else D110();
  L252():
    scale8 = force? scale7;
    checkMissing(scale8);
    c47 = `==`(scale8, NULL);
    goto L55(c47);
  L253():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L254() else L255();
  L297():
    sym33 = ldf abs;
    base33 = ldf abs in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L299() else L300();
  L298():
    r168 = dyn base32(<lang `/`(abs(target), N)>);
    goto L73(sabst1, r168);
  L317():
    sym36 = ldf all;
    base36 = ldf all in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L318() else L319();
  L329():
    target33 = ld target;
    check L331() else D107();
  L330():
    r198 = dyn base39(<lang `-`(target, current)>);
    goto L84(r198);
  L337():
    cplx3 = force? cplx2;
    checkMissing(cplx3);
    c81 = `as.logical`(cplx3);
    if c81 then L338() else L85();
  D107():
    deopt 389 [target33];
  D110():
    deopt 394 [r199, N2];
  L57(c53, r143):
    r145 = `>`(r143, 1);
    c54 = `as.logical`(r145);
    c55 = `&&`(c53, c54);
    goto L56(c55);
  L58():
    goto L62(NULL);
  L62(dx13):
    goto L63();
  L74(sabst7, r171):
    N = ld N;
    check L303() else D96();
  L75(r177):
    c73 = `as.logical`(r177);
    if c73 then L309() else L76(c73);
  L80(r189):
    c80 = `as.logical`(r189);
    if c80 then L325() else L82();
  L85():
    goto L86();
  L86():
    sym40 = ldf `is.na`;
    base40 = ldf `is.na` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L342() else L343();
  L254():
    scale9 = ld scale;
    check L256() else D79();
  L255():
    r142 = dyn base24(<sym scale>);
    goto L57(c48, r142);
  L259():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L260() else L261();
  L299():
    target31 = ld target;
    check L301() else D94();
  L300():
    r170 = dyn base33(<sym target>);
    goto L74(sabst1, r170);
  L305():
    scale15 = ld scale;
    check L307() else D98();
  L306():
    r176 = dyn base34(<sym scale>);
    goto L75(r176);
  L318():
    sym37 = ldf abs;
    base37 = ldf abs in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L320() else L321();
  L319():
    r188 = dyn base36(<lang `<`(abs(`-`(scale, 1.0)), 1.0E-7)>);
    goto L80(r188);
  L331():
    target34 = force? target33;
    checkMissing(target34);
    current23 = ld current;
    check L332() else D108();
  L334():
    N3 = force? N2;
    checkMissing(N3);
    scale23 = ld scale;
    check L335() else D111();
  L338():
    paste3 = ldf paste;
    check L339() else D114();
  D79():
    deopt 273 [c48, scale9];
  D94():
    deopt 334 [sabst1, target31];
  D96():
    deopt 337 [sabst7, r171, N];
  D98():
    deopt 346 [scale15];
  D108():
    deopt 390 [target34, current23];
  D111():
    deopt 395 [r199, N3, scale23];
  D114():
    deopt 405 [];
  L59(r147):
    c58 = `is.object`(r147);
    if c58 then L268() else L269(r147);
  L76(c75):
    c79 = `as.logical`(c75);
    if c79 then L313() else L77();
  L81(r191):
    r194 = `<`(r191, 1.0E-7);
    all2 = ldf all in base;
    r195 = dyn all2(r194);
    check L324() else D106();
  L82():
    goto L79("scaled");
  L87(r209):
    c82 = `as.logical`(r209);
    if c82 then L88(c82) else L346();
  L256():
    scale10 = force? scale9;
    checkMissing(scale10);
    length3 = ldf length in base;
    r144 = dyn length3(scale10);
    check L257() else D80();
  L260():
    scale11 = ld scale;
    check L262() else D81();
  L261():
    r146 = dyn base25(<sym scale>, <lang length(out)>);
    goto L59(r146);
  L301():
    target32 = force? target31;
    checkMissing(target32);
    abs1 = ldf abs in base;
    r172 = dyn abs1(target32);
    check L302() else D95();
  L303():
    N1 = force? N;
    checkMissing(N1);
    r173 = `/`(r171, N1);
    sum2 = ldf sum in base;
    r174 = dyn sum2(r173);
    check L304() else D97();
  L307():
    scale16 = force? scale15;
    checkMissing(scale16);
    is_finite = ldf `is.finite` in base;
    r178 = dyn is_finite(scale16);
    check L308() else D99();
  L309():
    scale17 = ld scale;
    check L310() else D100();
  L320():
    scale21 = ld scale;
    check L322() else D104();
  L321():
    r190 = dyn base37(<lang `-`(scale, 1.0)>);
    goto L81(r190);
  L325():
    goto L79("absolute");
  L332():
    current24 = force? current23;
    checkMissing(current24);
    r200 = `-`(target34, current24);
    abs3 = ldf abs in base;
    r201 = dyn abs3(r200);
    check L333() else D109();
  L335():
    scale24 = force? scale23;
    checkMissing(scale24);
    r202 = `*`(N3, scale24);
    r203 = `/`(r199, r202);
    sum3 = ldf sum in base;
    r204 = dyn sum3(r203);
    check L336() else D112();
  L339():
    p25 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r206 = dyn paste3(p25, "Mod");
    check L340() else D115();
  L342():
    xy = ld xy;
    check L344() else D116();
  L343():
    r208 = dyn base40(<sym xy>);
    goto L87(r208);
  D80():
    deopt 276 [c48, r144];
  D81():
    deopt 282 [scale11];
  D95():
    deopt 337 [sabst1, r172];
  D97():
    deopt 341 [sabst7, r174];
  D99():
    deopt 349 [r178];
  D100():
    deopt 350 [c73, scale17];
  D104():
    deopt 370 [scale21];
  D106():
    deopt 379 [r195];
  D109():
    deopt 394 [r201];
  D112():
    deopt 400 [r204];
  D115():
    deopt 408 [r206];
  D116():
    deopt 414 [xy];
  L61(dx12):
    st scale = dx12;
    goto L62(dx12);
  L77():
    st scale = 1.0;
    goto L78("absolute");
  L78(r180):
    goto L79(r180);
  L88(c83):
    c88 = `as.logical`(c83);
    if c88 then L350() else L89();
  L257():
    goto L57(c48, r144);
  L262():
    scale12 = force? scale11;
    checkMissing(scale12);
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L263() else L264();
  L268():
    dr10 = tryDispatchBuiltin.1("[", r147);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L270() else L269(dr10);
  L269(r153):
    keep4 = ld keep;
    check L271() else D85();
  L302():
    goto L74(sabst1, r172);
  L304():
    goto L73(sabst7, r174);
  L308():
    goto L75(r178);
  L310():
    scale18 = force? scale17;
    checkMissing(scale18);
    tolerance7 = ld tolerance;
    check L311() else D101();
  L313():
    goto L78("relative");
  L322():
    scale22 = force? scale21;
    checkMissing(scale22);
    r192 = `-`(scale22, 1.0);
    abs2 = ldf abs in base;
    r193 = dyn abs2(r192);
    check L323() else D105();
  L324():
    goto L80(r195);
  L333():
    goto L84(r201);
  L336():
    goto L83(r204);
  L340():
    st what = r206;
    goto L86();
  L344():
    xy1 = force? xy;
    checkMissing(xy1);
    is_na3 = ldf `is.na` in base;
    r210 = dyn is_na3(xy1);
    check L345() else D117();
  L346():
    xy2 = ld xy;
    check L347() else D118();
  D85():
    deopt 292 [r153, keep4];
  D101():
    deopt 351 [c73, scale18, tolerance7];
  D105():
    deopt 375 [r193];
  D117():
    deopt 417 [r210];
  D118():
    deopt 418 [c82, xy2];
  L60(r149):
    rep_len = ldf rep_len in base;
    r151 = dyn rep_len(scale12, r149);
    check L267() else D84();
  L89():
    goto L91();
  L91():
    sym42 = ldf `is.null`;
    base42 = ldf `is.null` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L358() else L359();
  L263():
    out17 = ld out;
    check L265() else D82();
  L264():
    r148 = dyn base26(<sym out>);
    goto L60(r148);
  L270():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L61(dx11);
  L271():
    keep5 = force? keep4;
    __4 = ldf `[` in base;
    r154 = dyn __4(r153, keep5);
    goto L61(r154);
  L311():
    tolerance8 = force? tolerance7;
    checkMissing(tolerance8);
    r179 = `>`(scale18, tolerance8);
    c76 = `as.logical`(r179);
    c77 = `&&`(c73, c76);
    goto L76(c77);
  L323():
    goto L81(r193);
  L345():
    goto L87(r210);
  L347():
    xy3 = force? xy2;
    checkMissing(xy3);
    tolerance9 = ld tolerance;
    check L348() else D119();
  L350():
    sym41 = ldf c;
    base41 = ldf c in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L351() else L352();
  D82():
    deopt 286 [out17];
  D84():
    deopt 291 [r151];
  D119():
    deopt 419 [c82, xy3, tolerance9];
  L90(r213):
    st msg = r213;
    goto L91();
  L92(r223):
    c91 = `as.logical`(r223);
    if c91 then L361() else L93();
  L265():
    out18 = force? out17;
    checkMissing(out18);
    length4 = ldf length in base;
    r150 = dyn length4(out18);
    check L266() else D83();
  L267():
    goto L59(r151);
  L348():
    tolerance10 = force? tolerance9;
    checkMissing(tolerance10);
    r211 = `>`(xy3, tolerance10);
    c85 = `as.logical`(r211);
    c86 = `||`(c82, c85);
    goto L88(c86);
  L351():
    msg24 = ld msg;
    check L353() else D120();
  L352():
    r212 = dyn base41(<sym msg>, <lang paste("Mean", what, "difference:", formatFUN(xy, what))>);
    goto L90(r212);
  L358():
    msg26 = ld msg;
    check L360() else D124();
  L359():
    r222 = dyn base42(<sym msg>);
    goto L92(r222);
  D83():
    deopt 289 [r150];
  D120():
    deopt 425 [msg24];
  D124():
    deopt 440 [msg26];
  L93():
    msg28 = ld msg;
    check L363() else D125();
  L94(r224):
    st r = r224;
    giveErr1 = ld giveErr;
    check L364() else D126();
  L266():
    goto L60(r150);
  L353():
    msg25 = force? msg24;
    checkMissing(msg25);
    paste4 = ldf paste;
    check L354() else D121();
  L360():
    msg27 = force? msg26;
    checkMissing(msg27);
    c90 = `==`(msg27, NULL);
    goto L92(c90);
  L361():
    goto L94(TRUE);
  D121():
    deopt 428 [];
  D125():
    deopt 445 [msg28];
  D126():
    deopt 448 [giveErr1];
  L354():
    p26 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p29 = prom<V +>{
      formatFUN1 = ldf formatFUN;
      p27 = prom<V +>{
        xy4 = ld xy;
        xy5 = force? xy4;
        checkMissing(xy5);
        return xy5;
      };
      p28 = prom<V +>{
        what4 = ld what;
        what5 = force? what4;
        checkMissing(what5);
        return what5;
      };
      r217 = dyn formatFUN1(p27, p28);
      return r217;
    };
    r219 = dyn paste4("Mean", p26, "difference:", p29);
    check L355() else D122();
  L363():
    msg29 = force? msg28;
    checkMissing(msg29);
    goto L94(msg29);
  L364():
    giveErr2 = force? giveErr1;
    checkMissing(giveErr2);
    c92 = `as.logical`(giveErr2);
    if c92 then L365() else L95();
  D122():
    deopt 433 [r219];
  L95():
    r231 = ld r;
    check L369() else D129();
  L355():
    c89 = ldf c in base;
    r220 = dyn c89(msg25, r219);
    check L356() else D123();
  L365():
    structure = ldf structure;
    check L366() else D127();
  D123():
    deopt 435 [r220];
  D127():
    deopt 451 [];
  D129():
    deopt 458 [r231];
  L356():
    goto L90(r220);
  L366():
    p30 = prom<V +>{
      r225 = ld r;
      r226 = force? r225;
      checkMissing(r226);
      return r226;
    };
    p31 = prom<V +>{
      xy6 = ld xy;
      xy7 = force? xy6;
      checkMissing(xy7);
      return xy7;
    };
    p32 = prom<V +>{
      what6 = ld what;
      what7 = force? what6;
      checkMissing(what7);
      return what7;
    };
    r230 = dyn structure[, err, what](p30, p31, p32);
    check L367() else D128();
  L369():
    r232 = force? r231;
    checkMissing(r232);
    popenv;
    return r232;
  D128():
    deopt 457 [r230];
  L367():
    popenv;
    return r230;
  }
}
fun inner3974543257(err, what) {
  (reg err:*, reg what:*) -+> V { var err:*, var what:*, reg format:cls, reg err1:*, reg err2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st err = err;
    st what = what;
    format = ldf format;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      err1 = ld err;
      err2 = force? err1;
      checkMissing(err2);
      return err2;
    };
    r1 = dyn format(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}