fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1583325718;
    st `print.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1583325718(x, intercept, tol, `...`) {
  (reg x:*, reg intercept:*, reg tol:*, reg ddd:dots) -+> V { var x:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg c2:V, reg r8:V, reg c3:L, reg cat:cls, reg r9:V, reg dput:cls, reg cl:*, reg cl1:V, reg p1:p(V +), reg r11:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg c5:L, reg qr:cls, reg x9:*, reg x10:V, reg p2:p(V +), reg r15:V, reg r16:V, reg x11:*, reg x12:V, reg c6:L, reg x14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r17:V, reg c7:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg qrx:*, reg qrx1:V, reg c8:L, reg dx13:V, reg qrx3:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg dx17:V, reg r18:V, reg c9:L, reg dx20:V, reg dx21:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg dx25:V, reg x15:*, reg x16:V, reg c10:L, reg dx28:V, reg dx29:V, reg r20:I, reg x18:V, reg dr14:V, reg dc7:L, reg dx32:V, reg dx33:V, reg dx34:V, reg r22:I, reg dx35:V, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg __1:cls, reg r26:V, reg x19:*, reg x20:V, reg c11:L, reg x22:V, reg dr16:V, reg dc8:L, reg dx36:V, reg dx37:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg effects:*, reg effects1:V, reg c12:V, reg r30:V, reg c13:L, reg as_matrix:cls, reg effects2:*, reg effects3:V, reg p3:p(V +), reg r32:V, reg c14:L, reg r34:V, reg dr18:V, reg dc9:L, reg dx38:V, reg dx39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r39:V, reg asgn:*, reg asgn1:V, reg r40:I, reg __2:cls, reg r41:V, reg x23:*, reg x24:V, reg c15:L, reg x26:V, reg dr20:V, reg dc10:L, reg dx41:V, reg dx42:V, reg r42:V, reg as_matrix1:cls, reg x27:*, reg x28:V, reg c16:L, reg x30:V, reg dr22:V, reg dc11:L, reg dx43:V, reg dx44:V, reg r43:V, reg p4:p(V +), reg r45:V, reg x31:*, reg x32:V, reg c17:L, reg x34:V, reg dr24:V, reg dc12:L, reg dx45:V, reg dx46:V, reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg wt:*, reg wt1:V, reg c18:V, reg r49:V, reg c19:L, reg resid:*, reg resid1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg resid4:V, reg r51:V, reg wt2:*, reg wt3:V, reg r52:V, reg r53:V, reg colSums:cls, reg resid5:*, reg resid6:V, reg r55:V, reg p5:p(V +), reg r57:V, reg unique:cls, reg asgn2:*, reg asgn3:V, reg p6:p(V +), reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg x35:*, reg x36:V, reg c20:L, reg x38:V, reg dr26:V, reg dc13:L, reg dx47:V, reg dx48:V, reg r64:V, reg attr:cls, reg r65:V, reg c21:cls, reg r66:V, reg c22:L, reg r68:V, reg dr28:V, reg dc14:L, reg dx49:V, reg dx50:V, reg uasgn:*, reg uasgn1:V, reg r69:V, reg __3:cls, reg r70:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg uasgn2:*, reg uasgn3:V, reg length:cls, reg r73:V, reg NCOL:cls, reg effects4:*, reg effects5:V, reg p7:p(V +), reg r75:V, reg numeric:cls, reg nterms:*, reg nterms1:V, reg p8:p(V +), reg r77:V, reg matrix:cls, reg nterms2:*, reg nterms3:V, reg p9:p(V +), reg nresp:*, reg nresp1:V, reg p10:p(V +), reg r80:V, reg nterms4:*, reg nterms5:V, reg c23:L, reg seq:cls, reg nterms6:*, reg nterms7:V, reg p11:p(V +), reg r82:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x39:V, reg asgn4:*, reg asgn5:V, reg uasgn4:*, reg uasgn5:V, reg c25:L, reg i6:I, reg asgn7:V, reg uasgn7:V, reg dr30:V, reg dc15:L, reg dx51:V, reg i8:I, reg asgn9:V, reg dx52:V, reg i9:*, reg i10:V, reg __4:cls, reg r83:V, reg r84:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r85:V, reg i13:I, reg r86:V, reg ai:*, reg ai1:V, reg sum:cls, reg r87:V, reg l1:*, reg c26:L, reg i15:I, reg r89:V, reg l3:*, reg dr32:V, reg dc16:L, reg dx53:V, reg i17:I, reg dx54:V, reg i18:*, reg i19:V, reg ___:cls, reg r92:V, reg effects6:*, reg effects7:V, reg c27:L, reg i21:I, reg effects9:V, reg dr34:V, reg dc17:L, reg dx55:V, reg i23:I, reg dx56:V, reg ai2:*, reg ai3:V, reg __5:cls, reg r93:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r94:V, reg i26:I, reg r95:V, reg ai4:*, reg ai5:V, reg sum1:cls, reg r96:V, reg r97:V, reg c28:L, reg colSums1:cls, reg ef:*, reg ef1:V, reg r98:V, reg p12:p(V +), reg r100:V, reg i29:I, reg r101:V, reg ef2:*, reg ef3:V, reg r102:V, reg l4:*, reg c29:L, reg i31:I, reg r104:V, reg l6:*, reg dr36:V, reg dc18:L, reg dx57:V, reg i33:I, reg dx58:V, reg i34:*, reg i35:V, reg ___1:cls, reg r107:V, reg df:*, reg df1:V, reg r108:V, reg intercept1:*, reg intercept2:V, reg r109:V, reg c30:L, reg c32:V, reg uasgn8:*, reg uasgn9:V, reg c33:L, reg c35:L, reg uasgn11:V, reg dr38:V, reg dc19:L, reg dx59:V, reg c37:L, reg dx60:V, reg __6:cls, reg r110:V, reg r111:V, reg c38:L, reg c39:V, reg c41:L, reg l7:*, reg c42:L, reg r113:L, reg l9:*, reg dr40:V, reg dc20:L, reg dx61:V, reg r115:L, reg dx62:V, reg ___2:cls, reg r116:V, reg nmeffect:*, reg nmeffect1:V, reg c43:L, reg nmeffect3:V, reg dr42:V, reg dc21:L, reg dx63:V, reg dx64:V, reg keep:*, reg keep1:V, reg __7:cls, reg r118:V, reg df2:*, reg df3:V, reg c44:L, reg df5:V, reg dr44:V, reg dc22:L, reg dx65:V, reg dx66:V, reg keep2:*, reg keep3:V, reg __8:cls, reg r119:V, reg ss:*, reg ss1:V, reg c45:L, reg ss3:V, reg dr46:V, reg dc23:L, reg dx67:V, reg dx68:V, reg keep4:*, reg keep5:V, reg __9:cls, reg r120:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r121:V, reg r122:V, reg df6:*, reg df7:V, reg length1:cls, reg r123:V, reg cat1:cls, reg r125:V, reg nterms8:*, reg nterms9:V, reg r126:V, reg c46:L, reg rdf:*, reg rdf1:V, reg r127:V, reg c47:L, reg RSS:*, reg RSS1:V, reg sapply:cls, reg ss4:*, reg ss5:V, reg p13:p(V +), reg format:*, reg format1:V, reg p14:p(V +), reg r130:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r131:V, reg r132:V, reg ssp:*, reg ssp1:V, reg is_matrix:cls, reg r133:V, reg r134:V, reg c48:L, reg t:cls, reg ssp2:*, reg ssp3:V, reg p15:p(V +), reg r136:V, reg as_matrix2:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r138:V, reg r139:V, reg ssp4:*, reg ssp5:V, reg format2:cls, reg rdf2:*, reg rdf3:V, reg p16:p(V +), reg r141:V, reg c49:cls, reg r142:V, reg p17:p(V +), reg r144:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r145:V, reg r146:V, reg ss6:*, reg ss7:V, reg length2:cls, reg r147:V, reg r148:V, reg c50:L, reg colnames:cls, reg x40:*, reg x41:V, reg c51:L, reg x43:V, reg dr48:V, reg dc24:L, reg dx69:V, reg dx70:V, reg r149:V, reg p18:p(V +), reg r151:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r152:V, reg r153:V, reg rn:*, reg rn1:V, reg c52:V, reg c53:L, reg paste:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r154:V, reg r155:V, reg ss8:*, reg ss9:V, reg r156:I, reg p19:p(V +), reg r158:V, reg r159:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r161:V, reg r162:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r163:V, reg r164:V, reg rn2:*, reg rn3:V, reg c54:cls, reg r165:V, reg list:cls, reg r166:V, reg l10:*, reg dimnames__:cls, reg r167:V, reg print:cls, reg tmp:*, reg tmp1:V, reg p20:p(V +), reg r169:V, reg cat2:cls, reg r170:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r171:V, reg r172:V, reg RSS2:*, reg RSS3:V, reg rdf4:*, reg rdf5:V, reg r173:V, reg r174:V, reg cat3:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r175:V, reg r176:V, reg rs:*, reg rs1:V, reg length3:cls, reg r177:V, reg r178:V, reg c55:L, reg p21:p(V +), reg sapply1:cls, reg rs2:*, reg rs3:V, reg p22:p(V +), reg format3:*, reg format4:V, reg p23:p(V +), reg r182:V, reg p24:p(V +), reg r184:V, reg cat4:cls, reg r185:V, reg r186:V, reg print1:cls, reg matrix1:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r187:V, reg r188:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r189:V, reg r190:V, reg c56:cls, reg r191:V, reg list1:cls, reg r192:V, reg p25:p(V +), reg r194:V, reg p26:p(V +), reg r196:V, reg rdf6:*, reg rdf7:V, reg r198:V, reg c57:L, reg nterms10:*, reg nterms11:V, reg r199:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r200:V, reg r201:V, reg df8:*, reg df9:V, reg rdf8:*, reg rdf9:V, reg c58:cls, reg r202:V, reg rbind:cls, reg ss10:*, reg ss11:V, reg p27:p(V +), reg RSS4:*, reg RSS5:V, reg p28:p(V +), reg r205:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r206:V, reg r207:V, reg nmeffect4:*, reg nmeffect5:V, reg c59:cls, reg r208:V, reg apply:cls, reg zapsmall:cls, reg ss12:*, reg ss13:V, reg p29:p(V +), reg r211:V, reg p30:p(V +), reg format5:*, reg format6:V, reg p31:p(V +), reg r214:V, reg t1:cls, reg cbind:cls, reg ssp6:*, reg ssp7:V, reg p32:p(V +), reg format7:cls, reg df10:*, reg df11:V, reg p33:p(V +), reg r217:V, reg p34:p(V +), reg r219:V, reg p35:p(V +), reg r221:V, reg ncol:cls, reg effects10:*, reg effects11:V, reg p36:p(V +), reg r223:V, reg r224:V, reg c60:L, reg colnames1:cls, reg x44:*, reg x45:V, reg c61:L, reg x47:V, reg dr50:V, reg dc25:L, reg dx71:V, reg dx72:V, reg r225:V, reg p37:p(V +), reg r227:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r228:V, reg r229:V, reg rn4:*, reg rn5:V, reg c62:V, reg c63:L, reg paste1:cls, reg seq1:cls, reg ncol1:cls, reg effects12:*, reg effects13:V, reg p38:p(V +), reg r231:V, reg p39:p(V +), reg r233:V, reg p40:p(V +), reg r235:V, reg r236:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r238:V, reg r239:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r240:V, reg r241:V, reg rn6:*, reg rn7:V, reg c64:cls, reg r242:V, reg nmeffect6:*, reg nmeffect7:V, reg list2:cls, reg r243:V, reg l11:*, reg dimnames__1:cls, reg r244:V, reg print2:cls, reg tmp2:*, reg tmp3:V, reg p41:p(V +), reg r246:V, reg x48:*, reg x49:V, reg c65:L, reg x51:V, reg dr52:V, reg dc26:L, reg dx73:V, reg dx74:V, reg r247:V, reg cat5:cls, reg r248:V, reg rdf10:*, reg rdf11:V, reg r249:V, reg c66:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r250:V, reg r251:V, reg RSS6:*, reg RSS7:V, reg rdf12:*, reg rdf13:V, reg r252:V, reg r253:V, reg cat6:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r254:V, reg r255:V, reg rs4:*, reg rs5:V, reg length4:cls, reg r256:V, reg r257:V, reg c67:L, reg p42:p(V +), reg sapply2:cls, reg rs6:*, reg rs7:V, reg p43:p(V +), reg format8:*, reg format9:V, reg p44:p(V +), reg r261:V, reg p45:p(V +), reg r263:V, reg cat7:cls, reg r264:V, reg as_matrix3:cls, reg x52:*, reg x53:V, reg c68:L, reg x55:V, reg dr54:V, reg dc27:L, reg dx75:V, reg dx76:V, reg r266:V, reg p46:p(V +), reg r268:V, reg c69:L, reg dr56:V, reg dc28:L, reg dx77:V, reg dx78:V, reg __10:cls, reg r271:V, reg qrx4:*, reg qrx5:V, reg c70:L, reg qrx7:V, reg dr58:V, reg dc29:L, reg dx79:V, reg dx80:V, reg r272:V, reg R:*, reg R1:V, reg c71:L, reg R3:V, reg dr60:V, reg dc30:L, reg dx81:V, reg dx82:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r275:V, reg r276:I, reg r277:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r280:V, reg R9:V, reg r281:I, reg r282:V, reg R10:*, reg R11:V, reg dim:cls, reg r283:V, reg min:cls, reg r284:V, reg r285:V, reg __11:cls, reg r286:V, reg l12:*, reg c72:L, reg r288:R, reg l14:*, reg dr62:V, reg dc31:L, reg dx83:V, reg dx84:V, reg lower_tri:cls, reg R12:*, reg R13:V, reg p47:p(V +), reg r292:V, reg ___3:cls, reg r293:V, reg rank:*, reg rank1:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r294:V, reg rank4:V, reg r295:V, reg coef:*, reg coef1:V, reg length5:cls, reg r296:V, reg r297:V, reg c73:L, reg cat8:cls, reg paste2:cls, reg nc:*, reg nc1:V, reg rank5:*, reg rank6:V, reg r298:V, reg p48:p(V +), reg nc2:*, reg nc3:V, reg p49:p(V +), reg r301:V, reg p50:p(V +), reg r303:V, reg R14:*, reg R15:V, reg c74:L, reg R17:V, reg dr64:V, reg dc32:L, reg dx85:V, reg dx86:V, reg rank7:*, reg rank8:V, reg r304:V, reg __12:cls, reg r305:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r306:V, reg r307:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r308:V, reg r309:V, reg diag:cls, reg R18:*, reg R19:V, reg p51:p(V +), reg r311:V, reg abs:cls, reg r312:V, reg sum2:cls, reg r313:V, reg l15:*, reg diag__:cls, reg r314:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r315:V, reg r316:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r317:V, reg r318:V, reg R20:*, reg R21:V, reg abs1:cls, reg r319:V, reg sum3:cls, reg r320:V, reg d2:*, reg d3:V, reg r321:V, reg tol1:*, reg tol2:V, reg r322:V, reg c75:L, reg cat9:cls, reg r323:V, reg cat10:cls, reg r325:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r326:V, reg r327:V, reg naprint:cls, reg x56:*, reg x57:V, reg c76:L, reg x59:V, reg dr66:V, reg dc33:L, reg dx88:V, reg dx89:V, reg r328:V, reg p52:p(V +), reg r330:V, reg nzchar:cls, reg r331:V, reg c77:L, reg cat11:cls, reg mess:*, reg mess1:V, reg p53:p(V +), reg r333:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r334:V, reg r335:V, reg x60:*, reg x61:V, reg invisible:cls, reg r336:V |
    mkenv;
    st x = x;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L0(FALSE) else L0(intercept);
  L0(intercept_orDefault):
    st intercept = intercept_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L1() else L2(tol);
  L1():
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
    goto L2(p);
  L2(tol_orDefault):
    st tol = tol_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L92() else L93();
  L3(r6):
    r8 = `!`(r6);
    c3 = `as.logical`(r8);
    if c3 then L99() else L4();
  L92():
    x1 = ld x;
    check L94() else D0();
  L93():
    r5 = dyn base1(<lang `<-`(cl, `$`(x, call))>);
    goto L3(r5);
  D0():
    deopt 1 [x1];
  L4():
    goto L5();
  L5():
    x5 = ld x;
    check L105() else D5();
  L94():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L96() else L97(x2);
  L99():
    cat = ldf cat;
    check L100() else D1();
  D1():
    deopt 8 [];
  D5():
    deopt 19 [x5];
  L95(dx3):
    st cl = dx3;
    c2 = `==`(dx3, NULL);
    goto L3(c2);
  L96():
    dr2 = tryDispatchBuiltin.1("$", x2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(dr2);
  L97(x4):
    r7 = `$`(x4, <sym call>);
    goto L95(r7);
  L100():
    r9 = dyn cat("Call:\n   ");
    check L101() else D2();
  L105():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L107() else L108(x6);
  D2():
    deopt 10 [r9];
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(dx2);
  L101():
    dput = ldf dput;
    check L102() else D3();
  L106(dx5):
    c5 = `as.logical`(dx5);
    if c5 then L110() else L6();
  L107():
    dr4 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L109() else L108(dr4);
  L108(x8):
    r13 = `$`(x8, <sym rank>);
    goto L106(r13);
  D3():
    deopt 12 [];
  L6():
    goto L7(NULL);
  L7(r16):
    st qrx = r16;
    x11 = ld x;
    check L114() else D8();
  L102():
    p1 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r11 = dyn dput[, control](p1, NULL);
    check L103() else D4();
  L109():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L106(dx4);
  L110():
    qr = ldf qr;
    check L111() else D6();
  D4():
    deopt 16 [r11];
  D6():
    deopt 23 [];
  D8():
    deopt 29 [x11];
  L103():
    goto L5();
  L111():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r15 = dyn qr(p2);
    check L112() else D7();
  L114():
    x12 = force? x11;
    checkMissing(x12);
    c6 = `is.object`(x12);
    if c6 then L116() else L117(x12);
  D7():
    deopt 25 [r15];
  L112():
    goto L7(r15);
  L115(dx7):
    c7 = `is.object`(dx7);
    if c7 then L119() else L120(dx7);
  L116():
    dr6 = tryDispatchBuiltin.1("$", x12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L118() else L117(dr6);
  L117(x14):
    r17 = `$`(x14, <sym assign>);
    goto L115(r17);
  L8(dx11):
    st asgn = dx11;
    x19 = ld x;
    check L135() else D11();
  L118():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L115(dx6);
  L119():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L121() else L120(dr8);
  L120(dx9):
    qrx = ld qrx;
    check L122() else D9();
  D9():
    deopt 32 [dx9, qrx];
  D11():
    deopt 43 [x19];
  L121():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx10);
  L122():
    qrx1 = force? qrx;
    checkMissing(qrx1);
    c8 = `is.object`(qrx1);
    if c8 then L124() else L125(dx9, qrx1);
  L135():
    x20 = force? x19;
    checkMissing(x20);
    c11 = `is.object`(x20);
    if c11 then L137() else L138(x20);
  L123(dx16, dx17):
    c9 = `is.object`(dx17);
    if c9 then L127() else L128(dx16, dx17);
  L124():
    dr10 = tryDispatchBuiltin.1("$", qrx1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L126() else L125(dx9, dr10);
  L125(dx13, qrx3):
    r18 = `$`(qrx3, <sym pivot>);
    goto L123(dx13, r18);
  L136(dx37):
    st effects = dx37;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L140() else L141();
  L137():
    dr16 = tryDispatchBuiltin.1("$", x20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L139() else L138(dr16);
  L138(x22):
    r27 = `$`(x22, <sym effects>);
    goto L136(r27);
  L9(dx24, dx25):
    __1 = ldf `[` in base;
    r26 = dyn __1(dx24, dx25);
    goto L8(r26);
  L10(r29):
    r30 = `!`(r29);
    c13 = `as.logical`(r30);
    if c13 then L143() else L11();
  L126():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L123(dx9, dx15);
  L127():
    dr12 = tryDispatchBuiltin.1("[", dx17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L129() else L128(dx16, dr12);
  L128(dx20, dx21):
    x15 = ld x;
    check L130() else D10();
  L139():
    dx36 = getTryDispatchBuiltinValue(dr16);
    goto L136(dx36);
  L140():
    effects = ld effects;
    check L142() else D12();
  L141():
    r28 = dyn base2(<sym effects>);
    goto L10(r28);
  D10():
    deopt 36 [dx20, dx21, 1, x15];
  D12():
    deopt 48 [effects];
  L11():
    goto L14();
  L14():
    x23 = ld x;
    check L153() else D16();
  L129():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L9(dx16, dx23);
  L130():
    x16 = force? x15;
    checkMissing(x16);
    c10 = `is.object`(x16);
    if c10 then L132() else L133(dx20, dx21, 1, x16);
  L142():
    effects1 = force? effects;
    checkMissing(effects1);
    c12 = `==`(effects1, NULL);
    goto L10(c12);
  L143():
    as_matrix = ldf `as.matrix`;
    check L144() else D13();
  D13():
    deopt 53 [];
  D16():
    deopt 68 [x23];
  L131(dx33, dx34, r22, dx35):
    r24 = `:`(r22, dx35);
    __ = ldf `[` in base;
    r25 = dyn __(dx34, r24);
    goto L9(dx33, r25);
  L132():
    dr14 = tryDispatchBuiltin.1("$", x16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dx20, dx21, 1, dr14);
  L133(dx28, dx29, r20, x18):
    r23 = `$`(x18, <sym rank>);
    goto L131(dx28, dx29, r20, r23);
  L144():
    p3 = prom<V +>{
      effects2 = ld effects;
      effects3 = force? effects2;
      checkMissing(effects3);
      return effects3;
    };
    r32 = dyn as_matrix(p3);
    check L145() else D14();
  L153():
    x24 = force? x23;
    checkMissing(x24);
    c15 = `is.object`(x24);
    if c15 then L155() else L156(x24);
  D14():
    deopt 55 [r32];
  L134():
    dx32 = getTryDispatchBuiltinValue(dr14);
    goto L131(dx20, dx21, 1, dx32);
  L145():
    c14 = `is.object`(r32);
    if c14 then L146() else L147(r32);
  L154(dx42):
    st rdf = dx42;
    as_matrix1 = ldf `as.matrix`;
    check L158() else D17();
  L155():
    dr20 = tryDispatchBuiltin.1("$", x24);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L157() else L156(dr20);
  L156(x26):
    r42 = `$`(x26, <sym df.residual>);
    goto L154(r42);
  D17():
    deopt 73 [];
  L12(dx39):
    st effects = dx39;
    goto L14();
  L146():
    dr18 = tryDispatchBuiltin.1("[", r32);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L148() else L147(dr18);
  L147(r34):
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L149() else L150();
  L157():
    dx41 = getTryDispatchBuiltinValue(dr20);
    goto L154(dx41);
  L158():
    p4 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      c16 = `is.object`(x28);
      if c16 then L1() else L2(x28);
    L0(dx44):
      return dx44;
    L1():
      dr22 = tryDispatchBuiltin.1("$", x28);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x30):
      r43 = `$`(x30, <sym residuals>);
      goto L0(r43);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx43);
    };
    r45 = dyn as_matrix1(p4);
    check L159() else D18();
  D18():
    deopt 75 [r45];
  L13(r39):
    __2 = ldf `[` in base;
    r41 = dyn __2(r32, r39, <missing>, FALSE);
    goto L12(r41);
  L148():
    dx38 = getTryDispatchBuiltinValue(dr18);
    goto L12(dx38);
  L149():
    asgn = ld asgn;
    check L151() else D15();
  L150():
    r37 = dyn base3(<sym asgn>);
    goto L13(r37);
  L159():
    st resid = r45;
    x31 = ld x;
    check L160() else D19();
  D15():
    deopt 57 [r34, asgn];
  D19():
    deopt 77 [x31];
  L151():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    r40 = seq_along(asgn1);
    goto L13(r40);
  L160():
    x32 = force? x31;
    checkMissing(x32);
    c17 = `is.object`(x32);
    if c17 then L162() else L163(x32);
  L161(dx46):
    st wt = dx46;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L165() else L166();
  L162():
    dr24 = tryDispatchBuiltin.1("$", x32);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L164() else L163(dr24);
  L163(x34):
    r46 = `$`(x34, <sym weights>);
    goto L161(r46);
  L15(r48):
    r49 = `!`(r48);
    c19 = `as.logical`(r49);
    if c19 then L168() else L16();
  L164():
    dx45 = getTryDispatchBuiltinValue(dr24);
    goto L161(dx45);
  L165():
    wt = ld wt;
    check L167() else D20();
  L166():
    r47 = dyn base4(<sym wt>);
    goto L15(r47);
  D20():
    deopt 82 [wt];
  L16():
    goto L18();
  L18():
    colSums = ldf colSums;
    check L174() else D23();
  L167():
    wt1 = force? wt;
    checkMissing(wt1);
    c18 = `==`(wt1, NULL);
    goto L15(c18);
  L168():
    resid = ld resid;
    check L169() else D21();
  D21():
    deopt 86 [resid];
  D23():
    deopt 96 [];
  L169():
    resid1 = force? resid;
    checkMissing(resid1);
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L170() else L171();
  L174():
    p5 = prom<V +>{
      resid5 = ld resid;
      resid6 = force? resid5;
      checkMissing(resid6);
      r55 = `^`(resid6, 2.0);
      return r55;
    };
    r57 = dyn colSums(p5);
    check L175() else D24();
  D24():
    deopt 98 [r57];
  L17(resid4, r51):
    r53 = `*`(resid4, r51);
    st resid = r53;
    goto L18();
  L170():
    wt2 = ld wt;
    check L172() else D22();
  L171():
    r50 = dyn base5(<sym wt>);
    goto L17(resid1, r50);
  L175():
    st RSS = r57;
    unique = ldf unique;
    check L176() else D25();
  D22():
    deopt 88 [resid1, wt2];
  D25():
    deopt 101 [];
  L172():
    wt3 = force? wt2;
    checkMissing(wt3);
    r52 = sqrt(wt3);
    goto L17(resid1, r52);
  L176():
    p6 = prom<V +>{
      asgn2 = ld asgn;
      asgn3 = force? asgn2;
      checkMissing(asgn3);
      return asgn3;
    };
    r59 = dyn unique(p6);
    check L177() else D26();
  D26():
    deopt 103 [r59];
  L177():
    st uasgn = r59;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L178() else L179();
  L19(r61):
    c22 = `is.object`(r61);
    if c22 then L189() else L190(r61);
  L178():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L180() else L181();
  L179():
    r60 = dyn base6("(Intercept)", <lang attr(`$`(x, terms), "term.labels")>);
    goto L19(r60);
  L20(r63):
    c21 = ldf c in base;
    r66 = dyn c21("(Intercept)", r63);
    check L188() else D29();
  L21(dx50):
    st nmeffect = dx50;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L193() else L194();
  L180():
    x35 = ld x;
    check L182() else D27();
  L181():
    r62 = dyn base7(<lang `$`(x, terms)>, "term.labels");
    goto L20(r62);
  L189():
    dr28 = tryDispatchBuiltin.1("[", r61);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L191() else L190(dr28);
  L190(r68):
    uasgn = ld uasgn;
    check L192() else D30();
  D27():
    deopt 110 [x35];
  D29():
    deopt 117 [r66];
  D30():
    deopt 119 [r68, 1.0, uasgn];
  L22(r72):
    st nterms = r72;
    NCOL = ldf NCOL;
    check L197() else D33();
  L182():
    x36 = force? x35;
    checkMissing(x36);
    c20 = `is.object`(x36);
    if c20 then L184() else L185(x36);
  L188():
    goto L19(r66);
  L191():
    dx49 = getTryDispatchBuiltinValue(dr28);
    goto L21(dx49);
  L192():
    uasgn1 = force? uasgn;
    checkMissing(uasgn1);
    r69 = `+`(1.0, uasgn1);
    __3 = ldf `[` in base;
    r70 = dyn __3(r68, r69);
    goto L21(r70);
  L193():
    uasgn2 = ld uasgn;
    check L195() else D31();
  L194():
    r71 = dyn base8(<sym uasgn>);
    goto L22(r71);
  D31():
    deopt 126 [uasgn2];
  D33():
    deopt 132 [];
  L183(dx48):
    attr = ldf attr in base;
    r65 = dyn attr(dx48, "term.labels");
    check L187() else D28();
  L184():
    dr26 = tryDispatchBuiltin.1("$", x36);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L186() else L185(dr26);
  L185(x38):
    r64 = `$`(x38, <sym terms>);
    goto L183(r64);
  L195():
    uasgn3 = force? uasgn2;
    checkMissing(uasgn3);
    length = ldf length in base;
    r73 = dyn length(uasgn3);
    check L196() else D32();
  L197():
    p7 = prom<V +>{
      effects4 = ld effects;
      effects5 = force? effects4;
      checkMissing(effects5);
      return effects5;
    };
    r75 = dyn NCOL(p7);
    check L198() else D34();
  D28():
    deopt 115 [r65];
  D32():
    deopt 129 [r73];
  D34():
    deopt 134 [r75];
  L186():
    dx47 = getTryDispatchBuiltinValue(dr26);
    goto L183(dx47);
  L187():
    goto L20(r65);
  L196():
    goto L22(r73);
  L198():
    st nresp = r75;
    numeric = ldf numeric;
    check L199() else D35();
  D35():
    deopt 137 [];
  L199():
    p8 = prom<V +>{
      nterms = ld nterms;
      nterms1 = force? nterms;
      checkMissing(nterms1);
      return nterms1;
    };
    r77 = dyn numeric(p8);
    check L200() else D36();
  D36():
    deopt 139 [r77];
  L200():
    st df = r77;
    matrix = ldf matrix;
    check L201() else D37();
  D37():
    deopt 142 [];
  L201():
    p9 = prom<V +>{
      nterms2 = ld nterms;
      nterms3 = force? nterms2;
      checkMissing(nterms3);
      return nterms3;
    };
    p10 = prom<V +>{
      nresp = ld nresp;
      nresp1 = force? nresp;
      checkMissing(nresp1);
      return nresp1;
    };
    r80 = dyn matrix(NA_LGL, p9, p10);
    check L202() else D38();
  D38():
    deopt 146 [r80];
  L202():
    st ss = r80;
    nterms4 = ld nterms;
    check L203() else D39();
  D39():
    deopt 148 [nterms4];
  L203():
    nterms5 = force? nterms4;
    checkMissing(nterms5);
    c23 = `as.logical`(nterms5);
    if c23 then L204() else L23();
  L23():
    goto L43();
  L43():
    cat1 = ldf cat;
    check L273() else D67();
  L204():
    seq = ldf seq;
    check L205() else D40();
  D40():
    deopt 151 [];
  D67():
    deopt 266 [];
  L205():
    p11 = prom<V +>{
      nterms6 = ld nterms;
      nterms7 = force? nterms6;
      checkMissing(nterms7);
      return nterms7;
    };
    r82 = dyn seq(p11);
    check L206() else D41();
  L273():
    r125 = dyn cat1("\nTerms:\n");
    check L274() else D68();
  D41():
    deopt 153 [r82];
  D68():
    deopt 268 [r125];
  L206():
    s = toForSeq(r82);
    l = length(s);
    i = 0;
    goto L24(i);
  L274():
    nterms8 = ld nterms;
    check L275() else D69();
  D69():
    deopt 269 [nterms8];
  L24(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l, i2);
    if c24 then L207() else L33();
  L275():
    nterms9 = force? nterms8;
    checkMissing(nterms9);
    r126 = `==`(nterms9, 0);
    c46 = `as.logical`(r126);
    if c46 then L276() else L44();
  L33():
    x39 = `[[`(s, i2, NULL, TRUE);
    st i = x39;
    asgn4 = ld asgn;
    check L208() else D42();
  L44():
    rdf6 = ld rdf;
    check L332() else D104();
  L59():
    sym38 = ldf invisible;
    base38 = ldf invisible in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L468() else L469();
  L207():
    df = ld df;
    check L240() else D56();
  L276():
    rdf = ld rdf;
    check L277() else D70();
  D42():
    deopt 154 [i2, asgn4];
  D56():
    deopt 209 [df];
  D70():
    deopt 273 [rdf];
  D104():
    deopt 382 [rdf6];
  L91(r335):
    popenv;
    return r335;
  L208():
    asgn5 = force? asgn4;
    checkMissing(asgn5);
    uasgn4 = ld uasgn;
    check L209() else D43();
  L240():
    df1 = force? df;
    checkMissing(df1);
    r108 = `>`(df1, 0);
    st keep = r108;
    intercept1 = ld intercept;
    check L241() else D57();
  L277():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r127 = `>`(rdf1, 0);
    c47 = `as.logical`(r127);
    if c47 then L278() else L45();
  L332():
    rdf7 = force? rdf6;
    checkMissing(rdf7);
    r198 = `>`(rdf7, 0);
    c57 = `as.logical`(r198);
    if c57 then L333() else L60();
  L468():
    x60 = ld x;
    check L470() else D178();
  L469():
    r334 = dyn base38(<sym x>);
    goto L91(r334);
  D43():
    deopt 155 [i2, asgn5, uasgn4];
  D57():
    deopt 214 [intercept1];
  D178():
    deopt 641 [x60];
  L45():
    print1 = ldf print;
    check L329() else D102();
  L58(r186):
    goto L59();
  L60():
    goto L63();
  L63():
    apply = ldf apply;
    check L347() else D113();
  L209():
    uasgn5 = force? uasgn4;
    checkMissing(uasgn5);
    c25 = `is.object`(uasgn5);
    if c25 then L210() else L211(i2, asgn5, uasgn5);
  L241():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    r109 = `!`(intercept2);
    c30 = `as.logical`(r109);
    if c30 then L242() else L34(c30);
  L278():
    RSS = ld RSS;
    check L279() else D71();
  L333():
    nterms10 = ld nterms;
    check L334() else D105();
  L470():
    x61 = force? x60;
    checkMissing(x61);
    invisible = ldf invisible in base;
    r336 = dyn invisible(x61);
    check L471() else D179();
  D71():
    deopt 277 [RSS];
  D102():
    deopt 379 [];
  D105():
    deopt 386 [nterms10];
  D113():
    deopt 417 [];
  D179():
    deopt 644 [r336];
  L25(i8, asgn9, dx52):
    r84 = `==`(asgn9, dx52);
    st ai = r84;
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L214() else L215();
  L34(c32):
    c41 = `as.logical`(c32);
    if c41 then L248() else L36();
  L210():
    dr30 = tryDispatchBuiltin.1("[", uasgn5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L212() else L211(i2, asgn5, dr30);
  L211(i6, asgn7, uasgn7):
    i9 = ld i;
    check L213() else D44();
  L242():
    uasgn8 = ld uasgn;
    check L243() else D58();
  L279():
    RSS1 = force? RSS;
    checkMissing(RSS1);
    st ss = RSS1;
    sapply = ldf sapply;
    check L280() else D72();
  L329():
    p26 = prom<V +>{
      matrix1 = ldf matrix;
      p25 = prom<V +>{
        sym21 = ldf list;
        base21 = ldf list in base;
        guard21 = `==`.4(sym21, base21);
        if guard21 then L2() else L3();
      L0(r188):
        return r188;
      L2():
        sym22 = ldf c;
        base22 = ldf c in base;
        guard22 = `==`.4(sym22, base22);
        if guard22 then L4() else L5();
      L3():
        r187 = dyn base21(<lang c("Sum of Squares", "Deg. of Freedom")>, "<empty>");
        goto L0(r187);
      L1(r190):
        list1 = ldf list in base;
        r192 = dyn list1(r190, "<empty>");
        goto L0(r192);
      L4():
        c56 = ldf c in base;
        r191 = dyn c56("Sum of Squares", "Deg. of Freedom");
        goto L1(r191);
      L5():
        r189 = dyn base22("Sum of Squares", "Deg. of Freedom");
        goto L1(r189);
      };
      r194 = dyn matrix1[, , , dimnames](0.0, 2, 1, p25);
      return r194;
    };
    r196 = dyn print1(p26);
    check L330() else D103();
  L334():
    nterms11 = force? nterms10;
    checkMissing(nterms11);
    r199 = `+`(nterms11, 1);
    st nterms = r199;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L335() else L336();
  L347():
    p30 = prom<V +>{
      zapsmall = ldf zapsmall;
      p29 = prom<V +>{
        ss12 = ld ss;
        ss13 = force? ss12;
        checkMissing(ss13);
        return ss13;
      };
      r211 = dyn zapsmall(p29);
      return r211;
    };
    p31 = prom<V +>{
      format5 = ld format;
      format6 = force? format5;
      checkMissing(format6);
      return format6;
    };
    r214 = dyn apply(p30, 2, p31);
    check L348() else D114();
  L471():
    goto L91(r336);
  D44():
    deopt 157 [i6, asgn7, uasgn7, i9];
  D58():
    deopt 217 [c30, uasgn8];
  D72():
    deopt 281 [];
  D103():
    deopt 381 [r196];
  D114():
    deopt 421 [r214];
  L26(i13, r86):
    l1 = ld df;
    c26 = `is.object`(l1);
    if c26 then L218() else L219(i13, r86, l1);
  L36():
    goto L38();
  L38():
    nmeffect = ld nmeffect;
    check L253() else D59();
  L61(r201):
    st df = r201;
    rbind = ldf rbind;
    check L340() else D109();
  L212():
    dx51 = getTryDispatchBuiltinValue(dr30);
    goto L25(i2, asgn5, dx51);
  L213():
    i10 = force? i9;
    __4 = ldf `[` in base;
    r83 = dyn __4(uasgn7, i10);
    goto L25(i6, asgn7, r83);
  L214():
    ai = ld ai;
    check L216() else D45();
  L215():
    r85 = dyn base9(<sym ai>);
    goto L26(i8, r85);
  L243():
    uasgn9 = force? uasgn8;
    checkMissing(uasgn9);
    c33 = `is.object`(uasgn9);
    if c33 then L244() else L245(c30, uasgn9);
  L248():
    l7 = ld keep;
    c42 = `is.object`(l7);
    if c42 then L249() else L250(FALSE, l7);
  L280():
    p13 = prom<V +>{
      ss4 = ld ss;
      ss5 = force? ss4;
      checkMissing(ss5);
      return ss5;
    };
    p14 = prom<V +>{
      format = ld format;
      format1 = force? format;
      checkMissing(format1);
      return format1;
    };
    r130 = dyn sapply(p13, p14);
    check L281() else D73();
  L330():
    goto L58(r196);
  L335():
    df8 = ld df;
    check L337() else D106();
  L336():
    r200 = dyn base23(<sym df>, <sym rdf>);
    goto L61(r200);
  L348():
    st ssp = r214;
    t1 = ldf t;
    check L349() else D115();
  D45():
    deopt 164 [i8, ai];
  D59():
    deopt 234 [nmeffect];
  D73():
    deopt 284 [r130];
  D106():
    deopt 393 [df8];
  D109():
    deopt 401 [];
  D115():
    deopt 424 [];
  L27(i17, dx54):
    st df = dx54;
    effects6 = ld effects;
    check L222() else D48();
  L35(c37, dx60):
    r111 = `==`(dx60, 0.0);
    c38 = `as.logical`(r111);
    c39 = `&&`(c37, c38);
    goto L34(c39);
  L37(r115, dx62):
    st keep = dx62;
    goto L38();
  L216():
    ai1 = force? ai;
    checkMissing(ai1);
    sum = ldf sum in base;
    r87 = dyn sum(ai1);
    check L217() else D46();
  L218():
    dr32 = tryDispatchBuiltin.0("[<-", l1, r86);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L220() else L219(i13, r86, dr32);
  L219(i15, r89, l3):
    i18 = ld i;
    check L221() else D47();
  L244():
    dr38 = tryDispatchBuiltin.1("[", uasgn9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L246() else L245(c30, dr38);
  L245(c35, uasgn11):
    __6 = ldf `[` in base;
    r110 = dyn __6(uasgn11, 1);
    goto L35(c35, r110);
  L249():
    dr40 = tryDispatchBuiltin.0("[<-", l7, FALSE);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L251() else L250(FALSE, dr40);
  L250(r113, l9):
    ___2 = ldf `[<-` in base;
    r116 = dyn ___2(l9, FALSE, 1);
    goto L37(r113, r116);
  L253():
    nmeffect1 = force? nmeffect;
    checkMissing(nmeffect1);
    c43 = `is.object`(nmeffect1);
    if c43 then L254() else L255(nmeffect1);
  L281():
    st ssp = r130;
    sym12 = ldf `is.matrix`;
    base12 = ldf `is.matrix` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L282() else L283();
  L337():
    df9 = force? df8;
    checkMissing(df9);
    rdf8 = ld rdf;
    check L338() else D107();
  L340():
    p27 = prom<V +>{
      ss10 = ld ss;
      ss11 = force? ss10;
      checkMissing(ss11);
      return ss11;
    };
    p28 = prom<V +>{
      RSS4 = ld RSS;
      RSS5 = force? RSS4;
      checkMissing(RSS5);
      return RSS5;
    };
    r205 = dyn rbind(p27, p28);
    check L341() else D110();
  L349():
    p35 = prom<V +>{
      cbind = ldf cbind;
      p32 = prom<V +>{
        ssp6 = ld ssp;
        ssp7 = force? ssp6;
        checkMissing(ssp7);
        return ssp7;
      };
      p34 = prom<V +>{
        format7 = ldf format;
        p33 = prom<V +>{
          df10 = ld df;
          df11 = force? df10;
          checkMissing(df11);
          return df11;
        };
        r217 = dyn format7(p33);
        return r217;
      };
      r219 = dyn cbind(p32, p34);
      return r219;
    };
    r221 = dyn t1(p35);
    check L350() else D116();
  D46():
    deopt 167 [i8, r87];
  D47():
    deopt 169 [i15, r89, l3, r86, i18];
  D48():
    deopt 173 [i17, effects6];
  D107():
    deopt 395 [rdf8];
  D110():
    deopt 404 [r205];
  D116():
    deopt 426 [r221];
  L39(dx64):
    st nmeffect = dx64;
    df2 = ld df;
    check L258() else D61();
  L46(r132):
    r134 = `!`(r132);
    c48 = `as.logical`(r134);
    if c48 then L286() else L47();
  L217():
    goto L26(i8, r87);
  L220():
    dx53 = getTryDispatchBuiltinValue(dr32);
    goto L27(i13, dx53);
  L221():
    i19 = force? i18;
    ___ = ldf `[<-` in base;
    r92 = dyn ___(l3, r86, i19);
    goto L27(i15, r92);
  L222():
    effects7 = force? effects6;
    checkMissing(effects7);
    c27 = `is.object`(effects7);
    if c27 then L223() else L224(i17, effects7);
  L246():
    dx59 = getTryDispatchBuiltinValue(dr38);
    goto L35(c30, dx59);
  L251():
    dx61 = getTryDispatchBuiltinValue(dr40);
    goto L37(FALSE, dx61);
  L254():
    dr42 = tryDispatchBuiltin.1("[", nmeffect1);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L256() else L255(dr42);
  L255(nmeffect3):
    keep = ld keep;
    check L257() else D60();
  L282():
    ssp = ld ssp;
    check L284() else D74();
  L283():
    r131 = dyn base12(<sym ssp>);
    goto L46(r131);
  L338():
    rdf9 = force? rdf8;
    checkMissing(rdf9);
    c58 = ldf c in base;
    r202 = dyn c58(df9, rdf9);
    check L339() else D108();
  L341():
    st ss = r205;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L342() else L343();
  L350():
    st tmp = r221;
    ncol = ldf ncol;
    check L351() else D117();
  D60():
    deopt 236 [nmeffect3, keep];
  D61():
    deopt 240 [df2];
  D74():
    deopt 288 [ssp];
  D108():
    deopt 398 [r202];
  D117():
    deopt 429 [];
  L28(i23, dx56):
    st ef = dx56;
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L227() else L228();
  L47():
    goto L48();
  L48():
    as_matrix2 = ldf `as.matrix`;
    check L290() else D78();
  L62(r207):
    st nmeffect = r207;
    goto L63();
  L223():
    dr34 = tryDispatchBuiltin.1("[", effects7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L225() else L224(i17, dr34);
  L224(i21, effects9):
    ai2 = ld ai;
    check L226() else D49();
  L256():
    dx63 = getTryDispatchBuiltinValue(dr42);
    goto L39(dx63);
  L257():
    keep1 = force? keep;
    __7 = ldf `[` in base;
    r118 = dyn __7(nmeffect3, keep1);
    goto L39(r118);
  L258():
    df3 = force? df2;
    checkMissing(df3);
    c44 = `is.object`(df3);
    if c44 then L259() else L260(df3);
  L284():
    ssp1 = force? ssp;
    checkMissing(ssp1);
    is_matrix = ldf `is.matrix` in base;
    r133 = dyn is_matrix(ssp1);
    check L285() else D75();
  L286():
    t = ldf t;
    check L287() else D76();
  L339():
    goto L61(r202);
  L342():
    nmeffect4 = ld nmeffect;
    check L344() else D111();
  L343():
    r206 = dyn base24(<sym nmeffect>, "Residuals");
    goto L62(r206);
  L351():
    p36 = prom<V +>{
      effects10 = ld effects;
      effects11 = force? effects10;
      checkMissing(effects11);
      return effects11;
    };
    r223 = dyn ncol(p36);
    check L352() else D118();
  D49():
    deopt 175 [i21, effects9, ai2];
  D75():
    deopt 291 [r133];
  D76():
    deopt 294 [];
  D78():
    deopt 301 [];
  D111():
    deopt 408 [nmeffect4];
  D118():
    deopt 431 [r223];
  L29(i26, r95):
    r97 = `>`(r95, 1.0);
    c28 = `as.logical`(r97);
    if c28 then L231() else L30();
  L40(dx66):
    st df = dx66;
    ss = ld ss;
    check L263() else D63();
  L225():
    dx55 = getTryDispatchBuiltinValue(dr34);
    goto L28(i17, dx55);
  L226():
    ai3 = force? ai2;
    __5 = ldf `[` in base;
    r93 = dyn __5(effects7, ai3, <missing>, FALSE);
    goto L28(i21, r93);
  L227():
    ai4 = ld ai;
    check L229() else D50();
  L228():
    r94 = dyn base10(<sym ai>);
    goto L29(i23, r94);
  L259():
    dr44 = tryDispatchBuiltin.1("[", df3);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L261() else L260(dr44);
  L260(df5):
    keep2 = ld keep;
    check L262() else D62();
  L285():
    goto L46(r133);
  L287():
    p15 = prom<V +>{
      ssp2 = ld ssp;
      ssp3 = force? ssp2;
      checkMissing(ssp3);
      return ssp3;
    };
    r136 = dyn t(p15);
    check L288() else D77();
  L290():
    p17 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r139):
      return r139;
    L1():
      ssp4 = ld ssp;
      ssp5 = force? ssp4;
      checkMissing(ssp5);
      format2 = ldf format;
      p16 = prom<V +>{
        rdf2 = ld rdf;
        rdf3 = force? rdf2;
        checkMissing(rdf3);
        return rdf3;
      };
      r141 = dyn format2(p16);
      c49 = ldf c in base;
      r142 = dyn c49(ssp5, r141);
      goto L0(r142);
    L2():
      r138 = dyn base13(<sym ssp>, <lang format(rdf)>);
      goto L0(r138);
    };
    r144 = dyn as_matrix2(p17);
    check L291() else D79();
  L344():
    nmeffect5 = force? nmeffect4;
    checkMissing(nmeffect5);
    c59 = ldf c in base;
    r208 = dyn c59(nmeffect5, "Residuals");
    check L345() else D112();
  L352():
    r224 = `>`(r223, 1);
    c60 = `as.logical`(r224);
    if c60 then L353() else L64();
  D50():
    deopt 185 [i23, ai4];
  D62():
    deopt 242 [df5, keep2];
  D63():
    deopt 246 [ss];
  D77():
    deopt 296 [r136];
  D79():
    deopt 303 [r144];
  D112():
    deopt 412 [r208];
  L30():
    ef2 = ld ef;
    check L235() else D54();
  L31(i29, r101):
    l4 = ld ss;
    c29 = `is.object`(l4);
    if c29 then L236() else L237(i29, r101, l4);
  L64():
    st rn = "Sum of Squares";
    goto L68();
  L68():
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L364() else L365();
  L229():
    ai5 = force? ai4;
    checkMissing(ai5);
    sum1 = ldf sum in base;
    r96 = dyn sum1(ai5);
    check L230() else D51();
  L231():
    colSums1 = ldf colSums;
    check L232() else D52();
  L261():
    dx65 = getTryDispatchBuiltinValue(dr44);
    goto L40(dx65);
  L262():
    keep3 = force? keep2;
    __8 = ldf `[` in base;
    r119 = dyn __8(df5, keep3);
    goto L40(r119);
  L263():
    ss1 = force? ss;
    checkMissing(ss1);
    c45 = `is.object`(ss1);
    if c45 then L264() else L265(ss1);
  L288():
    st ssp = r136;
    goto L48();
  L291():
    st tmp = r144;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L292() else L293();
  L345():
    goto L62(r208);
  L353():
    colnames1 = ldf colnames;
    check L354() else D119();
  D51():
    deopt 188 [i23, r96];
  D52():
    deopt 192 [i26];
  D54():
    deopt 195 [i26, ef2];
  D119():
    deopt 435 [];
  L32(i33, dx58):
    st ss = dx58;
    goto L24(i33);
  L41(dx68):
    st ss = dx68;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L268() else L269();
  L49(r146):
    r148 = `>`(r146, 1);
    c50 = `as.logical`(r148);
    if c50 then L296() else L50();
  L69(r239):
    l11 = ld tmp;
    dimnames__1 = ldf `dimnames<-`;
    check L372() else D128();
  L230():
    goto L29(i23, r96);
  L232():
    p12 = prom<V +>{
      ef = ld ef;
      ef1 = force? ef;
      checkMissing(ef1);
      r98 = `^`(ef1, 2.0);
      return r98;
    };
    r100 = dyn colSums1(p12);
    check L233() else D53();
  L235():
    ef3 = force? ef2;
    checkMissing(ef3);
    r102 = `^`(ef3, 2.0);
    goto L31(i26, r102);
  L236():
    dr36 = tryDispatchBuiltin.0("[<-", l4, r101);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L238() else L237(i29, r101, dr36);
  L237(i31, r104, l6):
    i34 = ld i;
    check L239() else D55();
  L264():
    dr46 = tryDispatchBuiltin.1("[", ss1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L266() else L265(dr46);
  L265(ss3):
    keep4 = ld keep;
    check L267() else D64();
  L292():
    ss6 = ld ss;
    check L294() else D80();
  L293():
    r145 = dyn base14(<sym ss>);
    goto L49(r145);
  L354():
    p37 = prom<V +>{
      x44 = ld x;
      x45 = force? x44;
      checkMissing(x45);
      c61 = `is.object`(x45);
      if c61 then L1() else L2(x45);
    L0(dx72):
      return dx72;
    L1():
      dr50 = tryDispatchBuiltin.1("$", x45);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(x47):
      r225 = `$`(x47, <sym coefficients>);
      goto L0(r225);
    L3():
      dx71 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx71);
    };
    r227 = dyn colnames1(p37);
    check L355() else D120();
  L364():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L366() else L367();
  L365():
    r238 = dyn base26(<lang c(rn, "Deg. of Freedom")>, <sym nmeffect>);
    goto L69(r238);
  D53():
    deopt 194 [i26, r100];
  D55():
    deopt 200 [i31, r104, l6, r101, i34];
  D64():
    deopt 248 [ss3, keep4];
  D80():
    deopt 307 [ss6];
  D120():
    deopt 437 [r227];
  D128():
    deopt 468 [r239, l11, r239];
  L42(r122):
    st nterms = r122;
    goto L43();
  L50():
    st rn = "Sum of Squares";
    goto L54();
  L54():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L307() else L308();
  L70(r241):
    nmeffect6 = ld nmeffect;
    check L370() else D126();
  L233():
    goto L31(i26, r100);
  L238():
    dx57 = getTryDispatchBuiltinValue(dr36);
    goto L32(i29, dx57);
  L239():
    i35 = force? i34;
    ___1 = ldf `[<-` in base;
    r107 = dyn ___1(l4, i35, <missing>, r101);
    goto L32(i31, r107);
  L266():
    dx67 = getTryDispatchBuiltinValue(dr46);
    goto L41(dx67);
  L267():
    keep5 = force? keep4;
    __9 = ldf `[` in base;
    r120 = dyn __9(ss1, keep5, <missing>, FALSE);
    goto L41(r120);
  L268():
    df6 = ld df;
    check L270() else D65();
  L269():
    r121 = dyn base11(<sym df>);
    goto L42(r121);
  L294():
    ss7 = force? ss6;
    checkMissing(ss7);
    length2 = ldf length in base;
    r147 = dyn length2(ss7);
    check L295() else D81();
  L296():
    colnames = ldf colnames;
    check L297() else D82();
  L355():
    st rn = r227;
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L356() else L357();
  L366():
    rn6 = ld rn;
    check L368() else D124();
  L367():
    r240 = dyn base27(<sym rn>, "Deg. of Freedom");
    goto L70(r240);
  L372():
    r244 = dyn dimnames__1(l11, NULL, r239);
    check L373() else D129();
  D65():
    deopt 258 [df6];
  D81():
    deopt 310 [r147];
  D82():
    deopt 314 [];
  D124():
    deopt 458 [rn6];
  D126():
    deopt 463 [nmeffect6];
  D129():
    deopt 470 [r239, r244];
  L55(r162):
    l10 = ld tmp;
    dimnames__ = ldf `dimnames<-`;
    check L314() else D90();
  L65(r229):
    c63 = `as.logical`(r229);
    if c63 then L359() else L66();
  L270():
    df7 = force? df6;
    checkMissing(df7);
    length1 = ldf length in base;
    r123 = dyn length1(df7);
    check L271() else D66();
  L295():
    goto L49(r147);
  L297():
    p18 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      c51 = `is.object`(x41);
      if c51 then L1() else L2(x41);
    L0(dx70):
      return dx70;
    L1():
      dr48 = tryDispatchBuiltin.1("$", x41);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(x43):
      r149 = `$`(x43, <sym fitted.values>);
      goto L0(r149);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx69);
    };
    r151 = dyn colnames(p18);
    check L298() else D83();
  L307():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L309() else L310();
  L308():
    r161 = dyn base17(<lang c(rn, "Deg. of Freedom")>, "Residuals");
    goto L55(r161);
  L356():
    rn4 = ld rn;
    check L358() else D121();
  L357():
    r228 = dyn base25(<sym rn>);
    goto L65(r228);
  L368():
    rn7 = force? rn6;
    checkMissing(rn7);
    c64 = ldf c in base;
    r242 = dyn c64(rn7, "Deg. of Freedom");
    check L369() else D125();
  L370():
    nmeffect7 = force? nmeffect6;
    checkMissing(nmeffect7);
    list2 = ldf list in base;
    r243 = dyn list2(r241, nmeffect7);
    check L371() else D127();
  L373():
    st tmp = r244;
    print2 = ldf print;
    check L374() else D130();
  D66():
    deopt 261 [r123];
  D83():
    deopt 316 [r151];
  D90():
    deopt 346 [r162, l10, r162];
  D121():
    deopt 440 [rn4];
  D125():
    deopt 462 [r242];
  D127():
    deopt 466 [r243];
  D130():
    deopt 473 [];
  L56(r164):
    list = ldf list in base;
    r166 = dyn list(r164, "Residuals");
    check L313() else D89();
  L66():
    goto L67(NULL);
  L67(r236):
    goto L68();
  L271():
    goto L42(r123);
  L298():
    st rn = r151;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L299() else L300();
  L309():
    rn2 = ld rn;
    check L311() else D87();
  L310():
    r163 = dyn base18(<sym rn>, "Deg. of Freedom");
    goto L56(r163);
  L314():
    r167 = dyn dimnames__(l10, NULL, r162);
    check L315() else D91();
  L358():
    rn5 = force? rn4;
    checkMissing(rn5);
    c62 = `==`(rn5, NULL);
    goto L65(c62);
  L359():
    paste1 = ldf paste;
    check L360() else D122();
  L369():
    goto L70(r242);
  L371():
    goto L69(r243);
  L374():
    p41 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    r246 = dyn print2[, quote, right](p41, FALSE, TRUE);
    check L375() else D131();
  D87():
    deopt 337 [rn2];
  D89():
    deopt 344 [r166];
  D91():
    deopt 348 [r162, r167];
  D122():
    deopt 444 [];
  D131():
    deopt 479 [r246];
  L51(r153):
    c53 = `as.logical`(r153);
    if c53 then L302() else L52();
  L299():
    rn = ld rn;
    check L301() else D84();
  L300():
    r152 = dyn base15(<sym rn>);
    goto L51(r152);
  L311():
    rn3 = force? rn2;
    checkMissing(rn3);
    c54 = ldf c in base;
    r165 = dyn c54(rn3, "Deg. of Freedom");
    check L312() else D88();
  L313():
    goto L55(r166);
  L315():
    st tmp = r167;
    print = ldf print;
    check L316() else D92();
  L360():
    p40 = prom<V +>{
      seq1 = ldf seq;
      p39 = prom<V +>{
        ncol1 = ldf ncol;
        p38 = prom<V +>{
          effects12 = ld effects;
          effects13 = force? effects12;
          checkMissing(effects13);
          return effects13;
        };
        r231 = dyn ncol1(p38);
        return r231;
      };
      r233 = dyn seq1(p39);
      return r233;
    };
    r235 = dyn paste1("resp", p40);
    check L361() else D123();
  L375():
    x48 = ld x;
    check L376() else D132();
  D84():
    deopt 319 [rn];
  D88():
    deopt 341 [r165];
  D92():
    deopt 351 [];
  D123():
    deopt 447 [r235];
  D132():
    deopt 480 [x48];
  L52():
    goto L53(NULL);
  L53(r159):
    goto L54();
  L301():
    rn1 = force? rn;
    checkMissing(rn1);
    c52 = `==`(rn1, NULL);
    goto L51(c52);
  L302():
    paste = ldf paste;
    check L303() else D85();
  L312():
    goto L56(r165);
  L316():
    p20 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    r169 = dyn print[, quote, right](p20, FALSE, TRUE);
    check L317() else D93();
  L361():
    st rn = r235;
    goto L67(r235);
  L376():
    x49 = force? x48;
    checkMissing(x49);
    c65 = `is.object`(x49);
    if c65 then L378() else L379(x49);
  D85():
    deopt 323 [];
  D93():
    deopt 357 [r169];
  L303():
    p19 = prom<V +>{
      sym16 = ldf seq_along;
      base16 = ldf seq_along in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r155):
      return r155;
    L1():
      ss8 = ld ss;
      ss9 = force? ss8;
      checkMissing(ss9);
      r156 = seq_along(ss9);
      goto L0(r156);
    L2():
      r154 = dyn base16(<sym ss>);
      goto L0(r154);
    };
    r158 = dyn paste("resp", p19);
    check L304() else D86();
  L317():
    cat2 = ldf cat;
    check L318() else D94();
  L377(dx74):
    st rank = dx74;
    cat5 = ldf cat;
    check L381() else D133();
  L378():
    dr52 = tryDispatchBuiltin.1("$", x49);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L380() else L379(dr52);
  L379(x51):
    r247 = `$`(x51, <sym rank>);
    goto L377(r247);
  D86():
    deopt 326 [r158];
  D94():
    deopt 359 [];
  D133():
    deopt 485 [];
  L304():
    st rn = r158;
    goto L53(r158);
  L318():
    r170 = dyn cat2("\n");
    check L319() else D95();
  L380():
    dx73 = getTryDispatchBuiltinValue(dr52);
    goto L377(dx73);
  L381():
    r248 = dyn cat5("\n");
    check L382() else D134();
  D95():
    deopt 361 [r170];
  D134():
    deopt 487 [r248];
  L319():
    sym19 = ldf sqrt;
    base19 = ldf sqrt in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L320() else L321();
  L382():
    rdf10 = ld rdf;
    check L383() else D135();
  D135():
    deopt 488 [rdf10];
  L57(r172):
    st rs = r172;
    cat3 = ldf cat;
    check L324() else D98();
  L320():
    RSS2 = ld RSS;
    check L322() else D96();
  L321():
    r171 = dyn base19(<lang `/`(RSS, rdf)>);
    goto L57(r171);
  L383():
    rdf11 = force? rdf10;
    checkMissing(rdf11);
    r249 = `>`(rdf11, 0);
    c66 = `as.logical`(r249);
    if c66 then L384() else L71();
  D96():
    deopt 363 [RSS2];
  D98():
    deopt 370 [];
  L71():
    goto L73();
  L73():
    as_matrix3 = ldf `as.matrix`;
    check L394() else D142();
  L322():
    RSS3 = force? RSS2;
    checkMissing(RSS3);
    rdf4 = ld rdf;
    check L323() else D97();
  L324():
    p21 = prom<V +>{
      sym20 = ldf length;
      base20 = ldf length in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L2() else L3();
    L0(r176):
      r178 = `>`(r176, 1);
      c55 = `as.logical`(r178);
      if c55 then L4() else L1();
    L2():
      rs = ld rs;
      rs1 = force? rs;
      checkMissing(rs1);
      length3 = ldf length in base;
      r177 = dyn length3(rs1);
      goto L0(r177);
    L3():
      r175 = dyn base20(<sym rs>);
      goto L0(r175);
    L1():
      return "Residual standard error:";
    L4():
      return "Residual standard errors:";
    };
    p24 = prom<V +>{
      sapply1 = ldf sapply;
      p22 = prom<V +>{
        rs2 = ld rs;
        rs3 = force? rs2;
        checkMissing(rs3);
        return rs3;
      };
      p23 = prom<V +>{
        format3 = ld format;
        format4 = force? format3;
        checkMissing(format4);
        return format4;
      };
      r182 = dyn sapply1(p22, p23);
      return r182;
    };
    r184 = dyn cat3(p21, p24);
    check L325() else D99();
  L384():
    sym28 = ldf sqrt;
    base28 = ldf sqrt in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L385() else L386();
  D97():
    deopt 364 [RSS3, rdf4];
  D99():
    deopt 373 [r184];
  D142():
    deopt 511 [];
  L72(r251):
    st rs = r251;
    cat6 = ldf cat;
    check L389() else D138();
  L323():
    rdf5 = force? rdf4;
    checkMissing(rdf5);
    r173 = `/`(RSS3, rdf5);
    r174 = sqrt(r173);
    goto L57(r174);
  L325():
    cat4 = ldf cat;
    check L326() else D100();
  L385():
    RSS6 = ld RSS;
    check L387() else D136();
  L386():
    r250 = dyn base28(<lang `/`(RSS, rdf)>);
    goto L72(r250);
  L394():
    p46 = prom<V +>{
      x52 = ld x;
      x53 = force? x52;
      checkMissing(x53);
      c68 = `is.object`(x53);
      if c68 then L1() else L2(x53);
    L0(dx76):
      return dx76;
    L1():
      dr54 = tryDispatchBuiltin.1("$", x53);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(x55):
      r266 = `$`(x55, <sym coefficients>);
      goto L0(r266);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx75);
    };
    r268 = dyn as_matrix3(p46);
    check L395() else D143();
  D100():
    deopt 375 [];
  D136():
    deopt 493 [RSS6];
  D138():
    deopt 500 [];
  D143():
    deopt 513 [r268];
  L326():
    r185 = dyn cat4("\n");
    check L327() else D101();
  L387():
    RSS7 = force? RSS6;
    checkMissing(RSS7);
    rdf12 = ld rdf;
    check L388() else D137();
  L389():
    p42 = prom<V +>{
      sym29 = ldf length;
      base29 = ldf length in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L2() else L3();
    L0(r255):
      r257 = `>`(r255, 1);
      c67 = `as.logical`(r257);
      if c67 then L4() else L1();
    L2():
      rs4 = ld rs;
      rs5 = force? rs4;
      checkMissing(rs5);
      length4 = ldf length in base;
      r256 = dyn length4(rs5);
      goto L0(r256);
    L3():
      r254 = dyn base29(<sym rs>);
      goto L0(r254);
    L1():
      return "Residual standard error:";
    L4():
      return "Residual standard errors:";
    };
    p45 = prom<V +>{
      sapply2 = ldf sapply;
      p43 = prom<V +>{
        rs6 = ld rs;
        rs7 = force? rs6;
        checkMissing(rs7);
        return rs7;
      };
      p44 = prom<V +>{
        format8 = ld format;
        format9 = force? format8;
        checkMissing(format9);
        return format9;
      };
      r261 = dyn sapply2(p43, p44);
      return r261;
    };
    r263 = dyn cat6(p42, p45);
    check L390() else D139();
  L395():
    c69 = `is.object`(r268);
    if c69 then L396() else L397();
  D101():
    deopt 377 [r185];
  D137():
    deopt 494 [RSS7, rdf12];
  D139():
    deopt 503 [r263];
  L74(dx78):
    st coef = dx78;
    qrx4 = ld qrx;
    check L399() else D144();
  L327():
    goto L58(r185);
  L388():
    rdf13 = force? rdf12;
    checkMissing(rdf13);
    r252 = `/`(RSS7, rdf13);
    r253 = sqrt(r252);
    goto L72(r253);
  L390():
    cat7 = ldf cat;
    check L391() else D140();
  L396():
    dr56 = tryDispatchBuiltin.1("[", r268);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L398() else L397();
  L397():
    __10 = ldf `[` in base;
    r271 = dyn __10(r268, <missing>, 1);
    goto L74(r271);
  D140():
    deopt 505 [];
  D144():
    deopt 519 [qrx4];
  L391():
    r264 = dyn cat7("\n");
    check L392() else D141();
  L398():
    dx77 = getTryDispatchBuiltinValue(dr56);
    goto L74(dx77);
  L399():
    qrx5 = force? qrx4;
    checkMissing(qrx5);
    c70 = `is.object`(qrx5);
    if c70 then L401() else L402(qrx5);
  D141():
    deopt 507 [r264];
  L392():
    goto L73();
  L400(dx80):
    st R = dx80;
    R = ld R;
    check L404() else D145();
  L401():
    dr58 = tryDispatchBuiltin.1("$", qrx5);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L403() else L402(dr58);
  L402(qrx7):
    r272 = `$`(qrx7, <sym qr>);
    goto L400(r272);
  D145():
    deopt 523 [R];
  L403():
    dx79 = getTryDispatchBuiltinValue(dr58);
    goto L400(dx79);
  L404():
    R1 = force? R;
    checkMissing(R1);
    c71 = `is.object`(R1);
    if c71 then L405() else L406(R1);
  L75(dx82):
    st R = dx82;
    l12 = ld R;
    c72 = `is.object`(l12);
    if c72 then L415() else L416(0.0, l12);
  L405():
    dr60 = tryDispatchBuiltin.1("[", R1);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L407() else L406(dr60);
  L406(R3):
    sym30 = ldf min;
    base30 = ldf min in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L408() else L409();
  L76(r276, r277):
    r285 = `:`(r276, r277);
    __11 = ldf `[` in base;
    r286 = dyn __11(R1, r285, <missing>, FALSE);
    goto L75(r286);
  L78(dx84):
    st R = dx84;
    rank = ld rank;
    check L420() else D151();
  L407():
    dx81 = getTryDispatchBuiltinValue(dr60);
    goto L75(dx81);
  L408():
    sym31 = ldf dim;
    base31 = ldf dim in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L410() else L411();
  L409():
    r275 = dyn base30(<lang dim(R)>);
    goto L76(1, r275);
  L415():
    dr62 = tryDispatchBuiltin.0("[<-", l12, 0.0);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L417() else L416(0.0, dr62);
  L416(r288, l14):
    lower_tri = ldf `lower.tri`;
    check L418() else D149();
  D149():
    deopt 547 [r288, l14, 0.0];
  D151():
    deopt 552 [rank];
  L77(R9, r281, r282):
    min = ldf min in base;
    r284 = dyn min(r282);
    check L414() else D148();
  L410():
    R10 = ld R;
    check L412() else D146();
  L411():
    r280 = dyn base31(<sym R>);
    goto L77(R3, 1, r280);
  L417():
    dx83 = getTryDispatchBuiltinValue(dr62);
    goto L78(dx83);
  L418():
    p47 = prom<V +>{
      R12 = ld R;
      R13 = force? R12;
      checkMissing(R13);
      return R13;
    };
    r292 = dyn lower_tri(p47);
    check L419() else D150();
  L420():
    rank1 = force? rank;
    checkMissing(rank1);
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L421() else L422();
  D146():
    deopt 530 [R3, 1, R10];
  D148():
    deopt 535 [R9, r281, r284];
  D150():
    deopt 549 [r288, l14, 0.0, r292];
  L79(rank4, r295):
    st nc = r295;
    r297 = `<`(rank4, r295);
    c73 = `as.logical`(r297);
    if c73 then L425() else L80();
  L412():
    R11 = force? R10;
    checkMissing(R11);
    dim = ldf dim in base;
    r283 = dyn dim(R11);
    check L413() else D147();
  L414():
    goto L76(r281, r284);
  L419():
    ___3 = ldf `[<-` in base;
    r293 = dyn ___3(l14, 0.0, r292);
    goto L78(r293);
  L421():
    coef = ld coef;
    check L423() else D152();
  L422():
    r294 = dyn base32(<sym coef>);
    goto L79(rank1, r294);
  D147():
    deopt 533 [R3, 1, r283];
  D152():
    deopt 555 [rank1, coef];
  L80():
    goto L82();
  L82():
    sym33 = ldf sum;
    base33 = ldf sum in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L434() else L435();
  L413():
    goto L77(R3, 1, r283);
  L423():
    coef1 = force? coef;
    checkMissing(coef1);
    length5 = ldf length in base;
    r296 = dyn length5(coef1);
    check L424() else D153();
  L425():
    cat8 = ldf cat;
    check L426() else D154();
  D153():
    deopt 558 [rank1, r296];
  D154():
    deopt 562 [];
  L83(r307):
    st d2 = r307;
    l15 = ld R;
    diag__ = ldf `diag<-`;
    check L442() else D162();
  L424():
    goto L79(rank1, r296);
  L426():
    p50 = prom<V +>{
      paste2 = ldf paste;
      p48 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        rank5 = ld rank;
        rank6 = force? rank5;
        checkMissing(rank6);
        r298 = `-`(nc1, rank6);
        return r298;
      };
      p49 = prom<V +>{
        nc2 = ld nc;
        nc3 = force? nc2;
        checkMissing(nc3);
        return nc3;
      };
      r301 = dyn paste2(p48, "out of", p49, "effects not estimable\n");
      return r301;
    };
    r303 = dyn cat8(p50);
    check L427() else D155();
  L434():
    sym34 = ldf abs;
    base34 = ldf abs in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L436() else L437();
  L435():
    r306 = dyn base33(<lang abs(diag(R))>);
    goto L83(r306);
  D155():
    deopt 564 [r303];
  D162():
    deopt 595 [0.0, l15, 0.0];
  L84(r309):
    sum2 = ldf sum in base;
    r313 = dyn sum2(r309);
    check L441() else D161();
  L427():
    R14 = ld R;
    check L428() else D156();
  L436():
    diag = ldf diag;
    check L438() else D158();
  L437():
    r308 = dyn base34(<lang diag(R)>);
    goto L84(r308);
  L442():
    r314 = dyn diag__(l15, NULL, 0.0);
    check L443() else D163();
  D156():
    deopt 565 [R14];
  D158():
    deopt 584 [];
  D161():
    deopt 590 [r313];
  D163():
    deopt 597 [0.0, r314];
  L428():
    R15 = force? R14;
    checkMissing(R15);
    c74 = `is.object`(R15);
    if c74 then L429() else L430(R15);
  L438():
    p51 = prom<V +>{
      R18 = ld R;
      R19 = force? R18;
      checkMissing(R19);
      return R19;
    };
    r311 = dyn diag(p51);
    check L439() else D159();
  L441():
    goto L83(r313);
  L443():
    st R = r314;
    sym35 = ldf sum;
    base35 = ldf sum in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L444() else L445();
  D159():
    deopt 586 [r311];
  L81(dx86):
    st R = dx86;
    goto L82();
  L85(r316):
    d2 = ld d2;
    check L451() else D167();
  L429():
    dr64 = tryDispatchBuiltin.1("[", R15);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L431() else L430(dr64);
  L430(R17):
    rank7 = ld rank;
    check L432() else D157();
  L439():
    abs = ldf abs in base;
    r312 = dyn abs(r311);
    check L440() else D160();
  L444():
    sym36 = ldf abs;
    base36 = ldf abs in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L446() else L447();
  L445():
    r315 = dyn base35(<lang abs(R)>);
    goto L85(r315);
  D157():
    deopt 569 [R17, 1, rank7];
  D160():
    deopt 588 [r312];
  D167():
    deopt 608 [r316, d2];
  L86(r318):
    sum3 = ldf sum in base;
    r320 = dyn sum3(r318);
    check L450() else D166();
  L431():
    dx85 = getTryDispatchBuiltinValue(dr64);
    goto L81(dx85);
  L432():
    rank8 = force? rank7;
    checkMissing(rank8);
    r304 = `:`(1, rank8);
    __12 = ldf `[` in base;
    r305 = dyn __12(R15, <missing>, r304, FALSE);
    goto L81(r305);
  L440():
    goto L84(r312);
  L446():
    R20 = ld R;
    check L448() else D164();
  L447():
    r317 = dyn base36(<sym R>);
    goto L86(r317);
  L451():
    d3 = force? d2;
    checkMissing(d3);
    r321 = `/`(r316, d3);
    tol1 = ld tol;
    check L452() else D168();
  D164():
    deopt 603 [R20];
  D166():
    deopt 608 [r320];
  D168():
    deopt 610 [r321, tol1];
  L448():
    R21 = force? R20;
    checkMissing(R21);
    abs1 = ldf abs in base;
    r319 = dyn abs1(R21);
    check L449() else D165();
  L450():
    goto L85(r320);
  L452():
    tol2 = force? tol1;
    checkMissing(tol2);
    r322 = `>`(r321, tol2);
    c75 = `as.logical`(r322);
    if c75 then L453() else L87();
  D165():
    deopt 606 [r319];
  L87():
    cat10 = ldf cat;
    check L457() else D171();
  L88():
    sym37 = ldf nzchar;
    base37 = ldf nzchar in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L459() else L460();
  L449():
    goto L86(r319);
  L453():
    cat9 = ldf cat;
    check L454() else D169();
  D169():
    deopt 614 [];
  D171():
    deopt 618 [];
  L89(r327):
    c77 = `as.logical`(r327);
    if c77 then L464() else L90();
  L454():
    r323 = dyn cat9("Estimated effects may be unbalanced\n");
    check L455() else D170();
  L457():
    r325 = dyn cat10("Estimated effects are balanced\n");
    check L458() else D172();
  L459():
    naprint = ldf naprint;
    check L461() else D173();
  L460():
    r326 = dyn base37(<lang `<-`(mess, naprint(`$`(x, na.action)))>);
    goto L89(r326);
  D170():
    deopt 616 [r323];
  D172():
    deopt 620 [r325];
  D173():
    deopt 624 [];
  L90():
    goto L59();
  L455():
    goto L88();
  L458():
    goto L88();
  L461():
    p52 = prom<V +>{
      x56 = ld x;
      x57 = force? x56;
      checkMissing(x57);
      c76 = `is.object`(x57);
      if c76 then L1() else L2(x57);
    L0(dx89):
      return dx89;
    L1():
      dr66 = tryDispatchBuiltin.1("$", x57);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(x59):
      r328 = `$`(x59, <sym na.action>);
      goto L0(r328);
    L3():
      dx88 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx88);
    };
    r330 = dyn naprint(p52);
    check L462() else D174();
  L464():
    cat11 = ldf cat;
    check L465() else D176();
  D174():
    deopt 626 [r330];
  D176():
    deopt 631 [];
  L462():
    st mess = r330;
    nzchar = ldf nzchar in base;
    r331 = dyn nzchar(r330);
    check L463() else D175();
  L465():
    p53 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r333 = dyn cat11[, , sep](p53, "\n", "");
    check L466() else D177();
  D175():
    deopt 629 [r331];
  D177():
    deopt 636 [r333];
  L463():
    goto L89(r331);
  L466():
    goto L59();
  }
}