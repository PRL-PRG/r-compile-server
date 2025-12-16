fun main() {
  () -+> V { reg r:cls, reg aperm:cls, reg UCBAdmissions:*, reg UCBAdmissions1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg l:*, reg dimnames:cls, reg r10:V, reg c2:L, reg r13:V, reg l2:*, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg r16:V, reg l4:*, reg dx1:V, reg ____:cls, reg r17:V, reg dimnames__:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c3:cls, reg r21:V, reg l5:*, reg dimnames1:cls, reg r22:V, reg names__:cls, reg r23:V, reg dimnames__1:cls, reg r24:V, reg __:cls, reg r25:V, reg r26:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r28:V, reg fourfoldplot:cls, reg marginSums:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg c4:cls, reg r32:V, reg p4:p(V +), reg r34:V, reg p5:p(V +), reg r36:V, reg fourfoldplot1:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r38:V, reg fourfoldplot2:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r40:V |
    mkenv;
    r = clos inner1387557061;
    st fourfoldplot = r;
    aperm = ldf aperm;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      UCBAdmissions = ld UCBAdmissions;
      UCBAdmissions1 = force? UCBAdmissions;
      checkMissing(UCBAdmissions1);
      return UCBAdmissions1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(2.0, 1.0, 3.0);
      goto L0(r4);
    L2():
      r2 = dyn base(2.0, 1.0, 3.0);
      goto L0(r2);
    };
    r6 = dyn aperm(p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r6];
  L4():
    st x = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r8):
    l = ld x;
    dimnames = ldf dimnames;
    check L8() else D3();
  L5():
    c1 = ldf c in base;
    r9 = dyn c1("Yes", "No");
    check L7() else D2();
  L6():
    r7 = dyn base1("Yes", "No");
    goto L0(r7);
  D2():
    deopt 14 [r9];
  D3():
    deopt 16 [r8, l, r8];
  L7():
    goto L0(r9);
  L8():
    r10 = dyn dimnames(r8, NULL);
    check L9() else D4();
  D4():
    deopt 18 [r8, l, r8, r10];
  L9():
    c2 = `is.object`(r10);
    if c2 then L10() else L11(r8, l, r10);
  L1(r16, l4, dx1):
    dimnames__ = ldf `dimnames<-`;
    check L13() else D5();
  L10():
    dr = tryDispatchBuiltin.0("[[<-", r10, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(r8, l, dr);
  L11(r13, l2, r14):
    ____ = ldf `[[<-` in base;
    r17 = dyn ____(r14, r8, 2.0);
    goto L1(r13, l2, r17);
  D5():
    deopt 23 [r16, l4, dx1];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(r8, l, dx);
  L13():
    r18 = dyn dimnames__(l4, NULL, dx1);
    check L14() else D6();
  D6():
    deopt 25 [r16, r18];
  L14():
    st x = r18;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L2(r20):
    l5 = ld x;
    dimnames1 = ldf dimnames;
    check L18() else D8();
  L15():
    c3 = ldf c in base;
    r21 = dyn c3("Sex", "Admit?", "Department");
    check L17() else D7();
  L16():
    r19 = dyn base2("Sex", "Admit?", "Department");
    goto L2(r19);
  D7():
    deopt 33 [r21];
  D8():
    deopt 35 [r20, l5, r20];
  L17():
    goto L2(r21);
  L18():
    r22 = dyn dimnames1(r20, NULL);
    check L19() else D9();
  D9():
    deopt 37 [r20, l5, r20, r22];
  L19():
    names__ = ldf `names<-`;
    check L20() else D10();
  D10():
    deopt 39 [r20, l5, r22, r20];
  L20():
    r23 = dyn names__(r22, NULL, r20);
    check L21() else D11();
  D11():
    deopt 41 [r20, l5, r23];
  L21():
    dimnames__1 = ldf `dimnames<-`;
    check L22() else D12();
  D12():
    deopt 42 [r20, l5, r23];
  L22():
    r24 = dyn dimnames__1(l5, NULL, r23);
    check L23() else D13();
  D13():
    deopt 44 [r20, r24];
  L23():
    st x = r24;
    __ = ldf `::`;
    check L24() else D14();
  D14():
    deopt 47 [];
  L24():
    r25 = dyn __("stats", "ftable");
    check L25() else D15();
  D15():
    deopt 50 [r25];
  L25():
    checkFun.0(r25);
    r26 = r25 as cls;
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r28 = dyn r26(p2);
    check L26() else D16();
  D16():
    deopt 53 [r28];
  L26():
    fourfoldplot = ldf fourfoldplot;
    check L27() else D17();
  D17():
    deopt 55 [];
  L27():
    p5 = prom<V +>{
      marginSums = ldf marginSums;
      p3 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      p4 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r31):
        return r31;
      L1():
        c4 = ldf c in base;
        r32 = dyn c4(1.0, 2.0);
        goto L0(r32);
      L2():
        r30 = dyn base3(1.0, 2.0);
        goto L0(r30);
      };
      r34 = dyn marginSums(p3, p4);
      return r34;
    };
    r36 = dyn fourfoldplot(p5);
    check L28() else D18();
  D18():
    deopt 57 [r36];
  L28():
    fourfoldplot1 = ldf fourfoldplot;
    check L29() else D19();
  D19():
    deopt 59 [];
  L29():
    p6 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r38 = dyn fourfoldplot1(p6);
    check L30() else D20();
  D20():
    deopt 61 [r38];
  L30():
    fourfoldplot2 = ldf fourfoldplot;
    check L31() else D21();
  D21():
    deopt 63 [];
  L31():
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r40 = dyn fourfoldplot2[, margin](p7, 2.0);
    check L32() else D22();
  D22():
    deopt 67 [r40];
  L32():
    popenv;
    return r40;
  }
}
fun inner1387557061(x, color, `conf.level`, std, margin, space, main, mfrow, mfcol) {
  (reg x:*, reg color:*, reg conf_level:*, reg std:*, reg margin:*, reg space:*, reg main:*, reg mfrow:*, reg mfcol:*) -+> V { var x:*, var color:*, reg color_isMissing:L, reg color_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var std:*, reg std_isMissing:L, reg std_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var margin:*, reg margin_isMissing:L, reg margin_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c2:cls, reg r10:V, reg p2:p(V +), var space:*, reg space_isMissing:L, reg space_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var mfrow:*, reg mfrow_isMissing:L, reg mfrow_orDefault:*, var mfcol:*, reg mfcol_isMissing:L, reg mfcol_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x1:*, reg x2:V, reg is_array:cls, reg r14:V, reg r15:V, reg c3:L, reg stop:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg x3:*, reg x4:V, reg dim:cls, reg r22:V, reg length:cls, reg r23:V, reg r24:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r29:V, reg c5:V, reg c6:L, reg array:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg x9:*, reg x10:V, reg dim1:cls, reg r35:V, reg c7:cls, reg r36:V, reg p4:p(V +), reg r38:V, reg r39:V, reg array1:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r41:V, reg r42:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg r44:V, reg x13:*, reg x14:V, reg dim2:cls, reg r45:V, reg c8:cls, reg r46:V, reg p6:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r48:V, reg r49:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r50:V, reg r51:V, reg x15:*, reg x16:V, reg dimnames1:cls, reg r52:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r53:V, reg r54:V, reg list:cls, reg r55:V, reg c9:cls, reg r56:V, reg p7:p(V +), reg r58:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r60:V, reg r61:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r62:V, reg r63:V, reg x17:*, reg x18:V, reg dim3:cls, reg r64:V, reg length1:cls, reg r65:V, reg r66:V, reg c10:L, reg stop1:cls, reg r67:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r69:V, reg r70:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r71:V, reg r72:V, reg x19:*, reg x20:V, reg dim4:cls, reg r73:V, reg c11:L, reg r75:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r76:V, reg r77:V, reg any:cls, reg r78:V, reg c12:L, reg stop2:cls, reg r79:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r81:V, reg r82:V, reg x21:*, reg x22:V, reg dimnames2:cls, reg r83:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r84:V, reg r85:V, reg dnx:*, reg dnx1:V, reg c13:V, reg c14:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r86:V, reg r87:V, reg vector:cls, reg r88:V, reg which:cls, reg sapply:cls, reg dnx2:*, reg dnx3:V, reg p8:p(V +), reg is_null:*, reg is_null1:V, reg p9:p(V +), reg r92:V, reg p10:p(V +), reg r94:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x23:V, reg LETTERS:*, reg LETTERS1:V, reg c16:L, reg i6:I, reg LETTERS3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r95:V, reg i11:I, reg LETTERS6:V, reg r96:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r97:V, reg i14:I, reg LETTERS9:V, reg r98:V, reg x24:*, reg x25:V, reg dim5:cls, reg r99:V, reg c17:L, reg i16:I, reg LETTERS11:V, reg r101:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i18:I, reg LETTERS13:V, reg dx5:V, reg i19:*, reg i20:V, reg __1:cls, reg r102:V, reg r103:I, reg __2:cls, reg r104:V, reg l1:*, reg c18:L, reg i22:I, reg dx7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i24:I, reg dx11:V, reg i25:*, reg i26:V, reg ____:cls, reg r105:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r106:V, reg r107:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r108:V, reg r109:V, reg dnx4:*, reg dnx5:V, reg names:cls, reg r110:V, reg c19:V, reg c20:L, reg which1:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r112:V, reg r113:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r114:V, reg r115:V, reg dnx6:*, reg dnx7:V, reg names1:cls, reg r116:V, reg c21:V, reg p11:p(V +), reg r118:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r119:V, reg r120:V, reg i27:*, reg i28:V, reg any1:cls, reg r121:V, reg c22:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r122:V, reg r123:V, reg c23:cls, reg r124:V, reg c24:L, reg r126:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg i29:*, reg i30:V, reg __3:cls, reg r127:V, reg l4:*, reg names2:cls, reg r128:V, reg c25:L, reg dx15:V, reg l6:*, reg r130:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg l8:*, reg dx19:V, reg i31:*, reg i32:V, reg ___:cls, reg r131:V, reg names__:cls, reg r132:V, reg dnx8:*, reg dnx9:V, reg l9:*, reg dimnames__:cls, reg r133:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r134:V, reg r135:V, reg x26:*, reg x27:V, reg dim6:cls, reg r136:V, reg c26:L, reg r138:V, reg dr12:V, reg dc6:L, reg dx21:V, reg dx22:V, reg __4:cls, reg r139:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r140:V, reg r141:V, reg conf_level1:*, reg conf_level2:V, reg length2:cls, reg r142:V, reg r143:V, reg c27:L, reg c29:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r144:V, reg c32:L, reg r145:V, reg conf_level3:*, reg conf_level4:V, reg is_finite:cls, reg r146:V, reg c33:L, reg c34:V, reg c36:L, reg c38:V, reg conf_level5:*, reg conf_level6:V, reg r147:V, reg c39:L, reg c40:V, reg c42:L, reg c44:V, reg conf_level7:*, reg conf_level8:V, reg r148:V, reg c45:L, reg c46:V, reg r149:V, reg c48:L, reg stop3:cls, reg r150:V, reg conf_level9:*, reg conf_level10:V, reg r152:V, reg c49:L, reg match_arg:cls, reg std1:*, reg std2:V, reg p12:p(V +), reg r155:V, reg r156:cls, reg r157:cls, reg r158:cls, reg r159:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r160:V, reg r161:V, reg c50:cls, reg r162:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r163:V, reg r164:V, reg c51:cls, reg r165:V, reg par:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r166:V, reg r167:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r168:V, reg r169:V, reg main1:*, reg main2:V, reg c52:V, reg c53:L, reg r170:R, reg c54:cls, reg r171:V, reg p13:p(V +), reg r173:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r174:V, reg on_exit:cls, reg r176:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r177:V, reg r178:V, reg mfrow1:*, reg mfrow2:V, reg c55:V, reg r179:V, reg c56:L, reg mfrow3:*, reg mfrow4:V, reg c57:L, reg mfrow6:V, reg dr14:V, reg dc7:L, reg dx23:V, reg dx24:V, reg __5:cls, reg r180:V, reg mfrow7:*, reg mfrow8:V, reg c58:L, reg mfrow10:V, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg __6:cls, reg r181:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r182:V, reg r183:V, reg mfcol1:*, reg mfcol2:V, reg c59:V, reg r184:V, reg c60:L, reg mfcol3:*, reg mfcol4:V, reg c61:L, reg mfcol6:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg __7:cls, reg r185:V, reg mfcol7:*, reg mfcol8:V, reg c62:L, reg mfcol10:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg __8:cls, reg r186:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r187:V, reg r188:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r189:V, reg r190:V, reg k:*, reg k1:V, reg r191:V, reg r192:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r193:V, reg r194:V, reg k2:*, reg k3:V, reg nr:*, reg nr1:V, reg r195:V, reg r196:V, reg nr2:*, reg nr3:V, reg nc:*, reg nc1:V, reg r197:V, reg k4:*, reg k5:V, reg r198:V, reg c63:L, reg stop4:cls, reg r199:V, reg byrow:*, reg byrow1:V, reg c64:L, reg expand_grid:cls, reg nc2:*, reg nc3:V, reg r201:V, reg p14:p(V +), reg nr4:*, reg nr5:V, reg r203:V, reg p15:p(V +), reg r205:V, reg c65:L, reg r207:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r210:V, reg r212:V, reg c66:cls, reg r213:V, reg __9:cls, reg r214:V, reg expand_grid1:cls, reg nr6:*, reg nr7:V, reg r215:V, reg p16:p(V +), reg nc4:*, reg nc5:V, reg r217:V, reg p17:p(V +), reg r219:V, reg nc6:*, reg nc7:V, reg r220:V, reg space1:*, reg space2:V, reg r221:V, reg r222:V, reg nc8:*, reg nc9:V, reg r223:V, reg space3:*, reg space4:V, reg r224:V, reg r225:V, reg k6:*, reg k7:V, reg r226:V, reg c67:L, reg space5:*, reg space6:V, reg r227:V, reg r228:V, reg r229:V, reg nr8:*, reg nr9:V, reg gamma:*, reg gamma1:V, reg r230:V, reg space7:*, reg space8:V, reg r231:V, reg r232:V, reg r233:V, reg nr10:*, reg nr11:V, reg r234:V, reg space9:*, reg space10:V, reg r235:V, reg r236:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r237:V, reg r238:V, reg totalWidth:*, reg totalWidth1:V, reg c68:cls, reg r239:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r240:V, reg r241:V, reg totalHeight:*, reg totalHeight1:V, reg c69:cls, reg r242:V, reg dev_hold:cls, reg r243:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r244:V, reg on_exit1:cls, reg r246:V, reg plot_new:cls, reg r247:V, reg plot_window:cls, reg xlim:*, reg xlim1:V, reg p18:p(V +), reg ylim:*, reg ylim1:V, reg p19:p(V +), reg r250:V, reg odds:cls, reg x28:*, reg x29:V, reg p20:p(V +), reg r252:V, reg space11:*, reg space12:V, reg strheight:cls, reg r253:V, reg r254:V, reg r255:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r258:V, reg r259:R, reg r260:V, reg strwidth:cls, reg sym48:cls, reg base48:cls, reg guard48:L, reg r261:V, reg r262:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r263:V, reg r264:V, reg x30:*, reg x31:V, reg c70:cls, reg r265:V, reg as_character:cls, reg r266:V, reg p21:p(V +), reg scale:*, reg scale1:V, reg p22:p(V +), reg r269:V, reg max:cls, reg r270:V, reg r271:V, reg r272:V, reg k8:*, reg k9:V, reg r273:V, reg s1:V, reg l10:I, reg i33:I, reg i34:I, reg i35:I, reg c71:L, reg x32:V, reg x33:*, reg x34:V, reg c72:L, reg i39:I, reg x36:V, reg dr24:V, reg dc12:L, reg dx35:V, reg i41:I, reg dx36:V, reg i42:*, reg i43:V, reg __10:cls, reg r274:V, reg stdize:cls, reg tab:*, reg tab1:V, reg p23:p(V +), reg std3:*, reg std4:V, reg p24:p(V +), reg x37:*, reg x38:V, reg p25:p(V +), reg r278:V, reg indexMatrix:*, reg indexMatrix1:V, reg c73:L, reg i45:I, reg indexMatrix3:V, reg dr26:V, reg dc13:L, reg dx37:V, reg i47:I, reg dx38:V, reg i48:*, reg i49:V, reg __11:cls, reg r279:V, reg xInd:*, reg xInd1:V, reg r280:V, reg r281:V, reg xInd2:*, reg xInd3:V, reg r282:V, reg r283:V, reg space13:*, reg space14:V, reg r284:V, reg r285:V, reg indexMatrix4:*, reg indexMatrix5:V, reg c74:L, reg i51:I, reg indexMatrix7:V, reg dr28:V, reg dc14:L, reg dx39:V, reg i53:I, reg dx40:V, reg i54:*, reg i55:V, reg __12:cls, reg r286:V, reg k10:*, reg k11:V, reg r287:V, reg c75:L, reg space15:*, reg space16:V, reg r288:V, reg i58:I, reg r289:V, reg totalHeight2:*, reg totalHeight3:V, reg yInd:*, reg yInd1:V, reg r290:V, reg r291:V, reg gamma2:*, reg gamma3:V, reg r292:V, reg yInd2:*, reg yInd3:V, reg r293:V, reg r294:V, reg space17:*, reg space18:V, reg r295:V, reg r296:V, reg r297:V, reg plot_window1:cls, reg xlim2:*, reg xlim3:V, reg xOrig:*, reg xOrig1:V, reg r298:V, reg p26:p(V +), reg ylim2:*, reg ylim3:V, reg yOrig:*, reg yOrig1:V, reg r300:V, reg p27:p(V +), reg r302:V, reg debug:*, reg debug1:V, reg c76:L, reg abline:cls, reg space19:*, reg space20:V, reg r303:V, reg p28:p(V +), reg r305:V, reg abline1:cls, reg space21:*, reg space22:V, reg r306:V, reg p29:p(V +), reg r308:V, reg abline2:cls, reg gamma4:*, reg gamma5:V, reg r309:V, reg space23:*, reg space24:V, reg r310:V, reg r311:V, reg p30:p(V +), reg r313:V, reg abline3:cls, reg space25:*, reg space26:V, reg r314:V, reg p31:p(V +), reg r316:V, reg abline4:cls, reg space27:*, reg space28:V, reg r317:V, reg p32:p(V +), reg r319:V, reg i61:I, reg space29:*, reg space30:V, reg r321:V, reg r322:V, reg text:cls, reg u:*, reg u1:V, reg p33:p(V +), reg paste:cls, reg sym50:cls, reg base50:cls, reg guard50:L, reg r324:V, reg r325:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r326:V, reg r327:V, reg x39:*, reg x40:V, reg dimnames3:cls, reg r328:V, reg names3:cls, reg r329:V, reg c77:L, reg r331:V, reg dr30:V, reg dc15:L, reg dx41:V, reg dx42:V, reg __13:cls, reg r332:V, reg p34:p(V +), reg sym52:cls, reg base52:cls, reg guard52:L, reg r334:V, reg r335:V, reg x41:*, reg x42:V, reg dimnames4:cls, reg r336:V, reg c78:L, reg r338:V, reg dr32:V, reg dc16:L, reg dx43:V, reg dx44:V, reg __14:cls, reg r339:V, reg c79:L, reg dx46:V, reg dr34:V, reg dc17:L, reg dx47:V, reg dx48:V, reg __15:cls, reg r340:V, reg p35:p(V +), reg r342:V, reg p36:p(V +), reg sym53:cls, reg base53:cls, reg guard53:L, reg r344:V, reg r345:V, reg adjCorr:*, reg adjCorr1:V, reg r346:V, reg c80:cls, reg r347:V, reg p37:p(V +), reg scale2:*, reg scale3:V, reg p38:p(V +), reg r350:V, reg text1:cls, reg u2:*, reg u3:V, reg r351:V, reg p39:p(V +), reg paste1:cls, reg sym54:cls, reg base54:cls, reg guard54:L, reg r353:V, reg r354:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r355:V, reg r356:V, reg x43:*, reg x44:V, reg dimnames5:cls, reg r357:V, reg names4:cls, reg r358:V, reg c81:L, reg r360:V, reg dr36:V, reg dc18:L, reg dx49:V, reg dx50:V, reg __16:cls, reg r361:V, reg p40:p(V +), reg sym56:cls, reg base56:cls, reg guard56:L, reg r363:V, reg r364:V, reg x45:*, reg x46:V, reg dimnames6:cls, reg r365:V, reg c82:L, reg r367:V, reg dr38:V, reg dc19:L, reg dx51:V, reg dx52:V, reg __17:cls, reg r368:V, reg c83:L, reg dx54:V, reg dr40:V, reg dc20:L, reg dx55:V, reg dx56:V, reg __18:cls, reg r369:V, reg p41:p(V +), reg r371:V, reg p42:p(V +), reg sym57:cls, reg base57:cls, reg guard57:L, reg r373:V, reg r374:V, reg adjCorr2:*, reg adjCorr3:V, reg r375:V, reg c84:cls, reg r376:V, reg p43:p(V +), reg scale4:*, reg scale5:V, reg p44:p(V +), reg r379:V, reg text2:cls, reg u4:*, reg u5:V, reg r380:V, reg p45:p(V +), reg paste2:cls, reg sym58:cls, reg base58:cls, reg guard58:L, reg r382:V, reg r383:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r384:V, reg r385:V, reg x47:*, reg x48:V, reg dimnames7:cls, reg r386:V, reg names5:cls, reg r387:V, reg c85:L, reg r389:V, reg dr42:V, reg dc21:L, reg dx57:V, reg dx58:V, reg __19:cls, reg r390:V, reg p46:p(V +), reg sym60:cls, reg base60:cls, reg guard60:L, reg r392:V, reg r393:V, reg x49:*, reg x50:V, reg dimnames8:cls, reg r394:V, reg c86:L, reg r396:V, reg dr44:V, reg dc22:L, reg dx59:V, reg dx60:V, reg __20:cls, reg r397:V, reg c87:L, reg dx62:V, reg dr46:V, reg dc23:L, reg dx63:V, reg dx64:V, reg __21:cls, reg r398:V, reg p47:p(V +), reg r400:V, reg p48:p(V +), reg sym61:cls, reg base61:cls, reg guard61:L, reg r402:V, reg r403:V, reg adjCorr4:*, reg adjCorr5:V, reg r404:V, reg c88:cls, reg r405:V, reg p49:p(V +), reg scale6:*, reg scale7:V, reg p50:p(V +), reg r408:V, reg text3:cls, reg u6:*, reg u7:V, reg p51:p(V +), reg paste3:cls, reg sym62:cls, reg base62:cls, reg guard62:L, reg r410:V, reg r411:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r412:V, reg r413:V, reg x51:*, reg x52:V, reg dimnames9:cls, reg r414:V, reg names6:cls, reg r415:V, reg c89:L, reg r417:V, reg dr48:V, reg dc24:L, reg dx65:V, reg dx66:V, reg __22:cls, reg r418:V, reg p52:p(V +), reg sym64:cls, reg base64:cls, reg guard64:L, reg r420:V, reg r421:V, reg x53:*, reg x54:V, reg dimnames10:cls, reg r422:V, reg c90:L, reg r424:V, reg dr50:V, reg dc25:L, reg dx67:V, reg dx68:V, reg __23:cls, reg r425:V, reg c91:L, reg dx70:V, reg dr52:V, reg dc26:L, reg dx71:V, reg dx72:V, reg __24:cls, reg r426:V, reg p53:p(V +), reg r428:V, reg p54:p(V +), reg sym65:cls, reg base65:cls, reg guard65:L, reg r430:V, reg r431:V, reg adjCorr6:*, reg adjCorr7:V, reg r432:V, reg c92:cls, reg r433:V, reg p55:p(V +), reg scale8:*, reg scale9:V, reg p56:p(V +), reg r436:V, reg k12:*, reg k13:V, reg r437:V, reg c93:L, reg text4:cls, reg gamma6:*, reg gamma7:V, reg r438:V, reg r439:V, reg space31:*, reg space32:V, reg r440:V, reg r441:V, reg p57:p(V +), reg paste4:cls, reg sym66:cls, reg base66:cls, reg guard66:L, reg r443:V, reg r444:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r445:V, reg r446:V, reg x55:*, reg x56:V, reg dimnames11:cls, reg r447:V, reg names7:cls, reg r448:V, reg c94:L, reg r450:V, reg dr54:V, reg dc27:L, reg dx73:V, reg dx74:V, reg __25:cls, reg r451:V, reg p58:p(V +), reg sym68:cls, reg base68:cls, reg guard68:L, reg r453:V, reg r454:V, reg x57:*, reg x58:V, reg dimnames12:cls, reg r455:V, reg c95:L, reg r457:V, reg dr56:V, reg dc28:L, reg dx75:V, reg dx76:V, reg __26:cls, reg r458:V, reg c96:L, reg dx78:V, reg dr58:V, reg dc29:L, reg dx79:V, reg dx80:V, reg i64:*, reg i65:V, reg __27:cls, reg r459:V, reg p59:p(V +), reg r461:V, reg p60:p(V +), reg gamma8:*, reg gamma9:V, reg scale10:*, reg scale11:V, reg r463:V, reg p61:p(V +), reg r465:V, reg i66:I, reg odds1:cls, reg tab2:*, reg tab3:V, reg p62:p(V +), reg r468:V, reg c97:L, reg i68:I, reg r470:V, reg dr60:V, reg dc30:L, reg dx81:V, reg i70:I, reg dx82:V, reg r471:V, reg drawPie:cls, reg sym69:cls, reg base69:cls, reg guard69:L, reg r472:V, reg r473:V, reg fit:*, reg fit1:V, reg c98:L, reg fit3:V, reg dr62:V, reg dc31:L, reg dx83:V, reg dx84:V, reg __28:cls, reg r474:V, reg r475:V, reg p63:p(V +), reg color1:*, reg color2:V, reg c99:L, reg color4:V, reg dr64:V, reg dc32:L, reg dx85:V, reg dx86:V, reg d:*, reg d1:V, reg r477:V, reg r478:V, reg __29:cls, reg r479:V, reg p64:p(V +), reg r481:V, reg drawPie1:cls, reg sym70:cls, reg base70:cls, reg guard70:L, reg r482:V, reg r483:V, reg fit4:*, reg fit5:V, reg c100:L, reg fit7:V, reg dr66:V, reg dc33:L, reg dx87:V, reg dx88:V, reg __30:cls, reg r484:V, reg r485:V, reg p65:p(V +), reg color5:*, reg color6:V, reg c101:L, reg color8:V, reg dr68:V, reg dc34:L, reg dx89:V, reg dx90:V, reg d2:*, reg d3:V, reg r487:V, reg r488:V, reg __31:cls, reg r489:V, reg p66:p(V +), reg r491:V, reg drawPie2:cls, reg sym71:cls, reg base71:cls, reg guard71:L, reg r492:V, reg r493:V, reg fit8:*, reg fit9:V, reg c102:L, reg fit11:V, reg dr70:V, reg dc35:L, reg dx91:V, reg dx92:V, reg __32:cls, reg r494:V, reg r495:V, reg p67:p(V +), reg color9:*, reg color10:V, reg c103:L, reg color12:V, reg dr72:V, reg dc36:L, reg dx93:V, reg dx94:V, reg d4:*, reg d5:V, reg r497:V, reg r498:V, reg __33:cls, reg r499:V, reg p68:p(V +), reg r501:V, reg drawPie3:cls, reg sym72:cls, reg base72:cls, reg guard72:L, reg r502:V, reg r503:V, reg fit12:*, reg fit13:V, reg c104:L, reg fit15:V, reg dr74:V, reg dc37:L, reg dx95:V, reg dx96:V, reg __34:cls, reg r504:V, reg r505:V, reg p69:p(V +), reg color13:*, reg color14:V, reg c105:L, reg color16:V, reg dr76:V, reg dc38:L, reg dx97:V, reg dx98:V, reg d6:*, reg d7:V, reg r507:V, reg r508:V, reg __35:cls, reg r509:V, reg p70:p(V +), reg r511:V, reg space33:*, reg space34:V, reg r512:V, reg r513:V, reg text5:cls, reg sym73:cls, reg base73:cls, reg guard73:L, reg r514:V, reg r515:V, reg v:*, reg v1:V, reg r516:V, reg v2:*, reg v3:V, reg r517:V, reg v4:*, reg v5:V, reg v6:*, reg v7:V, reg c106:cls, reg r518:V, reg p71:p(V +), reg sym74:cls, reg base74:cls, reg guard74:L, reg r520:V, reg r521:V, reg u8:*, reg u9:V, reg u10:*, reg u11:V, reg r522:V, reg u12:*, reg u13:V, reg u14:*, reg u15:V, reg r523:V, reg c107:cls, reg r524:V, reg p72:p(V +), reg sym75:cls, reg base75:cls, reg guard75:L, reg r526:V, reg r527:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r528:V, reg r529:V, reg tab4:*, reg tab5:V, reg c108:cls, reg r530:V, reg as_character1:cls, reg r531:V, reg p73:p(V +), reg scale12:*, reg scale13:V, reg p74:p(V +), reg r534:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r535:V, reg i73:I, reg r536:V, reg conf_level11:*, reg conf_level12:V, reg is_numeric:cls, reg r537:V, reg c109:L, reg o:*, reg o1:V, reg c110:L, reg i77:I, reg o3:V, reg dr78:V, reg dc39:L, reg dx99:V, reg i79:I, reg dx100:V, reg r538:V, reg c111:L, reg i81:I, reg dx102:V, reg dr80:V, reg dc40:L, reg dx103:V, reg i83:I, reg dx104:V, reg i84:*, reg i85:V, reg __36:cls, reg r539:V, reg o4:*, reg o5:V, reg c112:L, reg i87:I, reg o7:V, reg dr82:V, reg dc41:L, reg dx105:V, reg i89:I, reg dx106:V, reg r540:V, reg c113:L, reg i91:I, reg dx108:V, reg dr84:V, reg dc42:L, reg dx109:V, reg i93:I, reg dx110:V, reg i94:*, reg i95:V, reg __37:cls, reg r541:V, reg or:*, reg or1:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r542:V, reg i98:I, reg or4:V, reg r543:V, reg __38:cls, reg r544:V, reg r545:cls, reg conf_level13:*, reg conf_level14:V, reg r546:V, reg r547:V, reg p75:p(V +), reg r549:V, reg se:*, reg se1:V, reg r550:V, reg r551:V, reg r552:V, reg findTableWithOAM:cls, reg theta:*, reg theta1:V, reg p76:p(V +), reg tab6:*, reg tab7:V, reg p77:p(V +), reg r555:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r556:V, reg i101:I, reg r557:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r558:V, reg i104:I, reg r559:V, reg stdize1:cls, reg tau:*, reg tau1:V, reg p78:p(V +), reg std5:*, reg std6:V, reg p79:p(V +), reg x59:*, reg x60:V, reg p80:p(V +), reg r563:V, reg c114:cls, reg r564:V, reg r565:V, reg s2:V, reg l11:I, reg i105:I, reg i106:I, reg i107:I, reg i108:I, reg c115:L, reg x61:V, reg drawPie4:cls, reg r566:*, reg r567:V, reg c116:L, reg r569:V, reg dr86:V, reg dc43:L, reg dx111:V, reg dx112:V, reg j:*, reg j1:V, reg __39:cls, reg r570:V, reg p81:p(V +), reg angle_f:*, reg angle_f1:V, reg c117:L, reg angle_f3:V, reg dr88:V, reg dc44:L, reg dx113:V, reg dx114:V, reg j2:*, reg j3:V, reg __40:cls, reg r572:V, reg p82:p(V +), reg angle_t:*, reg angle_t1:V, reg c118:L, reg angle_t3:V, reg dr90:V, reg dc45:L, reg dx115:V, reg dx116:V, reg j4:*, reg j5:V, reg __41:cls, reg r574:V, reg p83:p(V +), reg r576:V, reg or5:*, reg or6:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r577:V, reg i115:I, reg or9:V, reg r578:V, reg __42:cls, reg r579:V, reg r580:cls, reg conf_level15:*, reg conf_level16:V, reg r581:V, reg r582:V, reg p84:p(V +), reg r584:V, reg se2:*, reg se3:V, reg r585:V, reg r586:V, reg r587:V, reg findTableWithOAM1:cls, reg theta2:*, reg theta3:V, reg p85:p(V +), reg tab8:*, reg tab9:V, reg p86:p(V +), reg r590:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r591:V, reg i118:I, reg r592:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r593:V, reg i121:I, reg r594:V, reg stdize2:cls, reg tau2:*, reg tau3:V, reg p87:p(V +), reg std7:*, reg std8:V, reg p88:p(V +), reg x62:*, reg x63:V, reg p89:p(V +), reg r598:V, reg c119:cls, reg r599:V, reg r600:V, reg s3:V, reg l12:I, reg i122:I, reg i123:I, reg i124:I, reg i125:I, reg c120:L, reg x64:V, reg drawPie5:cls, reg r601:*, reg r602:V, reg c121:L, reg r604:V, reg dr92:V, reg dc46:L, reg dx117:V, reg dx118:V, reg j6:*, reg j7:V, reg __43:cls, reg r605:V, reg p90:p(V +), reg angle_f4:*, reg angle_f5:V, reg c122:L, reg angle_f7:V, reg dr94:V, reg dc47:L, reg dx119:V, reg dx120:V, reg j8:*, reg j9:V, reg __44:cls, reg r607:V, reg p91:p(V +), reg angle_t4:*, reg angle_t5:V, reg c123:L, reg angle_t7:V, reg dr96:V, reg dc48:L, reg dx121:V, reg dx122:V, reg j10:*, reg j11:V, reg __45:cls, reg r609:V, reg p92:p(V +), reg r611:V, reg i130:I, reg polygon:cls, reg sym84:cls, reg base84:cls, reg guard84:L, reg r612:V, reg r613:V, reg c124:cls, reg r614:V, reg p93:p(V +), reg sym85:cls, reg base85:cls, reg guard85:L, reg r616:V, reg r617:V, reg c125:cls, reg r618:V, reg p94:p(V +), reg r620:V, reg lines:cls, reg sym86:cls, reg base86:cls, reg guard86:L, reg r621:V, reg r622:V, reg c126:cls, reg r623:V, reg p95:p(V +), reg sym87:cls, reg base87:cls, reg guard87:L, reg r625:V, reg r626:V, reg c127:cls, reg r627:V, reg p96:p(V +), reg r629:V, reg sym88:cls, reg base88:cls, reg guard88:L, reg r630:V, reg i134:I, reg r631:V, reg seq_int:cls, reg r632:V, reg s4:V, reg l13:I, reg i135:I, reg i136:I, reg i137:I, reg i138:I, reg c128:L, reg x65:V, reg lines1:cls, reg sym89:cls, reg base89:cls, reg guard89:L, reg r633:V, reg r634:V, reg j12:*, reg j13:V, reg j14:*, reg j15:V, reg c129:cls, reg r635:V, reg p97:p(V +), reg sym90:cls, reg base90:cls, reg guard90:L, reg r637:V, reg r638:V, reg c130:cls, reg r639:V, reg p98:p(V +), reg r641:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r642:V, reg i145:I, reg r643:V, reg seq_int1:cls, reg r644:V, reg s5:V, reg l14:I, reg i146:I, reg i147:I, reg i148:I, reg i149:I, reg c131:L, reg x66:V, reg lines2:cls, reg sym92:cls, reg base92:cls, reg guard92:L, reg r645:V, reg r646:V, reg j16:*, reg j17:V, reg j18:*, reg j19:V, reg c132:cls, reg r647:V, reg p99:p(V +), reg sym93:cls, reg base93:cls, reg guard93:L, reg r649:V, reg r650:V, reg c133:cls, reg r651:V, reg p100:p(V +), reg r653:V, reg lines3:cls, reg sym94:cls, reg base94:cls, reg guard94:L, reg r654:V, reg r655:V, reg c134:cls, reg r656:V, reg p101:p(V +), reg sym95:cls, reg base95:cls, reg guard95:L, reg r658:V, reg r659:V, reg c135:cls, reg r660:V, reg p102:p(V +), reg r662:V, reg sym96:cls, reg base96:cls, reg guard96:L, reg r663:V, reg i156:I, reg r664:V, reg seq_int2:cls, reg r665:V, reg s6:V, reg l15:I, reg i157:I, reg i158:I, reg i159:I, reg i160:I, reg c136:L, reg x67:V, reg lines4:cls, reg sym97:cls, reg base97:cls, reg guard97:L, reg r666:V, reg r667:V, reg c137:cls, reg r668:V, reg p103:p(V +), reg sym98:cls, reg base98:cls, reg guard98:L, reg r670:V, reg r671:V, reg j20:*, reg j21:V, reg j22:*, reg j23:V, reg c138:cls, reg r672:V, reg p104:p(V +), reg r674:V, reg sym99:cls, reg base99:cls, reg guard99:L, reg r675:V, reg i167:I, reg r676:V, reg seq_int3:cls, reg r677:V, reg s7:V, reg l16:I, reg i168:I, reg i169:I, reg i170:I, reg i171:I, reg c139:L, reg x68:V, reg lines5:cls, reg sym100:cls, reg base100:cls, reg guard100:L, reg r678:V, reg r679:V, reg c140:cls, reg r680:V, reg p105:p(V +), reg sym101:cls, reg base101:cls, reg guard101:L, reg r682:V, reg r683:V, reg j24:*, reg j25:V, reg j26:*, reg j27:V, reg c141:cls, reg r684:V, reg p106:p(V +), reg r686:V, reg sym102:cls, reg base102:cls, reg guard102:L, reg r687:V, reg r688:V, reg main3:*, reg main4:V, reg c142:V, reg r689:V, reg c143:L, reg mtext:cls, reg main5:*, reg main6:V, reg p107:p(V +), reg r691:V, reg sym103:cls, reg base103:cls, reg guard103:L, reg r693:V, reg r694:V, reg invisible:cls, reg r695:V |
    mkenv;
    st x = x;
    color_isMissing = missing.0(color);
    if color_isMissing then L0() else L1(color);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("#99CCFF", "#6699CC");
      goto L0(r2);
    L2():
      r = dyn base("#99CCFF", "#6699CC");
      goto L0(r);
    };
    goto L1(p);
  L1(color_orDefault):
    st color = color_orDefault;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L2(0.95) else L2(conf_level);
  L2(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    std_isMissing = missing.0(std);
    if std_isMissing then L3() else L4(std);
  L3():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("margins", "ind.max", "all.max");
      goto L0(r6);
    L2():
      r4 = dyn base1("margins", "ind.max", "all.max");
      goto L0(r4);
    };
    goto L4(p1);
  L4(std_orDefault):
    st std = std_orDefault;
    margin_isMissing = missing.0(margin);
    if margin_isMissing then L5() else L6(margin);
  L5():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c2 = ldf c in base;
      r10 = dyn c2(1.0, 2.0);
      goto L0(r10);
    L2():
      r8 = dyn base2(1.0, 2.0);
      goto L0(r8);
    };
    goto L6(p2);
  L6(margin_orDefault):
    st margin = margin_orDefault;
    space_isMissing = missing.0(space);
    if space_isMissing then L7(0.2) else L7(space);
  L7(space_orDefault):
    st space = space_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L8(NULL) else L8(main);
  L8(main_orDefault):
    st main = main_orDefault;
    mfrow_isMissing = missing.0(mfrow);
    if mfrow_isMissing then L9(NULL) else L9(mfrow);
  L9(mfrow_orDefault):
    st mfrow = mfrow_orDefault;
    mfcol_isMissing = missing.0(mfcol);
    if mfcol_isMissing then L10(NULL) else L10(mfcol);
  L10(mfcol_orDefault):
    st mfcol = mfcol_orDefault;
    sym3 = ldf `is.array`;
    base3 = ldf `is.array` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L133() else L134();
  L11(r13):
    r15 = `!`(r13);
    c3 = `as.logical`(r15);
    if c3 then L137() else L12();
  L133():
    x1 = ld x;
    check L135() else D0();
  L134():
    r12 = dyn base3(<sym x>);
    goto L11(r12);
  D0():
    deopt 2 [x1];
  L12():
    goto L13();
  L13():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L141() else L142();
  L135():
    x2 = force? x1;
    checkMissing(x2);
    is_array = ldf `is.array` in base;
    r14 = dyn is_array(x2);
    check L136() else D1();
  L137():
    stop = ldf stop;
    check L138() else D2();
  D1():
    deopt 5 [r14];
  D2():
    deopt 8 [];
  L14(r19):
    r24 = `==`(r19, 2);
    c4 = `as.logical`(r24);
    if c4 then L148() else L16();
  L136():
    goto L11(r14);
  L138():
    r16 = dyn stop("'x' must be an array");
    check L139() else D3();
  L141():
    sym5 = ldf dim;
    base5 = ldf dim in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L143() else L144();
  L142():
    r18 = dyn base4(<lang dim(x)>);
    goto L14(r18);
  D3():
    deopt 10 [r16];
  L15(r21):
    length = ldf length in base;
    r23 = dyn length(r21);
    check L147() else D6();
  L16():
    goto L21();
  L21():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L162() else L163();
  L139():
    goto L13();
  L143():
    x3 = ld x;
    check L145() else D4();
  L144():
    r20 = dyn base5(<sym x>);
    goto L15(r20);
  L148():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L149() else L150();
  D4():
    deopt 17 [x3];
  D6():
    deopt 22 [r23];
  L17(r26):
    c6 = `as.logical`(r26);
    if c6 then L155() else L19();
  L22(r61):
    r66 = `!=`(r61, 3);
    c10 = `as.logical`(r66);
    if c10 then L169() else L24();
  L145():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r22 = dyn dim(x4);
    check L146() else D5();
  L147():
    goto L14(r23);
  L149():
    sym7 = ldf dimnames;
    base7 = ldf dimnames in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L151() else L152();
  L150():
    r25 = dyn base6(<lang dimnames(x)>);
    goto L17(r25);
  L162():
    sym16 = ldf dim;
    base16 = ldf dim in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L164() else L165();
  L163():
    r60 = dyn base15(<lang dim(x)>);
    goto L22(r60);
  D5():
    deopt 20 [r22];
  L18(r28):
    c5 = `==`(r28, NULL);
    goto L17(c5);
  L19():
    array1 = ldf array;
    check L159() else D11();
  L20(r39):
    st x = r39;
    goto L21();
  L23(r63):
    length1 = ldf length in base;
    r65 = dyn length1(r63);
    check L168() else D15();
  L24():
    goto L25();
  L25():
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L173() else L174();
  L146():
    goto L15(r22);
  L151():
    x5 = ld x;
    check L153() else D7();
  L152():
    r27 = dyn base7(<sym x>);
    goto L18(r27);
  L155():
    array = ldf array;
    check L156() else D9();
  L164():
    x17 = ld x;
    check L166() else D13();
  L165():
    r62 = dyn base16(<sym x>);
    goto L23(r62);
  L169():
    stop1 = ldf stop;
    check L170() else D16();
  D7():
    deopt 28 [x5];
  D9():
    deopt 34 [];
  D11():
    deopt 39 [];
  D13():
    deopt 51 [x17];
  D15():
    deopt 56 [r65];
  D16():
    deopt 60 [];
  L26(r70):
    c12 = `as.logical`(r70);
    if c12 then L183() else L29();
  L153():
    x6 = force? x5;
    checkMissing(x6);
    dimnames = ldf dimnames in base;
    r29 = dyn dimnames(x6);
    check L154() else D8();
  L156():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r32):
      return r32;
    L2():
      sym9 = ldf dim;
      base9 = ldf dim in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r31 = dyn base8(<lang dim(x)>, 1);
      goto L0(r31);
    L1(r34):
      c7 = ldf c in base;
      r36 = dyn c7(r34, 1);
      goto L0(r36);
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      dim1 = ldf dim in base;
      r35 = dyn dim1(x10);
      goto L1(r35);
    L5():
      r33 = dyn base9(<sym x>);
      goto L1(r33);
    };
    r38 = dyn array(p3, p4);
    check L157() else D10();
  L159():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p6 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r42):
      return r42;
    L2():
      sym11 = ldf dim;
      base11 = ldf dim in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r41 = dyn base10(<lang dim(x)>, 1);
      goto L0(r41);
    L1(r44):
      c8 = ldf c in base;
      r46 = dyn c8(r44, 1);
      goto L0(r46);
    L4():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      dim2 = ldf dim in base;
      r45 = dyn dim2(x14);
      goto L1(r45);
    L5():
      r43 = dyn base11(<sym x>);
      goto L1(r43);
    };
    p7 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L3() else L4();
    L0(r49):
      return r49;
    L3():
      sym13 = ldf dimnames;
      base13 = ldf dimnames in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L5() else L6();
    L4():
      r48 = dyn base12(<lang dimnames(x)>, <lang list(NULL)>);
      goto L0(r48);
    L1(r51):
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L7() else L8();
    L5():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      dimnames1 = ldf dimnames in base;
      r52 = dyn dimnames1(x16);
      goto L1(r52);
    L6():
      r50 = dyn base13(<sym x>);
      goto L1(r50);
    L2(r54):
      c9 = ldf c in base;
      r56 = dyn c9(r51, r54);
      goto L0(r56);
    L7():
      list = ldf list in base;
      r55 = dyn list(NULL);
      goto L2(r55);
    L8():
      r53 = dyn base14(NULL);
      goto L2(r53);
    };
    r58 = dyn array1(p5, p6, p7);
    check L160() else D12();
  L166():
    x18 = force? x17;
    checkMissing(x18);
    dim3 = ldf dim in base;
    r64 = dyn dim3(x18);
    check L167() else D14();
  L168():
    goto L22(r65);
  L170():
    r67 = dyn stop1("'x' must be 2- or 3-dimensional");
    check L171() else D17();
  L173():
    sym18 = ldf dim;
    base18 = ldf dim in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L175() else L176();
  L174():
    r69 = dyn base17(<lang `!=`(`[`(dim(x), `:`(1, 2)), 2)>);
    goto L26(r69);
  D8():
    deopt 31 [r29];
  D10():
    deopt 37 [r38];
  D12():
    deopt 43 [r58];
  D14():
    deopt 54 [r64];
  D17():
    deopt 62 [r67];
  L27(r72):
    c11 = `is.object`(r72);
    if c11 then L179() else L180(r72);
  L29():
    goto L30();
  L30():
    sym19 = ldf dimnames;
    base19 = ldf dimnames in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L187() else L188();
  L154():
    goto L18(r29);
  L157():
    goto L20(r38);
  L160():
    goto L20(r58);
  L167():
    goto L23(r64);
  L171():
    goto L25();
  L175():
    x19 = ld x;
    check L177() else D18();
  L176():
    r71 = dyn base18(<sym x>);
    goto L27(r71);
  L183():
    stop2 = ldf stop;
    check L184() else D21();
  D18():
    deopt 69 [x19];
  D21():
    deopt 81 [];
  L28(dx1):
    r77 = `!=`(dx1, 2);
    any = ldf any in base;
    r78 = dyn any(r77);
    check L182() else D20();
  L31(r82):
    st dnx = r82;
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L191() else L192();
  L177():
    x20 = force? x19;
    checkMissing(x20);
    dim4 = ldf dim in base;
    r73 = dyn dim4(x20);
    check L178() else D19();
  L179():
    dr = tryDispatchBuiltin.1("[", r72);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L181() else L180(dr);
  L180(r75):
    __ = ldf `[` in base;
    r76 = dyn __(r75, <int 1, 2>);
    goto L28(r76);
  L184():
    r79 = dyn stop2("table for each stratum must be 2 by 2");
    check L185() else D22();
  L187():
    x21 = ld x;
    check L189() else D23();
  L188():
    r81 = dyn base19(<sym x>);
    goto L31(r81);
  D19():
    deopt 72 [r73];
  D20():
    deopt 79 [r78];
  D22():
    deopt 83 [r79];
  D23():
    deopt 88 [x21];
  L32(r85):
    c14 = `as.logical`(r85);
    if c14 then L194() else L33();
  L178():
    goto L27(r73);
  L181():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L182():
    goto L26(r78);
  L185():
    goto L30();
  L189():
    x22 = force? x21;
    checkMissing(x22);
    dimnames2 = ldf dimnames in base;
    r83 = dyn dimnames2(x22);
    check L190() else D24();
  L191():
    dnx = ld dnx;
    check L193() else D25();
  L192():
    r84 = dyn base20(<sym dnx>);
    goto L32(r84);
  D24():
    deopt 91 [r83];
  D25():
    deopt 94 [dnx];
  L33():
    goto L35();
  L35():
    which = ldf which;
    check L199() else D27();
  L190():
    goto L31(r83);
  L193():
    dnx1 = force? dnx;
    checkMissing(dnx1);
    c13 = `==`(dnx1, NULL);
    goto L32(c13);
  L194():
    sym21 = ldf vector;
    base21 = ldf vector in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L195() else L196();
  D27():
    deopt 107 [];
  L34(r87):
    st dnx = r87;
    goto L35();
  L195():
    vector = ldf vector in base;
    r88 = dyn vector("list", 3);
    check L197() else D26();
  L196():
    r86 = dyn base21("list", 3);
    goto L34(r86);
  L199():
    p10 = prom<V +>{
      sapply = ldf sapply;
      p8 = prom<V +>{
        dnx2 = ld dnx;
        dnx3 = force? dnx2;
        checkMissing(dnx3);
        return dnx3;
      };
      p9 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r92 = dyn sapply(p8, p9);
      return r92;
    };
    r94 = dyn which(p10);
    check L200() else D28();
  D26():
    deopt 102 [r88];
  D28():
    deopt 109 [r94];
  L197():
    goto L34(r88);
  L200():
    s = toForSeq(r94);
    l = length(s);
    i = 0;
    goto L36(i);
  L36(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l, i2);
    if c15 then L201() else L42();
  L42():
    x23 = `[[`(s, i2, NULL, TRUE);
    st i = x23;
    LETTERS = ld LETTERS;
    check L202() else D29();
  L201():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L220() else L221();
  D29():
    deopt 110 [i2, LETTERS];
  L43(r107):
    c20 = `as.logical`(r107);
    if c20 then L226() else L45();
  L202():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c16 = `is.object`(LETTERS1);
    if c16 then L203() else L204(i2, LETTERS1);
  L220():
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L222() else L223();
  L221():
    r106 = dyn base24(<lang names(dnx)>);
    goto L43(r106);
  L37(i8, dx3):
    l1 = ld dnx;
    c18 = `is.object`(l1);
    if c18 then L216() else L217(i8, dx3, l1);
  L44(r109):
    c19 = `==`(r109, NULL);
    goto L43(c19);
  L45():
    which1 = ldf which;
    check L228() else D36();
  L46():
    sym28 = ldf any;
    base28 = ldf any in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L230() else L231();
  L203():
    dr2 = tryDispatchBuiltin.1("[", LETTERS1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L205() else L204(i2, dr2);
  L204(i6, LETTERS3):
    sym22 = ldf seq_len;
    base22 = ldf seq_len in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L206() else L207();
  L222():
    dnx4 = ld dnx;
    check L224() else D34();
  L223():
    r108 = dyn base25(<sym dnx>);
    goto L44(r108);
  L226():
    st i = <int 1, 2, 3>;
    goto L46();
  D34():
    deopt 135 [dnx4];
  D36():
    deopt 144 [];
  L38(i11, LETTERS6, r96):
    __2 = ldf `[` in base;
    r104 = dyn __2(LETTERS6, r96);
    goto L37(i11, r104);
  L41(i24, dx11):
    st dnx = dx11;
    goto L36(i24);
  L47(r120):
    c22 = `as.logical`(r120);
    if c22 then L234() else L48();
  L205():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L37(i2, dx2);
  L206():
    sym23 = ldf dim;
    base23 = ldf dim in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L208() else L209();
  L207():
    r95 = dyn base22(<lang `[`(dim(x), i)>);
    goto L38(i6, LETTERS3, r95);
  L216():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, dx3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L218() else L217(i8, dx3, dr6);
  L217(i22, dx7, l3):
    i25 = ld i;
    check L219() else D33();
  L224():
    dnx5 = force? dnx4;
    checkMissing(dnx5);
    names = ldf names in base;
    r110 = dyn names(dnx5);
    check L225() else D35();
  L228():
    p11 = prom<V +>{
      sym26 = ldf `is.null`;
      base26 = ldf `is.null` in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L2() else L3();
    L0(r113):
      return r113;
    L2():
      sym27 = ldf names;
      base27 = ldf names in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L4() else L5();
    L3():
      r112 = dyn base26(<lang names(dnx)>);
      goto L0(r112);
    L1(r115):
      c21 = `==`(r115, NULL);
      goto L0(c21);
    L4():
      dnx6 = ld dnx;
      dnx7 = force? dnx6;
      checkMissing(dnx7);
      names1 = ldf names in base;
      r116 = dyn names1(dnx7);
      goto L1(r116);
    L5():
      r114 = dyn base27(<sym dnx>);
      goto L1(r114);
    };
    r118 = dyn which1(p11);
    check L229() else D37();
  L230():
    i27 = ld i;
    check L232() else D38();
  L231():
    r119 = dyn base28(<sym i>);
    goto L47(r119);
  D33():
    deopt 125 [i22, dx7, l3, dx3, i25];
  D35():
    deopt 138 [r110];
  D37():
    deopt 146 [r118];
  D38():
    deopt 150 [i27];
  L39(i14, LETTERS9, r98):
    c17 = `is.object`(r98);
    if c17 then L212() else L213(i14, LETTERS9, r98);
  L48():
    goto L52();
  L52():
    dnx8 = ld dnx;
    check L251() else D47();
  L208():
    x24 = ld x;
    check L210() else D30();
  L209():
    r97 = dyn base23(<sym x>);
    goto L39(i6, LETTERS3, r97);
  L218():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L41(i8, dx9);
  L219():
    i26 = force? i25;
    ____ = ldf `[[<-` in base;
    r105 = dyn ____(l3, dx3, i26);
    goto L41(i22, r105);
  L225():
    goto L44(r110);
  L229():
    st i = r118;
    goto L46();
  L232():
    i28 = force? i27;
    checkMissing(i28);
    any1 = ldf any in base;
    r121 = dyn any1(i28);
    check L233() else D39();
  L234():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L235() else L236();
  D30():
    deopt 115 [i6, LETTERS3, x24];
  D39():
    deopt 153 [r121];
  D47():
    deopt 178 [dnx8];
  L40(i18, LETTERS13, dx5):
    r103 = seq_len(dx5);
    goto L38(i18, LETTERS13, r103);
  L49(r123):
    c24 = `is.object`(r123);
    if c24 then L238() else L239(r123);
  L210():
    x25 = force? x24;
    checkMissing(x25);
    dim5 = ldf dim in base;
    r99 = dyn dim5(x25);
    check L211() else D31();
  L212():
    dr4 = tryDispatchBuiltin.1("[", r98);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L214() else L213(i14, LETTERS9, dr4);
  L213(i16, LETTERS11, r101):
    i19 = ld i;
    check L215() else D32();
  L233():
    goto L47(r121);
  L235():
    c23 = ldf c in base;
    r124 = dyn c23("Row", "Col", "Strata");
    check L237() else D40();
  L236():
    r122 = dyn base29("Row", "Col", "Strata");
    goto L49(r122);
  L251():
    dnx9 = force? dnx8;
    checkMissing(dnx9);
    l9 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L252() else D48();
  D31():
    deopt 118 [i6, LETTERS3, r99];
  D32():
    deopt 119 [i16, LETTERS11, r101, i19];
  D40():
    deopt 160 [r124];
  D48():
    deopt 181 [dnx9, l9, dnx9];
  L50(dx13):
    l4 = ld dnx;
    names2 = ldf names;
    check L242() else D42();
  L211():
    goto L39(i6, LETTERS3, r99);
  L214():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(i14, LETTERS9, dx4);
  L215():
    i20 = force? i19;
    __1 = ldf `[` in base;
    r102 = dyn __1(r101, i20);
    goto L40(i16, LETTERS11, r102);
  L237():
    goto L49(r124);
  L238():
    dr8 = tryDispatchBuiltin.1("[", r123);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L240() else L239(dr8);
  L239(r126):
    i29 = ld i;
    check L241() else D41();
  L252():
    r133 = dyn dimnames__(l9, NULL, dnx9);
    check L253() else D49();
  D41():
    deopt 161 [r126, i29];
  D42():
    deopt 165 [dx13, l4, dx13];
  D49():
    deopt 183 [dnx9, r133];
  L240():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L50(dx12);
  L241():
    i30 = force? i29;
    __3 = ldf `[` in base;
    r127 = dyn __3(r126, i30);
    goto L50(r127);
  L242():
    r128 = dyn names2(dx13, NULL);
    check L243() else D43();
  L253():
    st x = r133;
    sym30 = ldf dim;
    base30 = ldf dim in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L254() else L255();
  D43():
    deopt 167 [dx13, l4, dx13, r128];
  L53(r135):
    c26 = `is.object`(r135);
    if c26 then L258() else L259(r135);
  L243():
    c25 = `is.object`(r128);
    if c25 then L244() else L245(dx13, l4, r128);
  L254():
    x26 = ld x;
    check L256() else D50();
  L255():
    r134 = dyn base30(<sym x>);
    goto L53(r134);
  D50():
    deopt 187 [x26];
  L51(dx18, l8, dx19):
    names__ = ldf `names<-`;
    check L248() else D45();
  L54(dx22):
    st k = dx22;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L261() else L262();
  L244():
    dr10 = tryDispatchBuiltin.0("[<-", r128, dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L246() else L245(dx13, l4, dr10);
  L245(dx15, l6, r130):
    i31 = ld i;
    check L247() else D44();
  L256():
    x27 = force? x26;
    checkMissing(x27);
    dim6 = ldf dim in base;
    r136 = dyn dim6(x27);
    check L257() else D51();
  L258():
    dr12 = tryDispatchBuiltin.1("[", r135);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L260() else L259(dr12);
  L259(r138):
    __4 = ldf `[` in base;
    r139 = dyn __4(r138, 3);
    goto L54(r139);
  D44():
    deopt 169 [dx15, l6, r130, dx13, i31];
  D45():
    deopt 172 [dx18, l8, dx19];
  D51():
    deopt 190 [r136];
  L55(r141):
    r143 = `==`(r141, 1.0);
    c27 = `as.logical`(r143);
    if c27 then L265() else L56(c27);
  L246():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L51(dx13, l4, dx17);
  L247():
    i32 = force? i31;
    ___ = ldf `[<-` in base;
    r131 = dyn ___(r130, dx13, i32);
    goto L51(dx15, l6, r131);
  L248():
    r132 = dyn names__(l8, NULL, dx19);
    check L249() else D46();
  L257():
    goto L53(r136);
  L260():
    dx21 = getTryDispatchBuiltinValue(dr12);
    goto L54(dx21);
  L261():
    conf_level1 = ld `conf.level`;
    check L263() else D52();
  L262():
    r140 = dyn base31(<sym conf.level>);
    goto L55(r140);
  D46():
    deopt 174 [dx18, r132];
  D52():
    deopt 197 [conf_level1];
  L56(c29):
    c36 = `as.logical`(c29);
    if c36 then L271() else L58(c36);
  L249():
    st dnx = r132;
    goto L52();
  L263():
    conf_level2 = force? conf_level1;
    checkMissing(conf_level2);
    length2 = ldf length in base;
    r142 = dyn length2(conf_level2);
    check L264() else D53();
  L265():
    sym32 = ldf `is.finite`;
    base32 = ldf `is.finite` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L266() else L267();
  D53():
    deopt 200 [r142];
  L57(c32, r145):
    c33 = `as.logical`(r145);
    c34 = `&&`(c32, c33);
    goto L56(c34);
  L58(c38):
    c42 = `as.logical`(c38);
    if c42 then L274() else L59(c42);
  L264():
    goto L55(r142);
  L266():
    conf_level3 = ld `conf.level`;
    check L268() else D54();
  L267():
    r144 = dyn base32(<sym conf.level>);
    goto L57(c27, r144);
  L271():
    conf_level5 = ld `conf.level`;
    check L272() else D56();
  D54():
    deopt 205 [c27, conf_level3];
  D56():
    deopt 210 [c36, conf_level5];
  L59(c44):
    r149 = `!`(c44);
    c48 = `as.logical`(r149);
    if c48 then L277() else L60();
  L268():
    conf_level4 = force? conf_level3;
    checkMissing(conf_level4);
    is_finite = ldf `is.finite` in base;
    r146 = dyn is_finite(conf_level4);
    check L269() else D55();
  L272():
    conf_level6 = force? conf_level5;
    checkMissing(conf_level6);
    r147 = `>=`(conf_level6, 0.0);
    c39 = `as.logical`(r147);
    c40 = `&&`(c36, c39);
    goto L58(c40);
  L274():
    conf_level7 = ld `conf.level`;
    check L275() else D57();
  D55():
    deopt 208 [c27, r146];
  D57():
    deopt 215 [c42, conf_level7];
  L60():
    goto L61();
  L61():
    conf_level9 = ld `conf.level`;
    check L281() else D60();
  L269():
    goto L57(c27, r146);
  L275():
    conf_level8 = force? conf_level7;
    checkMissing(conf_level8);
    r148 = `<`(conf_level8, 1.0);
    c45 = `as.logical`(r148);
    c46 = `&&`(c42, c45);
    goto L59(c46);
  L277():
    stop3 = ldf stop;
    check L278() else D58();
  D58():
    deopt 222 [];
  D60():
    deopt 227 [conf_level9];
  L278():
    r150 = dyn stop3("'conf.level' must be a single number between 0 and 1");
    check L279() else D59();
  L281():
    conf_level10 = force? conf_level9;
    checkMissing(conf_level10);
    r152 = `==`(conf_level10, 0.0);
    c49 = `as.logical`(r152);
    if c49 then L282() else L62();
  D59():
    deopt 224 [r150];
  L62():
    goto L63();
  L63():
    match_arg = ldf `match.arg`;
    check L284() else D61();
  L279():
    goto L61();
  L282():
    st `conf.level` = FALSE;
    goto L63();
  D61():
    deopt 237 [];
  L284():
    p12 = prom<V +>{
      std1 = ld std;
      std2 = force? std1;
      checkMissing(std2);
      return std2;
    };
    r155 = dyn match_arg(p12);
    check L285() else D62();
  D62():
    deopt 239 [r155];
  L285():
    st std = r155;
    r156 = clos inner440706843;
    st findTableWithOAM = r156;
    r157 = clos `inner-85323604`;
    st drawPie = r157;
    r158 = clos `inner-52174073`;
    st stdize = r158;
    r159 = clos inner354062069;
    st odds = r159;
    st gamma = 1.25;
    st debug = FALSE;
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L286() else L287();
  L64(r161):
    st `angle.f` = r161;
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L289() else L290();
  L286():
    c50 = ldf c in base;
    r162 = dyn c50(90.0, 180.0, 0.0, 270.0);
    check L288() else D63();
  L287():
    r160 = dyn base33(90.0, 180.0, 0.0, 270.0);
    goto L64(r160);
  D63():
    deopt 266 [r162];
  L65(r164):
    st `angle.t` = r164;
    par = ldf par;
    check L292() else D65();
  L288():
    goto L64(r162);
  L289():
    c51 = ldf c in base;
    r165 = dyn c51(180.0, 270.0, 90.0, 360.0);
    check L291() else D64();
  L290():
    r163 = dyn base34(180.0, 270.0, 90.0, 360.0);
    goto L65(r163);
  D64():
    deopt 275 [r165];
  D65():
    deopt 278 [];
  L291():
    goto L65(r165);
  L292():
    p13 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L4() else L5();
    L0(r167):
      return r167;
    L4():
      sym36 = ldf `is.null`;
      base36 = ldf `is.null` in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L6() else L7();
    L5():
      r166 = dyn base35(0.0, 0.0, <lang if(is.null(main), 0.0, 2.5)>, 0.0);
      goto L0(r166);
    L1(r169):
      c53 = `as.logical`(r169);
      if c53 then L8() else L2();
    L6():
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      c52 = `==`(main2, NULL);
      goto L1(c52);
    L7():
      r168 = dyn base36(<sym main>);
      goto L1(r168);
    L2():
      goto L3(2.5);
    L3(r170):
      c54 = ldf c in base;
      r171 = dyn c54(0.0, 0.0, r170, 0.0);
      goto L0(r171);
    L8():
      goto L3(0.0);
    };
    r173 = dyn par[mar](p13);
    check L293() else D66();
  D66():
    deopt 281 [r173];
  L293():
    st opar = r173;
    sym37 = ldf `on.exit`;
    base37 = ldf `on.exit` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L294() else L295();
  L66():
    st byrow = FALSE;
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L296() else L297();
  L294():
    on_exit = ldf `on.exit` in base;
    r176 = dyn on_exit(<lang par(opar)>);
    goto L66();
  L295():
    r174 = dyn base37(<lang par(opar)>);
    goto L66();
  L67(r178):
    r179 = `!`(r178);
    c56 = `as.logical`(r179);
    if c56 then L299() else L68();
  L296():
    mfrow1 = ld mfrow;
    check L298() else D67();
  L297():
    r177 = dyn base38(<sym mfrow>);
    goto L67(r177);
  D67():
    deopt 290 [mfrow1];
  L68():
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L309() else L310();
  L71():
    nr2 = ld nr;
    check L331() else D76();
  L298():
    mfrow2 = force? mfrow1;
    checkMissing(mfrow2);
    c55 = `==`(mfrow2, NULL);
    goto L67(c55);
  L299():
    mfrow3 = ld mfrow;
    check L300() else D68();
  D68():
    deopt 294 [mfrow3];
  D76():
    deopt 340 [nr2];
  L72(r183):
    r184 = `!`(r183);
    c60 = `as.logical`(r184);
    if c60 then L312() else L73();
  L300():
    mfrow4 = force? mfrow3;
    checkMissing(mfrow4);
    c57 = `is.object`(mfrow4);
    if c57 then L301() else L302(mfrow4);
  L309():
    mfcol1 = ld mfcol;
    check L311() else D70();
  L310():
    r182 = dyn base39(<sym mfcol>);
    goto L72(r182);
  L331():
    nr3 = force? nr2;
    checkMissing(nr3);
    nc = ld nc;
    check L332() else D77();
  D70():
    deopt 307 [mfcol1];
  D77():
    deopt 341 [nr3, nc];
  L69(dx24):
    st nr = dx24;
    mfrow7 = ld mfrow;
    check L304() else D69();
  L73():
    sym40 = ldf ceiling;
    base40 = ldf ceiling in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L322() else L323();
  L301():
    dr14 = tryDispatchBuiltin.1("[", mfrow4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L303() else L302(dr14);
  L302(mfrow6):
    __5 = ldf `[` in base;
    r180 = dyn __5(mfrow6, 1);
    goto L69(r180);
  L311():
    mfcol2 = force? mfcol1;
    checkMissing(mfcol2);
    c59 = `==`(mfcol2, NULL);
    goto L72(c59);
  L312():
    mfcol3 = ld mfcol;
    check L313() else D71();
  L332():
    nc1 = force? nc;
    checkMissing(nc1);
    r197 = `*`(nr3, nc1);
    k4 = ld k;
    check L333() else D78();
  D69():
    deopt 300 [mfrow7];
  D71():
    deopt 311 [mfcol3];
  D78():
    deopt 343 [r197, k4];
  L76(r188):
    st nr = r188;
    sym42 = ldf ceiling;
    base42 = ldf ceiling in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L327() else L328();
  L303():
    dx23 = getTryDispatchBuiltinValue(dr14);
    goto L69(dx23);
  L304():
    mfrow8 = force? mfrow7;
    checkMissing(mfrow8);
    c58 = `is.object`(mfrow8);
    if c58 then L305() else L306(mfrow8);
  L313():
    mfcol4 = force? mfcol3;
    checkMissing(mfcol4);
    c61 = `is.object`(mfcol4);
    if c61 then L314() else L315(mfcol4);
  L322():
    sym41 = ldf sqrt;
    base41 = ldf sqrt in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L324() else L325();
  L323():
    r187 = dyn base40(<lang sqrt(k)>);
    goto L76(r187);
  L333():
    k5 = force? k4;
    checkMissing(k5);
    r198 = `<`(r197, k5);
    c63 = `as.logical`(r198);
    if c63 then L334() else L79();
  L70(dx26):
    st nc = dx26;
    goto L71();
  L74(dx29):
    st nr = dx29;
    mfcol7 = ld mfcol;
    check L317() else D72();
  L77(r190):
    r192 = ceiling(r190);
    goto L76(r192);
  L78(r194):
    st nc = r194;
    goto L71();
  L79():
    goto L80();
  L80():
    byrow = ld byrow;
    check L338() else D81();
  L305():
    dr16 = tryDispatchBuiltin.1("[", mfrow8);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L307() else L306(dr16);
  L306(mfrow10):
    __6 = ldf `[` in base;
    r181 = dyn __6(mfrow10, 2);
    goto L70(r181);
  L314():
    dr18 = tryDispatchBuiltin.1("[", mfcol4);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L316() else L315(dr18);
  L315(mfcol6):
    __7 = ldf `[` in base;
    r185 = dyn __7(mfcol6, 1);
    goto L74(r185);
  L324():
    k = ld k;
    check L326() else D73();
  L325():
    r189 = dyn base41(<sym k>);
    goto L77(r189);
  L327():
    k2 = ld k;
    check L329() else D74();
  L328():
    r193 = dyn base42(<lang `/`(k, nr)>);
    goto L78(r193);
  L334():
    stop4 = ldf stop;
    check L335() else D79();
  D72():
    deopt 317 [mfcol7];
  D73():
    deopt 328 [k];
  D74():
    deopt 334 [k2];
  D79():
    deopt 347 [];
  D81():
    deopt 352 [byrow];
  L307():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L70(dx25);
  L316():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L74(dx28);
  L317():
    mfcol8 = force? mfcol7;
    checkMissing(mfcol8);
    c62 = `is.object`(mfcol8);
    if c62 then L318() else L319(mfcol8);
  L326():
    k1 = force? k;
    checkMissing(k1);
    r191 = sqrt(k1);
    goto L77(r191);
  L329():
    k3 = force? k2;
    checkMissing(k3);
    nr = ld nr;
    check L330() else D75();
  L335():
    r199 = dyn stop4("incorrect geometry specification");
    check L336() else D80();
  L338():
    byrow1 = force? byrow;
    checkMissing(byrow1);
    c64 = `as.logical`(byrow1);
    if c64 then L339() else L81();
  D75():
    deopt 335 [k3, nr];
  D80():
    deopt 349 [r199];
  L75(dx31):
    st nc = dx31;
    st byrow = TRUE;
    goto L71();
  L81():
    expand_grid1 = ldf `expand.grid`;
    check L349() else D85();
  L84():
    nc6 = ld nc;
    check L351() else D87();
  L318():
    dr20 = tryDispatchBuiltin.1("[", mfcol8);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L320() else L319(dr20);
  L319(mfcol10):
    __8 = ldf `[` in base;
    r186 = dyn __8(mfcol10, 2);
    goto L75(r186);
  L330():
    nr1 = force? nr;
    checkMissing(nr1);
    r195 = `/`(k3, nr1);
    r196 = ceiling(r195);
    goto L78(r196);
  L336():
    goto L80();
  L339():
    expand_grid = ldf `expand.grid`;
    check L340() else D82();
  D82():
    deopt 355 [];
  D85():
    deopt 370 [];
  D87():
    deopt 375 [nc6];
  L320():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L75(dx30);
  L340():
    p14 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      r201 = `:`(1.0, nc3);
      return r201;
    };
    p15 = prom<V +>{
      nr4 = ld nr;
      nr5 = force? nr4;
      checkMissing(nr5);
      r203 = `:`(1.0, nr5);
      return r203;
    };
    r205 = dyn expand_grid(p14, p15);
    check L341() else D83();
  L349():
    p16 = prom<V +>{
      nr6 = ld nr;
      nr7 = force? nr6;
      checkMissing(nr7);
      r215 = `:`(1.0, nr7);
      return r215;
    };
    p17 = prom<V +>{
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      r217 = `:`(1.0, nc5);
      return r217;
    };
    r219 = dyn expand_grid1(p16, p17);
    check L350() else D86();
  L351():
    nc7 = force? nc6;
    checkMissing(nc7);
    r220 = `*`(nc7, 2.0);
    space1 = ld space;
    check L352() else D88();
  D83():
    deopt 358 [r205];
  D86():
    deopt 373 [r219];
  D88():
    deopt 379 [r220, 1.0, space1];
  L341():
    c65 = `is.object`(r205);
    if c65 then L342() else L343(r205);
  L350():
    st indexMatrix = r219;
    goto L84();
  L352():
    space2 = force? space1;
    checkMissing(space2);
    r221 = `+`(1.0, space2);
    r222 = `*`(r220, r221);
    nc8 = ld nc;
    check L353() else D89();
  D89():
    deopt 382 [r222, nc8];
  L82(dx33):
    st indexMatrix = dx33;
    goto L84();
  L342():
    dr22 = tryDispatchBuiltin.1("[", r205);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L344() else L343(dr22);
  L343(r207):
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L345() else L346();
  L353():
    nc9 = force? nc8;
    checkMissing(nc9);
    r223 = `-`(nc9, 1);
    space3 = ld space;
    check L354() else D90();
  D90():
    deopt 385 [r222, r223, space3];
  L83(r212):
    __9 = ldf `[` in base;
    r214 = dyn __9(r205, <missing>, r212);
    goto L82(r214);
  L344():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L82(dx32);
  L345():
    c66 = ldf c in base;
    r213 = dyn c66(2.0, 1.0);
    check L347() else D84();
  L346():
    r210 = dyn base43(2.0, 1.0);
    goto L83(r210);
  L354():
    space4 = force? space3;
    checkMissing(space4);
    r224 = `*`(r223, space4);
    r225 = `+`(r222, r224);
    st totalWidth = r225;
    k6 = ld k;
    check L355() else D91();
  D84():
    deopt 365 [r207, r213];
  D91():
    deopt 390 [k6];
  L347():
    goto L83(r213);
  L355():
    k7 = force? k6;
    checkMissing(k7);
    r226 = `==`(k7, 1.0);
    c67 = `as.logical`(r226);
    if c67 then L356() else L85();
  L85():
    nr8 = ld nr;
    check L359() else D93();
  L86(r229):
    st totalHeight = r229;
    sym44 = ldf c;
    base44 = ldf c in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L364() else L365();
  L356():
    space5 = ld space;
    check L357() else D92();
  D92():
    deopt 396 [2.0, 1.0, space5];
  D93():
    deopt 400 [nr8];
  L87(r238):
    st xlim = r238;
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L368() else L369();
  L357():
    space6 = force? space5;
    checkMissing(space6);
    r227 = `+`(1.0, space6);
    r228 = `*`(2.0, r227);
    goto L86(r228);
  L359():
    nr9 = force? nr8;
    checkMissing(nr9);
    gamma = ld gamma;
    check L360() else D94();
  L364():
    totalWidth = ld totalWidth;
    check L366() else D98();
  L365():
    r237 = dyn base44(0.0, <sym totalWidth>);
    goto L87(r237);
  D94():
    deopt 403 [nr9, 2.0, 2.0, gamma];
  D98():
    deopt 420 [totalWidth];
  L88(r241):
    st ylim = r241;
    dev_hold = ldf `dev.hold`;
    check L372() else D102();
  L360():
    gamma1 = force? gamma;
    checkMissing(gamma1);
    r230 = `+`(2.0, gamma1);
    space7 = ld space;
    check L361() else D95();
  L366():
    totalWidth1 = force? totalWidth;
    checkMissing(totalWidth1);
    c68 = ldf c in base;
    r239 = dyn c68(0.0, totalWidth1);
    check L367() else D99();
  L368():
    totalHeight = ld totalHeight;
    check L370() else D100();
  L369():
    r240 = dyn base45(0.0, <sym totalHeight>);
    goto L88(r240);
  D95():
    deopt 405 [nr9, 2.0, r230, space7];
  D99():
    deopt 423 [r239];
  D100():
    deopt 428 [totalHeight];
  D102():
    deopt 434 [];
  L361():
    space8 = force? space7;
    checkMissing(space8);
    r231 = `*`(r230, space8);
    r232 = `+`(2.0, r231);
    r233 = `*`(nr9, r232);
    nr10 = ld nr;
    check L362() else D96();
  L367():
    goto L87(r239);
  L370():
    totalHeight1 = force? totalHeight;
    checkMissing(totalHeight1);
    c69 = ldf c in base;
    r242 = dyn c69(0.0, totalHeight1);
    check L371() else D101();
  L372():
    r243 = dyn dev_hold();
    check L373() else D103();
  D96():
    deopt 409 [r233, nr10];
  D101():
    deopt 431 [r242];
  D103():
    deopt 435 [r243];
  L362():
    nr11 = force? nr10;
    checkMissing(nr11);
    r234 = `-`(nr11, 1);
    space9 = ld space;
    check L363() else D97();
  L371():
    goto L88(r242);
  L373():
    sym46 = ldf `on.exit`;
    base46 = ldf `on.exit` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L374() else L375();
  D97():
    deopt 412 [r233, r234, space9];
  L89():
    plot_new = ldf `plot.new`;
    check L376() else D104();
  L363():
    space10 = force? space9;
    checkMissing(space10);
    r235 = `*`(r234, space10);
    r236 = `+`(r233, r235);
    goto L86(r236);
  L374():
    on_exit1 = ldf `on.exit` in base;
    r246 = dyn on_exit1(<lang dev.flush()>, TRUE);
    goto L89();
  L375():
    r244 = dyn base46[, add](<lang dev.flush()>, TRUE);
    goto L89();
  D104():
    deopt 440 [];
  L376():
    r247 = dyn plot_new();
    check L377() else D105();
  D105():
    deopt 441 [r247];
  L377():
    plot_window = ldf `plot.window`;
    check L378() else D106();
  D106():
    deopt 443 [];
  L378():
    p18 = prom<V +>{
      xlim = ld xlim;
      xlim1 = force? xlim;
      checkMissing(xlim1);
      return xlim1;
    };
    p19 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    r250 = dyn plot_window[xlim, ylim, asp](p18, p19, 1.0);
    check L379() else D107();
  D107():
    deopt 450 [r250];
  L379():
    odds = ldf odds;
    check L380() else D108();
  D108():
    deopt 452 [];
  L380():
    p20 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    r252 = dyn odds(p20);
    check L381() else D109();
  D109():
    deopt 454 [r252];
  L381():
    st o = r252;
    space11 = ld space;
    check L382() else D110();
  D110():
    deopt 456 [space11];
  L382():
    space12 = force? space11;
    checkMissing(space12);
    strheight = ldf strheight;
    check L383() else D111();
  D111():
    deopt 459 [space12, 2.0];
  L383():
    r253 = dyn strheight("Ag");
    check L384() else D112();
  D112():
    deopt 461 [space12, 2.0, r253];
  L384():
    r254 = `*`(2.0, r253);
    r255 = `/`(space12, r254);
    st scale = r255;
    sym47 = ldf max;
    base47 = ldf max in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L385() else L386();
  L90(r259, r260):
    r271 = `/`(r260, 2.0);
    r272 = `-`(r259, r271);
    st v = r272;
    k8 = ld k;
    check L390() else D116();
  L385():
    strwidth = ldf strwidth;
    check L387() else D113();
  L386():
    r258 = dyn base47(<lang strwidth(as.character(c(x)), cex=scale)>);
    goto L90(0.95, r258);
  D113():
    deopt 469 [0.95];
  D116():
    deopt 481 [1.0, k8];
  L387():
    p21 = prom<V +>{
      sym48 = ldf `as.character`;
      base48 = ldf `as.character` in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L2() else L3();
    L0(r262):
      return r262;
    L2():
      sym49 = ldf c;
      base49 = ldf c in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L4() else L5();
    L3():
      r261 = dyn base48(<lang c(x)>);
      goto L0(r261);
    L1(r264):
      as_character = ldf `as.character` in base;
      r266 = dyn as_character(r264);
      goto L0(r266);
    L4():
      x30 = ld x;
      x31 = force? x30;
      checkMissing(x31);
      c70 = ldf c in base;
      r265 = dyn c70(x31);
      goto L1(r265);
    L5():
      r263 = dyn base49(<sym x>);
      goto L1(r263);
    };
    p22 = prom<V +>{
      scale = ld scale;
      scale1 = force? scale;
      checkMissing(scale1);
      return scale1;
    };
    r269 = dyn strwidth[, cex](p21, p22);
    check L388() else D114();
  L390():
    k9 = force? k8;
    checkMissing(k9);
    r273 = `:`(1.0, k9);
    s1 = toForSeq(r273);
    l10 = length(s1);
    i33 = 0;
    goto L91(i33);
  D114():
    deopt 473 [0.95, r269];
  L91(i34):
    i35 = `+`.1(i34, 1);
    c71 = `<`.1(l10, i35);
    if c71 then L391() else L128();
  L388():
    max = ldf max in base;
    r270 = dyn max(r269);
    check L389() else D115();
  D115():
    deopt 475 [0.95, r270];
  L128():
    x32 = `[[`(s1, i35, NULL, TRUE);
    st i = x32;
    x33 = ld x;
    check L392() else D117();
  L389():
    goto L90(0.95, r270);
  L391():
    sym102 = ldf `is.null`;
    base102 = ldf `is.null` in base;
    guard102 = `==`.4(sym102, base102);
    if guard102 then L559() else L560();
  D117():
    deopt 484 [i35, x33];
  L129(r688):
    r689 = `!`(r688);
    c143 = `as.logical`(r689);
    if c143 then L562() else L130();
  L392():
    x34 = force? x33;
    checkMissing(x34);
    c72 = `is.object`(x34);
    if c72 then L393() else L394(i35, x34);
  L559():
    main3 = ld main;
    check L561() else D221();
  L560():
    r687 = dyn base102(<sym main>);
    goto L129(r687);
  D221():
    deopt 920 [main3];
  L92(i41, dx36):
    st tab = dx36;
    stdize = ldf stdize;
    check L397() else D119();
  L130():
    goto L131();
  L131():
    sym103 = ldf invisible;
    base103 = ldf invisible in base;
    guard103 = `==`.4(sym103, base103);
    if guard103 then L566() else L567();
  L393():
    dr24 = tryDispatchBuiltin.1("[", x34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L395() else L394(i35, dr24);
  L394(i39, x36):
    i42 = ld i;
    check L396() else D118();
  L561():
    main4 = force? main3;
    checkMissing(main4);
    c142 = `==`(main4, NULL);
    goto L129(c142);
  L562():
    mtext = ldf mtext;
    check L563() else D222();
  D118():
    deopt 488 [i39, x36, i42];
  D119():
    deopt 494 [i41];
  D222():
    deopt 925 [];
  L132(r694):
    popenv;
    return r694;
  L395():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L92(i35, dx35);
  L396():
    i43 = force? i42;
    __10 = ldf `[` in base;
    r274 = dyn __10(x34, <missing>, <missing>, i43);
    goto L92(i39, r274);
  L397():
    p23 = prom<V +>{
      tab = ld tab;
      tab1 = force? tab;
      checkMissing(tab1);
      return tab1;
    };
    p24 = prom<V +>{
      std3 = ld std;
      std4 = force? std3;
      checkMissing(std4);
      return std4;
    };
    p25 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    r278 = dyn stdize(p23, p24, p25);
    check L398() else D120();
  L563():
    p107 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    r691 = dyn mtext[, cex, adj](p107, 1.5, 0.5);
    check L564() else D223();
  L566():
    invisible = ldf invisible in base;
    r695 = dyn invisible();
    check L568() else D224();
  L567():
    r693 = dyn base103();
    goto L132(r693);
  D120():
    deopt 498 [i41, r278];
  D223():
    deopt 931 [r691];
  D224():
    deopt 937 [r695];
  L398():
    st fit = r278;
    indexMatrix = ld indexMatrix;
    check L399() else D121();
  L564():
    goto L131();
  L568():
    goto L132(r695);
  D121():
    deopt 500 [i41, indexMatrix];
  L399():
    indexMatrix1 = force? indexMatrix;
    checkMissing(indexMatrix1);
    c73 = `is.object`(indexMatrix1);
    if c73 then L400() else L401(i41, indexMatrix1);
  L93(i47, dx38):
    st xInd = dx38;
    xInd = ld xInd;
    check L404() else D123();
  L400():
    dr26 = tryDispatchBuiltin.1("[", indexMatrix1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L402() else L401(i41, dr26);
  L401(i45, indexMatrix3):
    i48 = ld i;
    check L403() else D122();
  D122():
    deopt 502 [i45, indexMatrix3, i48];
  D123():
    deopt 508 [i47, 2.0, xInd];
  L402():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L93(i41, dx37);
  L403():
    i49 = force? i48;
    __11 = ldf `[` in base;
    r279 = dyn __11(indexMatrix3, i49, 2);
    goto L93(i45, r279);
  L404():
    xInd1 = force? xInd;
    checkMissing(xInd1);
    r280 = `*`(2.0, xInd1);
    r281 = `-`(r280, 1.0);
    xInd2 = ld xInd;
    check L405() else D124();
  D124():
    deopt 513 [i47, r281, 3.0, xInd2];
  L405():
    xInd3 = force? xInd2;
    checkMissing(xInd3);
    r282 = `*`(3.0, xInd3);
    r283 = `-`(r282, 2.0);
    space13 = ld space;
    check L406() else D125();
  D125():
    deopt 517 [i47, r281, r283, space13];
  L406():
    space14 = force? space13;
    checkMissing(space14);
    r284 = `*`(r283, space14);
    r285 = `+`(r281, r284);
    st xOrig = r285;
    indexMatrix4 = ld indexMatrix;
    check L407() else D126();
  D126():
    deopt 522 [i47, indexMatrix4];
  L407():
    indexMatrix5 = force? indexMatrix4;
    checkMissing(indexMatrix5);
    c74 = `is.object`(indexMatrix5);
    if c74 then L408() else L409(i47, indexMatrix5);
  L94(i53, dx40):
    st yInd = dx40;
    k10 = ld k;
    check L412() else D128();
  L408():
    dr28 = tryDispatchBuiltin.1("[", indexMatrix5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L410() else L409(i47, dr28);
  L409(i51, indexMatrix7):
    i54 = ld i;
    check L411() else D127();
  D127():
    deopt 524 [i51, indexMatrix7, i54];
  D128():
    deopt 529 [i53, k10];
  L410():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L94(i47, dx39);
  L411():
    i55 = force? i54;
    __12 = ldf `[` in base;
    r286 = dyn __12(indexMatrix7, i55, 1);
    goto L94(i51, r286);
  L412():
    k11 = force? k10;
    checkMissing(k11);
    r287 = `==`(k11, 1.0);
    c75 = `as.logical`(r287);
    if c75 then L413() else L95();
  L95():
    totalHeight2 = ld totalHeight;
    check L416() else D130();
  L96(i58, r289):
    st yOrig = r289;
    plot_window1 = ldf `plot.window`;
    check L421() else D135();
  L413():
    space15 = ld space;
    check L414() else D129();
  D129():
    deopt 534 [i53, 1.0, space15];
  D130():
    deopt 537 [i53, totalHeight2];
  D135():
    deopt 557 [i58];
  L414():
    space16 = force? space15;
    checkMissing(space16);
    r288 = `+`(1.0, space16);
    goto L96(i53, r288);
  L416():
    totalHeight3 = force? totalHeight2;
    checkMissing(totalHeight3);
    yInd = ld yInd;
    check L417() else D131();
  L421():
    p26 = prom<V +>{
      xlim2 = ld xlim;
      xlim3 = force? xlim2;
      checkMissing(xlim3);
      xOrig = ld xOrig;
      xOrig1 = force? xOrig;
      checkMissing(xOrig1);
      r298 = `-`(xlim3, xOrig1);
      return r298;
    };
    p27 = prom<V +>{
      ylim2 = ld ylim;
      ylim3 = force? ylim2;
      checkMissing(ylim3);
      yOrig = ld yOrig;
      yOrig1 = force? yOrig;
      checkMissing(yOrig1);
      r300 = `-`(ylim3, yOrig1);
      return r300;
    };
    r302 = dyn plot_window1[, , asp](p26, p27, 1.0);
    check L422() else D136();
  D131():
    deopt 539 [i53, totalHeight3, 2.0, yInd];
  D136():
    deopt 562 [i58, r302];
  L417():
    yInd1 = force? yInd;
    checkMissing(yInd1);
    r290 = `*`(2.0, yInd1);
    r291 = `-`(r290, 1.0);
    gamma2 = ld gamma;
    check L418() else D132();
  L422():
    debug = ld debug;
    check L423() else D137();
  D132():
    deopt 544 [i53, totalHeight3, r291, 3.0, gamma2];
  D137():
    deopt 563 [i58, debug];
  L418():
    gamma3 = force? gamma2;
    checkMissing(gamma3);
    r292 = `+`(3.0, gamma3);
    yInd2 = ld yInd;
    check L419() else D133();
  L423():
    debug1 = force? debug;
    checkMissing(debug1);
    c76 = `as.logical`(debug1);
    if c76 then L424() else L97();
  D133():
    deopt 546 [i53, totalHeight3, r291, r292, yInd2];
  L97():
    goto L98(i58);
  L98(i61):
    space29 = ld space;
    check L436() else D148();
  L419():
    yInd3 = force? yInd2;
    checkMissing(yInd3);
    r293 = `*`(r292, yInd3);
    r294 = `-`(r293, 2.0);
    space17 = ld space;
    check L420() else D134();
  L424():
    abline = ldf abline;
    check L425() else D138();
  D134():
    deopt 550 [i53, totalHeight3, r291, r294, space17];
  D138():
    deopt 566 [i58];
  D148():
    deopt 593 [i61, 1.0, space29];
  L420():
    space18 = force? space17;
    checkMissing(space18);
    r295 = `*`(r294, space18);
    r296 = `+`(r291, r295);
    r297 = `-`(totalHeight3, r296);
    goto L96(i53, r297);
  L425():
    p28 = prom<V +>{
      space19 = ld space;
      space20 = force? space19;
      checkMissing(space20);
      r303 = `-`(-1.0, space20);
      return r303;
    };
    r305 = dyn abline[h](p28);
    check L426() else D139();
  L436():
    space30 = force? space29;
    checkMissing(space30);
    r321 = `/`(space30, 2.0);
    r322 = `+`(1.0, r321);
    st u = r322;
    st adjCorr = 0.2;
    text = ldf text;
    check L437() else D149();
  D139():
    deopt 569 [i58, r305];
  D149():
    deopt 603 [i61];
  L426():
    abline1 = ldf abline;
    check L427() else D140();
  L437():
    p33 = prom<V +>{
      u = ld u;
      u1 = force? u;
      checkMissing(u1);
      return u1;
    };
    p36 = prom<V +>{
      paste = ldf paste;
      p34 = prom<V +>{
        sym50 = ldf names;
        base50 = ldf names in base;
        guard50 = `==`.4(sym50, base50);
        if guard50 then L3() else L4();
      L0(r325):
        c77 = `is.object`(r325);
        if c77 then L7() else L8(r325);
      L3():
        sym51 = ldf dimnames;
        base51 = ldf dimnames in base;
        guard51 = `==`.4(sym51, base51);
        if guard51 then L5() else L6();
      L4():
        r324 = dyn base50(<lang dimnames(x)>);
        goto L0(r324);
      L1(r327):
        names3 = ldf names in base;
        r329 = dyn names3(r327);
        goto L0(r329);
      L2(dx42):
        return dx42;
      L5():
        x39 = ld x;
        x40 = force? x39;
        checkMissing(x40);
        dimnames3 = ldf dimnames in base;
        r328 = dyn dimnames3(x40);
        goto L1(r328);
      L6():
        r326 = dyn base51(<sym x>);
        goto L1(r326);
      L7():
        dr30 = tryDispatchBuiltin.1("[", r325);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L9() else L8(dr30);
      L8(r331):
        __13 = ldf `[` in base;
        r332 = dyn __13(r331, 1);
        goto L2(r332);
      L9():
        dx41 = getTryDispatchBuiltinValue(dr30);
        goto L2(dx41);
      };
      p35 = prom<V +>{
        sym52 = ldf dimnames;
        base52 = ldf dimnames in base;
        guard52 = `==`.4(sym52, base52);
        if guard52 then L3() else L4();
      L0(r335):
        c78 = `is.object`(r335);
        if c78 then L5() else L6(r335);
      L3():
        x41 = ld x;
        x42 = force? x41;
        checkMissing(x42);
        dimnames4 = ldf dimnames in base;
        r336 = dyn dimnames4(x42);
        goto L0(r336);
      L4():
        r334 = dyn base52(<sym x>);
        goto L0(r334);
      L1(dx44):
        c79 = `is.object`(dx44);
        if c79 then L8() else L9(dx44);
      L5():
        dr32 = tryDispatchBuiltin.1("[[", r335);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L7() else L6(dr32);
      L6(r338):
        __14 = ldf `[[` in base;
        r339 = dyn __14(r338, 1);
        goto L1(r339);
      L2(dx48):
        return dx48;
      L7():
        dx43 = getTryDispatchBuiltinValue(dr32);
        goto L1(dx43);
      L8():
        dr34 = tryDispatchBuiltin.1("[", dx44);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L10() else L9(dr34);
      L9(dx46):
        __15 = ldf `[` in base;
        r340 = dyn __15(dx46, 1);
        goto L2(r340);
      L10():
        dx47 = getTryDispatchBuiltinValue(dr34);
        goto L2(dx47);
      };
      r342 = dyn paste[, , sep](p34, p35, ": ");
      return r342;
    };
    p37 = prom<V +>{
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r345):
      return r345;
    L1():
      adjCorr = ld adjCorr;
      adjCorr1 = force? adjCorr;
      checkMissing(adjCorr1);
      r346 = `-`(0.5, adjCorr1);
      c80 = ldf c in base;
      r347 = dyn c80(0.5, r346);
      goto L0(r347);
    L2():
      r344 = dyn base53(0.5, <lang `-`(0.5, adjCorr)>);
      goto L0(r344);
    };
    p38 = prom<V +>{
      scale2 = ld scale;
      scale3 = force? scale2;
      checkMissing(scale3);
      return scale3;
    };
    r350 = dyn text[, , , adj, cex](0.0, p33, p36, p37, p38);
    check L438() else D150();
  D140():
    deopt 571 [i58];
  D150():
    deopt 611 [i61, r350];
  L427():
    p29 = prom<V +>{
      space21 = ld space;
      space22 = force? space21;
      checkMissing(space22);
      r306 = `+`(1.0, space22);
      return r306;
    };
    r308 = dyn abline1[h](p29);
    check L428() else D141();
  L438():
    text1 = ldf text;
    check L439() else D151();
  D141():
    deopt 574 [i58, r308];
  D151():
    deopt 613 [i61];
  L428():
    abline2 = ldf abline;
    check L429() else D142();
  L439():
    p39 = prom<V +>{
      u2 = ld u;
      u3 = force? u2;
      checkMissing(u3);
      r351 = `-`(<missing>, u3);
      return r351;
    };
    p42 = prom<V +>{
      paste1 = ldf paste;
      p40 = prom<V +>{
        sym54 = ldf names;
        base54 = ldf names in base;
        guard54 = `==`.4(sym54, base54);
        if guard54 then L3() else L4();
      L0(r354):
        c81 = `is.object`(r354);
        if c81 then L7() else L8(r354);
      L3():
        sym55 = ldf dimnames;
        base55 = ldf dimnames in base;
        guard55 = `==`.4(sym55, base55);
        if guard55 then L5() else L6();
      L4():
        r353 = dyn base54(<lang dimnames(x)>);
        goto L0(r353);
      L1(r356):
        names4 = ldf names in base;
        r358 = dyn names4(r356);
        goto L0(r358);
      L2(dx50):
        return dx50;
      L5():
        x43 = ld x;
        x44 = force? x43;
        checkMissing(x44);
        dimnames5 = ldf dimnames in base;
        r357 = dyn dimnames5(x44);
        goto L1(r357);
      L6():
        r355 = dyn base55(<sym x>);
        goto L1(r355);
      L7():
        dr36 = tryDispatchBuiltin.1("[", r354);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L9() else L8(dr36);
      L8(r360):
        __16 = ldf `[` in base;
        r361 = dyn __16(r360, 2);
        goto L2(r361);
      L9():
        dx49 = getTryDispatchBuiltinValue(dr36);
        goto L2(dx49);
      };
      p41 = prom<V +>{
        sym56 = ldf dimnames;
        base56 = ldf dimnames in base;
        guard56 = `==`.4(sym56, base56);
        if guard56 then L3() else L4();
      L0(r364):
        c82 = `is.object`(r364);
        if c82 then L5() else L6(r364);
      L3():
        x45 = ld x;
        x46 = force? x45;
        checkMissing(x46);
        dimnames6 = ldf dimnames in base;
        r365 = dyn dimnames6(x46);
        goto L0(r365);
      L4():
        r363 = dyn base56(<sym x>);
        goto L0(r363);
      L1(dx52):
        c83 = `is.object`(dx52);
        if c83 then L8() else L9(dx52);
      L5():
        dr38 = tryDispatchBuiltin.1("[[", r364);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L7() else L6(dr38);
      L6(r367):
        __17 = ldf `[[` in base;
        r368 = dyn __17(r367, 2);
        goto L1(r368);
      L2(dx56):
        return dx56;
      L7():
        dx51 = getTryDispatchBuiltinValue(dr38);
        goto L1(dx51);
      L8():
        dr40 = tryDispatchBuiltin.1("[", dx52);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L10() else L9(dr40);
      L9(dx54):
        __18 = ldf `[` in base;
        r369 = dyn __18(dx54, 1);
        goto L2(r369);
      L10():
        dx55 = getTryDispatchBuiltinValue(dr40);
        goto L2(dx55);
      };
      r371 = dyn paste1[, , sep](p40, p41, ": ");
      return r371;
    };
    p43 = prom<V +>{
      sym57 = ldf c;
      base57 = ldf c in base;
      guard57 = `==`.4(sym57, base57);
      if guard57 then L1() else L2();
    L0(r374):
      return r374;
    L1():
      adjCorr2 = ld adjCorr;
      adjCorr3 = force? adjCorr2;
      checkMissing(adjCorr3);
      r375 = `-`(0.5, adjCorr3);
      c84 = ldf c in base;
      r376 = dyn c84(0.5, r375);
      goto L0(r376);
    L2():
      r373 = dyn base57(0.5, <lang `-`(0.5, adjCorr)>);
      goto L0(r373);
    };
    p44 = prom<V +>{
      scale4 = ld scale;
      scale5 = force? scale4;
      checkMissing(scale5);
      return scale5;
    };
    r379 = dyn text1[, , , adj, cex, srt](p39, 0.0, p42, p43, p44, 90.0);
    check L440() else D152();
  D142():
    deopt 576 [i58];
  D152():
    deopt 623 [i61, r379];
  L429():
    p30 = prom<V +>{
      gamma4 = ld gamma;
      gamma5 = force? gamma4;
      checkMissing(gamma5);
      r309 = `+`(1.0, gamma5);
      space23 = ld space;
      space24 = force? space23;
      checkMissing(space24);
      r310 = `*`(r309, space24);
      r311 = `+`(1.0, r310);
      return r311;
    };
    r313 = dyn abline2[h](p30);
    check L430() else D143();
  L440():
    text2 = ldf text;
    check L441() else D153();
  D143():
    deopt 579 [i58, r313];
  D153():
    deopt 625 [i61];
  L430():
    abline3 = ldf abline;
    check L431() else D144();
  L441():
    p45 = prom<V +>{
      u4 = ld u;
      u5 = force? u4;
      checkMissing(u5);
      r380 = `-`(<missing>, u5);
      return r380;
    };
    p48 = prom<V +>{
      paste2 = ldf paste;
      p46 = prom<V +>{
        sym58 = ldf names;
        base58 = ldf names in base;
        guard58 = `==`.4(sym58, base58);
        if guard58 then L3() else L4();
      L0(r383):
        c85 = `is.object`(r383);
        if c85 then L7() else L8(r383);
      L3():
        sym59 = ldf dimnames;
        base59 = ldf dimnames in base;
        guard59 = `==`.4(sym59, base59);
        if guard59 then L5() else L6();
      L4():
        r382 = dyn base58(<lang dimnames(x)>);
        goto L0(r382);
      L1(r385):
        names5 = ldf names in base;
        r387 = dyn names5(r385);
        goto L0(r387);
      L2(dx58):
        return dx58;
      L5():
        x47 = ld x;
        x48 = force? x47;
        checkMissing(x48);
        dimnames7 = ldf dimnames in base;
        r386 = dyn dimnames7(x48);
        goto L1(r386);
      L6():
        r384 = dyn base59(<sym x>);
        goto L1(r384);
      L7():
        dr42 = tryDispatchBuiltin.1("[", r383);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L9() else L8(dr42);
      L8(r389):
        __19 = ldf `[` in base;
        r390 = dyn __19(r389, 1);
        goto L2(r390);
      L9():
        dx57 = getTryDispatchBuiltinValue(dr42);
        goto L2(dx57);
      };
      p47 = prom<V +>{
        sym60 = ldf dimnames;
        base60 = ldf dimnames in base;
        guard60 = `==`.4(sym60, base60);
        if guard60 then L3() else L4();
      L0(r393):
        c86 = `is.object`(r393);
        if c86 then L5() else L6(r393);
      L3():
        x49 = ld x;
        x50 = force? x49;
        checkMissing(x50);
        dimnames8 = ldf dimnames in base;
        r394 = dyn dimnames8(x50);
        goto L0(r394);
      L4():
        r392 = dyn base60(<sym x>);
        goto L0(r392);
      L1(dx60):
        c87 = `is.object`(dx60);
        if c87 then L8() else L9(dx60);
      L5():
        dr44 = tryDispatchBuiltin.1("[[", r393);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L7() else L6(dr44);
      L6(r396):
        __20 = ldf `[[` in base;
        r397 = dyn __20(r396, 1);
        goto L1(r397);
      L2(dx64):
        return dx64;
      L7():
        dx59 = getTryDispatchBuiltinValue(dr44);
        goto L1(dx59);
      L8():
        dr46 = tryDispatchBuiltin.1("[", dx60);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L10() else L9(dr46);
      L9(dx62):
        __21 = ldf `[` in base;
        r398 = dyn __21(dx62, 2);
        goto L2(r398);
      L10():
        dx63 = getTryDispatchBuiltinValue(dr46);
        goto L2(dx63);
      };
      r400 = dyn paste2[, , sep](p46, p47, ": ");
      return r400;
    };
    p49 = prom<V +>{
      sym61 = ldf c;
      base61 = ldf c in base;
      guard61 = `==`.4(sym61, base61);
      if guard61 then L1() else L2();
    L0(r403):
      return r403;
    L1():
      adjCorr4 = ld adjCorr;
      adjCorr5 = force? adjCorr4;
      checkMissing(adjCorr5);
      r404 = `+`(0.5, adjCorr5);
      c88 = ldf c in base;
      r405 = dyn c88(0.5, r404);
      goto L0(r405);
    L2():
      r402 = dyn base61(0.5, <lang `+`(0.5, adjCorr)>);
      goto L0(r402);
    };
    p50 = prom<V +>{
      scale6 = ld scale;
      scale7 = force? scale6;
      checkMissing(scale7);
      return scale7;
    };
    r408 = dyn text2[, , , adj, cex](0.0, p45, p48, p49, p50);
    check L442() else D154();
  D144():
    deopt 581 [i58];
  D154():
    deopt 633 [i61, r408];
  L431():
    p31 = prom<V +>{
      space25 = ld space;
      space26 = force? space25;
      checkMissing(space26);
      r314 = `-`(-1.0, space26);
      return r314;
    };
    r316 = dyn abline3[v](p31);
    check L432() else D145();
  L442():
    text3 = ldf text;
    check L443() else D155();
  D145():
    deopt 584 [i58, r316];
  D155():
    deopt 635 [i61];
  L432():
    abline4 = ldf abline;
    check L433() else D146();
  L443():
    p51 = prom<V +>{
      u6 = ld u;
      u7 = force? u6;
      checkMissing(u7);
      return u7;
    };
    p54 = prom<V +>{
      paste3 = ldf paste;
      p52 = prom<V +>{
        sym62 = ldf names;
        base62 = ldf names in base;
        guard62 = `==`.4(sym62, base62);
        if guard62 then L3() else L4();
      L0(r411):
        c89 = `is.object`(r411);
        if c89 then L7() else L8(r411);
      L3():
        sym63 = ldf dimnames;
        base63 = ldf dimnames in base;
        guard63 = `==`.4(sym63, base63);
        if guard63 then L5() else L6();
      L4():
        r410 = dyn base62(<lang dimnames(x)>);
        goto L0(r410);
      L1(r413):
        names6 = ldf names in base;
        r415 = dyn names6(r413);
        goto L0(r415);
      L2(dx66):
        return dx66;
      L5():
        x51 = ld x;
        x52 = force? x51;
        checkMissing(x52);
        dimnames9 = ldf dimnames in base;
        r414 = dyn dimnames9(x52);
        goto L1(r414);
      L6():
        r412 = dyn base63(<sym x>);
        goto L1(r412);
      L7():
        dr48 = tryDispatchBuiltin.1("[", r411);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L9() else L8(dr48);
      L8(r417):
        __22 = ldf `[` in base;
        r418 = dyn __22(r417, 2);
        goto L2(r418);
      L9():
        dx65 = getTryDispatchBuiltinValue(dr48);
        goto L2(dx65);
      };
      p53 = prom<V +>{
        sym64 = ldf dimnames;
        base64 = ldf dimnames in base;
        guard64 = `==`.4(sym64, base64);
        if guard64 then L3() else L4();
      L0(r421):
        c90 = `is.object`(r421);
        if c90 then L5() else L6(r421);
      L3():
        x53 = ld x;
        x54 = force? x53;
        checkMissing(x54);
        dimnames10 = ldf dimnames in base;
        r422 = dyn dimnames10(x54);
        goto L0(r422);
      L4():
        r420 = dyn base64(<sym x>);
        goto L0(r420);
      L1(dx68):
        c91 = `is.object`(dx68);
        if c91 then L8() else L9(dx68);
      L5():
        dr50 = tryDispatchBuiltin.1("[[", r421);
        dc25 = getTryDispatchBuiltinDispatched(dr50);
        if dc25 then L7() else L6(dr50);
      L6(r424):
        __23 = ldf `[[` in base;
        r425 = dyn __23(r424, 2);
        goto L1(r425);
      L2(dx72):
        return dx72;
      L7():
        dx67 = getTryDispatchBuiltinValue(dr50);
        goto L1(dx67);
      L8():
        dr52 = tryDispatchBuiltin.1("[", dx68);
        dc26 = getTryDispatchBuiltinDispatched(dr52);
        if dc26 then L10() else L9(dr52);
      L9(dx70):
        __24 = ldf `[` in base;
        r426 = dyn __24(dx70, 2);
        goto L2(r426);
      L10():
        dx71 = getTryDispatchBuiltinValue(dr52);
        goto L2(dx71);
      };
      r428 = dyn paste3[, , sep](p52, p53, ": ");
      return r428;
    };
    p55 = prom<V +>{
      sym65 = ldf c;
      base65 = ldf c in base;
      guard65 = `==`.4(sym65, base65);
      if guard65 then L1() else L2();
    L0(r431):
      return r431;
    L1():
      adjCorr6 = ld adjCorr;
      adjCorr7 = force? adjCorr6;
      checkMissing(adjCorr7);
      r432 = `+`(0.5, adjCorr7);
      c92 = ldf c in base;
      r433 = dyn c92(0.5, r432);
      goto L0(r433);
    L2():
      r430 = dyn base65(0.5, <lang `+`(0.5, adjCorr)>);
      goto L0(r430);
    };
    p56 = prom<V +>{
      scale8 = ld scale;
      scale9 = force? scale8;
      checkMissing(scale9);
      return scale9;
    };
    r436 = dyn text3[, , , adj, cex, srt](p51, 0.0, p54, p55, p56, 90.0);
    check L444() else D156();
  D146():
    deopt 586 [i58];
  D156():
    deopt 645 [i61, r436];
  L433():
    p32 = prom<V +>{
      space27 = ld space;
      space28 = force? space27;
      checkMissing(space28);
      r317 = `+`(1.0, space28);
      return r317;
    };
    r319 = dyn abline4[v](p32);
    check L434() else D147();
  L444():
    k12 = ld k;
    check L445() else D157();
  D147():
    deopt 589 [i58, r319];
  D157():
    deopt 646 [i61, k12];
  L434():
    goto L98(i58);
  L445():
    k13 = force? k12;
    checkMissing(k13);
    r437 = `>`(k13, 1.0);
    c93 = `as.logical`(r437);
    if c93 then L446() else L99();
  L99():
    goto L100(i61);
  L100(i66):
    odds1 = ldf odds;
    check L450() else D160();
  L446():
    text4 = ldf text;
    check L447() else D158();
  D158():
    deopt 651 [i61];
  D160():
    deopt 661 [i66];
  L447():
    p57 = prom<V +>{
      gamma6 = ld gamma;
      gamma7 = force? gamma6;
      checkMissing(gamma7);
      r438 = `/`(gamma7, 2.0);
      r439 = `+`(1.0, r438);
      space31 = ld space;
      space32 = force? space31;
      checkMissing(space32);
      r440 = `*`(r439, space32);
      r441 = `+`(1.0, r440);
      return r441;
    };
    p60 = prom<V +>{
      paste4 = ldf paste;
      p58 = prom<V +>{
        sym66 = ldf names;
        base66 = ldf names in base;
        guard66 = `==`.4(sym66, base66);
        if guard66 then L3() else L4();
      L0(r444):
        c94 = `is.object`(r444);
        if c94 then L7() else L8(r444);
      L3():
        sym67 = ldf dimnames;
        base67 = ldf dimnames in base;
        guard67 = `==`.4(sym67, base67);
        if guard67 then L5() else L6();
      L4():
        r443 = dyn base66(<lang dimnames(x)>);
        goto L0(r443);
      L1(r446):
        names7 = ldf names in base;
        r448 = dyn names7(r446);
        goto L0(r448);
      L2(dx74):
        return dx74;
      L5():
        x55 = ld x;
        x56 = force? x55;
        checkMissing(x56);
        dimnames11 = ldf dimnames in base;
        r447 = dyn dimnames11(x56);
        goto L1(r447);
      L6():
        r445 = dyn base67(<sym x>);
        goto L1(r445);
      L7():
        dr54 = tryDispatchBuiltin.1("[", r444);
        dc27 = getTryDispatchBuiltinDispatched(dr54);
        if dc27 then L9() else L8(dr54);
      L8(r450):
        __25 = ldf `[` in base;
        r451 = dyn __25(r450, 3);
        goto L2(r451);
      L9():
        dx73 = getTryDispatchBuiltinValue(dr54);
        goto L2(dx73);
      };
      p59 = prom<V +>{
        sym68 = ldf dimnames;
        base68 = ldf dimnames in base;
        guard68 = `==`.4(sym68, base68);
        if guard68 then L3() else L4();
      L0(r454):
        c95 = `is.object`(r454);
        if c95 then L5() else L6(r454);
      L3():
        x57 = ld x;
        x58 = force? x57;
        checkMissing(x58);
        dimnames12 = ldf dimnames in base;
        r455 = dyn dimnames12(x58);
        goto L0(r455);
      L4():
        r453 = dyn base68(<sym x>);
        goto L0(r453);
      L1(dx76):
        c96 = `is.object`(dx76);
        if c96 then L8() else L9(dx76);
      L5():
        dr56 = tryDispatchBuiltin.1("[[", r454);
        dc28 = getTryDispatchBuiltinDispatched(dr56);
        if dc28 then L7() else L6(dr56);
      L6(r457):
        __26 = ldf `[[` in base;
        r458 = dyn __26(r457, 3);
        goto L1(r458);
      L2(dx80):
        return dx80;
      L7():
        dx75 = getTryDispatchBuiltinValue(dr56);
        goto L1(dx75);
      L8():
        dr58 = tryDispatchBuiltin.1("[", dx76);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L10() else L9(dr58);
      L9(dx78):
        i64 = ld i;
        i65 = force? i64;
        __27 = ldf `[` in base;
        r459 = dyn __27(dx78, i65);
        goto L2(r459);
      L10():
        dx79 = getTryDispatchBuiltinValue(dr58);
        goto L2(dx79);
      };
      r461 = dyn paste4[, , sep](p58, p59, ": ");
      return r461;
    };
    p61 = prom<V +>{
      gamma8 = ld gamma;
      gamma9 = force? gamma8;
      checkMissing(gamma9);
      scale10 = ld scale;
      scale11 = force? scale10;
      checkMissing(scale11);
      r463 = `*`(gamma9, scale11);
      return r463;
    };
    r465 = dyn text4[, , , cex](0.0, p57, p60, p61);
    check L448() else D159();
  L450():
    p62 = prom<V +>{
      tab2 = ld tab;
      tab3 = force? tab2;
      checkMissing(tab3);
      return tab3;
    };
    r468 = dyn odds1(p62);
    check L451() else D161();
  D159():
    deopt 657 [i61, r465];
  D161():
    deopt 663 [i66, r468];
  L448():
    goto L100(i61);
  L451():
    c97 = `is.object`(r468);
    if c97 then L453() else L454(i66, r468);
  L452(i70, dx82):
    st d = dx82;
    drawPie = ldf drawPie;
    check L456() else D162();
  L453():
    dr60 = tryDispatchBuiltin.1("$", r468);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L455() else L454(i66, dr60);
  L454(i68, r470):
    r471 = `$`(r470, <sym or>);
    goto L452(i68, r471);
  D162():
    deopt 667 [i70];
  L455():
    dx81 = getTryDispatchBuiltinValue(dr60);
    goto L452(i66, dx81);
  L456():
    p63 = prom<V +>{
      sym69 = ldf sqrt;
      base69 = ldf sqrt in base;
      guard69 = `==`.4(sym69, base69);
      if guard69 then L2() else L3();
    L0(r473):
      return r473;
    L2():
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      c98 = `is.object`(fit1);
      if c98 then L4() else L5(fit1);
    L3():
      r472 = dyn base69(<lang `[`(fit, 1.0, 1.0)>);
      goto L0(r472);
    L1(dx84):
      r475 = sqrt(dx84);
      goto L0(r475);
    L4():
      dr62 = tryDispatchBuiltin.1("[", fit1);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L6() else L5(dr62);
    L5(fit3):
      __28 = ldf `[` in base;
      r474 = dyn __28(fit3, 1.0, 1.0);
      goto L1(r474);
    L6():
      dx83 = getTryDispatchBuiltinValue(dr62);
      goto L1(dx83);
    };
    p64 = prom<V +>{
      color1 = ld color;
      color2 = force? color1;
      checkMissing(color2);
      c99 = `is.object`(color2);
      if c99 then L1() else L2(color2);
    L0(dx86):
      return dx86;
    L1():
      dr64 = tryDispatchBuiltin.1("[", color2);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(color4):
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      r477 = `>`(d1, 1.0);
      r478 = `+`(1.0, r477);
      __29 = ldf `[` in base;
      r479 = dyn __29(color4, r478);
      goto L0(r479);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx85);
    };
    r481 = dyn drawPie[, , , col](p63, 90.0, 180.0, p64);
    check L457() else D163();
  D163():
    deopt 673 [i70, r481];
  L457():
    drawPie1 = ldf drawPie;
    check L458() else D164();
  D164():
    deopt 675 [i70];
  L458():
    p65 = prom<V +>{
      sym70 = ldf sqrt;
      base70 = ldf sqrt in base;
      guard70 = `==`.4(sym70, base70);
      if guard70 then L2() else L3();
    L0(r483):
      return r483;
    L2():
      fit4 = ld fit;
      fit5 = force? fit4;
      checkMissing(fit5);
      c100 = `is.object`(fit5);
      if c100 then L4() else L5(fit5);
    L3():
      r482 = dyn base70(<lang `[`(fit, 2.0, 1.0)>);
      goto L0(r482);
    L1(dx88):
      r485 = sqrt(dx88);
      goto L0(r485);
    L4():
      dr66 = tryDispatchBuiltin.1("[", fit5);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L6() else L5(dr66);
    L5(fit7):
      __30 = ldf `[` in base;
      r484 = dyn __30(fit7, 2.0, 1.0);
      goto L1(r484);
    L6():
      dx87 = getTryDispatchBuiltinValue(dr66);
      goto L1(dx87);
    };
    p66 = prom<V +>{
      color5 = ld color;
      color6 = force? color5;
      checkMissing(color6);
      c101 = `is.object`(color6);
      if c101 then L1() else L2(color6);
    L0(dx90):
      return dx90;
    L1():
      dr68 = tryDispatchBuiltin.1("[", color6);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(color8):
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      r487 = `>`(d3, 1.0);
      r488 = `-`(2.0, r487);
      __31 = ldf `[` in base;
      r489 = dyn __31(color8, r488);
      goto L0(r489);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx89);
    };
    r491 = dyn drawPie1[, , , col](p65, 180.0, 270.0, p66);
    check L459() else D165();
  D165():
    deopt 681 [i70, r491];
  L459():
    drawPie2 = ldf drawPie;
    check L460() else D166();
  D166():
    deopt 683 [i70];
  L460():
    p67 = prom<V +>{
      sym71 = ldf sqrt;
      base71 = ldf sqrt in base;
      guard71 = `==`.4(sym71, base71);
      if guard71 then L2() else L3();
    L0(r493):
      return r493;
    L2():
      fit8 = ld fit;
      fit9 = force? fit8;
      checkMissing(fit9);
      c102 = `is.object`(fit9);
      if c102 then L4() else L5(fit9);
    L3():
      r492 = dyn base71(<lang `[`(fit, 1.0, 2.0)>);
      goto L0(r492);
    L1(dx92):
      r495 = sqrt(dx92);
      goto L0(r495);
    L4():
      dr70 = tryDispatchBuiltin.1("[", fit9);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L6() else L5(dr70);
    L5(fit11):
      __32 = ldf `[` in base;
      r494 = dyn __32(fit11, 1.0, 2.0);
      goto L1(r494);
    L6():
      dx91 = getTryDispatchBuiltinValue(dr70);
      goto L1(dx91);
    };
    p68 = prom<V +>{
      color9 = ld color;
      color10 = force? color9;
      checkMissing(color10);
      c103 = `is.object`(color10);
      if c103 then L1() else L2(color10);
    L0(dx94):
      return dx94;
    L1():
      dr72 = tryDispatchBuiltin.1("[", color10);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L3() else L2(dr72);
    L2(color12):
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      r497 = `>`(d5, 1.0);
      r498 = `-`(2.0, r497);
      __33 = ldf `[` in base;
      r499 = dyn __33(color12, r498);
      goto L0(r499);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr72);
      goto L0(dx93);
    };
    r501 = dyn drawPie2[, , , col](p67, 0.0, 90.0, p68);
    check L461() else D167();
  D167():
    deopt 689 [i70, r501];
  L461():
    drawPie3 = ldf drawPie;
    check L462() else D168();
  D168():
    deopt 691 [i70];
  L462():
    p69 = prom<V +>{
      sym72 = ldf sqrt;
      base72 = ldf sqrt in base;
      guard72 = `==`.4(sym72, base72);
      if guard72 then L2() else L3();
    L0(r503):
      return r503;
    L2():
      fit12 = ld fit;
      fit13 = force? fit12;
      checkMissing(fit13);
      c104 = `is.object`(fit13);
      if c104 then L4() else L5(fit13);
    L3():
      r502 = dyn base72(<lang `[`(fit, 2.0, 2.0)>);
      goto L0(r502);
    L1(dx96):
      r505 = sqrt(dx96);
      goto L0(r505);
    L4():
      dr74 = tryDispatchBuiltin.1("[", fit13);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L6() else L5(dr74);
    L5(fit15):
      __34 = ldf `[` in base;
      r504 = dyn __34(fit15, 2.0, 2.0);
      goto L1(r504);
    L6():
      dx95 = getTryDispatchBuiltinValue(dr74);
      goto L1(dx95);
    };
    p70 = prom<V +>{
      color13 = ld color;
      color14 = force? color13;
      checkMissing(color14);
      c105 = `is.object`(color14);
      if c105 then L1() else L2(color14);
    L0(dx98):
      return dx98;
    L1():
      dr76 = tryDispatchBuiltin.1("[", color14);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(color16):
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      r507 = `>`(d7, 1.0);
      r508 = `+`(1.0, r507);
      __35 = ldf `[` in base;
      r509 = dyn __35(color16, r508);
      goto L0(r509);
    L3():
      dx97 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx97);
    };
    r511 = dyn drawPie3[, , , col](p69, 270.0, 360.0, p70);
    check L463() else D169();
  D169():
    deopt 697 [i70, r511];
  L463():
    space33 = ld space;
    check L464() else D170();
  D170():
    deopt 699 [i70, 1.0, space33];
  L464():
    space34 = force? space33;
    checkMissing(space34);
    r512 = `/`(space34, 2.0);
    r513 = `-`(1.0, r512);
    st u = r513;
    text5 = ldf text;
    check L465() else D171();
  D171():
    deopt 706 [i70];
  L465():
    p71 = prom<V +>{
      sym73 = ldf c;
      base73 = ldf c in base;
      guard73 = `==`.4(sym73, base73);
      if guard73 then L1() else L2();
    L0(r515):
      return r515;
    L1():
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      r516 = `-`(<missing>, v1);
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      r517 = `-`(<missing>, v3);
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      v6 = ld v;
      v7 = force? v6;
      checkMissing(v7);
      c106 = ldf c in base;
      r518 = dyn c106(r516, r517, v5, v7);
      goto L0(r518);
    L2():
      r514 = dyn base73(<lang `-`(v)>, <lang `-`(v)>, <sym v>, <sym v>);
      goto L0(r514);
    };
    p72 = prom<V +>{
      sym74 = ldf c;
      base74 = ldf c in base;
      guard74 = `==`.4(sym74, base74);
      if guard74 then L1() else L2();
    L0(r521):
      return r521;
    L1():
      u8 = ld u;
      u9 = force? u8;
      checkMissing(u9);
      u10 = ld u;
      u11 = force? u10;
      checkMissing(u11);
      r522 = `-`(<missing>, u11);
      u12 = ld u;
      u13 = force? u12;
      checkMissing(u13);
      u14 = ld u;
      u15 = force? u14;
      checkMissing(u15);
      r523 = `-`(<missing>, u15);
      c107 = ldf c in base;
      r524 = dyn c107(u9, r522, u13, r523);
      goto L0(r524);
    L2():
      r520 = dyn base74(<sym u>, <lang `-`(u)>, <sym u>, <lang `-`(u)>);
      goto L0(r520);
    };
    p73 = prom<V +>{
      sym75 = ldf `as.character`;
      base75 = ldf `as.character` in base;
      guard75 = `==`.4(sym75, base75);
      if guard75 then L2() else L3();
    L0(r527):
      return r527;
    L2():
      sym76 = ldf c;
      base76 = ldf c in base;
      guard76 = `==`.4(sym76, base76);
      if guard76 then L4() else L5();
    L3():
      r526 = dyn base75(<lang c(tab)>);
      goto L0(r526);
    L1(r529):
      as_character1 = ldf `as.character` in base;
      r531 = dyn as_character1(r529);
      goto L0(r531);
    L4():
      tab4 = ld tab;
      tab5 = force? tab4;
      checkMissing(tab5);
      c108 = ldf c in base;
      r530 = dyn c108(tab5);
      goto L1(r530);
    L5():
      r528 = dyn base76(<sym tab>);
      goto L1(r528);
    };
    p74 = prom<V +>{
      scale12 = ld scale;
      scale13 = force? scale12;
      checkMissing(scale13);
      return scale13;
    };
    r534 = dyn text5[, , , cex](p71, p72, p73, p74);
    check L466() else D172();
  D172():
    deopt 712 [i70, r534];
  L466():
    sym77 = ldf `is.numeric`;
    base77 = ldf `is.numeric` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L467() else L468();
  L101(i73, r536):
    c109 = `as.logical`(r536);
    if c109 then L471() else L102();
  L467():
    conf_level11 = ld `conf.level`;
    check L469() else D173();
  L468():
    r535 = dyn base77(<sym conf.level>);
    goto L101(i70, r535);
  D173():
    deopt 715 [i70, conf_level11];
  L102():
    goto L115(i73);
  L115(i130):
    polygon = ldf polygon;
    check L529() else D203();
  L469():
    conf_level12 = force? conf_level11;
    checkMissing(conf_level12);
    is_numeric = ldf `is.numeric` in base;
    r537 = dyn is_numeric(conf_level12);
    check L470() else D174();
  L471():
    o = ld o;
    check L472() else D175();
  D174():
    deopt 718 [i70, r537];
  D175():
    deopt 719 [i73, o];
  D203():
    deopt 826 [i130];
  L470():
    goto L101(i70, r537);
  L472():
    o1 = force? o;
    checkMissing(o1);
    c110 = `is.object`(o1);
    if c110 then L474() else L475(i73, o1);
  L529():
    p93 = prom<V +>{
      sym84 = ldf c;
      base84 = ldf c in base;
      guard84 = `==`.4(sym84, base84);
      if guard84 then L1() else L2();
    L0(r613):
      return r613;
    L1():
      c124 = ldf c in base;
      r614 = dyn c124(-1.0, 1.0, 1.0, -1.0);
      goto L0(r614);
    L2():
      r612 = dyn base84(<lang `-`(1.0)>, 1.0, 1.0, <lang `-`(1.0)>);
      goto L0(r612);
    };
    p94 = prom<V +>{
      sym85 = ldf c;
      base85 = ldf c in base;
      guard85 = `==`.4(sym85, base85);
      if guard85 then L1() else L2();
    L0(r617):
      return r617;
    L1():
      c125 = ldf c in base;
      r618 = dyn c125(-1.0, -1.0, 1.0, 1.0);
      goto L0(r618);
    L2():
      r616 = dyn base85(<lang `-`(1.0)>, <lang `-`(1.0)>, 1.0, 1.0);
      goto L0(r616);
    };
    r620 = dyn polygon(p93, p94);
    check L530() else D204();
  D204():
    deopt 829 [i130, r620];
  L473(i79, dx100):
    c111 = `is.object`(dx100);
    if c111 then L477() else L478(i79, dx100);
  L474():
    dr78 = tryDispatchBuiltin.1("$", o1);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L476() else L475(i73, dr78);
  L475(i77, o3):
    r538 = `$`(o3, <sym or>);
    goto L473(i77, r538);
  L530():
    lines = ldf lines;
    check L531() else D205();
  D205():
    deopt 831 [i130];
  L103(i83, dx104):
    st or = dx104;
    o4 = ld o;
    check L481() else D177();
  L476():
    dx99 = getTryDispatchBuiltinValue(dr78);
    goto L473(i73, dx99);
  L477():
    dr80 = tryDispatchBuiltin.1("[", dx100);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L479() else L478(i79, dr80);
  L478(i81, dx102):
    i84 = ld i;
    check L480() else D176();
  L531():
    p95 = prom<V +>{
      sym86 = ldf c;
      base86 = ldf c in base;
      guard86 = `==`.4(sym86, base86);
      if guard86 then L1() else L2();
    L0(r622):
      return r622;
    L1():
      c126 = ldf c in base;
      r623 = dyn c126(-1.0, 1.0);
      goto L0(r623);
    L2():
      r621 = dyn base86(<lang `-`(1.0)>, 1.0);
      goto L0(r621);
    };
    p96 = prom<V +>{
      sym87 = ldf c;
      base87 = ldf c in base;
      guard87 = `==`.4(sym87, base87);
      if guard87 then L1() else L2();
    L0(r626):
      return r626;
    L1():
      c127 = ldf c in base;
      r627 = dyn c127(0.0, 0.0);
      goto L0(r627);
    L2():
      r625 = dyn base87(0.0, 0.0);
      goto L0(r625);
    };
    r629 = dyn lines(p95, p96);
    check L532() else D206();
  D176():
    deopt 722 [i81, dx102, i84];
  D177():
    deopt 726 [i83, o4];
  D206():
    deopt 834 [i130, r629];
  L479():
    dx103 = getTryDispatchBuiltinValue(dr80);
    goto L103(i79, dx103);
  L480():
    i85 = force? i84;
    __36 = ldf `[` in base;
    r539 = dyn __36(dx102, i85);
    goto L103(i81, r539);
  L481():
    o5 = force? o4;
    checkMissing(o5);
    c112 = `is.object`(o5);
    if c112 then L483() else L484(i83, o5);
  L532():
    sym88 = ldf `seq.int`;
    base88 = ldf `seq.int` in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L533() else L534();
  L116(i134, r631):
    s4 = toForSeq(r631);
    l13 = length(s4);
    i135 = 0;
    goto L117(i134, i135);
  L482(i89, dx106):
    c113 = `is.object`(dx106);
    if c113 then L486() else L487(i89, dx106);
  L483():
    dr82 = tryDispatchBuiltin.1("$", o5);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L485() else L484(i83, dr82);
  L484(i87, o7):
    r540 = `$`(o7, <sym se>);
    goto L482(i87, r540);
  L533():
    seq_int = ldf `seq.int` in base;
    r632 = dyn seq_int(-0.8, 0.8, 0.2);
    check L535() else D207();
  L534():
    r630 = dyn base88[from, to, by](<lang `-`(0.8)>, 0.8, 0.2);
    goto L116(i130, r630);
  D207():
    deopt 845 [i130, r632];
  L104(i93, dx110):
    st se = dx110;
    or = ld or;
    check L490() else D179();
  L117(i136, i137):
    i138 = `+`.1(i137, 1);
    c128 = `<`.1(l13, i138);
    if c128 then L536() else L118();
  L485():
    dx105 = getTryDispatchBuiltinValue(dr82);
    goto L482(i83, dx105);
  L486():
    dr84 = tryDispatchBuiltin.1("[", dx106);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L488() else L487(i89, dr84);
  L487(i91, dx108):
    i94 = ld i;
    check L489() else D178();
  L535():
    goto L116(i130, r632);
  D178():
    deopt 729 [i91, dx108, i94];
  D179():
    deopt 733 [i93, or];
  L118():
    x65 = `[[`(s4, i138, NULL, TRUE);
    st j = x65;
    lines1 = ldf lines;
    check L537() else D208();
  L488():
    dx109 = getTryDispatchBuiltinValue(dr84);
    goto L104(i89, dx109);
  L489():
    i95 = force? i94;
    __37 = ldf `[` in base;
    r541 = dyn __37(dx108, i95);
    goto L104(i91, r541);
  L490():
    or1 = force? or;
    checkMissing(or1);
    sym78 = ldf exp;
    base78 = ldf exp in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L491() else L492();
  L536():
    sym91 = ldf `seq.int`;
    base91 = ldf `seq.int` in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L539() else L540();
  D208():
    deopt 847 [i136, i138];
  L105(i98, or4, r543):
    r552 = `*`(or4, r543);
    st theta = r552;
    findTableWithOAM = ldf findTableWithOAM;
    check L497() else D184();
  L119(i145, r643):
    s5 = toForSeq(r643);
    l14 = length(s5);
    i146 = 0;
    goto L120(i145, i146);
  L491():
    __38 = ldf `::`;
    check L493() else D180();
  L492():
    r542 = dyn base78(<lang `*`(`::`(stats, qnorm)(`/`(`(`(`-`(1.0, conf.level)), 2.0)), se)>);
    goto L105(i93, or1, r542);
  L537():
    p97 = prom<V +>{
      sym89 = ldf c;
      base89 = ldf c in base;
      guard89 = `==`.4(sym89, base89);
      if guard89 then L1() else L2();
    L0(r634):
      return r634;
    L1():
      j12 = ld j;
      j13 = force? j12;
      checkMissing(j13);
      j14 = ld j;
      j15 = force? j14;
      checkMissing(j15);
      c129 = ldf c in base;
      r635 = dyn c129(j13, j15);
      goto L0(r635);
    L2():
      r633 = dyn base89(<sym j>, <sym j>);
      goto L0(r633);
    };
    p98 = prom<V +>{
      sym90 = ldf c;
      base90 = ldf c in base;
      guard90 = `==`.4(sym90, base90);
      if guard90 then L1() else L2();
    L0(r638):
      return r638;
    L1():
      c130 = ldf c in base;
      r639 = dyn c130(-0.02, 0.02);
      goto L0(r639);
    L2():
      r637 = dyn base90(<lang `-`(0.02)>, 0.02);
      goto L0(r637);
    };
    r641 = dyn lines1(p97, p98);
    check L538() else D209();
  L539():
    seq_int1 = ldf `seq.int` in base;
    r644 = dyn seq_int1(-0.9, 0.9, 0.2);
    check L541() else D210();
  L540():
    r642 = dyn base91[from, to, by](<lang `-`(0.9)>, 0.9, 0.2);
    goto L119(i136, r642);
  D180():
    deopt 736 [i93, or1];
  D184():
    deopt 749 [i98];
  D209():
    deopt 850 [i136, i138, r641];
  D210():
    deopt 864 [i136, r644];
  L120(i147, i148):
    i149 = `+`.1(i148, 1);
    c131 = `<`.1(l14, i149);
    if c131 then L542() else L121();
  L493():
    r544 = dyn __38("stats", "qnorm");
    check L494() else D181();
  L497():
    p76 = prom<V +>{
      theta = ld theta;
      theta1 = force? theta;
      checkMissing(theta1);
      return theta1;
    };
    p77 = prom<V +>{
      tab6 = ld tab;
      tab7 = force? tab6;
      checkMissing(tab7);
      return tab7;
    };
    r555 = dyn findTableWithOAM(p76, p77);
    check L498() else D185();
  L538():
    goto L117(i136, i138);
  L541():
    goto L119(i136, r644);
  D181():
    deopt 739 [i93, or1, r544];
  D185():
    deopt 752 [i98, r555];
  L121():
    x66 = `[[`(s5, i149, NULL, TRUE);
    st j = x66;
    lines2 = ldf lines;
    check L543() else D211();
  L494():
    checkFun.0(r544);
    r545 = r544 as cls;
    p75 = prom<V +>{
      conf_level13 = ld `conf.level`;
      conf_level14 = force? conf_level13;
      checkMissing(conf_level14);
      r546 = `-`(1.0, conf_level14);
      r547 = `/`(r546, 2.0);
      return r547;
    };
    r549 = dyn r545(p75);
    check L495() else D182();
  L498():
    st tau = r555;
    sym79 = ldf sqrt;
    base79 = ldf sqrt in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L499() else L500();
  L542():
    lines3 = ldf lines;
    check L545() else D213();
  D182():
    deopt 742 [i93, or1, r549];
  D211():
    deopt 866 [i147, i149];
  D213():
    deopt 874 [i147];
  L106(i101, r557):
    st r = r557;
    s2 = toForSeq(<int 1, 2, 3, 4>);
    l11 = length(s2);
    i105 = 0;
    goto L108(i101, i105);
  L495():
    se = ld se;
    check L496() else D183();
  L499():
    sym80 = ldf c;
    base80 = ldf c in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L501() else L502();
  L500():
    r556 = dyn base79(<lang c(stdize(tau, std, x))>);
    goto L106(i98, r556);
  L543():
    p99 = prom<V +>{
      sym92 = ldf c;
      base92 = ldf c in base;
      guard92 = `==`.4(sym92, base92);
      if guard92 then L1() else L2();
    L0(r646):
      return r646;
    L1():
      j16 = ld j;
      j17 = force? j16;
      checkMissing(j17);
      j18 = ld j;
      j19 = force? j18;
      checkMissing(j19);
      c132 = ldf c in base;
      r647 = dyn c132(j17, j19);
      goto L0(r647);
    L2():
      r645 = dyn base92(<sym j>, <sym j>);
      goto L0(r645);
    };
    p100 = prom<V +>{
      sym93 = ldf c;
      base93 = ldf c in base;
      guard93 = `==`.4(sym93, base93);
      if guard93 then L1() else L2();
    L0(r650):
      return r650;
    L1():
      c133 = ldf c in base;
      r651 = dyn c133(-0.01, 0.01);
      goto L0(r651);
    L2():
      r649 = dyn base93(<lang `-`(0.01)>, 0.01);
      goto L0(r649);
    };
    r653 = dyn lines2(p99, p100);
    check L544() else D212();
  L545():
    p101 = prom<V +>{
      sym94 = ldf c;
      base94 = ldf c in base;
      guard94 = `==`.4(sym94, base94);
      if guard94 then L1() else L2();
    L0(r655):
      return r655;
    L1():
      c134 = ldf c in base;
      r656 = dyn c134(0.0, 0.0);
      goto L0(r656);
    L2():
      r654 = dyn base94(0.0, 0.0);
      goto L0(r654);
    };
    p102 = prom<V +>{
      sym95 = ldf c;
      base95 = ldf c in base;
      guard95 = `==`.4(sym95, base95);
      if guard95 then L1() else L2();
    L0(r659):
      return r659;
    L1():
      c135 = ldf c in base;
      r660 = dyn c135(-1.0, 1.0);
      goto L0(r660);
    L2():
      r658 = dyn base95(<lang `-`(1.0)>, 1.0);
      goto L0(r658);
    };
    r662 = dyn lines3(p101, p102);
    check L546() else D214();
  D183():
    deopt 742 [i93, or1, r549, se];
  D212():
    deopt 869 [i147, i149, r653];
  D214():
    deopt 877 [i147, r662];
  L107(i104, r559):
    r565 = sqrt(r559);
    goto L106(i104, r565);
  L108(i106, i107):
    i108 = `+`.1(i107, 1);
    c115 = `<`.1(l11, i108);
    if c115 then L506() else L109();
  L496():
    se1 = force? se;
    checkMissing(se1);
    r550 = `*`(r549, se1);
    r551 = exp(r550);
    goto L105(i93, or1, r551);
  L501():
    stdize1 = ldf stdize;
    check L503() else D186();
  L502():
    r558 = dyn base80(<lang stdize(tau, std, x)>);
    goto L107(i98, r558);
  L544():
    goto L120(i147, i149);
  L546():
    sym96 = ldf `seq.int`;
    base96 = ldf `seq.int` in base;
    guard96 = `==`.4(sym96, base96);
    if guard96 then L547() else L548();
  D186():
    deopt 758 [i98];
  L109():
    x61 = `[[`(s2, i108, NULL, TRUE);
    st j = x61;
    drawPie4 = ldf drawPie;
    check L507() else D189();
  L122(i156, r664):
    s6 = toForSeq(r664);
    l15 = length(s6);
    i157 = 0;
    goto L123(i156, i157);
  L503():
    p78 = prom<V +>{
      tau = ld tau;
      tau1 = force? tau;
      checkMissing(tau1);
      return tau1;
    };
    p79 = prom<V +>{
      std5 = ld std;
      std6 = force? std5;
      checkMissing(std6);
      return std6;
    };
    p80 = prom<V +>{
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      return x60;
    };
    r563 = dyn stdize1(p78, p79, p80);
    check L504() else D187();
  L506():
    or5 = ld or;
    check L509() else D191();
  L547():
    seq_int2 = ldf `seq.int` in base;
    r665 = dyn seq_int2(-0.8, 0.8, 0.2);
    check L549() else D215();
  L548():
    r663 = dyn base96[from, to, by](<lang `-`(0.8)>, 0.8, 0.2);
    goto L122(i147, r663);
  D187():
    deopt 762 [i98, r563];
  D189():
    deopt 770 [i106, i108];
  D191():
    deopt 778 [i106, or5];
  D215():
    deopt 888 [i147, r665];
  L123(i158, i159):
    i160 = `+`.1(i159, 1);
    c136 = `<`.1(l15, i160);
    if c136 then L550() else L124();
  L504():
    c114 = ldf c in base;
    r564 = dyn c114(r563);
    check L505() else D188();
  L507():
    p81 = prom<V +>{
      r566 = ld r;
      r567 = force? r566;
      checkMissing(r567);
      c116 = `is.object`(r567);
      if c116 then L1() else L2(r567);
    L0(dx112):
      return dx112;
    L1():
      dr86 = tryDispatchBuiltin.1("[", r567);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(r569):
      j = ld j;
      j1 = force? j;
      __39 = ldf `[` in base;
      r570 = dyn __39(r569, j1);
      goto L0(r570);
    L3():
      dx111 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx111);
    };
    p82 = prom<V +>{
      angle_f = ld `angle.f`;
      angle_f1 = force? angle_f;
      checkMissing(angle_f1);
      c117 = `is.object`(angle_f1);
      if c117 then L1() else L2(angle_f1);
    L0(dx114):
      return dx114;
    L1():
      dr88 = tryDispatchBuiltin.1("[", angle_f1);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(angle_f3):
      j2 = ld j;
      j3 = force? j2;
      __40 = ldf `[` in base;
      r572 = dyn __40(angle_f3, j3);
      goto L0(r572);
    L3():
      dx113 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx113);
    };
    p83 = prom<V +>{
      angle_t = ld `angle.t`;
      angle_t1 = force? angle_t;
      checkMissing(angle_t1);
      c118 = `is.object`(angle_t1);
      if c118 then L1() else L2(angle_t1);
    L0(dx116):
      return dx116;
    L1():
      dr90 = tryDispatchBuiltin.1("[", angle_t1);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(angle_t3):
      j4 = ld j;
      j5 = force? j4;
      __41 = ldf `[` in base;
      r574 = dyn __41(angle_t3, j5);
      goto L0(r574);
    L3():
      dx115 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx115);
    };
    r576 = dyn drawPie4(p81, p82, p83);
    check L508() else D190();
  L509():
    or6 = force? or5;
    checkMissing(or6);
    sym81 = ldf exp;
    base81 = ldf exp in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L510() else L511();
  L549():
    goto L122(i147, r665);
  D188():
    deopt 764 [i98, r564];
  D190():
    deopt 774 [i106, i108, r576];
  L110(i115, or9, r578):
    r587 = `*`(or9, r578);
    st theta = r587;
    findTableWithOAM1 = ldf findTableWithOAM;
    check L516() else D196();
  L124():
    x67 = `[[`(s6, i160, NULL, TRUE);
    st j = x67;
    lines4 = ldf lines;
    check L551() else D216();
  L505():
    goto L107(i98, r564);
  L508():
    goto L108(i106, i108);
  L510():
    __42 = ldf `::`;
    check L512() else D192();
  L511():
    r577 = dyn base81(<lang `*`(`::`(stats, qnorm)(`/`(`(`(`+`(1.0, conf.level)), 2.0)), se)>);
    goto L110(i106, or6, r577);
  L550():
    sym99 = ldf `seq.int`;
    base99 = ldf `seq.int` in base;
    guard99 = `==`.4(sym99, base99);
    if guard99 then L553() else L554();
  D192():
    deopt 781 [i106, or6];
  D196():
    deopt 794 [i115];
  D216():
    deopt 890 [i158, i160];
  L125(i167, r676):
    s7 = toForSeq(r676);
    l16 = length(s7);
    i168 = 0;
    goto L126(i167, i168);
  L512():
    r579 = dyn __42("stats", "qnorm");
    check L513() else D193();
  L516():
    p85 = prom<V +>{
      theta2 = ld theta;
      theta3 = force? theta2;
      checkMissing(theta3);
      return theta3;
    };
    p86 = prom<V +>{
      tab8 = ld tab;
      tab9 = force? tab8;
      checkMissing(tab9);
      return tab9;
    };
    r590 = dyn findTableWithOAM1(p85, p86);
    check L517() else D197();
  L551():
    p103 = prom<V +>{
      sym97 = ldf c;
      base97 = ldf c in base;
      guard97 = `==`.4(sym97, base97);
      if guard97 then L1() else L2();
    L0(r667):
      return r667;
    L1():
      c137 = ldf c in base;
      r668 = dyn c137(-0.02, 0.02);
      goto L0(r668);
    L2():
      r666 = dyn base97(<lang `-`(0.02)>, 0.02);
      goto L0(r666);
    };
    p104 = prom<V +>{
      sym98 = ldf c;
      base98 = ldf c in base;
      guard98 = `==`.4(sym98, base98);
      if guard98 then L1() else L2();
    L0(r671):
      return r671;
    L1():
      j20 = ld j;
      j21 = force? j20;
      checkMissing(j21);
      j22 = ld j;
      j23 = force? j22;
      checkMissing(j23);
      c138 = ldf c in base;
      r672 = dyn c138(j21, j23);
      goto L0(r672);
    L2():
      r670 = dyn base98(<sym j>, <sym j>);
      goto L0(r670);
    };
    r674 = dyn lines4(p103, p104);
    check L552() else D217();
  L553():
    seq_int3 = ldf `seq.int` in base;
    r677 = dyn seq_int3(-0.9, 0.9, 0.2);
    check L555() else D218();
  L554():
    r675 = dyn base99[from, to, by](<lang `-`(0.9)>, 0.9, 0.2);
    goto L125(i158, r675);
  D193():
    deopt 784 [i106, or6, r579];
  D197():
    deopt 797 [i115, r590];
  D217():
    deopt 893 [i158, i160, r674];
  D218():
    deopt 907 [i158, r677];
  L126(i169, i170):
    i171 = `+`.1(i170, 1);
    c139 = `<`.1(l16, i171);
    if c139 then L556() else L127();
  L513():
    checkFun.0(r579);
    r580 = r579 as cls;
    p84 = prom<V +>{
      conf_level15 = ld `conf.level`;
      conf_level16 = force? conf_level15;
      checkMissing(conf_level16);
      r581 = `+`(1.0, conf_level16);
      r582 = `/`(r581, 2.0);
      return r582;
    };
    r584 = dyn r580(p84);
    check L514() else D194();
  L517():
    st tau = r590;
    sym82 = ldf sqrt;
    base82 = ldf sqrt in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L518() else L519();
  L552():
    goto L123(i158, i160);
  L555():
    goto L125(i158, r677);
  D194():
    deopt 787 [i106, or6, r584];
  L111(i118, r592):
    st r = r592;
    s3 = toForSeq(<int 1, 2, 3, 4>);
    l12 = length(s3);
    i122 = 0;
    goto L113(i118, i122);
  L127():
    x68 = `[[`(s7, i171, NULL, TRUE);
    st j = x68;
    lines5 = ldf lines;
    check L557() else D219();
  L514():
    se2 = ld se;
    check L515() else D195();
  L518():
    sym83 = ldf c;
    base83 = ldf c in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L520() else L521();
  L519():
    r591 = dyn base82(<lang c(stdize(tau, std, x))>);
    goto L111(i115, r591);
  L556():
    goto L91(i169);
  D195():
    deopt 787 [i106, or6, r584, se2];
  D219():
    deopt 909 [i169, i171];
  L112(i121, r594):
    r600 = sqrt(r594);
    goto L111(i121, r600);
  L113(i123, i124):
    i125 = `+`.1(i124, 1);
    c120 = `<`.1(l12, i125);
    if c120 then L525() else L114();
  L515():
    se3 = force? se2;
    checkMissing(se3);
    r585 = `*`(r584, se3);
    r586 = exp(r585);
    goto L110(i106, or6, r586);
  L520():
    stdize2 = ldf stdize;
    check L522() else D198();
  L521():
    r593 = dyn base83(<lang stdize(tau, std, x)>);
    goto L112(i115, r593);
  L557():
    p105 = prom<V +>{
      sym100 = ldf c;
      base100 = ldf c in base;
      guard100 = `==`.4(sym100, base100);
      if guard100 then L1() else L2();
    L0(r679):
      return r679;
    L1():
      c140 = ldf c in base;
      r680 = dyn c140(-0.01, 0.01);
      goto L0(r680);
    L2():
      r678 = dyn base100(<lang `-`(0.01)>, 0.01);
      goto L0(r678);
    };
    p106 = prom<V +>{
      sym101 = ldf c;
      base101 = ldf c in base;
      guard101 = `==`.4(sym101, base101);
      if guard101 then L1() else L2();
    L0(r683):
      return r683;
    L1():
      j24 = ld j;
      j25 = force? j24;
      checkMissing(j25);
      j26 = ld j;
      j27 = force? j26;
      checkMissing(j27);
      c141 = ldf c in base;
      r684 = dyn c141(j25, j27);
      goto L0(r684);
    L2():
      r682 = dyn base101(<sym j>, <sym j>);
      goto L0(r682);
    };
    r686 = dyn lines5(p105, p106);
    check L558() else D220();
  D198():
    deopt 803 [i115];
  D220():
    deopt 912 [i169, i171, r686];
  L114():
    x64 = `[[`(s3, i125, NULL, TRUE);
    st j = x64;
    drawPie5 = ldf drawPie;
    check L526() else D201();
  L522():
    p87 = prom<V +>{
      tau2 = ld tau;
      tau3 = force? tau2;
      checkMissing(tau3);
      return tau3;
    };
    p88 = prom<V +>{
      std7 = ld std;
      std8 = force? std7;
      checkMissing(std8);
      return std8;
    };
    p89 = prom<V +>{
      x62 = ld x;
      x63 = force? x62;
      checkMissing(x63);
      return x63;
    };
    r598 = dyn stdize2(p87, p88, p89);
    check L523() else D199();
  L525():
    goto L115(i123);
  L558():
    goto L126(i169, i171);
  D199():
    deopt 807 [i115, r598];
  D201():
    deopt 815 [i123, i125];
  L523():
    c119 = ldf c in base;
    r599 = dyn c119(r598);
    check L524() else D200();
  L526():
    p90 = prom<V +>{
      r601 = ld r;
      r602 = force? r601;
      checkMissing(r602);
      c121 = `is.object`(r602);
      if c121 then L1() else L2(r602);
    L0(dx118):
      return dx118;
    L1():
      dr92 = tryDispatchBuiltin.1("[", r602);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L3() else L2(dr92);
    L2(r604):
      j6 = ld j;
      j7 = force? j6;
      __43 = ldf `[` in base;
      r605 = dyn __43(r604, j7);
      goto L0(r605);
    L3():
      dx117 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx117);
    };
    p91 = prom<V +>{
      angle_f4 = ld `angle.f`;
      angle_f5 = force? angle_f4;
      checkMissing(angle_f5);
      c122 = `is.object`(angle_f5);
      if c122 then L1() else L2(angle_f5);
    L0(dx120):
      return dx120;
    L1():
      dr94 = tryDispatchBuiltin.1("[", angle_f5);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(angle_f7):
      j8 = ld j;
      j9 = force? j8;
      __44 = ldf `[` in base;
      r607 = dyn __44(angle_f7, j9);
      goto L0(r607);
    L3():
      dx119 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx119);
    };
    p92 = prom<V +>{
      angle_t4 = ld `angle.t`;
      angle_t5 = force? angle_t4;
      checkMissing(angle_t5);
      c123 = `is.object`(angle_t5);
      if c123 then L1() else L2(angle_t5);
    L0(dx122):
      return dx122;
    L1():
      dr96 = tryDispatchBuiltin.1("[", angle_t5);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(angle_t7):
      j10 = ld j;
      j11 = force? j10;
      __45 = ldf `[` in base;
      r609 = dyn __45(angle_t7, j11);
      goto L0(r609);
    L3():
      dx121 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx121);
    };
    r611 = dyn drawPie5(p90, p91, p92);
    check L527() else D202();
  D200():
    deopt 809 [i115, r599];
  D202():
    deopt 819 [i123, i125, r611];
  L524():
    goto L112(i115, r599);
  L527():
    goto L113(i123, i125);
  }
}
fun inner440706843(or, tab) {
  (reg or:*, reg tab:*) -+> V { var or:*, var tab:*, reg rowSums:cls, reg tab1:*, reg tab2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg rowSums1:cls, reg tab3:*, reg tab4:V, reg p1:p(V +), reg r6:V, reg c1:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg colSums:cls, reg tab5:*, reg tab6:V, reg p2:p(V +), reg r11:V, reg c2:L, reg r13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r14:V, reg or1:*, reg or2:V, reg r15:V, reg c3:L, reg t:*, reg t1:V, reg n:*, reg n1:V, reg r16:V, reg m:*, reg m1:V, reg n2:*, reg n3:V, reg r17:V, reg r18:V, reg or3:*, reg or4:V, reg r20:V, reg c4:L, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg t2:*, reg t3:V, reg m2:*, reg m3:V, reg r23:V, reg max:cls, reg r24:V, reg or5:*, reg or6:V, reg r25:V, reg or7:*, reg or8:V, reg m4:*, reg m5:V, reg t4:*, reg t5:V, reg r26:V, reg r27:V, reg n4:*, reg n5:V, reg t6:*, reg t7:V, reg r28:V, reg r29:V, reg t8:*, reg t9:V, reg r30:V, reg n6:*, reg n7:V, reg r31:V, reg B:*, reg B1:V, reg r32:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg r37:V, reg B2:*, reg B3:V, reg r38:V, reg A:*, reg A1:V, reg r39:V, reg C:*, reg C1:V, reg r40:V, reg r41:V, reg r42:V, reg r43:V, reg A2:*, reg A3:V, reg r44:V, reg r45:V, reg matrix:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg t10:*, reg t11:V, reg x:*, reg x1:V, reg r48:V, reg x2:*, reg x3:V, reg m6:*, reg m7:V, reg t12:*, reg t13:V, reg r49:V, reg x4:*, reg x5:V, reg r50:V, reg n8:*, reg n9:V, reg x6:*, reg x7:V, reg r51:V, reg c5:cls, reg r52:V, reg p3:p(V +), reg r54:V |
    mkenv;
    st or = or;
    st tab = tab;
    rowSums = ldf rowSums;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      tab1 = ld tab;
      tab2 = force? tab1;
      checkMissing(tab2);
      return tab2;
    };
    r1 = dyn rowSums(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    c = `is.object`(r1);
    if c then L10() else L11(r1);
  L0(dx1):
    st m = dx1;
    rowSums1 = ldf rowSums;
    check L13() else D2();
  L10():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, 1);
    goto L0(r4);
  D2():
    deopt 9 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    p1 = prom<V +>{
      tab3 = ld tab;
      tab4 = force? tab3;
      checkMissing(tab4);
      return tab4;
    };
    r6 = dyn rowSums1(p1);
    check L14() else D3();
  D3():
    deopt 11 [r6];
  L14():
    c1 = `is.object`(r6);
    if c1 then L15() else L16(r6);
  L1(dx3):
    st n = dx3;
    colSums = ldf colSums;
    check L18() else D4();
  L15():
    dr2 = tryDispatchBuiltin.1("[", r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(r8):
    __1 = ldf `[` in base;
    r9 = dyn __1(r8, 2);
    goto L1(r9);
  D4():
    deopt 17 [];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L18():
    p2 = prom<V +>{
      tab5 = ld tab;
      tab6 = force? tab5;
      checkMissing(tab6);
      return tab6;
    };
    r11 = dyn colSums(p2);
    check L19() else D5();
  D5():
    deopt 19 [r11];
  L19():
    c2 = `is.object`(r11);
    if c2 then L20() else L21(r11);
  L2(dx5):
    st t = dx5;
    or1 = ld or;
    check L23() else D6();
  L20():
    dr4 = tryDispatchBuiltin.1("[", r11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(r13):
    __2 = ldf `[` in base;
    r14 = dyn __2(r13, 1);
    goto L2(r14);
  D6():
    deopt 24 [or1];
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L23():
    or2 = force? or1;
    checkMissing(or2);
    r15 = `==`(or2, 1.0);
    c3 = `as.logical`(r15);
    if c3 then L24() else L3();
  L3():
    or3 = ld or;
    check L30() else D11();
  L4():
    matrix = ldf matrix;
    check L53() else D28();
  L24():
    t = ld t;
    check L25() else D7();
  D7():
    deopt 28 [t];
  D11():
    deopt 37 [or3];
  D28():
    deopt 94 [];
  L25():
    t1 = force? t;
    checkMissing(t1);
    n = ld n;
    check L26() else D8();
  L30():
    or4 = force? or3;
    checkMissing(or4);
    r20 = `==`(or4, +Infinity);
    c4 = `as.logical`(r20);
    if c4 then L31() else L5();
  L53():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      t10 = ld t;
      t11 = force? t10;
      checkMissing(t11);
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r48 = `-`(t11, x1);
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      t12 = ld t;
      t13 = force? t12;
      checkMissing(t13);
      r49 = `-`(m7, t13);
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      r50 = `+`(r49, x5);
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      r51 = `-`(n9, x7);
      c5 = ldf c in base;
      r52 = dyn c5(r48, x3, r50, r51);
      goto L0(r52);
    L2():
      r46 = dyn base2(<lang `-`(t, x)>, <sym x>, <lang `+`(`-`(m, t), x)>, <lang `-`(n, x)>);
      goto L0(r46);
    };
    r54 = dyn matrix[, nrow](p3, 2.0);
    check L54() else D29();
  D8():
    deopt 29 [t1, n];
  D29():
    deopt 98 [r54];
  L5():
    or5 = ld or;
    check L38() else D15();
  L26():
    n1 = force? n;
    checkMissing(n1);
    r16 = `*`(t1, n1);
    m = ld m;
    check L27() else D9();
  L31():
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L54():
    popenv;
    return r54;
  D9():
    deopt 31 [r16, m];
  D15():
    deopt 51 [or5];
  L6(r22):
    st x = r22;
    goto L4();
  L27():
    m1 = force? m;
    checkMissing(m1);
    n2 = ld n;
    check L28() else D10();
  L32():
    t2 = ld t;
    check L34() else D12();
  L33():
    r21 = dyn base(0.0, <lang `-`(t, m)>);
    goto L6(r21);
  L38():
    or6 = force? or5;
    checkMissing(or6);
    r25 = `-`(or6, 1.0);
    st A = r25;
    or7 = ld or;
    check L39() else D16();
  D10():
    deopt 32 [r16, m1, n2];
  D12():
    deopt 44 [t2];
  D16():
    deopt 56 [or7];
  L28():
    n3 = force? n2;
    checkMissing(n3);
    r17 = `+`(m1, n3);
    r18 = `/`(r16, r17);
    st x = r18;
    goto L4();
  L34():
    t3 = force? t2;
    checkMissing(t3);
    m2 = ld m;
    check L35() else D13();
  L39():
    or8 = force? or7;
    checkMissing(or8);
    m4 = ld m;
    check L40() else D17();
  D13():
    deopt 45 [t3, m2];
  D17():
    deopt 57 [or8, m4];
  L35():
    m3 = force? m2;
    checkMissing(m3);
    r23 = `-`(t3, m3);
    max = ldf max in base;
    r24 = dyn max(0.0, r23);
    check L36() else D14();
  L40():
    m5 = force? m4;
    checkMissing(m5);
    t4 = ld t;
    check L41() else D18();
  D14():
    deopt 49 [r24];
  D18():
    deopt 58 [or8, m5, t4];
  L36():
    goto L6(r24);
  L41():
    t5 = force? t4;
    checkMissing(t5);
    r26 = `-`(m5, t5);
    r27 = `*`(or8, r26);
    n4 = ld n;
    check L42() else D19();
  D19():
    deopt 61 [r27, n4];
  L42():
    n5 = force? n4;
    checkMissing(n5);
    t6 = ld t;
    check L43() else D20();
  D20():
    deopt 62 [r27, n5, t6];
  L43():
    t7 = force? t6;
    checkMissing(t7);
    r28 = `+`(n5, t7);
    r29 = `+`(r27, r28);
    st B = r29;
    t8 = ld t;
    check L44() else D21();
  D21():
    deopt 67 [t8];
  L44():
    t9 = force? t8;
    checkMissing(t9);
    r30 = `-`(<missing>, t9);
    n6 = ld n;
    check L45() else D22();
  D22():
    deopt 69 [r30, n6];
  L45():
    n7 = force? n6;
    checkMissing(n7);
    r31 = `*`(r30, n7);
    st C = r31;
    B = ld B;
    check L46() else D23();
  D23():
    deopt 73 [B];
  L46():
    B1 = force? B;
    checkMissing(B1);
    r32 = `-`(<missing>, B1);
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L7(r36, r37):
    r43 = `+`(r36, r37);
    A2 = ld A;
    check L52() else D27();
  L47():
    B2 = ld B;
    check L49() else D24();
  L48():
    r35 = dyn base1(<lang `-`(`^`(B, 2.0), `*`(`*`(4.0, A), C))>);
    goto L7(r32, r35);
  D24():
    deopt 76 [r32, B2];
  D27():
    deopt 88 [r43, 2.0, A2];
  L49():
    B3 = force? B2;
    checkMissing(B3);
    r38 = `^`(B3, 2.0);
    A = ld A;
    check L50() else D25();
  L52():
    A3 = force? A2;
    checkMissing(A3);
    r44 = `*`(2.0, A3);
    r45 = `/`(r43, r44);
    st x = r45;
    goto L4();
  D25():
    deopt 80 [r32, r38, 4.0, A];
  L50():
    A1 = force? A;
    checkMissing(A1);
    r39 = `*`(4.0, A1);
    C = ld C;
    check L51() else D26();
  D26():
    deopt 82 [r32, r38, r39, C];
  L51():
    C1 = force? C;
    checkMissing(C1);
    r40 = `*`(r39, C1);
    r41 = `-`(r38, r40);
    r42 = sqrt(r41);
    goto L7(r32, r42);
  }
}
fun `inner-85323604`(r, from, to, n, col) {
  (reg r:*, reg from:*, reg to:*, reg n:*, reg col:*) -+> V { var r:*, var from:*, var to:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:R, reg r5:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg n1:*, reg n2:V, reg seq_int:cls, reg r6:V, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg p:*, reg p1:V, reg r13:V, reg c:cls, reg r14:V, reg r15:*, reg r16:V, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg p2:*, reg p3:V, reg r22:V, reg c1:cls, reg r23:V, reg r24:*, reg r25:V, reg r26:V, reg polygon:cls, reg x:*, reg x1:V, reg p4:p(V +), reg y:*, reg y1:V, reg p5:p(V +), reg col1:*, reg col2:V, reg p6:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg invisible:cls, reg r33:V |
    mkenv;
    st r = r;
    st from = from;
    st to = to;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(500.0) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L1(NA_LGL) else L1(col);
  L1(col_orDefault):
    st col = col_orDefault;
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L2(r4, r5):
    r7 = `*`(r4, r5);
    r8 = `/`(r7, 360.0);
    st p = r8;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L8():
    from1 = ld from;
    check L10() else D0();
  L9():
    r3 = dyn base[, , `length.out`](<sym from>, <sym to>, <sym n>);
    goto L2(6.283185307179586, r3);
  D0():
    deopt 3 [6.283185307179586, from1];
  L3(r10):
    r15 = ld r;
    check L20() else D6();
  L10():
    from2 = force? from1;
    checkMissing(from2);
    to1 = ld to;
    check L11() else D1();
  L14():
    sym2 = ldf cos;
    base2 = ldf cos in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r9 = dyn base1(<lang cos(p)>, 0.0);
    goto L3(r9);
  D1():
    deopt 5 [6.283185307179586, to1];
  D6():
    deopt 24 [r10, r15];
  L4(r12):
    c = ldf c in base;
    r14 = dyn c(r12, 0.0);
    check L19() else D5();
  L11():
    to2 = force? to1;
    checkMissing(to2);
    n1 = ld n;
    check L12() else D2();
  L16():
    p = ld p;
    check L18() else D4();
  L17():
    r11 = dyn base2(<sym p>);
    goto L4(r11);
  L20():
    r16 = force? r15;
    checkMissing(r16);
    r17 = `*`(r10, r16);
    st x = r17;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  D2():
    deopt 7 [6.283185307179586, n1];
  D4():
    deopt 19 [p];
  D5():
    deopt 24 [r14];
  L5(r19):
    r24 = ld r;
    check L27() else D9();
  L12():
    n2 = force? n1;
    checkMissing(n2);
    seq_int = ldf `seq.int` in base;
    r6 = dyn seq_int(from2, to2, n2);
    check L13() else D3();
  L18():
    p1 = force? p;
    checkMissing(p1);
    r13 = cos(p1);
    goto L4(r13);
  L19():
    goto L3(r14);
  L21():
    sym4 = ldf sin;
    base4 = ldf sin in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L22():
    r18 = dyn base3(<lang sin(p)>, 0.0);
    goto L5(r18);
  D3():
    deopt 11 [6.283185307179586, r6];
  D9():
    deopt 36 [r19, r24];
  L6(r21):
    c1 = ldf c in base;
    r23 = dyn c1(r21, 0.0);
    check L26() else D8();
  L13():
    goto L2(6.283185307179586, r6);
  L23():
    p2 = ld p;
    check L25() else D7();
  L24():
    r20 = dyn base4(<sym p>);
    goto L6(r20);
  L27():
    r25 = force? r24;
    checkMissing(r25);
    r26 = `*`(r19, r25);
    st y = r26;
    polygon = ldf polygon;
    check L28() else D10();
  D7():
    deopt 31 [p2];
  D8():
    deopt 36 [r23];
  D10():
    deopt 41 [];
  L25():
    p3 = force? p2;
    checkMissing(p3);
    r22 = sin(p3);
    goto L6(r22);
  L26():
    goto L5(r23);
  L28():
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p5 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p6 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    r30 = dyn polygon[, , col](p4, p5, p6);
    check L29() else D11();
  D11():
    deopt 46 [r30];
  L29():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L7(r32):
    popenv;
    return r32;
  L30():
    invisible = ldf invisible in base;
    r33 = dyn invisible(NULL);
    check L32() else D12();
  L31():
    r31 = dyn base5(NULL);
    goto L7(r31);
  D12():
    deopt 51 [r33];
  L32():
    goto L7(r33);
  }
}
fun `inner-52174073`(tab, std, x) {
  (reg tab:*, reg std:*, reg x:*) -+> V { var tab:*, var std:*, var x:*, reg std1:*, reg std2:V, reg r:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sort:cls, reg margin:*, reg margin1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg r11:V, reg all:cls, reg r12:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg odds:cls, reg tab1:*, reg tab2:V, reg p1:p(V +), reg r16:V, reg c3:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg r20:V, reg u:*, reg u1:V, reg u2:*, reg u3:V, reg r21:V, reg r22:V, reg matrix:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg u4:*, reg u5:V, reg u6:*, reg u7:V, reg r25:V, reg u8:*, reg u9:V, reg r26:V, reg u10:*, reg u11:V, reg c4:cls, reg r27:V, reg p2:p(V +), reg r29:V, reg r30:V, reg _in_:cls, reg margin2:*, reg margin3:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c5:cls, reg r34:V, reg p4:p(V +), reg r36:V, reg c6:L, reg proportions:cls, reg tab3:*, reg tab4:V, reg p5:p(V +), reg margin4:*, reg margin5:V, reg p6:p(V +), reg r39:V, reg stop:cls, reg r40:V, reg std3:*, reg std4:V, reg r42:V, reg c7:L, reg tab5:*, reg tab6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg tab9:V, reg r44:V, reg tab10:*, reg tab11:V, reg max:cls, reg r45:V, reg r46:V, reg std5:*, reg std6:V, reg r47:V, reg c8:L, reg tab12:*, reg tab13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg tab16:V, reg r49:V, reg x1:*, reg x2:V, reg max1:cls, reg r50:V, reg r51:V, reg y:*, reg y1:V |
    mkenv;
    st tab = tab;
    st std = std;
    st x = x;
    std1 = ld std;
    check L12() else D0();
  D0():
    deopt 0 [std1];
  L12():
    std2 = force? std1;
    checkMissing(std2);
    r = `==`(std2, "margins");
    c = `as.logical`(r);
    if c then L13() else L0();
  L0():
    std3 = ld std;
    check L45() else D17();
  L7():
    y = ld y;
    check L61() else D25();
  L13():
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  D17():
    deopt 55 [std3];
  D25():
    deopt 83 [y];
  L1(r2):
    c2 = `as.logical`(r2);
    if c2 then L22() else L3();
  L14():
    sort = ldf sort;
    check L16() else D1();
  L15():
    r1 = dyn base(<lang `==`(sort(margin), c(1, 2))>);
    goto L1(r1);
  L45():
    std4 = force? std3;
    checkMissing(std4);
    r42 = `==`(std4, "ind.max");
    c7 = `as.logical`(r42);
    if c7 then L46() else L8();
  L61():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D1():
    deopt 7 [];
  L3():
    _in_ = ldf `%in%`;
    check L36() else D11();
  L5(r30):
    goto L7();
  L8():
    std5 = ld std;
    check L53() else D21();
  L16():
    p = prom<V +>{
      margin = ld margin;
      margin1 = force? margin;
      checkMissing(margin1);
      return margin1;
    };
    r4 = dyn sort(p);
    check L17() else D2();
  L22():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L46():
    tab5 = ld tab;
    check L47() else D18();
  D2():
    deopt 9 [r4];
  D11():
    deopt 41 [];
  D18():
    deopt 59 [tab5];
  D21():
    deopt 68 [std5];
  L4(r14):
    st u = r14;
    u = ld u;
    check L31() else D7();
  L17():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L23():
    odds = ldf odds;
    check L25() else D5();
  L24():
    r13 = dyn base2(<lang `$`(odds(tab), or)>);
    goto L4(r13);
  L36():
    p3 = prom<V +>{
      margin2 = ld margin;
      margin3 = force? margin2;
      checkMissing(margin3);
      return margin3;
    };
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c5 = ldf c in base;
      r34 = dyn c5(1.0, 2.0);
      goto L0(r34);
    L2():
      r32 = dyn base4(1.0, 2.0);
      goto L0(r32);
    };
    r36 = dyn _in_(p3, p4);
    check L37() else D12();
  L47():
    tab6 = force? tab5;
    checkMissing(tab6);
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L53():
    std6 = force? std5;
    checkMissing(std6);
    r47 = `==`(std6, "all.max");
    c8 = `as.logical`(r47);
    if c8 then L54() else L10();
  D5():
    deopt 20 [];
  D7():
    deopt 26 [u];
  D12():
    deopt 44 [r36];
  L2(r8, r9):
    r11 = `==`(r8, r9);
    all = ldf all in base;
    r12 = dyn all(r11);
    check L21() else D4();
  L9(tab9, r44):
    r46 = `/`(tab9, r44);
    st y = r46;
    goto L7();
  L10():
    goto L7();
  L18():
    c1 = ldf c in base;
    r10 = dyn c1(1, 2);
    check L20() else D3();
  L19():
    r7 = dyn base1(1, 2);
    goto L2(r4, r7);
  L25():
    p1 = prom<V +>{
      tab1 = ld tab;
      tab2 = force? tab1;
      checkMissing(tab2);
      return tab2;
    };
    r16 = dyn odds(p1);
    check L26() else D6();
  L31():
    u1 = force? u;
    checkMissing(u1);
    u2 = ld u;
    check L32() else D8();
  L37():
    c6 = `as.logical`(r36);
    if c6 then L38() else L6();
  L48():
    tab10 = ld tab;
    check L50() else D19();
  L49():
    r43 = dyn base5(<sym tab>);
    goto L9(tab6, r43);
  L54():
    tab12 = ld tab;
    check L55() else D22();
  D3():
    deopt 14 [r4, r10];
  D4():
    deopt 17 [r12];
  D6():
    deopt 22 [r16];
  D8():
    deopt 28 [u1, 1.0, u2];
  D19():
    deopt 62 [tab6, tab10];
  D22():
    deopt 72 [tab12];
  L6():
    stop = ldf stop;
    check L42() else D15();
  L20():
    goto L2(r4, r10);
  L21():
    goto L1(r12);
  L26():
    c3 = `is.object`(r16);
    if c3 then L28() else L29(r16);
  L32():
    u3 = force? u2;
    checkMissing(u3);
    r21 = `+`(1.0, u3);
    r22 = `/`(u1, r21);
    st u = r22;
    matrix = ldf matrix;
    check L33() else D9();
  L38():
    proportions = ldf proportions;
    check L39() else D13();
  L50():
    tab11 = force? tab10;
    checkMissing(tab11);
    max = ldf max in base;
    r45 = dyn max(tab11);
    check L51() else D20();
  L55():
    tab13 = force? tab12;
    checkMissing(tab13);
    sym6 = ldf max;
    base6 = ldf max in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  D9():
    deopt 34 [];
  D13():
    deopt 46 [];
  D15():
    deopt 52 [];
  D20():
    deopt 65 [tab6, r45];
  L11(tab16, r49):
    r51 = `/`(tab16, r49);
    st y = r51;
    goto L7();
  L27(dx1):
    r20 = sqrt(dx1);
    goto L4(r20);
  L28():
    dr = tryDispatchBuiltin.1("$", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(r18):
    r19 = `$`(r18, <sym or>);
    goto L27(r19);
  L33():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      u4 = ld u;
      u5 = force? u4;
      checkMissing(u5);
      u6 = ld u;
      u7 = force? u6;
      checkMissing(u7);
      r25 = `-`(1.0, u7);
      u8 = ld u;
      u9 = force? u8;
      checkMissing(u9);
      r26 = `-`(1.0, u9);
      u10 = ld u;
      u11 = force? u10;
      checkMissing(u11);
      c4 = ldf c in base;
      r27 = dyn c4(u5, r25, r26, u11);
      goto L0(r27);
    L2():
      r23 = dyn base3(<sym u>, <lang `-`(1.0, u)>, <lang `-`(1.0, u)>, <sym u>);
      goto L0(r23);
    };
    r29 = dyn matrix[, nrow](p2, 2);
    check L34() else D10();
  L39():
    p5 = prom<V +>{
      tab3 = ld tab;
      tab4 = force? tab3;
      checkMissing(tab4);
      return tab4;
    };
    p6 = prom<V +>{
      margin4 = ld margin;
      margin5 = force? margin4;
      checkMissing(margin5);
      return margin5;
    };
    r39 = dyn proportions(p5, p6);
    check L40() else D14();
  L42():
    r40 = dyn stop("incorrect 'margin' specification");
    check L43() else D16();
  L51():
    goto L9(tab6, r45);
  L56():
    x1 = ld x;
    check L58() else D23();
  L57():
    r48 = dyn base6(<sym x>);
    goto L11(tab13, r48);
  D10():
    deopt 38 [r29];
  D14():
    deopt 49 [r39];
  D16():
    deopt 54 [r40];
  D23():
    deopt 75 [tab13, x1];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L27(dx);
  L34():
    st y = r29;
    goto L5(r29);
  L40():
    st y = r39;
    goto L5(r39);
  L43():
    goto L5(r40);
  L58():
    x2 = force? x1;
    checkMissing(x2);
    max1 = ldf max in base;
    r50 = dyn max1(x2);
    check L59() else D24();
  D24():
    deopt 78 [tab13, r50];
  L59():
    goto L11(tab13, r50);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg dim1:cls, reg r11:V, reg c1:cls, reg r12:V, reg l:*, reg dim__:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg dim2:cls, reg r17:V, reg c2:L, reg r19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg double:cls, reg k:*, reg k1:V, reg p:p(V +), reg r22:V, reg double1:cls, reg k2:*, reg k3:V, reg p1:p(V +), reg r24:V, reg k4:*, reg k5:V, reg r25:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x7:V, reg x8:*, reg x9:V, reg c4:L, reg i6:I, reg x11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __1:cls, reg r26:V, reg l2:*, reg storage_mode__:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg i13:I, reg r29:V, reg f:*, reg f1:V, reg r30:V, reg any:cls, reg r31:V, reg c5:L, reg f2:*, reg f3:V, reg r32:V, reg i16:I, reg f4:*, reg f5:V, reg c6:L, reg i18:I, reg f7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i20:I, reg dx5:V, reg __2:cls, reg r34:V, reg f8:*, reg f9:V, reg c7:L, reg i22:I, reg dx7:V, reg f11:V, reg dr6:V, reg dc3:L, reg dx9:V, reg i24:I, reg dx10:V, reg dx11:V, reg __3:cls, reg r35:V, reg r36:V, reg f12:*, reg f13:V, reg c8:L, reg i26:I, reg r38:V, reg f15:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i28:I, reg r40:V, reg dx13:V, reg __4:cls, reg r41:V, reg f16:*, reg f17:V, reg c9:L, reg i30:I, reg r43:V, reg dx15:V, reg f19:V, reg dr10:V, reg dc5:L, reg dx17:V, reg i32:I, reg r45:V, reg dx18:V, reg dx19:V, reg __5:cls, reg r46:V, reg r47:V, reg r48:V, reg l3:*, reg c10:L, reg i34:I, reg r50:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx20:V, reg i36:I, reg dx21:V, reg i37:*, reg i38:V, reg ___:cls, reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg i41:I, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg i44:I, reg r57:V, reg f20:*, reg f21:V, reg r58:V, reg sum:cls, reg r59:V, reg r60:V, reg l6:*, reg c11:L, reg i46:I, reg r62:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx22:V, reg i48:I, reg dx23:V, reg i49:*, reg i50:V, reg ___1:cls, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg or:*, reg or1:V, reg se:*, reg se1:V, reg list:cls, reg r68:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r6 = `==`(r1, 2);
    c = `as.logical`(r6);
    if c then L30() else L2();
  L23():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L24():
    r = dyn base(<lang dim(x)>);
    goto L0(r);
  L1(r3):
    length = ldf length in base;
    r5 = dyn length(r3);
    check L29() else D2();
  L2():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L5():
    double = ldf double;
    check L48() else D10();
  L25():
    x1 = ld x;
    check L27() else D0();
  L26():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L30():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D0():
    deopt 4 [x1];
  D2():
    deopt 9 [r5];
  D10():
    deopt 42 [];
  L3(r8):
    l = ld x;
    dim__ = ldf `dim<-`;
    check L38() else D6();
  L6(r16):
    c2 = `is.object`(r16);
    if c2 then L45() else L46(r16);
  L27():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L28() else D1();
  L29():
    goto L0(r5);
  L31():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L32():
    r7 = dyn base2(<lang dim(x)>, 1);
    goto L3(r7);
  L41():
    x5 = ld x;
    check L43() else D8();
  L42():
    r15 = dyn base4(<sym x>);
    goto L6(r15);
  L48():
    p = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    r22 = dyn double(p);
    check L49() else D11();
  D1():
    deopt 7 [r4];
  D6():
    deopt 24 [r8, l, r8];
  D8():
    deopt 33 [x5];
  D11():
    deopt 44 [r22];
  L4(r10):
    c1 = ldf c in base;
    r12 = dyn c1(r10, 1);
    check L37() else D5();
  L7(dx1):
    st k = dx1;
    goto L5();
  L28():
    goto L1(r4);
  L33():
    x3 = ld x;
    check L35() else D3();
  L34():
    r9 = dyn base3(<sym x>);
    goto L4(r9);
  L38():
    r13 = dyn dim__(l, NULL, r8);
    check L39() else D7();
  L43():
    x6 = force? x5;
    checkMissing(x6);
    dim2 = ldf dim in base;
    r17 = dyn dim2(x6);
    check L44() else D9();
  L45():
    dr = tryDispatchBuiltin.1("[", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(r19):
    __ = ldf `[` in base;
    r20 = dyn __(r19, 3);
    goto L7(r20);
  L49():
    st or = r22;
    double1 = ldf double;
    check L50() else D12();
  D3():
    deopt 16 [x3];
  D5():
    deopt 22 [r12];
  D7():
    deopt 26 [r8, r13];
  D9():
    deopt 36 [r17];
  D12():
    deopt 47 [];
  L35():
    x4 = force? x3;
    checkMissing(x4);
    dim1 = ldf dim in base;
    r11 = dyn dim1(x4);
    check L36() else D4();
  L37():
    goto L3(r12);
  L39():
    st x = r13;
    st k = 1.0;
    goto L5();
  L44():
    goto L6(r17);
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L50():
    p1 = prom<V +>{
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      return k3;
    };
    r24 = dyn double1(p1);
    check L51() else D13();
  D4():
    deopt 19 [r11];
  D13():
    deopt 49 [r24];
  L36():
    goto L4(r11);
  L51():
    st se = r24;
    k4 = ld k;
    check L52() else D14();
  D14():
    deopt 52 [1.0, k4];
  L52():
    k5 = force? k4;
    checkMissing(k5);
    r25 = `:`(1.0, k5);
    s = toForSeq(r25);
    l1 = length(s);
    i = 0;
    goto L8(i);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l1, i2);
    if c3 then L53() else L21();
  L21():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    x8 = ld x;
    check L54() else D15();
  L53():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  D15():
    deopt 55 [i2, x8];
  L22(r67):
    popenv;
    return r67;
  L54():
    x9 = force? x8;
    checkMissing(x9);
    c4 = `is.object`(x9);
    if c4 then L55() else L56(i2, x9);
  L98():
    or = ld or;
    check L100() else D30();
  L99():
    r66 = dyn base8[or, se](<sym or>, <sym se>);
    goto L22(r66);
  D30():
    deopt 135 [or];
  L9(i8, dx3):
    st f = dx3;
    l2 = ld f;
    storage_mode__ = ldf `storage.mode<-`;
    check L59() else D17();
  L55():
    dr2 = tryDispatchBuiltin.1("[", x9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(i2, dr2);
  L56(i6, x11):
    i9 = ld i;
    check L58() else D16();
  L100():
    or1 = force? or;
    checkMissing(or1);
    se = ld se;
    check L101() else D31();
  D16():
    deopt 59 [i6, x11, i9];
  D17():
    deopt 67 [i8, "double", l2, "double"];
  D31():
    deopt 138 [se];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i2, dx2);
  L58():
    i10 = force? i9;
    __1 = ldf `[` in base;
    r26 = dyn __1(x9, <missing>, <missing>, i10);
    goto L9(i6, r26);
  L59():
    r27 = dyn storage_mode__(l2, NULL, "double");
    check L60() else D18();
  L101():
    se1 = force? se;
    checkMissing(se1);
    list = ldf list in base;
    r68 = dyn list(or1, se1);
    check L102() else D32();
  D18():
    deopt 69 [i8, "double", r27];
  D32():
    deopt 142 [r68];
  L60():
    st f = r27;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L102():
    goto L22(r68);
  L10(i13, r29):
    c5 = `as.logical`(r29);
    if c5 then L65() else L11();
  L61():
    f = ld f;
    check L63() else D19();
  L62():
    r28 = dyn base5(<lang `==`(f, 0.0)>);
    goto L10(i8, r28);
  D19():
    deopt 73 [i8, f];
  L11():
    goto L12(i13);
  L12(i16):
    f4 = ld f;
    check L68() else D22();
  L63():
    f1 = force? f;
    checkMissing(f1);
    r30 = `==`(f1, 0.0);
    any = ldf any in base;
    r31 = dyn any(r30);
    check L64() else D20();
  L65():
    f2 = ld f;
    check L66() else D21();
  D20():
    deopt 78 [i8, r31];
  D21():
    deopt 79 [i13, f2];
  D22():
    deopt 86 [i16, f4];
  L64():
    goto L10(i8, r31);
  L66():
    f3 = force? f2;
    checkMissing(f3);
    r32 = `+`(f3, 0.5);
    st f = r32;
    goto L12(i13);
  L68():
    f5 = force? f4;
    checkMissing(f5);
    c6 = `is.object`(f5);
    if c6 then L69() else L70(i16, f5);
  L13(i20, dx5):
    f8 = ld f;
    check L72() else D23();
  L69():
    dr4 = tryDispatchBuiltin.1("[", f5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(i16, dr4);
  L70(i18, f7):
    __2 = ldf `[` in base;
    r34 = dyn __2(f7, 1, 1);
    goto L13(i18, r34);
  D23():
    deopt 91 [i20, dx5, f8];
  L71():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(i16, dx4);
  L72():
    f9 = force? f8;
    checkMissing(f9);
    c7 = `is.object`(f9);
    if c7 then L73() else L74(i20, dx5, f9);
  L14(i24, dx10, dx11):
    r36 = `*`(dx10, dx11);
    f12 = ld f;
    check L76() else D24();
  L73():
    dr6 = tryDispatchBuiltin.1("[", f9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(i20, dx5, dr6);
  L74(i22, dx7, f11):
    __3 = ldf `[` in base;
    r35 = dyn __3(f11, 2, 2);
    goto L14(i22, dx7, r35);
  D24():
    deopt 97 [i24, r36, f12];
  L75():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L14(i20, dx5, dx9);
  L76():
    f13 = force? f12;
    checkMissing(f13);
    c8 = `is.object`(f13);
    if c8 then L77() else L78(i24, r36, f13);
  L15(i28, r40, dx13):
    f16 = ld f;
    check L80() else D25();
  L77():
    dr8 = tryDispatchBuiltin.1("[", f13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L79() else L78(i24, r36, dr8);
  L78(i26, r38, f15):
    __4 = ldf `[` in base;
    r41 = dyn __4(f15, 1, 2);
    goto L15(i26, r38, r41);
  D25():
    deopt 102 [i28, r40, dx13, f16];
  L79():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L15(i24, r36, dx12);
  L80():
    f17 = force? f16;
    checkMissing(f17);
    c9 = `is.object`(f17);
    if c9 then L81() else L82(i28, r40, dx13, f17);
  L16(i32, r45, dx18, dx19):
    r47 = `*`(dx18, dx19);
    r48 = `/`(r45, r47);
    l3 = ld or;
    c10 = `is.object`(l3);
    if c10 then L84() else L85(i32, r48, l3);
  L81():
    dr10 = tryDispatchBuiltin.1("[", f17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L83() else L82(i28, r40, dx13, dr10);
  L82(i30, r43, dx15, f19):
    __5 = ldf `[` in base;
    r46 = dyn __5(f19, 2, 1);
    goto L16(i30, r43, dx15, r46);
  L17(i36, dx21):
    st or = dx21;
    sym6 = ldf sqrt;
    base6 = ldf sqrt in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  L83():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L16(i28, r40, dx13, dx17);
  L84():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r48);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(i32, r48, dr12);
  L85(i34, r50, l5):
    i37 = ld i;
    check L87() else D26();
  D26():
    deopt 111 [i34, r50, l5, r48, i37];
  L18(i41, r55):
    l6 = ld se;
    c11 = `is.object`(l6);
    if c11 then L94() else L95(i41, r55, l6);
  L86():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L17(i32, dx20);
  L87():
    i38 = force? i37;
    ___ = ldf `[<-` in base;
    r53 = dyn ___(l5, r48, i38);
    goto L17(i34, r53);
  L88():
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L89():
    r54 = dyn base6(<lang sum(`/`(1.0, f))>);
    goto L18(i36, r54);
  L19(i44, r57):
    r60 = sqrt(r57);
    goto L18(i44, r60);
  L20(i48, dx23):
    st se = dx23;
    goto L8(i48);
  L90():
    f20 = ld f;
    check L92() else D27();
  L91():
    r56 = dyn base7(<lang `/`(1.0, f)>);
    goto L19(i36, r56);
  L94():
    dr14 = tryDispatchBuiltin.0("[<-", l6, r55);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L96() else L95(i41, r55, dr14);
  L95(i46, r62, l8):
    i49 = ld i;
    check L97() else D29();
  D27():
    deopt 119 [i36, 1.0, f20];
  D29():
    deopt 126 [i46, r62, l8, r55, i49];
  L92():
    f21 = force? f20;
    checkMissing(f21);
    r58 = `/`(1.0, f21);
    sum = ldf sum in base;
    r59 = dyn sum(r58);
    check L93() else D28();
  L96():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L20(i41, dx22);
  L97():
    i50 = force? i49;
    ___1 = ldf `[<-` in base;
    r65 = dyn ___1(l8, r55, i50);
    goto L20(i46, r65);
  D28():
    deopt 123 [i36, r59];
  L93():
    goto L19(i36, r59);
  }
}