fun main() {
  () -+> V { reg r:cls, reg cbind:cls, reg rnorm:cls, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg rchisq:cls, reg r5:V, reg r6:V, reg p1:p(V +), reg r8:V, reg cbind1:cls, reg cmat:*, reg cmat1:V, reg p2:p(V +), reg cmat2:*, reg cmat3:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg cmat6:*, reg cmat7:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r11:V, reg r12:V, reg p3:p(V +), reg r14:V, reg cbind2:cls, reg cmat10:*, reg cmat11:V, reg p4:p(V +), reg pnorm:cls, reg cmat12:*, reg cmat13:V, reg c2:L, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r16:V, reg r17:V, reg p5:p(V +), reg r19:V, reg r20:V, reg p6:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg c3:cls, reg r25:V, reg l:*, reg colnames__:cls, reg r26:V, reg printCoefmat:cls, reg cmat16:*, reg cmat17:V, reg c4:L, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r27:V, reg p7:p(V +), reg r29:V, reg printCoefmat1:cls, reg cmat20:*, reg cmat21:V, reg p8:p(V +), reg r31:V, reg options:cls, reg r32:V, reg printCoefmat2:cls, reg cmat22:*, reg cmat23:V, reg p9:p(V +), reg r34:V, reg printCoefmat3:cls, reg cmat24:*, reg cmat25:V, reg p10:p(V +), reg r36:V, reg options1:cls, reg op:*, reg op1:V, reg p11:p(V +), reg r38:V |
    mkenv;
    r = clos inner726515891;
    st printCoefmat = r;
    cbind = ldf cbind;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      rnorm = ldf rnorm;
      r1 = dyn rnorm(3.0, 10.0);
      return r1;
    };
    p1 = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      rchisq = ldf rchisq;
      r5 = dyn rchisq(3.0, 12.0);
      r6 = sqrt(r5);
      goto L0(r6);
    L2():
      r3 = dyn base(<lang rchisq(3.0, 12.0)>);
      goto L0(r3);
    };
    r8 = dyn cbind(p, p1);
    check L2() else D1();
  D1():
    deopt 7 [r8];
  L2():
    st cmat = r8;
    cbind1 = ldf cbind;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      cmat = ld cmat;
      cmat1 = force? cmat;
      checkMissing(cmat1);
      return cmat1;
    };
    p3 = prom<V +>{
      cmat2 = ld cmat;
      cmat3 = force? cmat2;
      checkMissing(cmat3);
      c = `is.object`(cmat3);
      if c then L2() else L3();
    L0(dx1):
      cmat6 = ld cmat;
      cmat7 = force? cmat6;
      checkMissing(cmat7);
      c1 = `is.object`(cmat7);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("[", cmat3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3();
    L3():
      __ = ldf `[` in base;
      r10 = dyn __(cmat3, <missing>, 1.0);
      goto L0(r10);
    L1(dx6, dx7):
      r12 = `/`(dx6, dx7);
      return r12;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", cmat7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dx1);
    L6(dx3):
      __1 = ldf `[` in base;
      r11 = dyn __1(cmat7, <missing>, 2.0);
      goto L1(dx3, r11);
    L7():
      dx5 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx1, dx5);
    };
    r14 = dyn cbind1(p2, p3);
    check L4() else D3();
  D3():
    deopt 13 [r14];
  L4():
    st cmat = r14;
    cbind2 = ldf cbind;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p4 = prom<V +>{
      cmat10 = ld cmat;
      cmat11 = force? cmat10;
      checkMissing(cmat11);
      return cmat11;
    };
    p6 = prom<V +>{
      pnorm = ldf pnorm;
      p5 = prom<V +>{
        cmat12 = ld cmat;
        cmat13 = force? cmat12;
        checkMissing(cmat13);
        c2 = `is.object`(cmat13);
        if c2 then L1() else L2();
      L0(dx9):
        r17 = `-`(<missing>, dx9);
        return r17;
      L1():
        dr4 = tryDispatchBuiltin.1("[", cmat13);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r16 = dyn __2(cmat13, <missing>, 3.0);
        goto L0(r16);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx8);
      };
      r19 = dyn pnorm(p5);
      r20 = `*`(2.0, r19);
      return r20;
    };
    r22 = dyn cbind2(p4, p6);
    check L6() else D5();
  D5():
    deopt 19 [r22];
  L6():
    st cmat = r22;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0(r24):
    l = ld cmat;
    colnames__ = ldf `colnames<-`;
    check L10() else D7();
  L7():
    c3 = ldf c in base;
    r25 = dyn c3("Estimate", "Std.Err", "Z value", "Pr(>z)");
    check L9() else D6();
  L8():
    r23 = dyn base1("Estimate", "Std.Err", "Z value", "Pr(>z)");
    goto L0(r23);
  D6():
    deopt 28 [r25];
  D7():
    deopt 30 [r24, l, r24];
  L9():
    goto L0(r25);
  L10():
    r26 = dyn colnames__(l, NULL, r24);
    check L11() else D8();
  D8():
    deopt 32 [r24, r26];
  L11():
    st cmat = r26;
    printCoefmat = ldf printCoefmat;
    check L12() else D9();
  D9():
    deopt 35 [];
  L12():
    p7 = prom<V +>{
      cmat16 = ld cmat;
      cmat17 = force? cmat16;
      checkMissing(cmat17);
      c4 = `is.object`(cmat17);
      if c4 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr6 = tryDispatchBuiltin.1("[", cmat17);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r27 = dyn __3(cmat17, <missing>, <int 1, 2, 3>);
      goto L0(r27);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    r29 = dyn printCoefmat(p7);
    check L13() else D10();
  D10():
    deopt 37 [r29];
  L13():
    printCoefmat1 = ldf printCoefmat;
    check L14() else D11();
  D11():
    deopt 39 [];
  L14():
    p8 = prom<V +>{
      cmat20 = ld cmat;
      cmat21 = force? cmat20;
      checkMissing(cmat21);
      return cmat21;
    };
    r31 = dyn printCoefmat1(p8);
    check L15() else D12();
  D12():
    deopt 41 [r31];
  L15():
    options = ldf options;
    check L16() else D13();
  D13():
    deopt 43 [];
  L16():
    r32 = dyn options[`show.coef.Pvalues`](FALSE);
    check L17() else D14();
  D14():
    deopt 46 [r32];
  L17():
    st op = r32;
    printCoefmat2 = ldf printCoefmat;
    check L18() else D15();
  D15():
    deopt 49 [];
  L18():
    p9 = prom<V +>{
      cmat22 = ld cmat;
      cmat23 = force? cmat22;
      checkMissing(cmat23);
      return cmat23;
    };
    r34 = dyn printCoefmat2[, digits](p9, 2.0);
    check L19() else D16();
  D16():
    deopt 53 [r34];
  L19():
    printCoefmat3 = ldf printCoefmat;
    check L20() else D17();
  D17():
    deopt 55 [];
  L20():
    p10 = prom<V +>{
      cmat24 = ld cmat;
      cmat25 = force? cmat24;
      checkMissing(cmat25);
      return cmat25;
    };
    r36 = dyn printCoefmat3[, digits, `P.values`](p10, 2.0, TRUE);
    check L21() else D18();
  D18():
    deopt 61 [r36];
  L21():
    options1 = ldf options;
    check L22() else D19();
  D19():
    deopt 63 [];
  L22():
    p11 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r38 = dyn options1(p11);
    check L23() else D20();
  D20():
    deopt 65 [r38];
  L23():
    popenv;
    return r38;
  }
}
fun inner726515891(x, digits, `signif.stars`, `signif.legend`, `dig.tst`, `cs.ind`, `tst.ind`, `zap.ind`, `P.values`, `has.Pvalue`, `eps.Pvalue`, `na.print`, quote, right, `...`) {
  (reg x:*, reg digits:*, reg signif_stars:*, reg signif_legend:*, reg dig_tst:*, reg cs_ind:*, reg tst_ind:*, reg zap_ind:*, reg P_values:*, reg has_Pvalue:*, reg eps_Pvalue:*, reg na_print:*, reg quote:*, reg right:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r6:V, reg p1:p(V +), var `signif.legend`:*, reg signif_legend_isMissing:L, reg signif_legend_orDefault:*, reg signif_stars1:*, reg signif_stars2:V, reg p2:p(V +), var `dig.tst`:*, reg dig_tst_isMissing:L, reg dig_tst_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg digits1:*, reg digits2:V, reg r13:V, reg min:cls, reg r14:V, reg max1:cls, reg r15:V, reg p3:p(V +), var `cs.ind`:*, reg cs_ind_isMissing:L, reg cs_ind_orDefault:*, reg k:*, reg k1:V, reg r17:V, reg p4:p(V +), var `tst.ind`:*, reg tst_ind_isMissing:L, reg tst_ind_orDefault:*, reg k2:*, reg k3:V, reg r19:V, reg p5:p(V +), var `zap.ind`:*, reg zap_ind_isMissing:L, reg zap_ind_orDefault:*, reg integer:cls, reg r21:V, reg p6:p(V +), var `P.values`:*, reg P_values_isMissing:L, reg P_values_orDefault:*, var `has.Pvalue`:*, reg has_Pvalue_isMissing:L, reg has_Pvalue_orDefault:*, reg nc:*, reg nc1:V, reg r23:V, reg c:L, reg c2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg c5:L, reg r25:V, reg colnames:cls, reg x1:*, reg x2:V, reg p7:p(V +), reg r27:V, reg length:cls, reg r28:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg _in_:cls, reg substr:cls, reg cn:*, reg cn1:V, reg c12:L, reg cn3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nc2:*, reg nc3:V, reg __:cls, reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg c13:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg c14:L, reg c15:V, reg p11:p(V +), var `eps.Pvalue`:*, reg eps_Pvalue_isMissing:L, reg eps_Pvalue_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c17:L, reg _Machine3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r39:V, reg p12:p(V +), var `na.print`:*, reg na_print_isMissing:L, reg na_print_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `...`:dots?, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg x3:*, reg x4:V, reg dim:cls, reg r45:V, reg c18:V, reg c19:L, reg c20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg c24:L, reg r47:V, reg d:*, reg d1:V, reg length1:cls, reg r48:V, reg r49:V, reg c25:L, reg c26:V, reg c28:L, reg stop:cls, reg r50:V, reg d2:*, reg d3:V, reg c29:L, reg d5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg P_values1:*, reg P_values2:V, reg c30:V, reg c31:L, reg getOption2:cls, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg scp:*, reg scp1:V, reg c32:L, reg r58:V, reg c33:L, reg c34:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg c38:L, reg r60:V, reg scp2:*, reg scp3:V, reg is_na:cls, reg r61:V, reg c39:L, reg c40:V, reg c42:L, reg warning:cls, reg r62:V, reg has_Pvalue1:*, reg has_Pvalue2:V, reg c43:L, reg c45:V, reg scp4:*, reg scp5:V, reg c46:L, reg c47:V, reg P_values3:*, reg P_values4:V, reg c50:L, reg c52:V, reg has_Pvalue3:*, reg has_Pvalue4:V, reg r64:V, reg c53:L, reg c54:V, reg c56:L, reg stop1:cls, reg r65:V, reg has_Pvalue5:*, reg has_Pvalue6:V, reg c57:L, reg c59:V, reg P_values5:*, reg P_values6:V, reg r66:V, reg c60:L, reg c61:V, reg c63:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg data_matrix:cls, reg x5:*, reg x6:V, reg c64:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nc4:*, reg nc5:V, reg r69:V, reg __2:cls, reg r70:V, reg p13:p(V +), reg r72:V, reg dim1:cls, reg r73:V, reg nc6:*, reg nc7:V, reg r74:V, reg data_matrix1:cls, reg x9:*, reg x10:V, reg p14:p(V +), reg r77:V, reg nc8:*, reg nc9:V, reg has_Pvalue7:*, reg has_Pvalue8:V, reg r78:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg r83:V, reg missing:cls, reg r84:V, reg c65:L, reg r87:V, reg r88:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg tst_ind1:*, reg tst_ind2:V, reg length2:cls, reg r92:V, reg r93:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r94:V, reg r95:V, reg missing1:cls, reg r96:V, reg r97:V, reg c66:L, reg c68:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r98:V, reg c71:L, reg r99:V, reg cs_ind1:*, reg cs_ind2:V, reg length3:cls, reg r100:V, reg k4:*, reg k5:V, reg r101:V, reg c72:L, reg c73:V, reg c75:L, reg stop2:cls, reg r102:V, reg array:cls, reg d6:*, reg d7:V, reg p15:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r105:V, reg r106:V, reg xm:*, reg xm1:V, reg dimnames:cls, reg r107:V, reg p16:p(V +), reg r109:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg xm2:*, reg xm3:V, reg is_na1:cls, reg r112:V, reg r113:V, reg zap_ind1:*, reg zap_ind2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c76:L, reg x11:V, reg zapsmall:cls, reg xm4:*, reg xm5:V, reg c77:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i5:*, reg i6:V, reg __3:cls, reg r114:V, reg p17:p(V +), reg digits3:*, reg digits4:V, reg p18:p(V +), reg r117:V, reg l1:*, reg c78:L, reg i8:I, reg r119:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i10:I, reg dx11:V, reg i11:*, reg i12:V, reg ___:cls, reg r122:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r123:V, reg r124:V, reg cs_ind3:*, reg cs_ind4:V, reg length4:cls, reg r125:V, reg c79:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r126:V, reg r127:V, reg xm8:*, reg xm9:V, reg c80:L, reg xm11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg cs_ind5:*, reg cs_ind6:V, reg __4:cls, reg r128:V, reg abs:cls, reg r129:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r130:V, reg r131:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r132:V, reg r133:V, reg acs:*, reg acs1:V, reg is_finite:cls, reg r134:V, reg any:cls, reg r135:V, reg c81:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r138:V, reg r139:R, reg r140:V, reg acs2:*, reg acs3:V, reg c82:L, reg r142:R, reg acs5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg r144:R, reg dx15:V, reg ia:*, reg ia1:V, reg acs6:*, reg acs7:V, reg r145:V, reg r146:V, reg __5:cls, reg r147:V, reg length5:cls, reg r148:V, reg c83:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r153:V, reg r154:R, reg r155:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r158:V, reg r159:R, reg r160:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r163:V, reg r164:R, reg r165:V, reg acs8:*, reg acs9:V, reg c84:L, reg r167:R, reg acs11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg r169:R, reg dx17:V, reg acs12:*, reg acs13:V, reg r170:V, reg __6:cls, reg r171:V, reg range:cls, reg r172:V, reg log10:cls, reg r173:V, reg r174:V, reg r175:R, reg r176:V, reg r177:V, reg format:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r178:V, reg r179:V, reg round:cls, reg r180:V, reg p19:p(V +), reg digits5:*, reg digits6:V, reg p20:p(V +), reg r183:V, reg l4:*, reg c85:L, reg r185:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r187:V, reg dx19:V, reg cs_ind7:*, reg cs_ind8:V, reg ___1:cls, reg r188:V, reg r189:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r191:V, reg r192:V, reg tst_ind3:*, reg tst_ind4:V, reg length6:cls, reg r193:V, reg c86:L, reg format1:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r194:V, reg r195:V, reg round1:cls, reg r196:V, reg p21:p(V +), reg digits7:*, reg digits8:V, reg p22:p(V +), reg r199:V, reg l7:*, reg c87:L, reg r201:V, reg l9:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r203:V, reg dx21:V, reg tst_ind5:*, reg tst_ind6:V, reg ___2:cls, reg r204:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r206:V, reg r207:V, reg _in_1:cls, reg nc10:*, reg nc11:V, reg r208:V, reg p23:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r210:V, reg r211:V, reg cs_ind9:*, reg cs_ind10:V, reg tst_ind7:*, reg tst_ind8:V, reg has_Pvalue9:*, reg has_Pvalue10:V, reg c88:L, reg nc12:*, reg nc13:V, reg nc14:V, reg c89:cls, reg r212:V, reg p24:p(V +), reg r214:V, reg r215:V, reg any1:cls, reg r216:V, reg c90:L, reg which:cls, reg r_ind:*, reg r_ind1:V, reg p25:p(V +), reg r218:V, reg s1:V, reg l10:I, reg i13:I, reg i14:I, reg i15:I, reg c91:L, reg x12:V, reg format2:cls, reg xm12:*, reg xm13:V, reg c92:L, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i18:*, reg i19:V, reg __7:cls, reg r219:V, reg p26:p(V +), reg digits9:*, reg digits10:V, reg p27:p(V +), reg r222:V, reg l11:*, reg c93:L, reg i21:I, reg r224:V, reg l13:*, reg dr24:V, reg dc12:L, reg dx24:V, reg i23:I, reg dx25:V, reg i24:*, reg i25:V, reg ___3:cls, reg r227:V, reg l14:*, reg c94:L, reg r229:L, reg l16:*, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg tst_ind9:*, reg tst_ind10:V, reg ___4:cls, reg r232:V, reg has_Pvalue11:*, reg has_Pvalue12:V, reg c95:L, reg ok:*, reg ok1:V, reg c96:L, reg ok3:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg nc15:*, reg nc16:V, reg r233:V, reg __8:cls, reg r234:V, reg dx30:V, reg ok4:*, reg ok5:V, reg Cf:*, reg Cf1:V, reg c97:L, reg Cf3:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg okP:*, reg okP1:V, reg __9:cls, reg r235:V, reg getOption3:cls, reg r236:V, reg dec:*, reg dec1:V, reg r237:V, reg c98:L, reg chartr:cls, reg dec2:*, reg dec3:V, reg p28:p(V +), reg x13:*, reg x14:V, reg p29:p(V +), reg r240:V, reg xm16:*, reg xm17:V, reg c99:L, reg xm19:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg okP2:*, reg okP3:V, reg __10:cls, reg r242:V, reg r243:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r246:V, reg r247:V, reg r248:V, reg x15:*, reg x16:V, reg as_numeric:cls, reg r249:V, reg r250:V, reg r251:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r252:V, reg r253:V, reg which1:cls, reg x17:*, reg x18:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r254:V, reg x21:V, reg r255:V, reg x22:*, reg x23:V, reg is_na2:cls, reg r256:V, reg r257:V, reg r258:V, reg p30:p(V +), reg r260:V, reg length7:cls, reg r261:V, reg c100:L, reg format3:cls, reg xm20:*, reg xm21:V, reg c101:L, reg xm23:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg okP4:*, reg okP5:V, reg __11:cls, reg r262:V, reg c102:L, reg dx38:V, reg dr36:V, reg dc18:L, reg dx39:V, reg dx40:V, reg not_both_0:*, reg not_both_1:V, reg __12:cls, reg r263:V, reg p31:p(V +), reg sym34:cls, reg base34:cls, reg guard34:L, reg r265:V, reg r266:V, reg digits11:*, reg digits12:V, reg r267:V, reg max2:cls, reg r268:V, reg p32:p(V +), reg r270:V, reg l17:*, reg c103:L, reg r273:V, reg l20:*, reg r274:V, reg l21:*, reg dr38:V, reg dc19:L, reg dx41:V, reg r277:V, reg l23:*, reg r278:V, reg dx42:V, reg okP6:*, reg okP7:V, reg __13:cls, reg r279:V, reg c104:L, reg r281:V, reg l25:*, reg dx44:V, reg dr40:V, reg dc20:L, reg dx45:V, reg r283:V, reg l27:*, reg dx46:V, reg not_both_2:*, reg not_both_3:V, reg ___5:cls, reg r284:V, reg c105:L, reg r286:V, reg l29:*, reg dr42:V, reg dc21:L, reg dx47:V, reg r288:V, reg dx48:V, reg okP8:*, reg okP9:V, reg ___6:cls, reg r289:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r291:V, reg r292:V, reg ina:*, reg ina1:V, reg any2:cls, reg r293:V, reg c106:L, reg na_print1:*, reg na_print2:V, reg l30:*, reg c107:L, reg na_print4:V, reg l32:*, reg dr44:V, reg dc22:L, reg dx49:V, reg na_print6:V, reg dx50:V, reg ina2:*, reg ina3:V, reg ___7:cls, reg r294:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r295:V, reg r296:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r297:V, reg r298:V, reg xm24:*, reg xm25:V, reg is_nan:cls, reg r299:V, reg any3:cls, reg r300:V, reg c108:L, reg l33:*, reg c109:L, reg r302:S, reg l35:*, reg dr46:V, reg dc23:L, reg dx51:V, reg r304:S, reg dx52:V, reg inan:*, reg inan1:V, reg ___8:cls, reg r305:V, reg P_values7:*, reg P_values8:V, reg c110:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r307:V, reg r308:V, reg signif_stars3:*, reg signif_stars4:V, reg c111:L, reg r309:V, reg c112:L, reg c113:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r310:V, reg c117:L, reg r311:V, reg signif_stars5:*, reg signif_stars6:V, reg is_na3:cls, reg r312:V, reg c118:L, reg c119:V, reg c121:L, reg warning1:cls, reg r313:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r315:V, reg r316:V, reg ok6:*, reg ok7:V, reg c122:L, reg ok9:V, reg dr48:V, reg dc24:L, reg dx53:V, reg dx54:V, reg nc17:*, reg nc18:V, reg __14:cls, reg r317:V, reg any4:cls, reg r318:V, reg c123:L, reg as_vector:cls, reg xm26:*, reg xm27:V, reg c124:L, reg dr50:V, reg dc25:L, reg dx55:V, reg dx56:V, reg nc19:*, reg nc20:V, reg __15:cls, reg r319:V, reg p33:p(V +), reg r321:V, reg format_pval:cls, reg pv:*, reg pv1:V, reg c125:L, reg pv3:V, reg dr52:V, reg dc26:L, reg dx57:V, reg dx58:V, reg okP10:*, reg okP11:V, reg __16:cls, reg r322:V, reg p34:p(V +), reg dig_tst1:*, reg dig_tst2:V, reg p35:p(V +), reg eps_Pvalue1:*, reg eps_Pvalue2:V, reg p36:p(V +), reg r326:V, reg l36:*, reg c126:L, reg r328:V, reg l38:*, reg dr54:V, reg dc27:L, reg dx59:V, reg dx60:V, reg okP12:*, reg okP13:V, reg nc21:*, reg nc22:V, reg ___9:cls, reg r331:V, reg signif_stars7:*, reg signif_stars8:V, reg c127:L, reg c129:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r332:V, reg c132:L, reg r333:V, reg pv4:*, reg pv5:V, reg c133:L, reg c135:L, reg pv7:V, reg dr56:V, reg dc28:L, reg dx61:V, reg c137:L, reg dx62:V, reg okP14:*, reg okP15:V, reg __17:cls, reg r334:V, reg r335:V, reg any5:cls, reg r336:V, reg c138:L, reg c139:V, reg signif_stars9:*, reg signif_stars10:V, reg c141:L, reg symnum:cls, reg pv8:*, reg pv9:V, reg p37:p(V +), reg sym42:cls, reg base42:cls, reg guard42:L, reg r338:V, reg r339:V, reg c142:cls, reg r340:V, reg p38:p(V +), reg sym43:cls, reg base43:cls, reg guard43:L, reg r342:V, reg r343:V, reg c143:cls, reg r344:V, reg p39:p(V +), reg r346:V, reg cbind:cls, reg Cf4:*, reg Cf5:V, reg p40:p(V +), reg format4:cls, reg Signif:*, reg Signif1:V, reg p41:p(V +), reg r349:V, reg p42:p(V +), reg r351:V, reg r352:V, reg r353:V, reg print_default:cls, reg Cf6:*, reg Cf7:V, reg p43:p(V +), reg quote1:*, reg quote2:V, reg p44:p(V +), reg right1:*, reg right2:V, reg p45:p(V +), reg na_print8:*, reg na_print9:V, reg p46:p(V +), reg ddd1:dots?, reg r359:V, reg signif_stars11:*, reg signif_stars12:V, reg c144:L, reg c146:V, reg signif_legend1:*, reg signif_legend2:V, reg c147:L, reg c148:V, reg c150:L, reg getOption4:cls, reg r360:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r363:V, reg r364:V, reg r365:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r368:V, reg r369:V, reg r370:V, reg Signif2:*, reg Signif3:V, reg attr:cls, reg r371:V, reg nchar:cls, reg r372:V, reg r373:V, reg c151:L, reg strwrap:cls, reg sleg:*, reg sleg1:V, reg p47:p(V +), reg w:*, reg w1:V, reg r375:V, reg p48:p(V +), reg r377:V, reg cat:cls, reg sleg2:*, reg sleg3:V, reg p49:p(V +), reg w2:*, reg w3:V, reg r380:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r383:V, reg r384:V, reg r385:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r388:V, reg r389:V, reg r390:V, reg sleg4:*, reg sleg5:V, reg nchar1:cls, reg r391:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r396:V, reg r397:V, reg r398:V, reg r399:V, reg sleg6:*, reg sleg7:V, reg nchar2:cls, reg r400:V, reg r401:V, reg max3:cls, reg r402:V, reg r403:V, reg p50:p(V +), reg r405:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r407:V, reg r408:V, reg x24:*, reg x25:V, reg invisible:cls, reg r409:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 2);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 2)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L2() else L3(signif_stars);
  L2():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("show.signif.stars");
      return r6;
    };
    goto L3(p1);
  L3(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    signif_legend_isMissing = missing.0(signif_legend);
    if signif_legend_isMissing then L4() else L5(signif_legend);
  L4():
    p2 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    goto L5(p2);
  L5(signif_legend_orDefault):
    st `signif.legend` = signif_legend_orDefault;
    dig_tst_isMissing = missing.0(dig_tst);
    if dig_tst_isMissing then L6() else L7(dig_tst);
  L6():
    p3 = prom<V +>{
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r10):
      return r10;
    L2():
      sym2 = ldf min;
      base2 = ldf min in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r9 = dyn base1(1, <lang min(5, `-`(digits, 1))>);
      goto L0(r9);
    L1(r12):
      max1 = ldf max in base;
      r15 = dyn max1(1, r12);
      goto L0(r15);
    L4():
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      r13 = `-`(digits2, 1);
      min = ldf min in base;
      r14 = dyn min(5, r13);
      goto L1(r14);
    L5():
      r11 = dyn base2(5, <lang `-`(digits, 1)>);
      goto L1(r11);
    };
    goto L7(p3);
  L7(dig_tst_orDefault):
    st `dig.tst` = dig_tst_orDefault;
    cs_ind_isMissing = missing.0(cs_ind);
    if cs_ind_isMissing then L8() else L9(cs_ind);
  L8():
    p4 = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      r17 = `:`(1.0, k1);
      return r17;
    };
    goto L9(p4);
  L9(cs_ind_orDefault):
    st `cs.ind` = cs_ind_orDefault;
    tst_ind_isMissing = missing.0(tst_ind);
    if tst_ind_isMissing then L10() else L11(tst_ind);
  L10():
    p5 = prom<V +>{
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      r19 = `+`(k3, 1.0);
      return r19;
    };
    goto L11(p5);
  L11(tst_ind_orDefault):
    st `tst.ind` = tst_ind_orDefault;
    zap_ind_isMissing = missing.0(zap_ind);
    if zap_ind_isMissing then L12() else L13(zap_ind);
  L12():
    p6 = prom<V +>{
      integer = ldf integer;
      r21 = dyn integer();
      return r21;
    };
    goto L13(p6);
  L13(zap_ind_orDefault):
    st `zap.ind` = zap_ind_orDefault;
    P_values_isMissing = missing.0(P_values);
    if P_values_isMissing then L14(NULL) else L14(P_values);
  L14(P_values_orDefault):
    st `P.values` = P_values_orDefault;
    has_Pvalue_isMissing = missing.0(has_Pvalue);
    if has_Pvalue_isMissing then L15() else L16(has_Pvalue);
  L15():
    p11 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      r23 = `>=`(nc1, 4);
      c = `as.logical`(r23);
      if c then L3() else L0(c);
    L0(c2):
      c9 = `as.logical`(c2);
      if c9 then L7() else L2(c9);
    L3():
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L1(c5, r25):
      c6 = `as.logical`(r25);
      c7 = `&&`(c5, c6);
      goto L0(c7);
    L2(c11):
      return c11;
    L4():
      colnames = ldf colnames;
      p7 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r27 = dyn colnames(p7);
      st cn = r27;
      length = ldf length in base;
      r28 = dyn length(r27);
      goto L1(c, r28);
    L5():
      r24 = dyn base3(<lang `<-`(cn, colnames(x))>);
      goto L1(c, r24);
    L7():
      _in_ = ldf `%in%`;
      p9 = prom<V +>{
        substr = ldf substr;
        p8 = prom<V +>{
          cn = ld cn;
          cn1 = force? cn;
          checkMissing(cn1);
          c12 = `is.object`(cn1);
          if c12 then L1() else L2(cn1);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", cn1);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(cn3):
          nc2 = ld nc;
          nc3 = force? nc2;
          __ = ldf `[` in base;
          r29 = dyn __(cn3, nc3);
          goto L0(r29);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r31 = dyn substr(p8, 1, 3);
        return r31;
      };
      p10 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r34):
        return r34;
      L1():
        c13 = ldf c in base;
        r35 = dyn c13("Pr(", "p-v");
        goto L0(r35);
      L2():
        r33 = dyn base4("Pr(", "p-v");
        goto L0(r33);
      };
      r37 = dyn _in_(p9, p10);
      c14 = `as.logical`(r37);
      c15 = `&&`(c9, c14);
      goto L2(c15);
    };
    goto L16(p11);
  L16(has_Pvalue_orDefault):
    st `has.Pvalue` = has_Pvalue_orDefault;
    eps_Pvalue_isMissing = missing.0(eps_Pvalue);
    if eps_Pvalue_isMissing then L17() else L18(eps_Pvalue);
  L17():
    p12 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c17 = `is.object`(_Machine1);
      if c17 then L1() else L2(_Machine1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", _Machine1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_Machine3):
      r39 = `$`(_Machine3, <sym double.eps>);
      goto L0(r39);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L18(p12);
  L18(eps_Pvalue_orDefault):
    st `eps.Pvalue` = eps_Pvalue_orDefault;
    na_print_isMissing = missing.0(na_print);
    if na_print_isMissing then L19("NA") else L19(na_print);
  L19(na_print_orDefault):
    st `na.print` = na_print_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L20(FALSE) else L20(quote);
  L20(quote_orDefault):
    st quote = quote_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L21(TRUE) else L21(right);
  L21(right_orDefault):
    st right = right_orDefault;
    st `...` = ddd;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L133() else L134();
  L22(r42):
    c19 = `as.logical`(r42);
    if c19 then L24(c19) else L139();
  L133():
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L135() else L136();
  L134():
    r41 = dyn base5(<lang `<-`(d, dim(x))>);
    goto L22(r41);
  L23(r44):
    st d = r44;
    c18 = `==`(r44, NULL);
    goto L22(c18);
  L24(c20):
    c28 = `as.logical`(c20);
    if c28 then L145() else L26();
  L135():
    x3 = ld x;
    check L137() else D0();
  L136():
    r43 = dyn base6(<sym x>);
    goto L23(r43);
  L139():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L140() else L141();
  D0():
    deopt 3 [x3];
  L25(c24, r47):
    r49 = `!=`(r47, 2);
    c25 = `as.logical`(r49);
    c26 = `||`(c24, c25);
    goto L24(c26);
  L26():
    goto L27();
  L27():
    d2 = ld d;
    check L149() else D6();
  L137():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r45 = dyn dim(x4);
    check L138() else D1();
  L140():
    d = ld d;
    check L142() else D2();
  L141():
    r46 = dyn base7(<sym d>);
    goto L25(c19, r46);
  L145():
    stop = ldf stop;
    check L146() else D4();
  D1():
    deopt 6 [r45];
  D2():
    deopt 11 [c19, d];
  D4():
    deopt 19 [];
  D6():
    deopt 24 [d2];
  L138():
    goto L23(r45);
  L142():
    d1 = force? d;
    checkMissing(d1);
    length1 = ldf length in base;
    r48 = dyn length1(d1);
    check L143() else D3();
  L146():
    r50 = dyn stop("'x' must be coefficient matrix/data frame");
    check L147() else D5();
  L149():
    d3 = force? d2;
    checkMissing(d3);
    c29 = `is.object`(d3);
    if c29 then L150() else L151(d3);
  D3():
    deopt 14 [c19, r48];
  D5():
    deopt 21 [r50];
  L28(dx5):
    st nc = dx5;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L153() else L154();
  L143():
    goto L25(c19, r48);
  L147():
    goto L27();
  L150():
    dr4 = tryDispatchBuiltin.1("[", d3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L152() else L151(dr4);
  L151(d5):
    __1 = ldf `[` in base;
    r52 = dyn __1(d5, 2);
    goto L28(r52);
  L29(r54):
    c31 = `as.logical`(r54);
    if c31 then L156() else L30();
  L152():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx4);
  L153():
    P_values1 = ld `P.values`;
    check L155() else D7();
  L154():
    r53 = dyn base8(<sym P.values>);
    goto L29(r53);
  D7():
    deopt 31 [P_values1];
  L30():
    P_values3 = ld `P.values`;
    check L177() else D17();
  L37():
    has_Pvalue5 = ld `has.Pvalue`;
    check L185() else D21();
  L155():
    P_values2 = force? P_values1;
    checkMissing(P_values2);
    c30 = `==`(P_values2, NULL);
    goto L29(c30);
  L156():
    getOption2 = ldf getOption;
    check L157() else D8();
  D8():
    deopt 35 [];
  D17():
    deopt 66 [P_values3];
  D21():
    deopt 78 [has_Pvalue5];
  L157():
    r55 = dyn getOption2("show.coef.Pvalues");
    check L158() else D9();
  L177():
    P_values4 = force? P_values3;
    checkMissing(P_values4);
    c50 = `as.logical`(P_values4);
    if c50 then L178() else L38(c50);
  L185():
    has_Pvalue6 = force? has_Pvalue5;
    checkMissing(has_Pvalue6);
    c57 = `as.logical`(has_Pvalue6);
    if c57 then L186() else L40(c57);
  D9():
    deopt 37 [r55];
  L38(c52):
    c56 = `as.logical`(c52);
    if c56 then L181() else L39();
  L40(c59):
    c63 = `as.logical`(c59);
    if c63 then L189() else L41();
  L158():
    st scp = r55;
    sym9 = ldf `is.logical`;
    base9 = ldf `is.logical` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L159() else L160();
  L178():
    has_Pvalue3 = ld `has.Pvalue`;
    check L179() else D18();
  L186():
    P_values5 = ld `P.values`;
    check L187() else D22();
  D18():
    deopt 68 [c50, has_Pvalue3];
  D22():
    deopt 80 [c57, P_values5];
  L31(r57):
    r58 = `!`(r57);
    c33 = `as.logical`(r58);
    if c33 then L32(c33) else L162();
  L39():
    goto L37();
  L41():
    data_matrix1 = ldf `data.matrix`;
    check L197() else D27();
  L43():
    nc8 = ld nc;
    check L199() else D29();
  L159():
    scp = ld scp;
    check L161() else D10();
  L160():
    r56 = dyn base9(<sym scp>);
    goto L31(r56);
  L179():
    has_Pvalue4 = force? has_Pvalue3;
    checkMissing(has_Pvalue4);
    r64 = `!`(has_Pvalue4);
    c53 = `as.logical`(r64);
    c54 = `&&`(c50, c53);
    goto L38(c54);
  L181():
    stop1 = ldf stop;
    check L182() else D19();
  L187():
    P_values6 = force? P_values5;
    checkMissing(P_values6);
    r66 = `!`(P_values6);
    c60 = `as.logical`(r66);
    c61 = `&&`(c57, c60);
    goto L40(c61);
  L189():
    sym11 = ldf dim;
    base11 = ldf dim in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L190() else L191();
  D10():
    deopt 40 [scp];
  D19():
    deopt 73 [];
  D27():
    deopt 103 [];
  D29():
    deopt 107 [nc8];
  L32(c34):
    c42 = `as.logical`(c34);
    if c42 then L168() else L34();
  L42(r68):
    st d = r68;
    nc6 = ld nc;
    check L195() else D26();
  L161():
    scp1 = force? scp;
    checkMissing(scp1);
    c32 = `is.logical`(scp1);
    goto L31(c32);
  L162():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L163() else L164();
  L182():
    r65 = dyn stop1("'P.values' is TRUE, but 'has.Pvalue' is not");
    check L183() else D20();
  L190():
    data_matrix = ldf `data.matrix`;
    check L192() else D23();
  L191():
    r67 = dyn base11(<lang `<-`(xm, data.matrix(`[`(x, , `-`(nc), drop=FALSE)))>);
    goto L42(r67);
  L197():
    p14 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r77 = dyn data_matrix1(p14);
    check L198() else D28();
  L199():
    nc9 = force? nc8;
    checkMissing(nc9);
    has_Pvalue7 = ld `has.Pvalue`;
    check L200() else D30();
  D20():
    deopt 75 [r65];
  D23():
    deopt 87 [];
  D26():
    deopt 94 [nc6];
  D28():
    deopt 105 [r77];
  D30():
    deopt 108 [nc9, has_Pvalue7];
  L33(c38, r60):
    c39 = `as.logical`(r60);
    c40 = `||`(c38, c39);
    goto L32(c40);
  L34():
    goto L35();
  L35():
    has_Pvalue1 = ld `has.Pvalue`;
    check L172() else D15();
  L163():
    scp2 = ld scp;
    check L165() else D11();
  L164():
    r59 = dyn base10(<sym scp>);
    goto L33(c33, r59);
  L168():
    warning = ldf warning;
    check L169() else D13();
  L183():
    goto L37();
  L192():
    p13 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c64 = `is.object`(x6);
      if c64 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      r69 = `-`(<missing>, nc5);
      __2 = ldf `[` in base;
      r70 = dyn __2(x6, <missing>, r69, FALSE);
      goto L0(r70);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r72 = dyn data_matrix(p13);
    check L193() else D24();
  L195():
    nc7 = force? nc6;
    checkMissing(nc7);
    r74 = `-`(nc7, 1.0);
    st nc = r74;
    st `has.Pvalue` = FALSE;
    goto L43();
  L198():
    st xm = r77;
    goto L43();
  L200():
    has_Pvalue8 = force? has_Pvalue7;
    checkMissing(has_Pvalue8);
    r78 = `-`(nc9, has_Pvalue8);
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L201() else L202();
  D11():
    deopt 46 [c33, scp2];
  D13():
    deopt 52 [];
  D15():
    deopt 60 [has_Pvalue1];
  D24():
    deopt 89 [r72];
  L44(r82, r83):
    c65 = `as.logical`(r83);
    if c65 then L203() else L45();
  L165():
    scp3 = force? scp2;
    checkMissing(scp3);
    is_na = ldf `is.na` in base;
    r61 = dyn is_na(scp3);
    check L166() else D12();
  L169():
    r62 = dyn warning("option \"show.coef.Pvalues\" is invalid: assuming TRUE");
    check L170() else D14();
  L172():
    has_Pvalue2 = force? has_Pvalue1;
    checkMissing(has_Pvalue2);
    c43 = `as.logical`(has_Pvalue2);
    if c43 then L173() else L36(c43);
  L193():
    st xm = r72;
    dim1 = ldf dim in base;
    r73 = dyn dim1(r72);
    check L194() else D25();
  L201():
    missing = ldf missing in base;
    r84 = dyn missing(<sym tst.ind>);
    goto L44(r78, r84);
  L202():
    r81 = dyn base12(<sym tst.ind>);
    goto L44(r78, r81);
  D12():
    deopt 49 [c33, r61];
  D14():
    deopt 54 [r62];
  D25():
    deopt 92 [r73];
  L36(c45):
    st `P.values` = c45;
    goto L37();
  L45():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L205() else L206();
  L46(r87, r88):
    r93 = `-`(r87, r88);
    st k = r93;
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L209() else L210();
  L166():
    goto L33(c33, r61);
  L170():
    st scp = TRUE;
    goto L35();
  L173():
    scp4 = ld scp;
    check L174() else D16();
  L194():
    goto L42(r73);
  L203():
    goto L46(r82, 1.0);
  D16():
    deopt 62 [c43, scp4];
  L47(r95):
    r97 = `!`(r95);
    c66 = `as.logical`(r97);
    if c66 then L211() else L48(c66);
  L174():
    scp5 = force? scp4;
    checkMissing(scp5);
    c46 = `as.logical`(scp5);
    c47 = `&&`(c43, c46);
    goto L36(c47);
  L205():
    tst_ind1 = ld `tst.ind`;
    check L207() else D31();
  L206():
    r91 = dyn base13(<sym tst.ind>);
    goto L46(r82, r91);
  L209():
    missing1 = ldf missing in base;
    r96 = dyn missing1(<sym cs.ind>);
    goto L47(r96);
  L210():
    r94 = dyn base14(<sym cs.ind>);
    goto L47(r94);
  D31():
    deopt 117 [r82, tst_ind1];
  L48(c68):
    c75 = `as.logical`(c68);
    if c75 then L218() else L50();
  L207():
    tst_ind2 = force? tst_ind1;
    checkMissing(tst_ind2);
    length2 = ldf length in base;
    r92 = dyn length2(tst_ind2);
    check L208() else D32();
  L211():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L212() else L213();
  D32():
    deopt 120 [r82, r92];
  L49(c71, r99):
    k4 = ld k;
    check L216() else D35();
  L50():
    goto L51();
  L51():
    array = ldf array;
    check L222() else D38();
  L208():
    goto L46(r82, r92);
  L212():
    cs_ind1 = ld `cs.ind`;
    check L214() else D33();
  L213():
    r98 = dyn base15(<sym cs.ind>);
    goto L49(c66, r98);
  L218():
    stop2 = ldf stop;
    check L219() else D36();
  D33():
    deopt 129 [c66, cs_ind1];
  D35():
    deopt 132 [c71, r99, k4];
  D36():
    deopt 137 [];
  D38():
    deopt 143 [];
  L214():
    cs_ind2 = force? cs_ind1;
    checkMissing(cs_ind2);
    length3 = ldf length in base;
    r100 = dyn length3(cs_ind2);
    check L215() else D34();
  L216():
    k5 = force? k4;
    checkMissing(k5);
    r101 = `>`(r99, k5);
    c72 = `as.logical`(r101);
    c73 = `&&`(c71, c72);
    goto L48(c73);
  L219():
    r102 = dyn stop2("wrong k / cs.ind");
    check L220() else D37();
  L222():
    p15 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      return d7;
    };
    p16 = prom<V +>{
      sym16 = ldf dimnames;
      base16 = ldf dimnames in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r106):
      return r106;
    L1():
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      dimnames = ldf dimnames in base;
      r107 = dyn dimnames(xm1);
      goto L0(r107);
    L2():
      r105 = dyn base16(<sym xm>);
      goto L0(r105);
    };
    r109 = dyn array[, dim, dimnames]("", p15, p16);
    check L223() else D39();
  D34():
    deopt 132 [c66, r100];
  D37():
    deopt 139 [r102];
  D39():
    deopt 149 [r109];
  L215():
    goto L49(c66, r100);
  L220():
    goto L51();
  L223():
    st Cf = r109;
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L224() else L225();
  L52(r111):
    st ina = r111;
    r113 = `!`(r111);
    st ok = r113;
    zap_ind1 = ld `zap.ind`;
    check L228() else D42();
  L224():
    xm2 = ld xm;
    check L226() else D40();
  L225():
    r110 = dyn base17(<sym xm>);
    goto L52(r110);
  D40():
    deopt 153 [xm2];
  D42():
    deopt 160 [zap_ind1];
  L226():
    xm3 = force? xm2;
    checkMissing(xm3);
    is_na1 = ldf `is.na` in base;
    r112 = dyn is_na1(xm3);
    check L227() else D41();
  L228():
    zap_ind2 = force? zap_ind1;
    checkMissing(zap_ind2);
    s = toForSeq(zap_ind2);
    l = length(s);
    i = 0;
    goto L53(i);
  D41():
    deopt 156 [r112];
  L53(i1):
    i2 = `+`.1(i1, 1);
    c76 = `<`.1(l, i2);
    if c76 then L229() else L55();
  L227():
    goto L52(r112);
  L55():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    zapsmall = ldf zapsmall;
    check L230() else D43();
  L229():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L236() else L237();
  D43():
    deopt 163 [i2];
  L56(r124):
    c79 = `as.logical`(r124);
    if c79 then L240() else L57();
  L230():
    p17 = prom<V +>{
      xm4 = ld xm;
      xm5 = force? xm4;
      checkMissing(xm5);
      c77 = `is.object`(xm5);
      if c77 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", xm5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[` in base;
      r114 = dyn __3(xm5, <missing>, i6);
      goto L0(r114);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p18 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    r117 = dyn zapsmall(p17, p18);
    check L231() else D44();
  L236():
    cs_ind3 = ld `cs.ind`;
    check L238() else D46();
  L237():
    r123 = dyn base18(<sym cs.ind>);
    goto L56(r123);
  D44():
    deopt 166 [i2, r117];
  D46():
    deopt 179 [cs_ind3];
  L57():
    goto L73();
  L73():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L289() else L290();
  L231():
    l1 = ld xm;
    c78 = `is.object`(l1);
    if c78 then L232() else L233(i2, r117, l1);
  L238():
    cs_ind4 = force? cs_ind3;
    checkMissing(cs_ind4);
    length4 = ldf length in base;
    r125 = dyn length4(cs_ind4);
    check L239() else D47();
  L240():
    sym19 = ldf abs;
    base19 = ldf abs in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L241() else L242();
  D47():
    deopt 182 [r125];
  L54(i10, dx11):
    st xm = dx11;
    goto L53(i10);
  L58(r127):
    st acs = r127;
    sym20 = ldf any;
    base20 = ldf any in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L249() else L250();
  L74(r192):
    c86 = `as.logical`(r192);
    if c86 then L293() else L75();
  L232():
    dr10 = tryDispatchBuiltin.0("[<-", l1, r117);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L234() else L233(i2, r117, dr10);
  L233(i8, r119, l3):
    i11 = ld i;
    check L235() else D45();
  L239():
    goto L56(r125);
  L241():
    xm8 = ld xm;
    check L243() else D48();
  L242():
    r126 = dyn base19(<lang `<-`(coef.se, `[`(xm, , cs.ind, drop=FALSE))>);
    goto L58(r126);
  L289():
    tst_ind3 = ld `tst.ind`;
    check L291() else D65();
  L290():
    r191 = dyn base27(<sym tst.ind>);
    goto L74(r191);
  D45():
    deopt 169 [i8, r119, l3, r117, i11];
  D48():
    deopt 185 [xm8];
  D65():
    deopt 266 [tst_ind3];
  L60(r131):
    c81 = `as.logical`(r131);
    if c81 then L256() else L62();
  L75():
    goto L77();
  L77():
    sym29 = ldf any;
    base29 = ldf any in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L301() else L302();
  L234():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L54(i2, dx10);
  L235():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r122 = dyn ___(l1, <missing>, i12, r117);
    goto L54(i8, r122);
  L243():
    xm9 = force? xm8;
    checkMissing(xm9);
    c80 = `is.object`(xm9);
    if c80 then L244() else L245(xm9);
  L249():
    sym21 = ldf `is.finite`;
    base21 = ldf `is.finite` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L251() else L252();
  L250():
    r130 = dyn base20(<lang `<-`(ia, is.finite(acs))>);
    goto L60(r130);
  L291():
    tst_ind4 = force? tst_ind3;
    checkMissing(tst_ind4);
    length6 = ldf length in base;
    r193 = dyn length6(tst_ind4);
    check L292() else D66();
  L293():
    format1 = ldf format;
    check L294() else D67();
  D66():
    deopt 269 [r193];
  D67():
    deopt 271 [];
  L59(dx13):
    st `coef.se` = dx13;
    abs = ldf abs in base;
    r129 = dyn abs(dx13);
    check L248() else D50();
  L61(r133):
    st ia = r133;
    any = ldf any in base;
    r135 = dyn any(r133);
    check L255() else D53();
  L62():
    goto L72(NULL);
  L72(r189):
    goto L73();
  L78(r207):
    c90 = `as.logical`(r207);
    if c90 then L306() else L79();
  L244():
    dr12 = tryDispatchBuiltin.1("[", xm9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L246() else L245(dr12);
  L245(xm11):
    cs_ind5 = ld `cs.ind`;
    check L247() else D49();
  L251():
    acs = ld acs;
    check L253() else D51();
  L252():
    r132 = dyn base21(<sym acs>);
    goto L61(r132);
  L256():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L257() else L258();
  L292():
    goto L74(r193);
  L294():
    p21 = prom<V +>{
      sym28 = ldf round;
      base28 = ldf round in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r195):
      return r195;
    L1():
      round1 = ldf round in base;
      r196 = dyn round1(<lang `[`(xm, , tst.ind)>, <sym dig.tst>);
      goto L0(r196);
    L2():
      r194 = dyn base28[, digits](<lang `[`(xm, , tst.ind)>, <sym dig.tst>);
      goto L0(r194);
    };
    p22 = prom<V +>{
      digits7 = ld digits;
      digits8 = force? digits7;
      checkMissing(digits8);
      return digits8;
    };
    r199 = dyn format1[, digits](p21, p22);
    check L295() else D68();
  L301():
    _in_1 = ldf `%in%`;
    check L303() else D70();
  L302():
    r206 = dyn base29(<lang `<-`(r.ind, `!`(`(`(`%in%`(`(`(`:`(1, nc)), c(cs.ind, tst.ind, if(has.Pvalue, nc))))))>);
    goto L78(r206);
  D49():
    deopt 188 [xm11, cs_ind5];
  D50():
    deopt 196 [r129];
  D51():
    deopt 202 [acs];
  D53():
    deopt 208 [r135];
  D68():
    deopt 275 [r199];
  D70():
    deopt 288 [];
  L63(r139, r140):
    c83 = `as.logical`(r140);
    if c83 then L266() else L65();
  L79():
    goto L83();
  L83():
    l14 = ld ok;
    c94 = `is.object`(l14);
    if c94 then L317() else L318(FALSE, l14);
  L246():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L59(dx12);
  L247():
    cs_ind6 = force? cs_ind5;
    __4 = ldf `[` in base;
    r128 = dyn __4(xm9, <missing>, cs_ind6, FALSE);
    goto L59(r128);
  L248():
    goto L58(r129);
  L253():
    acs1 = force? acs;
    checkMissing(acs1);
    is_finite = ldf `is.finite` in base;
    r134 = dyn is_finite(acs1);
    check L254() else D52();
  L255():
    goto L60(r135);
  L257():
    acs2 = ld acs;
    check L259() else D54();
  L258():
    r138 = dyn base22(<lang `<-`(acs, `[`(acs, `&`(ia, `!=`(acs, 0.0))))>);
    goto L63(1.0, r138);
  L295():
    l7 = ld Cf;
    c87 = `is.object`(l7);
    if c87 then L296() else L297(r199, l7);
  L303():
    p23 = prom<V +>{
      nc10 = ld nc;
      nc11 = force? nc10;
      checkMissing(nc11);
      r208 = `:`(1, nc11);
      visible.0();
      return r208;
    };
    p24 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L3() else L4();
    L0(r211):
      return r211;
    L3():
      cs_ind9 = ld `cs.ind`;
      cs_ind10 = force? cs_ind9;
      checkMissing(cs_ind10);
      tst_ind7 = ld `tst.ind`;
      tst_ind8 = force? tst_ind7;
      checkMissing(tst_ind8);
      has_Pvalue9 = ld `has.Pvalue`;
      has_Pvalue10 = force? has_Pvalue9;
      checkMissing(has_Pvalue10);
      c88 = `as.logical`(has_Pvalue10);
      if c88 then L5() else L1();
    L4():
      r210 = dyn base30(<sym cs.ind>, <sym tst.ind>, <lang if(has.Pvalue, nc)>);
      goto L0(r210);
    L1():
      goto L2(NULL);
    L2(nc14):
      c89 = ldf c in base;
      r212 = dyn c89(cs_ind10, tst_ind8, nc14);
      goto L0(r212);
    L5():
      nc12 = ld nc;
      nc13 = force? nc12;
      checkMissing(nc13);
      goto L2(nc13);
    };
    r214 = dyn _in_1(p23, p24);
    check L304() else D71();
  L306():
    which = ldf which;
    check L307() else D73();
  D52():
    deopt 205 [r134];
  D54():
    deopt 212 [1.0, acs2];
  D71():
    deopt 291 [r214];
  D73():
    deopt 297 [];
  L65():
    goto L70(r139, 0.0);
  L70(r175, r176):
    r177 = `+`(r175, r176);
    st digmin = r177;
    format = ldf format;
    check L281() else D62();
  L76(r203, dx21):
    st Cf = dx21;
    goto L77();
  L84(dx27):
    st ok = dx27;
    has_Pvalue11 = ld `has.Pvalue`;
    check L321() else D79();
  L254():
    goto L61(r134);
  L259():
    acs3 = force? acs2;
    checkMissing(acs3);
    c82 = `is.object`(acs3);
    if c82 then L260() else L261(1.0, acs3);
  L266():
    sym23 = ldf floor;
    base23 = ldf floor in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L267() else L268();
  L296():
    dr20 = tryDispatchBuiltin.0("[<-", l7, r199);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L298() else L297(r199, dr20);
  L297(r201, l9):
    tst_ind5 = ld `tst.ind`;
    check L299() else D69();
  L304():
    r215 = `!`(r214);
    st `r.ind` = r215;
    any1 = ldf any in base;
    r216 = dyn any1(r215);
    check L305() else D72();
  L307():
    p25 = prom<V +>{
      r_ind = ld `r.ind`;
      r_ind1 = force? r_ind;
      checkMissing(r_ind1);
      return r_ind1;
    };
    r218 = dyn which(p25);
    check L308() else D74();
  L317():
    dr26 = tryDispatchBuiltin.0("[<-", l14, FALSE);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L319() else L318(FALSE, dr26);
  L318(r229, l16):
    tst_ind9 = ld `tst.ind`;
    check L320() else D78();
  D62():
    deopt 248 [];
  D69():
    deopt 278 [r201, l9, r199, tst_ind5];
  D72():
    deopt 295 [r216];
  D74():
    deopt 299 [r218];
  D78():
    deopt 322 [r229, l16, FALSE, tst_ind9];
  D79():
    deopt 327 [has_Pvalue11];
  L64(r144, dx15):
    st acs = dx15;
    length5 = ldf length in base;
    r148 = dyn length5(dx15);
    check L265() else D57();
  L66(r154, r155):
    goto L70(r154, r155);
  L260():
    dr14 = tryDispatchBuiltin.1("[", acs3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L262() else L261(1.0, dr14);
  L261(r142, acs5):
    ia = ld ia;
    check L263() else D55();
  L267():
    sym24 = ldf log10;
    base24 = ldf log10 in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L269() else L270();
  L268():
    r153 = dyn base23(<lang log10(range(`[`(acs, `!=`(acs, 0.0)), finite=TRUE))>);
    goto L66(r139, r153);
  L281():
    p19 = prom<V +>{
      sym26 = ldf round;
      base26 = ldf round in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r179):
      return r179;
    L1():
      round = ldf round in base;
      r180 = dyn round(<sym coef.se>, <lang max(1, `-`(digits, digmin))>);
      goto L0(r180);
    L2():
      r178 = dyn base26(<sym coef.se>, <lang max(1, `-`(digits, digmin))>);
      goto L0(r178);
    };
    p20 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    r183 = dyn format[, digits](p19, p20);
    check L282() else D63();
  L298():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L76(r199, dx20);
  L299():
    tst_ind6 = force? tst_ind5;
    ___2 = ldf `[<-` in base;
    r204 = dyn ___2(l7, <missing>, tst_ind6, r199);
    goto L76(r201, r204);
  L305():
    goto L78(r216);
  L308():
    s1 = toForSeq(r218);
    l10 = length(s1);
    i13 = 0;
    goto L80(i13);
  L319():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L84(dx26);
  L320():
    tst_ind10 = force? tst_ind9;
    ___4 = ldf `[<-` in base;
    r232 = dyn ___4(l14, <missing>, tst_ind10, FALSE);
    goto L84(r232);
  L321():
    has_Pvalue12 = force? has_Pvalue11;
    checkMissing(has_Pvalue12);
    c95 = `as.logical`(has_Pvalue12);
    if c95 then L322() else L85();
  D55():
    deopt 214 [r142, acs5, ia];
  D57():
    deopt 223 [r144, r148];
  D63():
    deopt 252 [r183];
  L67(r159, r160):
    r174 = floor(r160);
    goto L66(r159, r174);
  L80(i14):
    i15 = `+`.1(i14, 1);
    c91 = `<`.1(l10, i15);
    if c91 then L309() else L82();
  L85():
    ok4 = ld ok;
    check L329() else D82();
  L87(dx30):
    st okP = dx30;
    Cf = ld Cf;
    check L330() else D83();
  L262():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L64(1.0, dx14);
  L263():
    ia1 = force? ia;
    checkMissing(ia1);
    acs6 = ld acs;
    check L264() else D56();
  L265():
    goto L63(r144, r148);
  L269():
    sym25 = ldf range;
    base25 = ldf range in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L271() else L272();
  L270():
    r158 = dyn base24(<lang range(`[`(acs, `!=`(acs, 0.0)), finite=TRUE)>);
    goto L67(r139, r158);
  L282():
    l4 = ld Cf;
    c85 = `is.object`(l4);
    if c85 then L283() else L284(r183, l4);
  L322():
    ok = ld ok;
    check L323() else D80();
  D56():
    deopt 215 [r142, acs5, ia1, acs6];
  D80():
    deopt 329 [ok];
  D82():
    deopt 337 [ok4];
  D83():
    deopt 340 [Cf];
  L68(r164, r165):
    log10 = ldf log10 in base;
    r173 = dyn log10(r165);
    check L279() else D61();
  L71(r187, dx19):
    st Cf = dx19;
    goto L72(r187);
  L82():
    x12 = `[[`(s1, i15, NULL, TRUE);
    st i = x12;
    format2 = ldf format;
    check L310() else D75();
  L264():
    acs7 = force? acs6;
    checkMissing(acs7);
    r145 = `!=`(acs7, 0.0);
    r146 = `&&`(ia1, r145);
    __5 = ldf `[` in base;
    r147 = dyn __5(acs5, r146);
    goto L64(r142, r147);
  L271():
    acs8 = ld acs;
    check L273() else D58();
  L272():
    r163 = dyn base25[, finite](<lang `[`(acs, `!=`(acs, 0.0))>, TRUE);
    goto L68(r139, r163);
  L283():
    dr18 = tryDispatchBuiltin.0("[<-", l4, r183);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L285() else L284(r183, dr18);
  L284(r185, l6):
    cs_ind7 = ld `cs.ind`;
    check L286() else D64();
  L309():
    goto L83();
  L323():
    ok1 = force? ok;
    checkMissing(ok1);
    c96 = `is.object`(ok1);
    if c96 then L324() else L325(ok1);
  L329():
    ok5 = force? ok4;
    checkMissing(ok5);
    goto L87(ok5);
  L330():
    Cf1 = force? Cf;
    checkMissing(Cf1);
    c97 = `is.object`(Cf1);
    if c97 then L331() else L332(Cf1);
  D58():
    deopt 229 [r139, acs8];
  D61():
    deopt 241 [r164, r173];
  D64():
    deopt 255 [r185, l6, r183, cs_ind7];
  D75():
    deopt 301 [i15];
  L86(dx29):
    goto L87(dx29);
  L88(dx32):
    st x1 = dx32;
    getOption3 = ldf getOption;
    check L335() else D85();
  L273():
    acs9 = force? acs8;
    checkMissing(acs9);
    c84 = `is.object`(acs9);
    if c84 then L274() else L275(r139, acs9);
  L279():
    goto L67(r164, r173);
  L285():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L71(r183, dx18);
  L286():
    cs_ind8 = force? cs_ind7;
    ___1 = ldf `[<-` in base;
    r188 = dyn ___1(l4, <missing>, cs_ind8, r183);
    goto L71(r185, r188);
  L310():
    p26 = prom<V +>{
      xm12 = ld xm;
      xm13 = force? xm12;
      checkMissing(xm13);
      c92 = `is.object`(xm13);
      if c92 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", xm13);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2();
    L2():
      i18 = ld i;
      i19 = force? i18;
      __7 = ldf `[` in base;
      r219 = dyn __7(xm13, <missing>, i19);
      goto L0(r219);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p27 = prom<V +>{
      digits9 = ld digits;
      digits10 = force? digits9;
      checkMissing(digits10);
      return digits10;
    };
    r222 = dyn format2[, digits](p26, p27);
    check L311() else D76();
  L324():
    dr28 = tryDispatchBuiltin.1("[", ok1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L326() else L325(dr28);
  L325(ok3):
    nc15 = ld nc;
    check L327() else D81();
  L331():
    dr30 = tryDispatchBuiltin.1("[", Cf1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L333() else L332(dr30);
  L332(Cf3):
    okP = ld okP;
    check L334() else D84();
  D76():
    deopt 305 [i15, r222];
  D81():
    deopt 332 [ok3, nc15];
  D84():
    deopt 342 [Cf3, okP];
  D85():
    deopt 347 [];
  L69(r169, dx17):
    range = ldf range in base;
    r172 = dyn range(dx17, TRUE);
    check L278() else D60();
  L274():
    dr16 = tryDispatchBuiltin.1("[", acs9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L276() else L275(r139, dr16);
  L275(r167, acs11):
    acs12 = ld acs;
    check L277() else D59();
  L311():
    l11 = ld Cf;
    c93 = `is.object`(l11);
    if c93 then L312() else L313(i15, r222, l11);
  L326():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L86(dx28);
  L327():
    nc16 = force? nc15;
    checkMissing(nc16);
    r233 = `-`(<missing>, nc16);
    __8 = ldf `[` in base;
    r234 = dyn __8(ok1, <missing>, r233);
    goto L86(r234);
  L333():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L88(dx31);
  L334():
    okP1 = force? okP;
    __9 = ldf `[` in base;
    r235 = dyn __9(Cf3, okP1);
    goto L88(r235);
  L335():
    r236 = dyn getOption3("OutDec");
    check L336() else D86();
  D59():
    deopt 231 [r167, acs11, acs12];
  D60():
    deopt 239 [r169, r172];
  D86():
    deopt 349 [r236];
  L81(i23, dx25):
    st Cf = dx25;
    goto L80(i23);
  L276():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L69(r139, dx16);
  L277():
    acs13 = force? acs12;
    checkMissing(acs13);
    r170 = `!=`(acs13, 0.0);
    __6 = ldf `[` in base;
    r171 = dyn __6(acs11, r170);
    goto L69(r167, r171);
  L278():
    goto L68(r169, r172);
  L312():
    dr24 = tryDispatchBuiltin.0("[<-", l11, r222);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L314() else L313(i15, r222, dr24);
  L313(i21, r224, l13):
    i24 = ld i;
    check L315() else D77();
  L336():
    st dec = r236;
    dec = ld dec;
    check L337() else D87();
  D77():
    deopt 308 [i21, r224, l13, r222, i24];
  D87():
    deopt 351 [dec];
  L314():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L81(i15, dx24);
  L315():
    i25 = force? i24;
    ___3 = ldf `[<-` in base;
    r227 = dyn ___3(l11, <missing>, i25, r222);
    goto L81(i21, r227);
  L337():
    dec1 = force? dec;
    checkMissing(dec1);
    r237 = `!=`(dec1, ".");
    c98 = `as.logical`(r237);
    if c98 then L338() else L89();
  L89():
    goto L90();
  L90():
    xm16 = ld xm;
    check L342() else D90();
  L338():
    chartr = ldf chartr;
    check L339() else D88();
  D88():
    deopt 356 [];
  D90():
    deopt 364 [xm16];
  L339():
    p28 = prom<V +>{
      dec2 = ld dec;
      dec3 = force? dec2;
      checkMissing(dec3);
      return dec3;
    };
    p29 = prom<V +>{
      x13 = ld x1;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r240 = dyn chartr(p28, ".", p29);
    check L340() else D89();
  L342():
    xm17 = force? xm16;
    checkMissing(xm17);
    c99 = `is.object`(xm17);
    if c99 then L343() else L344(xm17);
  D89():
    deopt 360 [r240];
  L91(dx34):
    r243 = `==`(dx34, 0.0);
    sym31 = ldf `as.numeric`;
    base31 = ldf `as.numeric` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L347() else L348();
  L340():
    st x1 = r240;
    goto L90();
  L343():
    dr32 = tryDispatchBuiltin.1("[", xm17);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L345() else L344(dr32);
  L344(xm19):
    okP2 = ld okP;
    check L346() else D91();
  D91():
    deopt 366 [xm19, okP2];
  L92(r247, r248):
    r250 = `==`(r248, 0.0);
    r251 = `!=`(r247, r250);
    st x0 = r251;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L351() else L352();
  L345():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L91(dx33);
  L346():
    okP3 = force? okP2;
    __10 = ldf `[` in base;
    r242 = dyn __10(xm19, okP3);
    goto L91(r242);
  L347():
    x15 = ld x1;
    check L349() else D92();
  L348():
    r246 = dyn base31(<sym x1>);
    goto L92(r243, r246);
  D92():
    deopt 372 [r243, x15];
  L93(r253):
    c100 = `as.logical`(r253);
    if c100 then L356() else L94();
  L349():
    x16 = force? x15;
    checkMissing(x16);
    as_numeric = ldf `as.numeric` in base;
    r249 = dyn as_numeric(x16);
    check L350() else D93();
  L351():
    which1 = ldf which;
    check L353() else D94();
  L352():
    r252 = dyn base32(<lang `<-`(not.both.0, which(`&`(x0, `!`(is.na(x0)))))>);
    goto L93(r252);
  D93():
    deopt 375 [r243, r249];
  D94():
    deopt 383 [];
  L94():
    goto L98();
  L98():
    sym35 = ldf any;
    base35 = ldf any in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L372() else L373();
  L350():
    goto L92(r243, r249);
  L353():
    p30 = prom<V +>{
      x17 = ld x0;
      x18 = force? x17;
      checkMissing(x18);
      sym33 = ldf `is.na`;
      base33 = ldf `is.na` in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(x21, r255):
      r257 = `!`(r255);
      r258 = `&&`(x21, r257);
      return r258;
    L1():
      x22 = ld x0;
      x23 = force? x22;
      checkMissing(x23);
      is_na2 = ldf `is.na` in base;
      r256 = dyn is_na2(x23);
      goto L0(x18, r256);
    L2():
      r254 = dyn base33(<sym x0>);
      goto L0(x18, r254);
    };
    r260 = dyn which1(p30);
    check L354() else D95();
  L356():
    format3 = ldf format;
    check L357() else D97();
  D95():
    deopt 385 [r260];
  D97():
    deopt 390 [];
  L99(r292):
    c106 = `as.logical`(r292);
    if c106 then L376() else L100();
  L354():
    st `not.both.0` = r260;
    length7 = ldf length in base;
    r261 = dyn length7(r260);
    check L355() else D96();
  L357():
    p31 = prom<V +>{
      xm20 = ld xm;
      xm21 = force? xm20;
      checkMissing(xm21);
      c101 = `is.object`(xm21);
      if c101 then L2() else L3(xm21);
    L0(dx36):
      c102 = `is.object`(dx36);
      if c102 then L5() else L6(dx36);
    L2():
      dr34 = tryDispatchBuiltin.1("[", xm21);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L4() else L3(dr34);
    L3(xm23):
      okP4 = ld okP;
      okP5 = force? okP4;
      __11 = ldf `[` in base;
      r262 = dyn __11(xm23, okP5);
      goto L0(r262);
    L1(dx40):
      return dx40;
    L4():
      dx35 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx35);
    L5():
      dr36 = tryDispatchBuiltin.1("[", dx36);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(dx38):
      not_both_0 = ld `not.both.0`;
      not_both_1 = force? not_both_0;
      __12 = ldf `[` in base;
      r263 = dyn __12(dx38, not_both_1);
      goto L1(r263);
    L7():
      dx39 = getTryDispatchBuiltinValue(dr36);
      goto L1(dx39);
    };
    p32 = prom<V +>{
      sym34 = ldf max;
      base34 = ldf max in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L1() else L2();
    L0(r266):
      return r266;
    L1():
      digits11 = ld digits;
      digits12 = force? digits11;
      checkMissing(digits12);
      r267 = `-`(digits12, 1);
      max2 = ldf max in base;
      r268 = dyn max2(1, r267);
      goto L0(r268);
    L2():
      r265 = dyn base34(1, <lang `-`(digits, 1)>);
      goto L0(r265);
    };
    r270 = dyn format3[, digits](p31, p32);
    check L358() else D98();
  L372():
    ina = ld ina;
    check L374() else D102();
  L373():
    r291 = dyn base35(<sym ina>);
    goto L99(r291);
  D96():
    deopt 388 [r261];
  D98():
    deopt 394 [r270];
  D102():
    deopt 412 [ina];
  L100():
    goto L102();
  L102():
    sym36 = ldf any;
    base36 = ldf any in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L383() else L384();
  L355():
    goto L93(r261);
  L358():
    l17 = ld Cf;
    c103 = `is.object`(l17);
    if c103 then L359() else L360(r270, l17, r270, l17);
  L374():
    ina1 = force? ina;
    checkMissing(ina1);
    any2 = ldf any in base;
    r293 = dyn any2(ina1);
    check L375() else D103();
  L376():
    na_print1 = ld `na.print`;
    check L377() else D104();
  D103():
    deopt 415 [r293];
  D104():
    deopt 416 [na_print1];
  L95(r277, l23, r278, dx42):
    c104 = `is.object`(dx42);
    if c104 then L363() else L364(r277, l23, dx42);
  L103(r296):
    c108 = `as.logical`(r296);
    if c108 then L390() else L105();
  L359():
    dr38 = tryDispatchBuiltin.1("[", l17);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L361() else L360(r270, l17, r270, dr38);
  L360(r273, l20, r274, l21):
    okP6 = ld okP;
    check L362() else D99();
  L375():
    goto L99(r293);
  L377():
    na_print2 = force? na_print1;
    checkMissing(na_print2);
    l30 = ld Cf;
    c107 = `is.object`(l30);
    if c107 then L378() else L379(na_print2, l30);
  L383():
    sym37 = ldf `is.nan`;
    base37 = ldf `is.nan` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L385() else L386();
  L384():
    r295 = dyn base36(<lang `<-`(inan, is.nan(xm))>);
    goto L103(r295);
  D99():
    deopt 397 [r273, l20, r274, l21, okP6];
  L96(r283, l27, dx46):
    c105 = `is.object`(l27);
    if c105 then L367() else L368(r283, l27);
  L101(na_print6, dx50):
    st Cf = dx50;
    goto L102();
  L104(r298):
    st inan = r298;
    any3 = ldf any in base;
    r300 = dyn any3(r298);
    check L389() else D108();
  L105():
    goto L107();
  L107():
    P_values7 = ld `P.values`;
    check L396() else D110();
  L361():
    dx41 = getTryDispatchBuiltinValue(dr38);
    goto L95(r270, l17, r270, dx41);
  L362():
    okP7 = force? okP6;
    __13 = ldf `[` in base;
    r279 = dyn __13(l21, okP7);
    goto L95(r273, l20, r274, r279);
  L363():
    dr40 = tryDispatchBuiltin.0("[<-", dx42, r278);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L365() else L364(r277, l23, dr40);
  L364(r281, l25, dx44):
    not_both_2 = ld `not.both.0`;
    check L366() else D100();
  L378():
    dr44 = tryDispatchBuiltin.0("[<-", l30, na_print2);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L380() else L379(na_print2, dr44);
  L379(na_print4, l32):
    ina2 = ld ina;
    check L381() else D105();
  L385():
    xm24 = ld xm;
    check L387() else D106();
  L386():
    r297 = dyn base37(<sym xm>);
    goto L104(r297);
  L390():
    l33 = ld Cf;
    c109 = `is.object`(l33);
    if c109 then L391() else L392("NaN", l33);
  D100():
    deopt 401 [r281, l25, dx44, r278, not_both_2];
  D105():
    deopt 419 [na_print4, l32, na_print2, ina2];
  D106():
    deopt 429 [xm24];
  D108():
    deopt 435 [r300];
  D110():
    deopt 445 [P_values7];
  L97(r288, dx48):
    st Cf = dx48;
    goto L98();
  L106(r304, dx52):
    st Cf = dx52;
    goto L107();
  L365():
    dx45 = getTryDispatchBuiltinValue(dr40);
    goto L96(r277, l23, dx45);
  L366():
    not_both_3 = force? not_both_2;
    ___5 = ldf `[<-` in base;
    r284 = dyn ___5(dx44, r278, not_both_3);
    goto L96(r281, l25, r284);
  L367():
    dr42 = tryDispatchBuiltin.0("[<-", l27, dx46);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L369() else L368(r283, dr42);
  L368(r286, l29):
    okP8 = ld okP;
    check L370() else D101();
  L380():
    dx49 = getTryDispatchBuiltinValue(dr44);
    goto L101(na_print2, dx49);
  L381():
    ina3 = force? ina2;
    ___7 = ldf `[<-` in base;
    r294 = dyn ___7(l32, na_print2, ina3);
    goto L101(na_print4, r294);
  L387():
    xm25 = force? xm24;
    checkMissing(xm25);
    is_nan = ldf `is.nan` in base;
    r299 = dyn is_nan(xm25);
    check L388() else D107();
  L389():
    goto L103(r300);
  L391():
    dr46 = tryDispatchBuiltin.0("[<-", l33, "NaN");
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L393() else L392("NaN", dr46);
  L392(r302, l35):
    inan = ld inan;
    check L394() else D109();
  L396():
    P_values8 = force? P_values7;
    checkMissing(P_values8);
    c110 = `as.logical`(P_values8);
    if c110 then L397() else L108();
  D101():
    deopt 404 [r286, l29, dx46, okP8];
  D107():
    deopt 432 [r299];
  D109():
    deopt 439 [r302, l35, "NaN", inan];
  L108():
    st `signif.stars` = FALSE;
    goto L124();
  L124():
    print_default = ldf `print.default`;
    check L449() else D134();
  L369():
    dx47 = getTryDispatchBuiltinValue(dr42);
    goto L97(r283, dx47);
  L370():
    okP9 = force? okP8;
    ___6 = ldf `[<-` in base;
    r289 = dyn ___6(l29, dx46, okP9);
    goto L97(r286, r289);
  L388():
    goto L104(r299);
  L393():
    dx51 = getTryDispatchBuiltinValue(dr46);
    goto L106("NaN", dx51);
  L394():
    inan1 = force? inan;
    ___8 = ldf `[<-` in base;
    r305 = dyn ___8(l35, "NaN", inan1);
    goto L106(r302, r305);
  L397():
    sym38 = ldf `is.logical`;
    base38 = ldf `is.logical` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L398() else L399();
  D134():
    deopt 544 [];
  L109(r308):
    r309 = `!`(r308);
    c112 = `as.logical`(r309);
    if c112 then L110(c112) else L401();
  L398():
    signif_stars3 = ld `signif.stars`;
    check L400() else D111();
  L399():
    r307 = dyn base38(<sym signif.stars>);
    goto L109(r307);
  L449():
    p43 = prom<V +>{
      Cf6 = ld Cf;
      Cf7 = force? Cf6;
      checkMissing(Cf7);
      return Cf7;
    };
    p44 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p45 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    p46 = prom<V +>{
      na_print8 = ld `na.print`;
      na_print9 = force? na_print8;
      checkMissing(na_print9);
      return na_print9;
    };
    ddd1 = ld `...`;
    r359 = dyn print_default[, quote, right, `na.print`, `...`](p43, p44, p45, p46, ddd1);
    check L450() else D135();
  D111():
    deopt 448 [signif_stars3];
  D135():
    deopt 553 [r359];
  L110(c113):
    c121 = `as.logical`(c113);
    if c121 then L407() else L112();
  L400():
    signif_stars4 = force? signif_stars3;
    checkMissing(signif_stars4);
    c111 = `is.logical`(signif_stars4);
    goto L109(c111);
  L401():
    sym39 = ldf `is.na`;
    base39 = ldf `is.na` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L402() else L403();
  L450():
    signif_stars11 = ld `signif.stars`;
    check L451() else D136();
  D136():
    deopt 554 [signif_stars11];
  L111(c117, r311):
    c118 = `as.logical`(r311);
    c119 = `||`(c117, c118);
    goto L110(c119);
  L112():
    goto L113();
  L113():
    sym40 = ldf any;
    base40 = ldf any in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L411() else L412();
  L402():
    signif_stars5 = ld `signif.stars`;
    check L404() else D112();
  L403():
    r310 = dyn base39(<sym signif.stars>);
    goto L111(c112, r310);
  L407():
    warning1 = ldf warning;
    check L408() else D114();
  L451():
    signif_stars12 = force? signif_stars11;
    checkMissing(signif_stars12);
    c144 = `as.logical`(signif_stars12);
    if c144 then L452() else L125(c144);
  D112():
    deopt 454 [c112, signif_stars5];
  D114():
    deopt 460 [];
  L114(r316):
    c123 = `as.logical`(r316);
    if c123 then L419() else L116();
  L125(c146):
    c150 = `as.logical`(c146);
    if c150 then L455() else L126();
  L404():
    signif_stars6 = force? signif_stars5;
    checkMissing(signif_stars6);
    is_na3 = ldf `is.na` in base;
    r312 = dyn is_na3(signif_stars6);
    check L405() else D113();
  L408():
    r313 = dyn warning1("option \"show.signif.stars\" is invalid: assuming TRUE");
    check L409() else D115();
  L411():
    ok6 = ld ok;
    check L413() else D116();
  L412():
    r315 = dyn base40(<lang `<-`(okP, `[`(ok, , nc))>);
    goto L114(r315);
  L452():
    signif_legend1 = ld `signif.legend`;
    check L453() else D137();
  D113():
    deopt 457 [c112, r312];
  D115():
    deopt 462 [r313];
  D116():
    deopt 470 [ok6];
  D137():
    deopt 556 [c144, signif_legend1];
  L116():
    st `signif.stars` = FALSE;
    goto L123(FALSE);
  L123(r353):
    goto L124();
  L126():
    goto L131();
  L131():
    sym49 = ldf invisible;
    base49 = ldf invisible in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L472() else L473();
  L405():
    goto L111(c112, r312);
  L409():
    st `signif.stars` = TRUE;
    goto L113();
  L413():
    ok7 = force? ok6;
    checkMissing(ok7);
    c122 = `is.object`(ok7);
    if c122 then L414() else L415(ok7);
  L419():
    as_vector = ldf `as.vector`;
    check L420() else D119();
  L453():
    signif_legend2 = force? signif_legend1;
    checkMissing(signif_legend2);
    c147 = `as.logical`(signif_legend2);
    c148 = `&&`(c144, c147);
    goto L125(c148);
  L455():
    getOption4 = ldf getOption;
    check L456() else D138();
  D119():
    deopt 481 [];
  D138():
    deopt 560 [];
  L115(dx54):
    st okP = dx54;
    any4 = ldf any in base;
    r318 = dyn any4(dx54);
    check L418() else D118();
  L132(r408):
    popenv;
    return r408;
  L414():
    dr48 = tryDispatchBuiltin.1("[", ok7);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L416() else L415(dr48);
  L415(ok9):
    nc17 = ld nc;
    check L417() else D117();
  L420():
    p33 = prom<V +>{
      xm26 = ld xm;
      xm27 = force? xm26;
      checkMissing(xm27);
      c124 = `is.object`(xm27);
      if c124 then L1() else L2();
    L0(dx56):
      return dx56;
    L1():
      dr50 = tryDispatchBuiltin.1("[", xm27);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2();
    L2():
      nc19 = ld nc;
      nc20 = force? nc19;
      __15 = ldf `[` in base;
      r319 = dyn __15(xm27, <missing>, nc20);
      goto L0(r319);
    L3():
      dx55 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx55);
    };
    r321 = dyn as_vector(p33);
    check L421() else D120();
  L456():
    r360 = dyn getOption4("width");
    check L457() else D139();
  L472():
    x24 = ld x;
    check L474() else D147();
  L473():
    r407 = dyn base49(<sym x>);
    goto L132(r407);
  D117():
    deopt 473 [ok9, nc17];
  D118():
    deopt 479 [r318];
  D120():
    deopt 483 [r321];
  D139():
    deopt 562 [r360];
  D147():
    deopt 603 [x24];
  L416():
    dx53 = getTryDispatchBuiltinValue(dr48);
    goto L115(dx53);
  L417():
    nc18 = force? nc17;
    __14 = ldf `[` in base;
    r317 = dyn __14(ok7, <missing>, nc18);
    goto L115(r317);
  L418():
    goto L114(r318);
  L421():
    st pv = r321;
    format_pval = ldf `format.pval`;
    check L422() else D121();
  L457():
    st w = r360;
    sym44 = ldf nchar;
    base44 = ldf nchar in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L458() else L459();
  L474():
    x25 = force? x24;
    checkMissing(x25);
    invisible = ldf invisible in base;
    r409 = dyn invisible(x25);
    check L475() else D148();
  D121():
    deopt 486 [];
  D148():
    deopt 606 [r409];
  L127(r364, r365):
    r373 = `<`(r364, r365);
    c151 = `as.logical`(r373);
    if c151 then L465() else L129();
  L422():
    p34 = prom<V +>{
      pv = ld pv;
      pv1 = force? pv;
      checkMissing(pv1);
      c125 = `is.object`(pv1);
      if c125 then L1() else L2(pv1);
    L0(dx58):
      return dx58;
    L1():
      dr52 = tryDispatchBuiltin.1("[", pv1);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(pv3):
      okP10 = ld okP;
      okP11 = force? okP10;
      __16 = ldf `[` in base;
      r322 = dyn __16(pv3, okP11);
      goto L0(r322);
    L3():
      dx57 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx57);
    };
    p35 = prom<V +>{
      dig_tst1 = ld `dig.tst`;
      dig_tst2 = force? dig_tst1;
      checkMissing(dig_tst2);
      return dig_tst2;
    };
    p36 = prom<V +>{
      eps_Pvalue1 = ld `eps.Pvalue`;
      eps_Pvalue2 = force? eps_Pvalue1;
      checkMissing(eps_Pvalue2);
      return eps_Pvalue2;
    };
    r326 = dyn format_pval[, digits, eps](p34, p35, p36);
    check L423() else D122();
  L458():
    sym45 = ldf attr;
    base45 = ldf attr in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L460() else L461();
  L459():
    r363 = dyn base44(<lang `<-`(sleg, attr(Signif, "legend"))>);
    goto L127(r360, r363);
  L475():
    goto L132(r409);
  D122():
    deopt 492 [r326];
  L128(r369, r370):
    st sleg = r370;
    nchar = ldf nchar in base;
    r372 = dyn nchar(r370, "chars", FALSE, NA_LGL);
    check L464() else D142();
  L129():
    goto L130();
  L130():
    cat = ldf cat;
    check L469() else D145();
  L423():
    l36 = ld Cf;
    c126 = `is.object`(l36);
    if c126 then L424() else L425(r326, l36);
  L460():
    Signif2 = ld Signif;
    check L462() else D140();
  L461():
    r368 = dyn base45(<sym Signif>, "legend");
    goto L128(r360, r368);
  L465():
    strwrap = ldf strwrap;
    check L466() else D143();
  D140():
    deopt 567 [r360, Signif2];
  D142():
    deopt 577 [r369, r372];
  D143():
    deopt 580 [];
  D145():
    deopt 591 [];
  L117(dx60):
    st Cf = dx60;
    signif_stars7 = ld `signif.stars`;
    check L429() else D125();
  L424():
    dr54 = tryDispatchBuiltin.0("[<-", l36, r326);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L426() else L425(r326, dr54);
  L425(r328, l38):
    okP12 = ld okP;
    check L427() else D123();
  L462():
    Signif3 = force? Signif2;
    checkMissing(Signif3);
    attr = ldf attr in base;
    r371 = dyn attr(Signif3, "legend");
    check L463() else D141();
  L464():
    goto L127(r369, r372);
  L466():
    p47 = prom<V +>{
      sleg = ld sleg;
      sleg1 = force? sleg;
      checkMissing(sleg1);
      return sleg1;
    };
    p48 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      r375 = `-`(w1, 2.0);
      return r375;
    };
    r377 = dyn strwrap[, width, prefix](p47, p48, "  ");
    check L467() else D144();
  L469():
    p49 = prom<V +>{
      sleg2 = ld sleg;
      sleg3 = force? sleg2;
      checkMissing(sleg3);
      return sleg3;
    };
    p50 = prom<V +>{
      w2 = ld w;
      w3 = force? w2;
      checkMissing(w3);
      r380 = `+`(w3, 4.0);
      sym46 = ldf max;
      base46 = ldf max in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L3() else L4();
    L0(r384, r385):
      r403 = `+`(r384, r385);
      return r403;
    L3():
      sym47 = ldf nchar;
      base47 = ldf nchar in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L5() else L6();
    L4():
      r383 = dyn base46(<lang `-`(nchar(sleg, "bytes"), nchar(sleg))>);
      goto L0(r380, r383);
    L1(r389, r390):
      sym48 = ldf nchar;
      base48 = ldf nchar in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L7() else L8();
    L5():
      sleg4 = ld sleg;
      sleg5 = force? sleg4;
      checkMissing(sleg5);
      nchar1 = ldf nchar in base;
      r391 = dyn nchar1(sleg5, "bytes", FALSE, NA_LGL);
      goto L1(r380, r391);
    L6():
      r388 = dyn base47(<sym sleg>, "bytes");
      goto L1(r380, r388);
    L2(r397, r398, r399):
      r401 = `-`(r398, r399);
      max3 = ldf max in base;
      r402 = dyn max3(r401);
      goto L0(r397, r402);
    L7():
      sleg6 = ld sleg;
      sleg7 = force? sleg6;
      checkMissing(sleg7);
      nchar2 = ldf nchar in base;
      r400 = dyn nchar2(sleg7, "chars", FALSE, NA_LGL);
      goto L2(r389, r390, r400);
    L8():
      r396 = dyn base48(<sym sleg>);
      goto L2(r389, r390, r396);
    };
    r405 = dyn cat[, , sep, fill]("---\nSignif. codes:  ", p49, "", p50);
    check L470() else D146();
  D123():
    deopt 494 [r328, l38, r326, okP12];
  D125():
    deopt 499 [signif_stars7];
  D141():
    deopt 571 [r360, r371];
  D144():
    deopt 586 [r377];
  D146():
    deopt 598 [r405];
  L426():
    dx59 = getTryDispatchBuiltinValue(dr54);
    goto L117(dx59);
  L427():
    okP13 = force? okP12;
    nc21 = ld nc;
    check L428() else D124();
  L429():
    signif_stars8 = force? signif_stars7;
    checkMissing(signif_stars8);
    c127 = `as.logical`(signif_stars8);
    if c127 then L430() else L118(c127);
  L463():
    goto L128(r360, r371);
  L467():
    st sleg = r377;
    goto L130();
  L470():
    goto L131();
  D124():
    deopt 495 [r328, l38, r326, okP13, nc21];
  L118(c129):
    st `signif.stars` = c129;
    signif_stars9 = ld `signif.stars`;
    check L440() else D129();
  L428():
    nc22 = force? nc21;
    ___9 = ldf `[<-` in base;
    r331 = dyn ___9(l38, r326, okP13, nc22);
    goto L117(r331);
  L430():
    sym41 = ldf any;
    base41 = ldf any in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L431() else L432();
  D129():
    deopt 514 [signif_stars9];
  L119(c132, r333):
    c138 = `as.logical`(r333);
    c139 = `&&`(c132, c138);
    goto L118(c139);
  L431():
    pv4 = ld pv;
    check L433() else D126();
  L432():
    r332 = dyn base41(<lang `<`(`[`(pv, okP), 0.1)>);
    goto L119(c127, r332);
  L440():
    signif_stars10 = force? signif_stars9;
    checkMissing(signif_stars10);
    c141 = `as.logical`(signif_stars10);
    if c141 then L441() else L121();
  D126():
    deopt 503 [c127, pv4];
  L121():
    goto L122(NULL);
  L122(r352):
    goto L123(r352);
  L433():
    pv5 = force? pv4;
    checkMissing(pv5);
    c133 = `is.object`(pv5);
    if c133 then L434() else L435(c127, pv5);
  L441():
    symnum = ldf symnum;
    check L442() else D130();
  D130():
    deopt 517 [];
  L120(c137, dx62):
    r335 = `<`(dx62, 0.1);
    any5 = ldf any in base;
    r336 = dyn any5(r335);
    check L438() else D128();
  L434():
    dr56 = tryDispatchBuiltin.1("[", pv5);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L436() else L435(c127, dr56);
  L435(c135, pv7):
    okP14 = ld okP;
    check L437() else D127();
  L442():
    p37 = prom<V +>{
      pv8 = ld pv;
      pv9 = force? pv8;
      checkMissing(pv9);
      return pv9;
    };
    p38 = prom<V +>{
      sym42 = ldf c;
      base42 = ldf c in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L1() else L2();
    L0(r339):
      return r339;
    L1():
      c142 = ldf c in base;
      r340 = dyn c142(0.0, 0.001, 0.01, 0.05, 0.1, 1.0);
      goto L0(r340);
    L2():
      r338 = dyn base42(0.0, 0.001, 0.01, 0.05, 0.1, 1.0);
      goto L0(r338);
    };
    p39 = prom<V +>{
      sym43 = ldf c;
      base43 = ldf c in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L1() else L2();
    L0(r343):
      return r343;
    L1():
      c143 = ldf c in base;
      r344 = dyn c143("***", "**", "*", ".", " ");
      goto L0(r344);
    L2():
      r342 = dyn base43("***", "**", "*", ".", " ");
      goto L0(r342);
    };
    r346 = dyn symnum[, corr, na, cutpoints, symbols](p37, FALSE, FALSE, p38, p39);
    check L443() else D131();
  D127():
    deopt 505 [c135, pv7, okP14];
  D128():
    deopt 511 [c137, r336];
  D131():
    deopt 527 [r346];
  L436():
    dx61 = getTryDispatchBuiltinValue(dr56);
    goto L120(c127, dx61);
  L437():
    okP15 = force? okP14;
    __17 = ldf `[` in base;
    r334 = dyn __17(pv7, okP15);
    goto L120(c135, r334);
  L438():
    goto L119(c137, r336);
  L443():
    st Signif = r346;
    cbind = ldf cbind;
    check L444() else D132();
  D132():
    deopt 530 [];
  L444():
    p40 = prom<V +>{
      Cf4 = ld Cf;
      Cf5 = force? Cf4;
      checkMissing(Cf5);
      return Cf5;
    };
    p42 = prom<V +>{
      format4 = ldf format;
      p41 = prom<V +>{
        Signif = ld Signif;
        Signif1 = force? Signif;
        checkMissing(Signif1);
        return Signif1;
      };
      r349 = dyn format4(p41);
      return r349;
    };
    r351 = dyn cbind(p40, p42);
    check L445() else D133();
  D133():
    deopt 533 [r351];
  L445():
    st Cf = r351;
    goto L122(r351);
  }
}