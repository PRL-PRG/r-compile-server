fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r5:V, reg HoltWinters:cls, reg co2:*, reg co3:V, reg p1:p(V +), reg r7:V, reg plot:cls, reg m:*, reg m1:V, reg p2:p(V +), reg r9:V, reg plot1:cls, reg fitted:cls, reg m2:*, reg m3:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg HoltWinters1:cls, reg AirPassengers:*, reg AirPassengers1:V, reg p5:p(V +), reg r15:V, reg plot2:cls, reg m4:*, reg m5:V, reg p6:p(V +), reg r17:V, reg uspop:*, reg uspop1:V, reg rnorm:cls, reg uspop2:*, reg uspop3:V, reg p7:p(V +), reg r19:V, reg r20:V, reg HoltWinters2:cls, reg x:*, reg x1:V, reg p8:p(V +), reg r22:V, reg plot3:cls, reg m6:*, reg m7:V, reg p9:p(V +), reg r24:V, reg HoltWinters3:cls, reg x2:*, reg x3:V, reg p10:p(V +), reg r26:V, reg lines:cls, reg fitted1:cls, reg m8:*, reg m9:V, reg p11:p(V +), reg r28:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg p12:p(V +), reg r33:V, reg options1:cls, reg od:*, reg od1:V, reg p13:p(V +), reg r35:V |
    mkenv;
    r = clos inner179560245;
    st HoltWinters = r;
    options = ldf options;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn options[digits](5.0);
    check L2() else D1();
  D1():
    deopt 7 [r1];
  L2():
    st od = r1;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    HoltWinters = ldf HoltWinters;
    check L7() else D4();
  L3():
    require = ldf require;
    check L5() else D2();
  L4():
    r2 = dyn base(<sym graphics>);
    goto L0();
  D2():
    deopt 11 [];
  D4():
    deopt 15 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r5 = dyn require(p);
    check L6() else D3();
  L7():
    p1 = prom<V +>{
      co2 = ld co2;
      co3 = force? co2;
      checkMissing(co3);
      return co3;
    };
    r7 = dyn HoltWinters(p1);
    check L8() else D5();
  D3():
    deopt 13 [r5];
  D5():
    deopt 17 [r7];
  L6():
    goto L0();
  L8():
    st m = r7;
    plot = ldf plot;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r9 = dyn plot(p2);
    check L10() else D7();
  D7():
    deopt 22 [r9];
  L10():
    plot1 = ldf plot;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p4 = prom<V +>{
      fitted = ldf fitted;
      p3 = prom<V +>{
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      r11 = dyn fitted(p3);
      return r11;
    };
    r13 = dyn plot1(p4);
    check L12() else D9();
  D9():
    deopt 26 [r13];
  L12():
    HoltWinters1 = ldf HoltWinters;
    check L13() else D10();
  D10():
    deopt 28 [];
  L13():
    p5 = prom<V +>{
      AirPassengers = ld AirPassengers;
      AirPassengers1 = force? AirPassengers;
      checkMissing(AirPassengers1);
      return AirPassengers1;
    };
    r15 = dyn HoltWinters1[, seasonal](p5, "mult");
    check L14() else D11();
  D11():
    deopt 32 [r15];
  L14():
    st m = r15;
    plot2 = ldf plot;
    check L15() else D12();
  D12():
    deopt 35 [];
  L15():
    p6 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r17 = dyn plot2(p6);
    check L16() else D13();
  D13():
    deopt 37 [r17];
  L16():
    uspop = ld uspop;
    check L17() else D14();
  D14():
    deopt 38 [uspop];
  L17():
    uspop1 = force? uspop;
    checkMissing(uspop1);
    rnorm = ldf rnorm;
    check L18() else D15();
  D15():
    deopt 40 [uspop1];
  L18():
    p7 = prom<V +>{
      uspop2 = ld uspop;
      uspop3 = force? uspop2;
      checkMissing(uspop3);
      return uspop3;
    };
    r19 = dyn rnorm[, sd](p7, 5.0);
    check L19() else D16();
  D16():
    deopt 44 [uspop1, r19];
  L19():
    r20 = `+`(uspop1, r19);
    st x = r20;
    HoltWinters2 = ldf HoltWinters;
    check L20() else D17();
  D17():
    deopt 48 [];
  L20():
    p8 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r22 = dyn HoltWinters2[, gamma](p8, FALSE);
    check L21() else D18();
  D18():
    deopt 52 [r22];
  L21():
    st m = r22;
    plot3 = ldf plot;
    check L22() else D19();
  D19():
    deopt 55 [];
  L22():
    p9 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r24 = dyn plot3(p9);
    check L23() else D20();
  D20():
    deopt 57 [r24];
  L23():
    HoltWinters3 = ldf HoltWinters;
    check L24() else D21();
  D21():
    deopt 59 [];
  L24():
    p10 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r26 = dyn HoltWinters3[, gamma, beta](p10, FALSE, FALSE);
    check L25() else D22();
  D22():
    deopt 65 [r26];
  L25():
    st m2 = r26;
    lines = ldf lines;
    check L26() else D23();
  D23():
    deopt 68 [];
  L26():
    p12 = prom<V +>{
      fitted1 = ldf fitted;
      p11 = prom<V +>{
        m8 = ld m2;
        m9 = force? m8;
        checkMissing(m9);
        return m9;
      };
      r28 = dyn fitted1(p11);
      c = `is.object`(r28);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r28);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r31 = dyn __(r28, <missing>, 1.0);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r33 = dyn lines[, col](p12, 3.0);
    check L27() else D24();
  D24():
    deopt 72 [r33];
  L27():
    options1 = ldf options;
    check L28() else D25();
  D25():
    deopt 74 [];
  L28():
    p13 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r35 = dyn options1(p13);
    check L29() else D26();
  D26():
    deopt 76 [r35];
  L29():
    popenv;
    return r35;
  }
}
fun inner179560245(x, alpha, beta, gamma, seasonal, `start.periods`, `l.start`, `b.start`, `s.start`, `optim.start`, `optim.control`) {
  (reg x:*, reg alpha:*, reg beta:*, reg gamma:*, reg seasonal:*, reg start_periods:*, reg l_start:*, reg b_start:*, reg s_start:*, reg optim_start:*, reg optim_control:*) -+> V { var x:*, var alpha:*, reg alpha_isMissing:L, reg alpha_orDefault:*, var beta:*, reg beta_isMissing:L, reg beta_orDefault:*, var gamma:*, reg gamma_isMissing:L, reg gamma_orDefault:*, var seasonal:*, reg seasonal_isMissing:L, reg seasonal_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `start.periods`:*, reg start_periods_isMissing:L, reg start_periods_orDefault:*, var `l.start`:*, reg l_start_isMissing:L, reg l_start_orDefault:*, var `b.start`:*, reg b_start_isMissing:L, reg b_start_orDefault:*, var `s.start`:*, reg s_start_isMissing:L, reg s_start_orDefault:*, var `optim.start`:*, reg optim_start_isMissing:L, reg optim_start_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var `optim.control`:*, reg optim_control_isMissing:L, reg optim_control_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg list:cls, reg r10:V, reg p2:p(V +), reg as_ts:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg r13:V, reg match_arg:cls, reg seasonal1:*, reg seasonal2:V, reg p4:p(V +), reg r15:V, reg frequency:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg alpha1:*, reg alpha2:V, reg c2:V, reg r20:V, reg c3:L, reg c5:V, reg alpha3:*, reg alpha4:V, reg r21:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg alpha5:*, reg alpha6:V, reg beta1:*, reg beta2:V, reg gamma1:*, reg gamma2:V, reg c10:cls, reg r28:V, reg c11:V, reg r29:V, reg c12:L, reg c14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c17:L, reg r31:V, reg abg:*, reg abg1:V, reg r32:V, reg abg2:*, reg abg3:V, reg r33:V, reg r34:V, reg any:cls, reg r35:V, reg c18:L, reg c19:V, reg c21:L, reg stop1:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg gamma3:*, reg gamma4:V, reg c22:V, reg c23:L, reg c24:V, reg gamma5:*, reg gamma6:V, reg r40:V, reg c26:L, reg c27:V, reg c29:L, reg seasonal3:*, reg seasonal4:V, reg r41:V, reg c30:L, reg c32:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg c35:L, reg r43:V, reg x5:*, reg x6:V, reg r44:V, reg any1:cls, reg r45:V, reg c36:L, reg c37:V, reg c39:L, reg stop2:cls, reg r46:V, reg start_periods1:*, reg start_periods2:V, reg r48:V, reg c40:L, reg stop3:cls, reg r49:V, reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg gamma7:*, reg gamma8:V, reg c41:V, reg r54:V, reg c42:L, reg c44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg c47:L, reg r56:V, reg gamma9:*, reg gamma10:V, reg c48:L, reg c49:L, reg c50:V, reg c52:L, reg c54:V, reg gamma11:*, reg gamma12:V, reg r57:V, reg c55:L, reg c56:V, reg c58:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg beta3:*, reg beta4:V, reg c59:V, reg r60:V, reg c60:L, reg c62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg c65:L, reg r62:V, reg beta5:*, reg beta6:V, reg c66:L, reg c67:L, reg c68:V, reg c70:L, reg c72:V, reg beta7:*, reg beta8:V, reg r63:V, reg c73:L, reg c74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg l_start1:*, reg l_start2:V, reg c76:V, reg c77:L, reg expsmooth:*, reg expsmooth1:V, reg c78:L, reg x7:*, reg x8:V, reg c79:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r66:V, reg dx2:V, reg x11:*, reg x12:V, reg c80:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx3:V, reg __1:cls, reg r67:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg b_start1:*, reg b_start2:V, reg c81:V, reg c82:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r70:V, reg r71:V, reg beta9:*, reg beta10:V, reg c83:V, reg c84:L, reg c85:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r72:V, reg c89:L, reg r73:V, reg beta11:*, reg beta12:V, reg c90:L, reg r74:V, reg c91:L, reg c92:V, reg c94:L, reg c95:V, reg beta13:*, reg beta14:V, reg c97:L, reg c98:V, reg c100:L, reg x15:*, reg x16:V, reg c101:L, reg x18:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r75:V, reg x19:*, reg x20:V, reg c102:L, reg dx8:V, reg x22:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg dx12:V, reg __3:cls, reg r76:V, reg r77:V, reg r78:V, reg expsmooth2:*, reg expsmooth3:V, reg r80:V, reg f:*, reg f1:V, reg r82:V, reg start_periods3:*, reg start_periods4:V, reg f2:*, reg f3:V, reg r83:V, reg decompose:cls, reg ts:cls, reg x23:*, reg x24:V, reg c103:L, reg x26:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg wind:*, reg wind1:V, reg r84:V, reg __4:cls, reg r85:V, reg p6:p(V +), reg start:cls, reg x27:*, reg x28:V, reg p7:p(V +), reg r88:V, reg p8:p(V +), reg f4:*, reg f5:V, reg p9:p(V +), reg r91:V, reg p10:p(V +), reg seasonal5:*, reg seasonal6:V, reg p11:p(V +), reg r94:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r95:V, reg r96:V, reg l_start3:*, reg l_start4:V, reg c104:V, reg c105:L, reg c106:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r97:V, reg c110:L, reg r98:V, reg b_start3:*, reg b_start4:V, reg c111:V, reg c112:L, reg c113:V, reg c115:L, reg na_omit:cls, reg st:*, reg st1:V, reg c116:L, reg st3:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg r99:V, reg p12:p(V +), reg r101:V, reg coef:cls, reg _lm_fit:cls, reg cbind:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r102:V, reg r103:V, reg dat:*, reg dat1:V, reg r104:I, reg p13:p(V +), reg r106:V, reg p14:p(V +), reg dat2:*, reg dat3:V, reg p15:p(V +), reg r109:V, reg p16:p(V +), reg r111:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r112:V, reg r113:V, reg l_start5:*, reg l_start6:V, reg c117:V, reg c118:L, reg cf:*, reg cf1:V, reg c119:L, reg cf3:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg __5:cls, reg r114:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r115:V, reg r116:V, reg b_start5:*, reg b_start6:V, reg c120:V, reg c121:L, reg cf4:*, reg cf5:V, reg c122:L, reg cf7:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg __6:cls, reg r117:V, reg dx22:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r118:V, reg r119:V, reg s_start1:*, reg s_start2:V, reg c123:V, reg c124:L, reg st4:*, reg st5:V, reg c125:L, reg st7:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg r120:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r121:V, reg r122:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r123:V, reg r124:V, reg x29:*, reg x30:V, reg length:cls, reg r125:V, reg as_integer:cls, reg r126:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r127:V, reg r128:V, reg lenx:*, reg lenx1:V, reg is_na:cls, reg r129:V, reg c126:L, reg stop4:cls, reg r130:V, reg lenx2:*, reg lenx3:V, reg start_time:*, reg start_time1:V, reg r132:V, reg r133:V, reg r134:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r135:V, reg r136:V, reg gamma13:*, reg gamma14:V, reg c127:V, reg c128:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r137:V, reg r138:V, reg alpha7:*, reg alpha8:V, reg c129:V, reg c130:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r139:V, reg r140:V, reg beta15:*, reg beta16:V, reg c131:V, reg c132:L, reg r141:cls, reg optim:cls, reg optim_start1:*, reg optim_start2:V, reg p17:p(V +), reg error:*, reg error1:V, reg p18:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r144:V, reg r145:V, reg c133:cls, reg r146:V, reg p19:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r148:V, reg r149:V, reg c134:cls, reg r150:V, reg p20:p(V +), reg optim_control1:*, reg optim_control2:V, reg p21:p(V +), reg r153:V, reg sol:*, reg sol1:V, reg c135:L, reg sol3:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg r154:V, reg c136:L, reg c137:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r155:V, reg c141:L, reg r156:V, reg sol4:*, reg sol5:V, reg c142:L, reg c144:L, reg sol7:V, reg dr20:V, reg dc10:L, reg dx28:V, reg c146:L, reg dx29:V, reg r157:V, reg r158:V, reg sol8:*, reg sol9:V, reg c147:L, reg c149:L, reg r160:V, reg sol11:V, reg dr22:V, reg dc11:L, reg dx30:V, reg c151:L, reg r162:V, reg dx31:V, reg r163:V, reg r164:V, reg r165:V, reg any2:cls, reg r166:V, reg c152:L, reg c153:V, reg c155:L, reg sol12:*, reg sol13:V, reg c156:L, reg sol15:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r167:V, reg r168:V, reg c157:L, reg warning:cls, reg gettextf:cls, reg sol16:*, reg sol17:V, reg c158:L, reg sol19:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r169:V, reg p22:p(V +), reg r171:V, reg p23:p(V +), reg r173:V, reg r174:V, reg stop5:cls, reg r175:V, reg sol20:*, reg sol21:V, reg c159:L, reg sol23:V, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg r177:V, reg c160:L, reg dx39:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg __7:cls, reg r178:V, reg sol24:*, reg sol25:V, reg c161:L, reg sol27:V, reg dr32:V, reg dc16:L, reg dx42:V, reg dx43:V, reg r179:V, reg c162:L, reg dx45:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg __8:cls, reg r180:V, reg sol28:*, reg sol29:V, reg c163:L, reg sol31:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg r181:V, reg c164:L, reg dx51:V, reg dr38:V, reg dc19:L, reg dx52:V, reg dx53:V, reg __9:cls, reg r182:V, reg dx54:V, reg r183:cls, reg optim1:cls, reg sym32:cls, reg base32:cls, reg guard32:L, reg r184:V, reg r185:V, reg optim_start3:*, reg optim_start4:V, reg c165:L, reg optim_start6:V, reg dr40:V, reg dc20:L, reg dx55:V, reg dx56:V, reg __10:cls, reg r186:V, reg optim_start7:*, reg optim_start8:V, reg c166:L, reg optim_start10:V, reg dr42:V, reg dc21:L, reg dx57:V, reg dx58:V, reg __11:cls, reg r187:V, reg c167:cls, reg r188:V, reg p24:p(V +), reg error2:*, reg error3:V, reg p25:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r191:V, reg r192:V, reg c168:cls, reg r193:V, reg p26:p(V +), reg sym34:cls, reg base34:cls, reg guard34:L, reg r195:V, reg r196:V, reg c169:cls, reg r197:V, reg p27:p(V +), reg optim_control3:*, reg optim_control4:V, reg p28:p(V +), reg r200:V, reg sol32:*, reg sol33:V, reg c170:L, reg sol35:V, reg dr44:V, reg dc22:L, reg dx59:V, reg dx60:V, reg r201:V, reg c171:L, reg c172:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r202:V, reg c176:L, reg r203:V, reg sol36:*, reg sol37:V, reg c177:L, reg c179:L, reg sol39:V, reg dr46:V, reg dc23:L, reg dx61:V, reg c181:L, reg dx62:V, reg r204:V, reg r205:V, reg sol40:*, reg sol41:V, reg c182:L, reg c184:L, reg r207:V, reg sol43:V, reg dr48:V, reg dc24:L, reg dx63:V, reg c186:L, reg r209:V, reg dx64:V, reg r210:V, reg r211:V, reg r212:V, reg any3:cls, reg r213:V, reg c187:L, reg c188:V, reg c190:L, reg sol44:*, reg sol45:V, reg c191:L, reg sol47:V, reg dr50:V, reg dc25:L, reg dx65:V, reg dx66:V, reg r214:V, reg r215:V, reg c192:L, reg warning1:cls, reg gettextf1:cls, reg sol48:*, reg sol49:V, reg c193:L, reg sol51:V, reg dr52:V, reg dc26:L, reg dx67:V, reg dx68:V, reg r216:V, reg p29:p(V +), reg r218:V, reg p30:p(V +), reg r220:V, reg r221:V, reg stop6:cls, reg r222:V, reg sol52:*, reg sol53:V, reg c194:L, reg sol55:V, reg dr54:V, reg dc27:L, reg dx69:V, reg dx70:V, reg r224:V, reg c195:L, reg dx72:V, reg dr56:V, reg dc28:L, reg dx73:V, reg dx74:V, reg __12:cls, reg r225:V, reg sol56:*, reg sol57:V, reg c196:L, reg sol59:V, reg dr58:V, reg dc29:L, reg dx75:V, reg dx76:V, reg r226:V, reg c197:L, reg dx78:V, reg dr60:V, reg dc30:L, reg dx79:V, reg dx80:V, reg __13:cls, reg r227:V, reg dx81:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r228:V, reg r229:V, reg beta17:*, reg beta18:V, reg c198:V, reg c199:L, reg r230:cls, reg optim2:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r231:V, reg r232:V, reg optim_start11:*, reg optim_start12:V, reg c200:L, reg optim_start14:V, reg dr62:V, reg dc31:L, reg dx82:V, reg dx83:V, reg __14:cls, reg r233:V, reg optim_start15:*, reg optim_start16:V, reg c201:L, reg optim_start18:V, reg dr64:V, reg dc32:L, reg dx84:V, reg dx85:V, reg __15:cls, reg r234:V, reg c202:cls, reg r235:V, reg p31:p(V +), reg error4:*, reg error5:V, reg p32:p(V +), reg sym38:cls, reg base38:cls, reg guard38:L, reg r238:V, reg r239:V, reg c203:cls, reg r240:V, reg p33:p(V +), reg sym39:cls, reg base39:cls, reg guard39:L, reg r242:V, reg r243:V, reg c204:cls, reg r244:V, reg p34:p(V +), reg optim_control5:*, reg optim_control6:V, reg p35:p(V +), reg r247:V, reg sol60:*, reg sol61:V, reg c205:L, reg sol63:V, reg dr66:V, reg dc33:L, reg dx86:V, reg dx87:V, reg r248:V, reg c206:L, reg c207:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r249:V, reg c211:L, reg r250:V, reg sol64:*, reg sol65:V, reg c212:L, reg c214:L, reg sol67:V, reg dr68:V, reg dc34:L, reg dx88:V, reg c216:L, reg dx89:V, reg r251:V, reg r252:V, reg sol68:*, reg sol69:V, reg c217:L, reg c219:L, reg r254:V, reg sol71:V, reg dr70:V, reg dc35:L, reg dx90:V, reg c221:L, reg r256:V, reg dx91:V, reg r257:V, reg r258:V, reg r259:V, reg any4:cls, reg r260:V, reg c222:L, reg c223:V, reg c225:L, reg sol72:*, reg sol73:V, reg c226:L, reg sol75:V, reg dr72:V, reg dc36:L, reg dx92:V, reg dx93:V, reg r261:V, reg r262:V, reg c227:L, reg warning2:cls, reg gettextf2:cls, reg sol76:*, reg sol77:V, reg c228:L, reg sol79:V, reg dr74:V, reg dc37:L, reg dx94:V, reg dx95:V, reg r263:V, reg p36:p(V +), reg r265:V, reg p37:p(V +), reg r267:V, reg r268:V, reg stop7:cls, reg r269:V, reg sol80:*, reg sol81:V, reg c229:L, reg sol83:V, reg dr76:V, reg dc38:L, reg dx96:V, reg dx97:V, reg r271:V, reg c230:L, reg dx99:V, reg dr78:V, reg dc39:L, reg dx100:V, reg dx101:V, reg __16:cls, reg r272:V, reg sol84:*, reg sol85:V, reg c231:L, reg sol87:V, reg dr80:V, reg dc40:L, reg dx102:V, reg dx103:V, reg r273:V, reg c232:L, reg dx105:V, reg dr82:V, reg dc41:L, reg dx106:V, reg dx107:V, reg __17:cls, reg r274:V, reg r275:cls, reg optimize:cls, reg error6:*, reg error7:V, reg p38:p(V +), reg r277:V, reg c233:L, reg r279:V, reg dr84:V, reg dc42:L, reg dx108:V, reg dx109:V, reg r280:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r281:V, reg r282:V, reg alpha9:*, reg alpha10:V, reg c234:V, reg c235:L, reg sym42:cls, reg base42:cls, reg guard42:L, reg r283:V, reg r284:V, reg beta19:*, reg beta20:V, reg c236:V, reg c237:L, reg r285:cls, reg optim3:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r286:V, reg r287:V, reg optim_start19:*, reg optim_start20:V, reg c238:L, reg optim_start22:V, reg dr86:V, reg dc43:L, reg dx111:V, reg dx112:V, reg __18:cls, reg r288:V, reg optim_start23:*, reg optim_start24:V, reg c239:L, reg optim_start26:V, reg dr88:V, reg dc44:L, reg dx113:V, reg dx114:V, reg __19:cls, reg r289:V, reg c240:cls, reg r290:V, reg p39:p(V +), reg error8:*, reg error9:V, reg p40:p(V +), reg sym44:cls, reg base44:cls, reg guard44:L, reg r293:V, reg r294:V, reg c241:cls, reg r295:V, reg p41:p(V +), reg sym45:cls, reg base45:cls, reg guard45:L, reg r297:V, reg r298:V, reg c242:cls, reg r299:V, reg p42:p(V +), reg optim_control7:*, reg optim_control8:V, reg p43:p(V +), reg r302:V, reg sol88:*, reg sol89:V, reg c243:L, reg sol91:V, reg dr90:V, reg dc45:L, reg dx115:V, reg dx116:V, reg r303:V, reg c244:L, reg c245:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r304:V, reg c249:L, reg r305:V, reg sol92:*, reg sol93:V, reg c250:L, reg c252:L, reg sol95:V, reg dr92:V, reg dc46:L, reg dx117:V, reg c254:L, reg dx118:V, reg r306:V, reg r307:V, reg sol96:*, reg sol97:V, reg c255:L, reg c257:L, reg r309:V, reg sol99:V, reg dr94:V, reg dc47:L, reg dx119:V, reg c259:L, reg r311:V, reg dx120:V, reg r312:V, reg r313:V, reg r314:V, reg any5:cls, reg r315:V, reg c260:L, reg c261:V, reg c263:L, reg sol100:*, reg sol101:V, reg c264:L, reg sol103:V, reg dr96:V, reg dc48:L, reg dx121:V, reg dx122:V, reg r316:V, reg r317:V, reg c265:L, reg warning3:cls, reg gettextf3:cls, reg sol104:*, reg sol105:V, reg c266:L, reg sol107:V, reg dr98:V, reg dc49:L, reg dx123:V, reg dx124:V, reg r318:V, reg p44:p(V +), reg r320:V, reg p45:p(V +), reg r322:V, reg r323:V, reg stop8:cls, reg r324:V, reg sol108:*, reg sol109:V, reg c267:L, reg sol111:V, reg dr100:V, reg dc50:L, reg dx125:V, reg dx126:V, reg r326:V, reg c268:L, reg dx128:V, reg dr102:V, reg dc51:L, reg dx129:V, reg dx130:V, reg __20:cls, reg r327:V, reg sol112:*, reg sol113:V, reg c269:L, reg sol115:V, reg dr104:V, reg dc52:L, reg dx131:V, reg dx132:V, reg r328:V, reg c270:L, reg dx134:V, reg dr106:V, reg dc53:L, reg dx135:V, reg dx136:V, reg __21:cls, reg r329:V, reg dx137:V, reg r330:cls, reg optimize1:cls, reg error10:*, reg error11:V, reg p46:p(V +), reg r332:V, reg c271:L, reg r334:V, reg dr108:V, reg dc54:L, reg dx138:V, reg dx139:V, reg r335:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r336:V, reg r337:V, reg beta21:*, reg beta22:V, reg c272:V, reg c273:L, reg r338:cls, reg optimize2:cls, reg error12:*, reg error13:V, reg p47:p(V +), reg r340:V, reg c274:L, reg r342:V, reg dr110:V, reg dc55:L, reg dx140:V, reg dx141:V, reg r343:V, reg hw:cls, reg alpha11:*, reg alpha12:V, reg p48:p(V +), reg beta23:*, reg beta24:V, reg p49:p(V +), reg gamma15:*, reg gamma16:V, reg p50:p(V +), reg r347:V, reg ts1:cls, reg cbind1:cls, reg final_fit:*, reg final_fit1:V, reg c275:L, reg final_fit3:V, reg dr112:V, reg dc56:L, reg dx142:V, reg dx143:V, reg r348:V, reg c276:L, reg dx145:V, reg dr114:V, reg dc57:L, reg dx146:V, reg dx147:V, reg len:*, reg len1:V, reg r349:V, reg r350:V, reg __22:cls, reg r351:V, reg p51:p(V +), reg final_fit4:*, reg final_fit5:V, reg c277:L, reg final_fit7:V, reg dr116:V, reg dc58:L, reg dx148:V, reg dx149:V, reg r353:V, reg c278:L, reg dx151:V, reg dr118:V, reg dc59:L, reg dx152:V, reg dx153:V, reg len2:*, reg len3:V, reg r354:V, reg r355:V, reg __23:cls, reg r356:V, reg p52:p(V +), reg sym48:cls, reg base48:cls, reg guard48:L, reg r358:V, reg r359:V, reg beta25:*, reg beta26:V, reg c279:L, reg r360:V, reg c280:L, reg c281:V, reg beta27:*, reg beta28:V, reg c283:L, reg c284:V, reg c286:L, reg final_fit8:*, reg final_fit9:V, reg c287:L, reg final_fit11:V, reg dr120:V, reg dc60:L, reg dx154:V, reg dx155:V, reg r361:V, reg c288:L, reg dx157:V, reg dr122:V, reg dc61:L, reg dx158:V, reg dx159:V, reg len4:*, reg len5:V, reg r362:V, reg r363:V, reg __24:cls, reg r364:V, reg p53:p(V +), reg sym49:cls, reg base49:cls, reg guard49:L, reg r366:V, reg r367:V, reg gamma17:*, reg gamma18:V, reg c289:L, reg r368:V, reg c290:L, reg c291:V, reg gamma19:*, reg gamma20:V, reg c293:L, reg c294:V, reg c296:L, reg final_fit12:*, reg final_fit13:V, reg c297:L, reg final_fit15:V, reg dr124:V, reg dc62:L, reg dx160:V, reg dx161:V, reg r369:V, reg c298:L, reg dx163:V, reg dr126:V, reg dc63:L, reg dx164:V, reg dx165:V, reg len6:*, reg len7:V, reg r370:V, reg __25:cls, reg r371:V, reg p54:p(V +), reg r373:V, reg p55:p(V +), reg start1:cls, reg lag:cls, reg x31:*, reg x32:V, reg p56:p(V +), reg start_time2:*, reg start_time3:V, reg r376:V, reg p57:p(V +), reg r378:V, reg p58:p(V +), reg r380:V, reg p59:p(V +), reg frequency1:cls, reg x33:*, reg x34:V, reg p60:p(V +), reg r383:V, reg p61:p(V +), reg r385:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r386:V, reg r387:V, reg beta29:*, reg beta30:V, reg c299:L, reg r388:V, reg c300:L, reg c301:V, reg beta31:*, reg beta32:V, reg c303:L, reg c304:V, reg c306:L, reg fitted:*, reg fitted1:V, reg c307:L, reg dr128:V, reg dc64:L, reg dx166:V, reg dx167:V, reg __26:cls, reg r389:V, reg fitted4:*, reg fitted5:V, reg c308:L, reg dx169:V, reg dr130:V, reg dc65:L, reg dx171:V, reg dx172:V, reg dx173:V, reg __27:cls, reg r390:V, reg r391:V, reg l:*, reg c309:L, reg r393:V, reg dr132:V, reg dc66:L, reg dx174:V, reg r395:V, reg dx175:V, reg ___:cls, reg r396:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r398:V, reg r399:V, reg gamma21:*, reg gamma22:V, reg c310:L, reg r400:V, reg c311:L, reg c312:V, reg gamma23:*, reg gamma24:V, reg c314:L, reg c315:V, reg c317:L, reg seasonal7:*, reg seasonal8:V, reg r401:V, reg c318:L, reg fitted8:*, reg fitted9:V, reg c319:L, reg dr134:V, reg dc67:L, reg dx176:V, reg dx177:V, reg __28:cls, reg r402:V, reg fitted12:*, reg fitted13:V, reg c320:L, reg dx179:V, reg dr136:V, reg dc68:L, reg dx181:V, reg dx182:V, reg dx183:V, reg __29:cls, reg r403:V, reg r404:V, reg r405:V, reg fitted16:*, reg fitted17:V, reg c321:L, reg dr138:V, reg dc69:L, reg dx184:V, reg dx185:V, reg __30:cls, reg r406:V, reg fitted20:*, reg fitted21:V, reg c322:L, reg dx187:V, reg dr140:V, reg dc70:L, reg dx189:V, reg dx190:V, reg dx191:V, reg __31:cls, reg r407:V, reg r408:V, reg l3:*, reg c323:L, reg r410:V, reg dr142:V, reg dc71:L, reg dx192:V, reg r412:V, reg dx193:V, reg ___1:cls, reg r413:V, reg structure:cls, reg sym52:cls, reg base52:cls, reg guard52:L, reg r415:V, reg r416:V, reg fitted24:*, reg fitted25:V, reg x35:*, reg x36:V, reg alpha13:*, reg alpha14:V, reg beta33:*, reg beta34:V, reg gamma25:*, reg gamma26:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r417:V, reg r418:V, reg final_fit16:*, reg final_fit17:V, reg c324:L, reg final_fit19:V, reg dr144:V, reg dc72:L, reg dx194:V, reg dx195:V, reg r419:V, reg c325:L, reg dx197:V, reg dr146:V, reg dc73:L, reg dx198:V, reg dx199:V, reg len8:*, reg len9:V, reg r420:V, reg __32:cls, reg r421:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r422:V, reg r423:V, reg beta35:*, reg beta36:V, reg c326:L, reg r424:V, reg c327:L, reg c328:V, reg beta37:*, reg beta38:V, reg c330:L, reg c331:V, reg c333:L, reg final_fit20:*, reg final_fit21:V, reg c334:L, reg final_fit23:V, reg dr148:V, reg dc74:L, reg dx200:V, reg dx201:V, reg r425:V, reg c335:L, reg dx203:V, reg dr150:V, reg dc75:L, reg dx204:V, reg dx205:V, reg len10:*, reg len11:V, reg r426:V, reg __33:cls, reg r427:V, reg dx206:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r428:V, reg r429:V, reg gamma27:*, reg gamma28:V, reg c336:L, reg r430:V, reg c337:L, reg c338:V, reg gamma29:*, reg gamma30:V, reg c340:L, reg c341:V, reg c343:L, reg final_fit24:*, reg final_fit25:V, reg c344:L, reg final_fit27:V, reg dr152:V, reg dc76:L, reg dx207:V, reg dx208:V, reg r431:V, reg c345:L, reg dx210:V, reg dr154:V, reg dc77:L, reg dx211:V, reg dx212:V, reg len12:*, reg len13:V, reg f6:*, reg f7:V, reg r432:V, reg r433:V, reg __34:cls, reg r434:V, reg dx213:V, reg c346:cls, reg r435:V, reg seasonal9:*, reg seasonal10:V, reg final_fit28:*, reg final_fit29:V, reg c347:L, reg final_fit31:V, reg dr156:V, reg dc78:L, reg dx214:V, reg dx215:V, reg r436:V, reg match_call:cls, reg r437:V, reg list1:cls, reg r438:V, reg p62:p(V +), reg r440:V |
    mkenv;
    st x = x;
    alpha_isMissing = missing.0(alpha);
    if alpha_isMissing then L0(NULL) else L0(alpha);
  L0(alpha_orDefault):
    st alpha = alpha_orDefault;
    beta_isMissing = missing.0(beta);
    if beta_isMissing then L1(NULL) else L1(beta);
  L1(beta_orDefault):
    st beta = beta_orDefault;
    gamma_isMissing = missing.0(gamma);
    if gamma_isMissing then L2(NULL) else L2(gamma);
  L2(gamma_orDefault):
    st gamma = gamma_orDefault;
    seasonal_isMissing = missing.0(seasonal);
    if seasonal_isMissing then L3() else L4(seasonal);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("additive", "multiplicative");
      goto L0(r2);
    L2():
      r = dyn base("additive", "multiplicative");
      goto L0(r);
    };
    goto L4(p);
  L4(seasonal_orDefault):
    st seasonal = seasonal_orDefault;
    start_periods_isMissing = missing.0(start_periods);
    if start_periods_isMissing then L5(2.0) else L5(start_periods);
  L5(start_periods_orDefault):
    st `start.periods` = start_periods_orDefault;
    l_start_isMissing = missing.0(l_start);
    if l_start_isMissing then L6(NULL) else L6(l_start);
  L6(l_start_orDefault):
    st `l.start` = l_start_orDefault;
    b_start_isMissing = missing.0(b_start);
    if b_start_isMissing then L7(NULL) else L7(b_start);
  L7(b_start_orDefault):
    st `b.start` = b_start_orDefault;
    s_start_isMissing = missing.0(s_start);
    if s_start_isMissing then L8(NULL) else L8(s_start);
  L8(s_start_orDefault):
    st `s.start` = s_start_orDefault;
    optim_start_isMissing = missing.0(optim_start);
    if optim_start_isMissing then L9() else L10(optim_start);
  L9():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1(0.3, 0.1, 0.1);
      goto L0(r6);
    L2():
      r4 = dyn base1[alpha, beta, gamma](0.3, 0.1, 0.1);
      goto L0(r4);
    };
    goto L10(p1);
  L10(optim_start_orDefault):
    st `optim.start` = optim_start_orDefault;
    optim_control_isMissing = missing.0(optim_control);
    if optim_control_isMissing then L11() else L12(optim_control);
  L11():
    p2 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      list = ldf list in base;
      r10 = dyn list();
      goto L0(r10);
    L2():
      r8 = dyn base2();
      goto L0(r8);
    };
    goto L12(p2);
  L12(optim_control_orDefault):
    st `optim.control` = optim_control_orDefault;
    as_ts = ldf `as.ts`;
    check L149() else D0();
  D0():
    deopt 1 [];
  L149():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r13 = dyn as_ts(p3);
    check L150() else D1();
  D1():
    deopt 3 [r13];
  L150():
    st x = r13;
    match_arg = ldf `match.arg`;
    check L151() else D2();
  D2():
    deopt 6 [];
  L151():
    p4 = prom<V +>{
      seasonal1 = ld seasonal;
      seasonal2 = force? seasonal1;
      checkMissing(seasonal2);
      return seasonal2;
    };
    r15 = dyn match_arg(p4);
    check L152() else D3();
  D3():
    deopt 8 [r15];
  L152():
    st seasonal = r15;
    frequency = ldf frequency;
    check L153() else D4();
  D4():
    deopt 11 [];
  L153():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r17 = dyn frequency(p5);
    check L154() else D5();
  D5():
    deopt 13 [r17];
  L154():
    st f = r17;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L155() else L156();
  L13(r19):
    r20 = `!`(r19);
    c3 = `as.logical`(r20);
    if c3 then L158() else L14(c3);
  L155():
    alpha1 = ld alpha;
    check L157() else D6();
  L156():
    r18 = dyn base3(<sym alpha>);
    goto L13(r18);
  D6():
    deopt 16 [alpha1];
  L14(c5):
    c9 = `as.logical`(c5);
    if c9 then L161() else L15();
  L157():
    alpha2 = force? alpha1;
    checkMissing(alpha2);
    c2 = `==`(alpha2, NULL);
    goto L13(c2);
  L158():
    alpha3 = ld alpha;
    check L159() else D7();
  D7():
    deopt 20 [c3, alpha3];
  L15():
    goto L16();
  L16():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L165() else L166();
  L159():
    alpha4 = force? alpha3;
    checkMissing(alpha4);
    r21 = `==`(alpha4, 0.0);
    c6 = `as.logical`(r21);
    c7 = `&&`(c3, c6);
    goto L14(c7);
  L161():
    stop = ldf stop;
    check L162() else D8();
  D8():
    deopt 26 [];
  L17(r25):
    r29 = `!`(r25);
    c12 = `as.logical`(r29);
    if c12 then L173() else L19(c12);
  L162():
    r22 = dyn stop("cannot fit models without level ('alpha' must not be 0 or FALSE)");
    check L163() else D9();
  L165():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L167() else L168();
  L166():
    r24 = dyn base4(<lang `<-`(abg, c(alpha, beta, gamma))>);
    goto L17(r24);
  D9():
    deopt 28 [r22];
  L18(r27):
    st abg = r27;
    c11 = `==`(r27, NULL);
    goto L17(c11);
  L19(c14):
    c21 = `as.logical`(c14);
    if c21 then L180() else L21();
  L163():
    goto L16();
  L167():
    alpha5 = ld alpha;
    check L169() else D10();
  L168():
    r26 = dyn base5(<sym alpha>, <sym beta>, <sym gamma>);
    goto L18(r26);
  L173():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L174() else L175();
  D10():
    deopt 34 [alpha5];
  L20(c17, r31):
    c18 = `as.logical`(r31);
    c19 = `&&`(c17, c18);
    goto L19(c19);
  L21():
    goto L22();
  L22():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L184() else L185();
  L169():
    alpha6 = force? alpha5;
    checkMissing(alpha6);
    beta1 = ld beta;
    check L170() else D11();
  L174():
    abg = ld abg;
    check L176() else D14();
  L175():
    r30 = dyn base6(<lang `|`(`<`(abg, 0.0), `>`(abg, 1.0))>);
    goto L20(c12, r30);
  L180():
    stop1 = ldf stop;
    check L181() else D17();
  D11():
    deopt 36 [beta1];
  D14():
    deopt 47 [c12, abg];
  D17():
    deopt 59 [];
  L23(r39):
    c23 = `as.logical`(r39);
    if c23 then L24(c23) else L187();
  L170():
    beta2 = force? beta1;
    checkMissing(beta2);
    gamma1 = ld gamma;
    check L171() else D12();
  L176():
    abg1 = force? abg;
    checkMissing(abg1);
    r32 = `<`(abg1, 0.0);
    abg2 = ld abg;
    check L177() else D15();
  L181():
    r36 = dyn stop1("'alpha', 'beta' and 'gamma' must be within the unit interval");
    check L182() else D18();
  L184():
    gamma3 = ld gamma;
    check L186() else D19();
  L185():
    r38 = dyn base7(<sym gamma>);
    goto L23(r38);
  D12():
    deopt 38 [gamma1];
  D15():
    deopt 50 [c12, r32, abg2];
  D18():
    deopt 61 [r36];
  D19():
    deopt 65 [gamma3];
  L24(c24):
    c29 = `as.logical`(c24);
    if c29 then L190() else L25();
  L171():
    gamma2 = force? gamma1;
    checkMissing(gamma2);
    c10 = ldf c in base;
    r28 = dyn c10(alpha6, beta2, gamma2);
    check L172() else D13();
  L177():
    abg3 = force? abg2;
    checkMissing(abg3);
    r33 = `>`(abg3, 1.0);
    r34 = `||`(r32, r33);
    any = ldf any in base;
    r35 = dyn any(r34);
    check L178() else D16();
  L182():
    goto L22();
  L186():
    gamma4 = force? gamma3;
    checkMissing(gamma4);
    c22 = `==`(gamma4, NULL);
    goto L23(c22);
  L187():
    gamma5 = ld gamma;
    check L188() else D20();
  D13():
    deopt 41 [r28];
  D16():
    deopt 56 [c12, r35];
  D20():
    deopt 68 [c23, gamma5];
  L25():
    goto L32();
  L32():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L208() else L209();
  L172():
    goto L18(r28);
  L178():
    goto L20(c12, r35);
  L188():
    gamma6 = force? gamma5;
    checkMissing(gamma6);
    r40 = `>`(gamma6, 0.0);
    c26 = `as.logical`(r40);
    c27 = `||`(c23, c26);
    goto L24(c27);
  L190():
    seasonal3 = ld seasonal;
    check L191() else D21();
  D21():
    deopt 73 [seasonal3];
  L33(r53):
    r54 = `!`(r53);
    c42 = `as.logical`(r54);
    if c42 then L211() else L34(c42);
  L191():
    seasonal4 = force? seasonal3;
    checkMissing(seasonal4);
    r41 = `==`(seasonal4, "multiplicative");
    c30 = `as.logical`(r41);
    if c30 then L192() else L26(c30);
  L208():
    gamma7 = ld gamma;
    check L210() else D29();
  L209():
    r52 = dyn base9(<sym gamma>);
    goto L33(r52);
  D29():
    deopt 105 [gamma7];
  L26(c32):
    c39 = `as.logical`(c32);
    if c39 then L198() else L28();
  L34(c44):
    c52 = `as.logical`(c44);
    if c52 then L216() else L36(c52);
  L192():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L193() else L194();
  L210():
    gamma8 = force? gamma7;
    checkMissing(gamma8);
    c41 = `==`(gamma8, NULL);
    goto L33(c41);
  L211():
    sym10 = ldf `is.logical`;
    base10 = ldf `is.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L212() else L213();
  L27(c35, r43):
    c36 = `as.logical`(r43);
    c37 = `&&`(c35, c36);
    goto L26(c37);
  L28():
    goto L29();
  L29():
    start_periods1 = ld `start.periods`;
    check L202() else D26();
  L35(c47, r56):
    c49 = `as.logical`(r56);
    c50 = `&&`(c47, c49);
    goto L34(c50);
  L36(c54):
    c58 = `as.logical`(c54);
    if c58 then L219() else L37();
  L193():
    x5 = ld x;
    check L195() else D22();
  L194():
    r42 = dyn base8(<lang `==`(x, 0.0)>);
    goto L27(c30, r42);
  L198():
    stop2 = ldf stop;
    check L199() else D24();
  L212():
    gamma9 = ld gamma;
    check L214() else D30();
  L213():
    r55 = dyn base10(<sym gamma>);
    goto L35(c42, r55);
  L216():
    gamma11 = ld gamma;
    check L217() else D31();
  D22():
    deopt 79 [c30, x5];
  D24():
    deopt 87 [];
  D26():
    deopt 92 [start_periods1];
  D30():
    deopt 110 [c42, gamma9];
  D31():
    deopt 114 [c52, gamma11];
  L37():
    f = ld f;
    check L275() else D46();
  L59():
    sym23 = ldf `as.integer`;
    base23 = ldf `as.integer` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L322() else L323();
  L195():
    x6 = force? x5;
    checkMissing(x6);
    r44 = `==`(x6, 0.0);
    any1 = ldf any in base;
    r45 = dyn any1(r44);
    check L196() else D23();
  L199():
    r46 = dyn stop2("data must be non-zero for multiplicative Holt-Winters");
    check L200() else D25();
  L202():
    start_periods2 = force? start_periods1;
    checkMissing(start_periods2);
    r48 = `<`(start_periods2, 2.0);
    c40 = `as.logical`(r48);
    if c40 then L203() else L30();
  L214():
    gamma10 = force? gamma9;
    checkMissing(gamma10);
    c48 = `is.logical`(gamma10);
    goto L35(c42, c48);
  L217():
    gamma12 = force? gamma11;
    checkMissing(gamma12);
    r57 = `!`(gamma12);
    c55 = `as.logical`(r57);
    c56 = `&&`(c52, c55);
    goto L36(c56);
  L219():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L220() else L221();
  D23():
    deopt 84 [c30, r45];
  D25():
    deopt 89 [r46];
  D46():
    deopt 192 [f];
  L30():
    goto L31(NULL);
  L31(r50):
    goto L32();
  L38(r59):
    r60 = `!`(r59);
    c60 = `as.logical`(r60);
    if c60 then L223() else L39(c60);
  L75(r122):
    st lenx = r122;
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L329() else L330();
  L196():
    goto L27(c30, r45);
  L200():
    goto L29();
  L203():
    stop3 = ldf stop;
    check L204() else D27();
  L220():
    beta3 = ld beta;
    check L222() else D32();
  L221():
    r58 = dyn base11(<sym beta>);
    goto L38(r58);
  L275():
    f1 = force? f;
    checkMissing(f1);
    r82 = `+`(f1, 1.0);
    st `start.time` = r82;
    start_periods3 = ld `start.periods`;
    check L276() else D47();
  L322():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L324() else L325();
  L323():
    r121 = dyn base23(<lang length(x)>);
    goto L75(r121);
  D27():
    deopt 97 [];
  D32():
    deopt 119 [beta3];
  D47():
    deopt 197 [start_periods3];
  L39(c62):
    c70 = `as.logical`(c62);
    if c70 then L228() else L41(c70);
  L76(r124):
    as_integer = ldf `as.integer` in base;
    r126 = dyn as_integer(r124);
    check L328() else D65();
  L77(r128):
    c126 = `as.logical`(r128);
    if c126 then L333() else L78();
  L204():
    r49 = dyn stop3("need at least 2 periods to compute seasonal start values");
    check L205() else D28();
  L222():
    beta4 = force? beta3;
    checkMissing(beta4);
    c59 = `==`(beta4, NULL);
    goto L38(c59);
  L223():
    sym12 = ldf `is.logical`;
    base12 = ldf `is.logical` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L224() else L225();
  L276():
    start_periods4 = force? start_periods3;
    checkMissing(start_periods4);
    f2 = ld f;
    check L277() else D48();
  L324():
    x29 = ld x;
    check L326() else D63();
  L325():
    r123 = dyn base24(<sym x>);
    goto L76(r123);
  L329():
    lenx = ld lenx;
    check L331() else D66();
  L330():
    r127 = dyn base25(<sym lenx>);
    goto L77(r127);
  D28():
    deopt 99 [r49];
  D48():
    deopt 198 [start_periods4, f2];
  D63():
    deopt 267 [x29];
  D65():
    deopt 272 [r126];
  D66():
    deopt 276 [lenx];
  L40(c65, r62):
    c67 = `as.logical`(r62);
    c68 = `&&`(c65, c67);
    goto L39(c68);
  L41(c72):
    st expsmooth = c72;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L231() else L232();
  L78():
    goto L79();
  L79():
    lenx2 = ld lenx;
    check L337() else D70();
  L205():
    goto L31(r49);
  L224():
    beta5 = ld beta;
    check L226() else D33();
  L225():
    r61 = dyn base12(<sym beta>);
    goto L40(c60, r61);
  L228():
    beta7 = ld beta;
    check L229() else D34();
  L277():
    f3 = force? f2;
    checkMissing(f3);
    r83 = `*`(start_periods4, f3);
    st wind = r83;
    decompose = ldf decompose;
    check L278() else D49();
  L326():
    x30 = force? x29;
    checkMissing(x30);
    length = ldf length in base;
    r125 = dyn length(x30);
    check L327() else D64();
  L328():
    goto L75(r126);
  L331():
    lenx1 = force? lenx;
    checkMissing(lenx1);
    is_na = ldf `is.na` in base;
    r129 = dyn is_na(lenx1);
    check L332() else D67();
  L333():
    stop4 = ldf stop;
    check L334() else D68();
  D33():
    deopt 124 [c60, beta5];
  D34():
    deopt 128 [c70, beta7];
  D49():
    deopt 203 [];
  D64():
    deopt 270 [r125];
  D67():
    deopt 279 [r129];
  D68():
    deopt 281 [];
  D70():
    deopt 286 [lenx2];
  L42(r65):
    c77 = `as.logical`(r65);
    if c77 then L234() else L43();
  L226():
    beta6 = force? beta5;
    checkMissing(beta6);
    c66 = `is.logical`(beta6);
    goto L40(c60, c66);
  L229():
    beta8 = force? beta7;
    checkMissing(beta8);
    r63 = `!`(beta8);
    c73 = `as.logical`(r63);
    c74 = `&&`(c70, c73);
    goto L41(c74);
  L231():
    l_start1 = ld `l.start`;
    check L233() else D35();
  L232():
    r64 = dyn base13(<sym l.start>);
    goto L42(r64);
  L278():
    p10 = prom<V +>{
      ts = ldf ts;
      p6 = prom<V +>{
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        c103 = `is.object`(x24);
        if c103 then L1() else L2(x24);
      L0(dx14):
        return dx14;
      L1():
        dr8 = tryDispatchBuiltin.1("[", x24);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x26):
        wind = ld wind;
        wind1 = force? wind;
        checkMissing(wind1);
        r84 = `:`(1, wind1);
        __4 = ldf `[` in base;
        r85 = dyn __4(x26, r84);
        goto L0(r85);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx13);
      };
      p8 = prom<V +>{
        start = ldf start;
        p7 = prom<V +>{
          x27 = ld x;
          x28 = force? x27;
          checkMissing(x28);
          return x28;
        };
        r88 = dyn start(p7);
        return r88;
      };
      p9 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r91 = dyn ts[, start, frequency](p6, p8, p9);
      return r91;
    };
    p11 = prom<V +>{
      seasonal5 = ld seasonal;
      seasonal6 = force? seasonal5;
      checkMissing(seasonal6);
      return seasonal6;
    };
    r94 = dyn decompose(p10, p11);
    check L279() else D50();
  L327():
    goto L76(r125);
  L332():
    goto L77(r129);
  L334():
    r130 = dyn stop4("invalid length(x)");
    check L335() else D69();
  L337():
    lenx3 = force? lenx2;
    checkMissing(lenx3);
    start_time = ld `start.time`;
    check L338() else D71();
  D35():
    deopt 134 [l_start1];
  D50():
    deopt 206 [r94];
  D69():
    deopt 283 [r130];
  D71():
    deopt 287 [lenx3, start_time];
  L43():
    goto L47();
  L47():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L247() else L248();
  L233():
    l_start2 = force? l_start1;
    checkMissing(l_start2);
    c76 = `==`(l_start2, NULL);
    goto L42(c76);
  L234():
    expsmooth = ld expsmooth;
    check L235() else D36();
  L279():
    st st = r94;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L280() else L281();
  L335():
    goto L79();
  L338():
    start_time1 = force? start_time;
    checkMissing(start_time1);
    r132 = `-`(lenx3, start_time1);
    r133 = `+`(r132, 1.0);
    st len = r133;
    r134 = clos inner4085654289;
    st hw = r134;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L339() else L340();
  D36():
    deopt 137 [expsmooth];
  L48(r69):
    c82 = `as.logical`(r69);
    if c82 then L250() else L49();
  L60(r96):
    c105 = `as.logical`(r96);
    if c105 then L61(c105) else L283();
  L80(r136):
    c128 = `as.logical`(r136);
    if c128 then L342() else L81();
  L235():
    expsmooth1 = force? expsmooth;
    checkMissing(expsmooth1);
    c78 = `as.logical`(expsmooth1);
    if c78 then L236() else L44();
  L247():
    b_start1 = ld `b.start`;
    check L249() else D39();
  L248():
    r68 = dyn base14(<sym b.start>);
    goto L48(r68);
  L280():
    l_start3 = ld `l.start`;
    check L282() else D51();
  L281():
    r95 = dyn base17(<sym l.start>);
    goto L60(r95);
  L339():
    gamma13 = ld gamma;
    check L341() else D72();
  L340():
    r135 = dyn base26(<sym gamma>);
    goto L80(r135);
  D39():
    deopt 153 [b_start1];
  D51():
    deopt 209 [l_start3];
  D72():
    deopt 297 [gamma13];
  L44():
    x11 = ld x;
    check L242() else D38();
  L46(dx2):
    st `l.start` = dx2;
    goto L47();
  L49():
    goto L58();
  L58():
    expsmooth2 = ld expsmooth;
    check L273() else D45();
  L61(c106):
    c115 = `as.logical`(c106);
    if c115 then L288() else L63();
  L81():
    sym41 = ldf `is.null`;
    base41 = ldf `is.null` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L526() else L527();
  L115():
    hw = ldf hw;
    check L604() else D138();
  L236():
    x7 = ld x;
    check L237() else D37();
  L249():
    b_start2 = force? b_start1;
    checkMissing(b_start2);
    c81 = `==`(b_start2, NULL);
    goto L48(c81);
  L250():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L251() else L252();
  L282():
    l_start4 = force? l_start3;
    checkMissing(l_start4);
    c104 = `==`(l_start4, NULL);
    goto L60(c104);
  L283():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L284() else L285();
  L341():
    gamma14 = force? gamma13;
    checkMissing(gamma14);
    c127 = `==`(gamma14, NULL);
    goto L80(c127);
  L342():
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L343() else L344();
  D37():
    deopt 139 [x7];
  D38():
    deopt 144 [x11];
  D45():
    deopt 185 [3.0, expsmooth2];
  D138():
    deopt 637 [];
  L50(r71):
    c84 = `as.logical`(r71);
    if c84 then L51(c84) else L254();
  L62(c110, r98):
    c112 = `as.logical`(r98);
    c113 = `||`(c110, c112);
    goto L61(c113);
  L63():
    goto L72();
  L72():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L312() else L313();
  L82(r138):
    c130 = `as.logical`(r138);
    if c130 then L346() else L83();
  L116(r282):
    c235 = `as.logical`(r282);
    if c235 then L529() else L117();
  L237():
    x8 = force? x7;
    checkMissing(x8);
    c79 = `is.object`(x8);
    if c79 then L238() else L239(x8);
  L242():
    x12 = force? x11;
    checkMissing(x12);
    c80 = `is.object`(x12);
    if c80 then L243() else L244(x12);
  L251():
    beta9 = ld beta;
    check L253() else D40();
  L252():
    r70 = dyn base15(<sym beta>);
    goto L50(r70);
  L273():
    expsmooth3 = force? expsmooth2;
    checkMissing(expsmooth3);
    r80 = `-`(3.0, expsmooth3);
    st `start.time` = r80;
    st `s.start` = 0.0;
    goto L59();
  L284():
    b_start3 = ld `b.start`;
    check L286() else D52();
  L285():
    r97 = dyn base18(<sym b.start>);
    goto L62(c105, r97);
  L288():
    na_omit = ldf `na.omit`;
    check L289() else D53();
  L343():
    alpha7 = ld alpha;
    check L345() else D73();
  L344():
    r137 = dyn base27(<sym alpha>);
    goto L82(r137);
  L526():
    alpha9 = ld alpha;
    check L528() else D118();
  L527():
    r281 = dyn base41(<sym alpha>);
    goto L116(r281);
  L604():
    p48 = prom<V +>{
      alpha11 = ld alpha;
      alpha12 = force? alpha11;
      checkMissing(alpha12);
      return alpha12;
    };
    p49 = prom<V +>{
      beta23 = ld beta;
      beta24 = force? beta23;
      checkMissing(beta24);
      return beta24;
    };
    p50 = prom<V +>{
      gamma15 = ld gamma;
      gamma16 = force? gamma15;
      checkMissing(gamma16);
      return gamma16;
    };
    r347 = dyn hw(p48, p49, p50);
    check L605() else D139();
  D40():
    deopt 157 [beta9];
  D52():
    deopt 213 [c105, b_start3];
  D53():
    deopt 218 [];
  D73():
    deopt 301 [alpha7];
  D118():
    deopt 531 [alpha9];
  D139():
    deopt 641 [r347];
  L45(dx1):
    goto L46(dx1);
  L51(c85):
    c94 = `as.logical`(c85);
    if c94 then L53(c94) else L259();
  L73(r119):
    c124 = `as.logical`(r119);
    if c124 then L315() else L74();
  L83():
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L463() else L464();
  L104(dx81):
    goto L115();
  L117():
    sym47 = ldf `is.null`;
    base47 = ldf `is.null` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L593() else L594();
  L238():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L240() else L239(dr);
  L239(x10):
    __ = ldf `[` in base;
    r66 = dyn __(x10, 1);
    goto L45(r66);
  L243():
    dr2 = tryDispatchBuiltin.1("[", x12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L245() else L244(dr2);
  L244(x14):
    __1 = ldf `[` in base;
    r67 = dyn __1(x14, 2);
    goto L46(r67);
  L253():
    beta10 = force? beta9;
    checkMissing(beta10);
    c83 = `==`(beta10, NULL);
    goto L50(c83);
  L254():
    sym16 = ldf `is.logical`;
    base16 = ldf `is.logical` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L255() else L256();
  L286():
    b_start4 = force? b_start3;
    checkMissing(b_start4);
    c111 = `==`(b_start4, NULL);
    goto L62(c105, c111);
  L289():
    p12 = prom<V +>{
      st = ld st;
      st1 = force? st;
      checkMissing(st1);
      c116 = `is.object`(st1);
      if c116 then L1() else L2(st1);
    L0(dx16):
      return dx16;
    L1():
      dr10 = tryDispatchBuiltin.1("$", st1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(st3):
      r99 = `$`(st3, <sym trend>);
      goto L0(r99);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx15);
    };
    r101 = dyn na_omit(p12);
    check L290() else D54();
  L312():
    s_start1 = ld `s.start`;
    check L314() else D61();
  L313():
    r118 = dyn base22(<sym s.start>);
    goto L73(r118);
  L345():
    alpha8 = force? alpha7;
    checkMissing(alpha8);
    c129 = `==`(alpha8, NULL);
    goto L82(c129);
  L346():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L347() else L348();
  L528():
    alpha10 = force? alpha9;
    checkMissing(alpha10);
    c234 = `==`(alpha10, NULL);
    goto L116(c234);
  L529():
    sym42 = ldf `is.null`;
    base42 = ldf `is.null` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L530() else L531();
  L605():
    st `final.fit` = r347;
    ts1 = ldf ts;
    check L606() else D140();
  D54():
    deopt 220 [r101];
  D61():
    deopt 254 [s_start1];
  D140():
    deopt 644 [];
  L52(c89, r73):
    r74 = `!`(r73);
    c91 = `as.logical`(r74);
    c92 = `||`(c89, c91);
    goto L51(c92);
  L53(c95):
    c100 = `as.logical`(c95);
    if c100 then L262() else L54();
  L74():
    goto L59();
  L84(r140):
    c132 = `as.logical`(r140);
    if c132 then L350() else L85();
  L105(r229):
    c199 = `as.logical`(r229);
    if c199 then L466() else L106();
  L118(r284):
    c237 = `as.logical`(r284);
    if c237 then L533() else L119();
  L129(r337):
    c273 = `as.logical`(r337);
    if c273 then L596() else L130();
  L240():
    dx = getTryDispatchBuiltinValue(dr);
    goto L45(dx);
  L245():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L46(dx3);
  L255():
    beta11 = ld beta;
    check L257() else D41();
  L256():
    r72 = dyn base16(<sym beta>);
    goto L52(c84, r72);
  L259():
    beta13 = ld beta;
    check L260() else D42();
  L290():
    st dat = r101;
    coef = ldf coef;
    check L291() else D55();
  L314():
    s_start2 = force? s_start1;
    checkMissing(s_start2);
    c123 = `==`(s_start2, NULL);
    goto L73(c123);
  L315():
    st4 = ld st;
    check L316() else D62();
  L347():
    beta15 = ld beta;
    check L349() else D74();
  L348():
    r139 = dyn base28(<sym beta>);
    goto L84(r139);
  L463():
    beta17 = ld beta;
    check L465() else D102();
  L464():
    r228 = dyn base36(<sym beta>);
    goto L105(r228);
  L530():
    beta19 = ld beta;
    check L532() else D119();
  L531():
    r283 = dyn base42(<sym beta>);
    goto L118(r283);
  L593():
    beta21 = ld beta;
    check L595() else D135();
  L594():
    r336 = dyn base47(<sym beta>);
    goto L129(r336);
  L606():
    p55 = prom<V +>{
      cbind1 = ldf cbind;
      p51 = prom<V +>{
        final_fit = ld `final.fit`;
        final_fit1 = force? final_fit;
        checkMissing(final_fit1);
        c275 = `is.object`(final_fit1);
        if c275 then L2() else L3(final_fit1);
      L1(dx143):
        c276 = `is.object`(dx143);
        if c276 then L5() else L6(dx143);
      L2():
        dr112 = tryDispatchBuiltin.1("$", final_fit1);
        dc56 = getTryDispatchBuiltinDispatched(dr112);
        if dc56 then L4() else L3(dr112);
      L3(final_fit3):
        r348 = `$`(final_fit3, <sym level>);
        goto L1(r348);
      L0(dx147):
        return dx147;
      L4():
        dx142 = getTryDispatchBuiltinValue(dr112);
        goto L1(dx142);
      L5():
        dr114 = tryDispatchBuiltin.1("[", dx143);
        dc57 = getTryDispatchBuiltinDispatched(dr114);
        if dc57 then L7() else L6(dr114);
      L6(dx145):
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        r349 = `-`(<missing>, len1);
        r350 = `-`(r349, 1.0);
        __22 = ldf `[` in base;
        r351 = dyn __22(dx145, r350);
        goto L0(r351);
      L7():
        dx146 = getTryDispatchBuiltinValue(dr114);
        goto L0(dx146);
      };
      p52 = prom<V +>{
        final_fit4 = ld `final.fit`;
        final_fit5 = force? final_fit4;
        checkMissing(final_fit5);
        c277 = `is.object`(final_fit5);
        if c277 then L2() else L3(final_fit5);
      L1(dx149):
        c278 = `is.object`(dx149);
        if c278 then L5() else L6(dx149);
      L2():
        dr116 = tryDispatchBuiltin.1("$", final_fit5);
        dc58 = getTryDispatchBuiltinDispatched(dr116);
        if dc58 then L4() else L3(dr116);
      L3(final_fit7):
        r353 = `$`(final_fit7, <sym level>);
        goto L1(r353);
      L0(dx153):
        return dx153;
      L4():
        dx148 = getTryDispatchBuiltinValue(dr116);
        goto L1(dx148);
      L5():
        dr118 = tryDispatchBuiltin.1("[", dx149);
        dc59 = getTryDispatchBuiltinDispatched(dr118);
        if dc59 then L7() else L6(dr118);
      L6(dx151):
        len2 = ld len;
        len3 = force? len2;
        checkMissing(len3);
        r354 = `-`(<missing>, len3);
        r355 = `-`(r354, 1.0);
        __23 = ldf `[` in base;
        r356 = dyn __23(dx151, r355);
        goto L0(r356);
      L7():
        dx152 = getTryDispatchBuiltinValue(dr118);
        goto L0(dx152);
      };
      p53 = prom<V +>{
        sym48 = ldf `is.logical`;
        base48 = ldf `is.logical` in base;
        guard48 = `==`.4(sym48, base48);
        if guard48 then L4() else L5();
      L0(r359):
        r360 = `!`(r359);
        c280 = `as.logical`(r360);
        if c280 then L1(c280) else L6();
      L4():
        beta25 = ld beta;
        beta26 = force? beta25;
        checkMissing(beta26);
        c279 = `is.logical`(beta26);
        goto L0(c279);
      L5():
        r358 = dyn base48(<sym beta>);
        goto L0(r358);
      L1(c281):
        c286 = `as.logical`(c281);
        if c286 then L8() else L2();
      L6():
        beta27 = ld beta;
        beta28 = force? beta27;
        checkMissing(beta28);
        c283 = `as.logical`(beta28);
        c284 = `||`(c280, c283);
        goto L1(c284);
      L2():
        invisible.0();
        return NULL;
      L8():
        final_fit8 = ld `final.fit`;
        final_fit9 = force? final_fit8;
        checkMissing(final_fit9);
        c287 = `is.object`(final_fit9);
        if c287 then L10() else L11(final_fit9);
      L9(dx155):
        c288 = `is.object`(dx155);
        if c288 then L13() else L14(dx155);
      L10():
        dr120 = tryDispatchBuiltin.1("$", final_fit9);
        dc60 = getTryDispatchBuiltinDispatched(dr120);
        if dc60 then L12() else L11(dr120);
      L11(final_fit11):
        r361 = `$`(final_fit11, <sym trend>);
        goto L9(r361);
      L3(dx159):
        return dx159;
      L12():
        dx154 = getTryDispatchBuiltinValue(dr120);
        goto L9(dx154);
      L13():
        dr122 = tryDispatchBuiltin.1("[", dx155);
        dc61 = getTryDispatchBuiltinDispatched(dr122);
        if dc61 then L15() else L14(dr122);
      L14(dx157):
        len4 = ld len;
        len5 = force? len4;
        checkMissing(len5);
        r362 = `-`(<missing>, len5);
        r363 = `-`(r362, 1.0);
        __24 = ldf `[` in base;
        r364 = dyn __24(dx157, r363);
        goto L3(r364);
      L15():
        dx158 = getTryDispatchBuiltinValue(dr122);
        goto L3(dx158);
      };
      p54 = prom<V +>{
        sym49 = ldf `is.logical`;
        base49 = ldf `is.logical` in base;
        guard49 = `==`.4(sym49, base49);
        if guard49 then L4() else L5();
      L0(r367):
        r368 = `!`(r367);
        c290 = `as.logical`(r368);
        if c290 then L1(c290) else L6();
      L4():
        gamma17 = ld gamma;
        gamma18 = force? gamma17;
        checkMissing(gamma18);
        c289 = `is.logical`(gamma18);
        goto L0(c289);
      L5():
        r366 = dyn base49(<sym gamma>);
        goto L0(r366);
      L1(c291):
        c296 = `as.logical`(c291);
        if c296 then L8() else L2();
      L6():
        gamma19 = ld gamma;
        gamma20 = force? gamma19;
        checkMissing(gamma20);
        c293 = `as.logical`(gamma20);
        c294 = `||`(c290, c293);
        goto L1(c294);
      L2():
        invisible.0();
        return NULL;
      L8():
        final_fit12 = ld `final.fit`;
        final_fit13 = force? final_fit12;
        checkMissing(final_fit13);
        c297 = `is.object`(final_fit13);
        if c297 then L10() else L11(final_fit13);
      L9(dx161):
        c298 = `is.object`(dx161);
        if c298 then L13() else L14(dx161);
      L10():
        dr124 = tryDispatchBuiltin.1("$", final_fit13);
        dc62 = getTryDispatchBuiltinDispatched(dr124);
        if dc62 then L12() else L11(dr124);
      L11(final_fit15):
        r369 = `$`(final_fit15, <sym seasonal>);
        goto L9(r369);
      L3(dx165):
        return dx165;
      L12():
        dx160 = getTryDispatchBuiltinValue(dr124);
        goto L9(dx160);
      L13():
        dr126 = tryDispatchBuiltin.1("[", dx161);
        dc63 = getTryDispatchBuiltinDispatched(dr126);
        if dc63 then L15() else L14(dr126);
      L14(dx163):
        len6 = ld len;
        len7 = force? len6;
        checkMissing(len7);
        r370 = `:`(1, len7);
        __25 = ldf `[` in base;
        r371 = dyn __25(dx163, r370);
        goto L3(r371);
      L15():
        dx164 = getTryDispatchBuiltinValue(dr126);
        goto L3(dx164);
      };
      r373 = dyn cbind1[xhat, level, trend, season](p51, p52, p53, p54);
      return r373;
    };
    p59 = prom<V +>{
      start1 = ldf start;
      p58 = prom<V +>{
        lag = ldf lag;
        p56 = prom<V +>{
          x31 = ld x;
          x32 = force? x31;
          checkMissing(x32);
          return x32;
        };
        p57 = prom<V +>{
          start_time2 = ld `start.time`;
          start_time3 = force? start_time2;
          checkMissing(start_time3);
          r376 = `-`(1.0, start_time3);
          return r376;
        };
        r378 = dyn lag[, k](p56, p57);
        return r378;
      };
      r380 = dyn start1(p58);
      return r380;
    };
    p61 = prom<V +>{
      frequency1 = ldf frequency;
      p60 = prom<V +>{
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        return x34;
      };
      r383 = dyn frequency1(p60);
      return r383;
    };
    r385 = dyn ts1[, start, frequency](p55, p59, p61);
    check L607() else D141();
  D41():
    deopt 161 [c84, beta11];
  D42():
    deopt 166 [c94, beta13];
  D55():
    deopt 223 [];
  D62():
    deopt 257 [st4];
  D74():
    deopt 305 [beta15];
  D102():
    deopt 448 [beta17];
  D119():
    deopt 535 [beta19];
  D135():
    deopt 618 [beta21];
  D141():
    deopt 650 [r385];
  L54():
    goto L57(NULL);
  L57(r78):
    goto L58();
  L85():
    r183 = clos inner3913899244;
    st error = r183;
    optim1 = ldf optim;
    check L411() else D89();
  L95(dx54):
    goto L104(dx54);
  L106():
    r275 = clos inner3913899244;
    st error = r275;
    optimize = ldf optimize;
    check L519() else D116();
  L119():
    r330 = clos inner3913899244;
    st error = r330;
    optimize1 = ldf optimize;
    check L586() else D133();
  L128(dx137):
    goto L115();
  L130():
    goto L115();
  L257():
    beta12 = force? beta11;
    checkMissing(beta12);
    c90 = `is.logical`(beta12);
    goto L52(c84, c90);
  L260():
    beta14 = force? beta13;
    checkMissing(beta14);
    c97 = `as.logical`(beta14);
    c98 = `||`(c94, c97);
    goto L53(c98);
  L262():
    x15 = ld x;
    check L263() else D43();
  L291():
    p16 = prom<V +>{
      _lm_fit = ldf `.lm.fit`;
      p14 = prom<V +>{
        cbind = ldf cbind;
        p13 = prom<V +>{
          sym19 = ldf seq_along;
          base19 = ldf seq_along in base;
          guard19 = `==`.4(sym19, base19);
          if guard19 then L1() else L2();
        L0(r103):
          return r103;
        L1():
          dat = ld dat;
          dat1 = force? dat;
          checkMissing(dat1);
          r104 = seq_along(dat1);
          goto L0(r104);
        L2():
          r102 = dyn base19(<sym dat>);
          goto L0(r102);
        };
        r106 = dyn cbind(1.0, p13);
        return r106;
      };
      p15 = prom<V +>{
        dat2 = ld dat;
        dat3 = force? dat2;
        checkMissing(dat3);
        return dat3;
      };
      r109 = dyn _lm_fit[x, y](p14, p15);
      return r109;
    };
    r111 = dyn coef(p16);
    check L292() else D56();
  L316():
    st5 = force? st4;
    checkMissing(st5);
    c125 = `is.object`(st5);
    if c125 then L318() else L319(st5);
  L349():
    beta16 = force? beta15;
    checkMissing(beta16);
    c131 = `==`(beta16, NULL);
    goto L84(c131);
  L350():
    r141 = clos inner3913899244;
    st error = r141;
    optim = ldf optim;
    check L351() else D75();
  L465():
    beta18 = force? beta17;
    checkMissing(beta18);
    c198 = `==`(beta18, NULL);
    goto L105(c198);
  L466():
    r230 = clos inner3913899244;
    st error = r230;
    optim2 = ldf optim;
    check L467() else D103();
  L532():
    beta20 = force? beta19;
    checkMissing(beta20);
    c236 = `==`(beta20, NULL);
    goto L118(c236);
  L533():
    r285 = clos inner3913899244;
    st error = r285;
    optim3 = ldf optim;
    check L534() else D120();
  L595():
    beta22 = force? beta21;
    checkMissing(beta22);
    c272 = `==`(beta22, NULL);
    goto L129(c272);
  L596():
    r338 = clos inner3913899244;
    st error = r338;
    optimize2 = ldf optimize;
    check L597() else D136();
  L607():
    st fitted = r385;
    sym50 = ldf `is.logical`;
    base50 = ldf `is.logical` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L608() else L609();
  D43():
    deopt 169 [x15];
  D56():
    deopt 225 [r111];
  D75():
    deopt 312 [];
  D89():
    deopt 385 [];
  D103():
    deopt 455 [];
  D116():
    deopt 521 [];
  D120():
    deopt 542 [];
  D133():
    deopt 608 [];
  D136():
    deopt 625 [];
  L131(r387):
    r388 = `!`(r387);
    c300 = `as.logical`(r388);
    if c300 then L132(c300) else L611();
  L263():
    x16 = force? x15;
    checkMissing(x16);
    c101 = `is.object`(x16);
    if c101 then L264() else L265(x16);
  L292():
    st cf = r111;
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L293() else L294();
  L317(dx25):
    st `s.start` = dx25;
    goto L59();
  L318():
    dr16 = tryDispatchBuiltin.1("$", st5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L320() else L319(dr16);
  L319(st7):
    r120 = `$`(st7, <sym figure>);
    goto L317(r120);
  L351():
    p17 = prom<V +>{
      optim_start1 = ld `optim.start`;
      optim_start2 = force? optim_start1;
      checkMissing(optim_start2);
      return optim_start2;
    };
    p18 = prom<V +>{
      error = ld error;
      error1 = force? error;
      checkMissing(error1);
      return error1;
    };
    p19 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r145):
      return r145;
    L1():
      c133 = ldf c in base;
      r146 = dyn c133(0.0, 0.0, 0.0);
      goto L0(r146);
    L2():
      r144 = dyn base29(0.0, 0.0, 0.0);
      goto L0(r144);
    };
    p20 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r149):
      return r149;
    L1():
      c134 = ldf c in base;
      r150 = dyn c134(1.0, 1.0, 1.0);
      goto L0(r150);
    L2():
      r148 = dyn base30(1.0, 1.0, 1.0);
      goto L0(r148);
    };
    p21 = prom<V +>{
      optim_control1 = ld `optim.control`;
      optim_control2 = force? optim_control1;
      checkMissing(optim_control2);
      return optim_control2;
    };
    r153 = dyn optim[, , method, lower, upper, control](p17, p18, "L-BFGS-B", p19, p20, p21);
    check L352() else D76();
  L411():
    p24 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L3() else L4();
    L0(r185):
      return r185;
    L3():
      optim_start3 = ld `optim.start`;
      optim_start4 = force? optim_start3;
      checkMissing(optim_start4);
      c165 = `is.object`(optim_start4);
      if c165 then L5() else L6(optim_start4);
    L4():
      r184 = dyn base32(<lang `[`(optim.start, "alpha")>, <lang `[`(optim.start, "gamma")>);
      goto L0(r184);
    L1(dx56):
      optim_start7 = ld `optim.start`;
      optim_start8 = force? optim_start7;
      checkMissing(optim_start8);
      c166 = `is.object`(optim_start8);
      if c166 then L8() else L9(optim_start8);
    L5():
      dr40 = tryDispatchBuiltin.1("[", optim_start4);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L7() else L6(dr40);
    L6(optim_start6):
      __10 = ldf `[` in base;
      r186 = dyn __10(optim_start6, "alpha");
      goto L1(r186);
    L2(dx58):
      c167 = ldf c in base;
      r188 = dyn c167(dx56, dx58);
      goto L0(r188);
    L7():
      dx55 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx55);
    L8():
      dr42 = tryDispatchBuiltin.1("[", optim_start8);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L10() else L9(dr42);
    L9(optim_start10):
      __11 = ldf `[` in base;
      r187 = dyn __11(optim_start10, "gamma");
      goto L2(r187);
    L10():
      dx57 = getTryDispatchBuiltinValue(dr42);
      goto L2(dx57);
    };
    p25 = prom<V +>{
      error2 = ld error;
      error3 = force? error2;
      checkMissing(error3);
      return error3;
    };
    p26 = prom<V +>{
      sym33 = ldf c;
      base33 = ldf c in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r192):
      return r192;
    L1():
      c168 = ldf c in base;
      r193 = dyn c168(0.0, 0.0);
      goto L0(r193);
    L2():
      r191 = dyn base33(0.0, 0.0);
      goto L0(r191);
    };
    p27 = prom<V +>{
      sym34 = ldf c;
      base34 = ldf c in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      c169 = ldf c in base;
      r197 = dyn c169(1.0, 1.0);
      goto L0(r197);
    L2():
      r195 = dyn base34(1.0, 1.0);
      goto L0(r195);
    };
    p28 = prom<V +>{
      optim_control3 = ld `optim.control`;
      optim_control4 = force? optim_control3;
      checkMissing(optim_control4);
      return optim_control4;
    };
    r200 = dyn optim1[, , method, lower, upper, control](p24, p25, "L-BFGS-B", p26, p27, p28);
    check L412() else D90();
  L467():
    p31 = prom<V +>{
      sym37 = ldf c;
      base37 = ldf c in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L3() else L4();
    L0(r232):
      return r232;
    L3():
      optim_start11 = ld `optim.start`;
      optim_start12 = force? optim_start11;
      checkMissing(optim_start12);
      c200 = `is.object`(optim_start12);
      if c200 then L5() else L6(optim_start12);
    L4():
      r231 = dyn base37(<lang `[`(optim.start, "beta")>, <lang `[`(optim.start, "gamma")>);
      goto L0(r231);
    L1(dx83):
      optim_start15 = ld `optim.start`;
      optim_start16 = force? optim_start15;
      checkMissing(optim_start16);
      c201 = `is.object`(optim_start16);
      if c201 then L8() else L9(optim_start16);
    L5():
      dr62 = tryDispatchBuiltin.1("[", optim_start12);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L7() else L6(dr62);
    L6(optim_start14):
      __14 = ldf `[` in base;
      r233 = dyn __14(optim_start14, "beta");
      goto L1(r233);
    L2(dx85):
      c202 = ldf c in base;
      r235 = dyn c202(dx83, dx85);
      goto L0(r235);
    L7():
      dx82 = getTryDispatchBuiltinValue(dr62);
      goto L1(dx82);
    L8():
      dr64 = tryDispatchBuiltin.1("[", optim_start16);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L10() else L9(dr64);
    L9(optim_start18):
      __15 = ldf `[` in base;
      r234 = dyn __15(optim_start18, "gamma");
      goto L2(r234);
    L10():
      dx84 = getTryDispatchBuiltinValue(dr64);
      goto L2(dx84);
    };
    p32 = prom<V +>{
      error4 = ld error;
      error5 = force? error4;
      checkMissing(error5);
      return error5;
    };
    p33 = prom<V +>{
      sym38 = ldf c;
      base38 = ldf c in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      c203 = ldf c in base;
      r240 = dyn c203(0.0, 0.0);
      goto L0(r240);
    L2():
      r238 = dyn base38(0.0, 0.0);
      goto L0(r238);
    };
    p34 = prom<V +>{
      sym39 = ldf c;
      base39 = ldf c in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L1() else L2();
    L0(r243):
      return r243;
    L1():
      c204 = ldf c in base;
      r244 = dyn c204(1.0, 1.0);
      goto L0(r244);
    L2():
      r242 = dyn base39(1.0, 1.0);
      goto L0(r242);
    };
    p35 = prom<V +>{
      optim_control5 = ld `optim.control`;
      optim_control6 = force? optim_control5;
      checkMissing(optim_control6);
      return optim_control6;
    };
    r247 = dyn optim2[, , method, lower, upper, control](p31, p32, "L-BFGS-B", p33, p34, p35);
    check L468() else D104();
  L519():
    p38 = prom<V +>{
      error6 = ld error;
      error7 = force? error6;
      checkMissing(error7);
      return error7;
    };
    r277 = dyn optimize[, lower, upper](p38, 0.0, 1.0);
    check L520() else D117();
  L534():
    p39 = prom<V +>{
      sym43 = ldf c;
      base43 = ldf c in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L3() else L4();
    L0(r287):
      return r287;
    L3():
      optim_start19 = ld `optim.start`;
      optim_start20 = force? optim_start19;
      checkMissing(optim_start20);
      c238 = `is.object`(optim_start20);
      if c238 then L5() else L6(optim_start20);
    L4():
      r286 = dyn base43(<lang `[`(optim.start, "alpha")>, <lang `[`(optim.start, "beta")>);
      goto L0(r286);
    L1(dx112):
      optim_start23 = ld `optim.start`;
      optim_start24 = force? optim_start23;
      checkMissing(optim_start24);
      c239 = `is.object`(optim_start24);
      if c239 then L8() else L9(optim_start24);
    L5():
      dr86 = tryDispatchBuiltin.1("[", optim_start20);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L7() else L6(dr86);
    L6(optim_start22):
      __18 = ldf `[` in base;
      r288 = dyn __18(optim_start22, "alpha");
      goto L1(r288);
    L2(dx114):
      c240 = ldf c in base;
      r290 = dyn c240(dx112, dx114);
      goto L0(r290);
    L7():
      dx111 = getTryDispatchBuiltinValue(dr86);
      goto L1(dx111);
    L8():
      dr88 = tryDispatchBuiltin.1("[", optim_start24);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L10() else L9(dr88);
    L9(optim_start26):
      __19 = ldf `[` in base;
      r289 = dyn __19(optim_start26, "beta");
      goto L2(r289);
    L10():
      dx113 = getTryDispatchBuiltinValue(dr88);
      goto L2(dx113);
    };
    p40 = prom<V +>{
      error8 = ld error;
      error9 = force? error8;
      checkMissing(error9);
      return error9;
    };
    p41 = prom<V +>{
      sym44 = ldf c;
      base44 = ldf c in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L1() else L2();
    L0(r294):
      return r294;
    L1():
      c241 = ldf c in base;
      r295 = dyn c241(0.0, 0.0);
      goto L0(r295);
    L2():
      r293 = dyn base44(0.0, 0.0);
      goto L0(r293);
    };
    p42 = prom<V +>{
      sym45 = ldf c;
      base45 = ldf c in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L1() else L2();
    L0(r298):
      return r298;
    L1():
      c242 = ldf c in base;
      r299 = dyn c242(1.0, 1.0);
      goto L0(r299);
    L2():
      r297 = dyn base45(1.0, 1.0);
      goto L0(r297);
    };
    p43 = prom<V +>{
      optim_control7 = ld `optim.control`;
      optim_control8 = force? optim_control7;
      checkMissing(optim_control8);
      return optim_control8;
    };
    r302 = dyn optim3[, , method, lower, upper, control](p39, p40, "L-BFGS-B", p41, p42, p43);
    check L535() else D121();
  L586():
    p46 = prom<V +>{
      error10 = ld error;
      error11 = force? error10;
      checkMissing(error11);
      return error11;
    };
    r332 = dyn optimize1[, lower, upper](p46, 0.0, 1.0);
    check L587() else D134();
  L597():
    p47 = prom<V +>{
      error12 = ld error;
      error13 = force? error12;
      checkMissing(error13);
      return error13;
    };
    r340 = dyn optimize2[, lower, upper](p47, 0.0, 1.0);
    check L598() else D137();
  L608():
    beta29 = ld beta;
    check L610() else D142();
  L609():
    r386 = dyn base50(<sym beta>);
    goto L131(r386);
  D76():
    deopt 323 [r153];
  D90():
    deopt 396 [r200];
  D104():
    deopt 466 [r247];
  D117():
    deopt 527 [r277];
  D121():
    deopt 553 [r302];
  D134():
    deopt 614 [r332];
  D137():
    deopt 631 [r340];
  D142():
    deopt 653 [beta29];
  L55(dx6):
    x19 = ld x;
    check L267() else D44();
  L64(r113):
    c118 = `as.logical`(r113);
    if c118 then L296() else L65();
  L132(c301):
    c306 = `as.logical`(c301);
    if c306 then L614() else L133();
  L264():
    dr4 = tryDispatchBuiltin.1("[", x16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L266() else L265(dr4);
  L265(x18):
    __2 = ldf `[` in base;
    r75 = dyn __2(x18, 2);
    goto L55(r75);
  L293():
    l_start5 = ld `l.start`;
    check L295() else D57();
  L294():
    r112 = dyn base20(<sym l.start>);
    goto L64(r112);
  L320():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L317(dx24);
  L352():
    st sol = r153;
    sol = ld sol;
    check L353() else D77();
  L412():
    st sol = r200;
    sol32 = ld sol;
    check L413() else D91();
  L468():
    st sol = r247;
    sol60 = ld sol;
    check L469() else D105();
  L520():
    c233 = `is.object`(r277);
    if c233 then L522() else L523(r277);
  L535():
    st sol = r302;
    sol88 = ld sol;
    check L536() else D122();
  L587():
    c271 = `is.object`(r332);
    if c271 then L589() else L590(r332);
  L598():
    c274 = `is.object`(r340);
    if c274 then L600() else L601(r340);
  L610():
    beta30 = force? beta29;
    checkMissing(beta30);
    c299 = `is.logical`(beta30);
    goto L131(c299);
  L611():
    beta31 = ld beta;
    check L612() else D143();
  D44():
    deopt 173 [dx6, x19];
  D57():
    deopt 228 [l_start5];
  D77():
    deopt 325 [sol];
  D91():
    deopt 398 [sol32];
  D105():
    deopt 468 [sol60];
  D122():
    deopt 555 [sol88];
  D143():
    deopt 657 [c300, beta31];
  L65():
    goto L67();
  L67():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L302() else L303();
  L133():
    goto L137();
  L137():
    sym51 = ldf `is.logical`;
    base51 = ldf `is.logical` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L627() else L628();
  L266():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L55(dx5);
  L267():
    x20 = force? x19;
    checkMissing(x20);
    c102 = `is.object`(x20);
    if c102 then L268() else L269(dx6, x20);
  L295():
    l_start6 = force? l_start5;
    checkMissing(l_start6);
    c117 = `==`(l_start6, NULL);
    goto L64(c117);
  L296():
    cf = ld cf;
    check L297() else D58();
  L353():
    sol1 = force? sol;
    checkMissing(sol1);
    c135 = `is.object`(sol1);
    if c135 then L355() else L356(sol1);
  L413():
    sol33 = force? sol32;
    checkMissing(sol33);
    c170 = `is.object`(sol33);
    if c170 then L415() else L416(sol33);
  L469():
    sol61 = force? sol60;
    checkMissing(sol61);
    c205 = `is.object`(sol61);
    if c205 then L471() else L472(sol61);
  L521(dx109):
    st gamma = dx109;
    goto L104(dx109);
  L522():
    dr84 = tryDispatchBuiltin.1("$", r277);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L524() else L523(dr84);
  L523(r279):
    r280 = `$`(r279, <sym minimum>);
    goto L521(r280);
  L536():
    sol89 = force? sol88;
    checkMissing(sol89);
    c243 = `is.object`(sol89);
    if c243 then L538() else L539(sol89);
  L588(dx139):
    st alpha = dx139;
    goto L128(dx139);
  L589():
    dr108 = tryDispatchBuiltin.1("$", r332);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L591() else L590(dr108);
  L590(r334):
    r335 = `$`(r334, <sym minimum>);
    goto L588(r335);
  L599(dx141):
    st beta = dx141;
    goto L115();
  L600():
    dr110 = tryDispatchBuiltin.1("$", r340);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L602() else L601(dr110);
  L601(r342):
    r343 = `$`(r342, <sym minimum>);
    goto L599(r343);
  L612():
    beta32 = force? beta31;
    checkMissing(beta32);
    c303 = `as.logical`(beta32);
    c304 = `||`(c300, c303);
    goto L132(c304);
  L614():
    fitted = ld fitted;
    check L615() else D144();
  D58():
    deopt 231 [cf];
  D144():
    deopt 660 [fitted];
  L56(dx11, dx12):
    r77 = `-`(dx11, dx12);
    st `b.start` = r77;
    goto L57(r77);
  L68(r116):
    c121 = `as.logical`(r116);
    if c121 then L305() else L69();
  L138(r399):
    r400 = `!`(r399);
    c311 = `as.logical`(r400);
    if c311 then L139(c311) else L630();
  L268():
    dr6 = tryDispatchBuiltin.1("[", x20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L270() else L269(dx6, dr6);
  L269(dx8, x22):
    __3 = ldf `[` in base;
    r76 = dyn __3(x22, 1);
    goto L56(dx8, r76);
  L297():
    cf1 = force? cf;
    checkMissing(cf1);
    c119 = `is.object`(cf1);
    if c119 then L298() else L299(cf1);
  L302():
    b_start5 = ld `b.start`;
    check L304() else D59();
  L303():
    r115 = dyn base21(<sym b.start>);
    goto L68(r115);
  L354(dx27):
    c136 = `as.logical`(dx27);
    if c136 then L86(c136) else L358();
  L355():
    dr18 = tryDispatchBuiltin.1("$", sol1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L357() else L356(dr18);
  L356(sol3):
    r154 = `$`(sol3, <sym convergence>);
    goto L354(r154);
  L414(dx60):
    c171 = `as.logical`(dx60);
    if c171 then L96(c171) else L418();
  L415():
    dr44 = tryDispatchBuiltin.1("$", sol33);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L417() else L416(dr44);
  L416(sol35):
    r201 = `$`(sol35, <sym convergence>);
    goto L414(r201);
  L470(dx87):
    c206 = `as.logical`(dx87);
    if c206 then L107(c206) else L474();
  L471():
    dr66 = tryDispatchBuiltin.1("$", sol61);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L473() else L472(dr66);
  L472(sol63):
    r248 = `$`(sol63, <sym convergence>);
    goto L470(r248);
  L524():
    dx108 = getTryDispatchBuiltinValue(dr84);
    goto L521(dx108);
  L537(dx116):
    c244 = `as.logical`(dx116);
    if c244 then L120(c244) else L541();
  L538():
    dr90 = tryDispatchBuiltin.1("$", sol89);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L540() else L539(dr90);
  L539(sol91):
    r303 = `$`(sol91, <sym convergence>);
    goto L537(r303);
  L591():
    dx138 = getTryDispatchBuiltinValue(dr108);
    goto L588(dx138);
  L602():
    dx140 = getTryDispatchBuiltinValue(dr110);
    goto L599(dx140);
  L615():
    fitted1 = force? fitted;
    checkMissing(fitted1);
    c307 = `is.object`(fitted1);
    if c307 then L616() else L617();
  L627():
    gamma21 = ld gamma;
    check L629() else D146();
  L628():
    r398 = dyn base51(<sym gamma>);
    goto L138(r398);
  D59():
    deopt 240 [b_start5];
  D146():
    deopt 681 [gamma21];
  L66(dx18):
    st `l.start` = dx18;
    goto L67();
  L69():
    goto L71(NULL);
  L71(dx22):
    goto L72();
  L86(c137):
    c155 = `as.logical`(c137);
    if c155 then L373() else L88();
  L96(c172):
    c190 = `as.logical`(c172);
    if c190 then L433() else L98();
  L107(c207):
    c225 = `as.logical`(c207);
    if c225 then L489() else L109();
  L120(c245):
    c263 = `as.logical`(c245);
    if c263 then L556() else L122();
  L134(dx167):
    fitted4 = ld fitted;
    check L619() else D145();
  L139(c312):
    c317 = `as.logical`(c312);
    if c317 then L633() else L140();
  L270():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L56(dx6, dx10);
  L298():
    dr12 = tryDispatchBuiltin.1("[", cf1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L300() else L299(dr12);
  L299(cf3):
    __5 = ldf `[` in base;
    r114 = dyn __5(cf3, 1);
    goto L66(r114);
  L304():
    b_start6 = force? b_start5;
    checkMissing(b_start6);
    c120 = `==`(b_start6, NULL);
    goto L68(c120);
  L305():
    cf4 = ld cf;
    check L306() else D60();
  L357():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L354(dx26);
  L358():
    sym31 = ldf any;
    base31 = ldf any in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L359() else L360();
  L417():
    dx59 = getTryDispatchBuiltinValue(dr44);
    goto L414(dx59);
  L418():
    sym35 = ldf any;
    base35 = ldf any in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L419() else L420();
  L473():
    dx86 = getTryDispatchBuiltinValue(dr66);
    goto L470(dx86);
  L474():
    sym40 = ldf any;
    base40 = ldf any in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L475() else L476();
  L540():
    dx115 = getTryDispatchBuiltinValue(dr90);
    goto L537(dx115);
  L541():
    sym46 = ldf any;
    base46 = ldf any in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L542() else L543();
  L616():
    dr128 = tryDispatchBuiltin.1("[", fitted1);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L618() else L617();
  L617():
    __26 = ldf `[` in base;
    r389 = dyn __26(fitted1, <missing>, 1.0);
    goto L134(r389);
  L629():
    gamma22 = force? gamma21;
    checkMissing(gamma22);
    c310 = `is.logical`(gamma22);
    goto L138(c310);
  L630():
    gamma23 = ld gamma;
    check L631() else D147();
  D60():
    deopt 243 [cf4];
  D145():
    deopt 665 [dx167, fitted4];
  D147():
    deopt 685 [c311, gamma23];
  L87(c141, r156):
    c152 = `as.logical`(r156);
    c153 = `||`(c141, c152);
    goto L86(c153);
  L88():
    goto L91();
  L91():
    sol20 = ld sol;
    check L386() else D86();
  L97(c176, r203):
    c187 = `as.logical`(r203);
    c188 = `||`(c176, c187);
    goto L96(c188);
  L98():
    goto L101();
  L101():
    sol52 = ld sol;
    check L446() else D100();
  L108(c211, r250):
    c222 = `as.logical`(r250);
    c223 = `||`(c211, c222);
    goto L107(c223);
  L109():
    goto L112();
  L112():
    sol80 = ld sol;
    check L502() else D114();
  L121(c249, r305):
    c260 = `as.logical`(r305);
    c261 = `||`(c249, c260);
    goto L120(c261);
  L122():
    goto L125();
  L125():
    sol108 = ld sol;
    check L569() else D131();
  L140():
    goto L148();
  L148():
    structure = ldf structure;
    check L657() else D153();
  L300():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L66(dx17);
  L306():
    cf5 = force? cf4;
    checkMissing(cf5);
    c122 = `is.object`(cf5);
    if c122 then L307() else L308(cf5);
  L359():
    sol4 = ld sol;
    check L361() else D78();
  L360():
    r155 = dyn base31(<lang `|`(`<`(`$`(sol, par), 0.0), `>`(`$`(sol, par), 1.0))>);
    goto L87(c136, r155);
  L373():
    sol12 = ld sol;
    check L374() else D81();
  L419():
    sol36 = ld sol;
    check L421() else D92();
  L420():
    r202 = dyn base35(<lang `|`(`<`(`$`(sol, par), 0.0), `>`(`$`(sol, par), 1.0))>);
    goto L97(c171, r202);
  L433():
    sol44 = ld sol;
    check L434() else D95();
  L475():
    sol64 = ld sol;
    check L477() else D106();
  L476():
    r249 = dyn base40(<lang `|`(`<`(`$`(sol, par), 0.0), `>`(`$`(sol, par), 1.0))>);
    goto L108(c206, r249);
  L489():
    sol72 = ld sol;
    check L490() else D109();
  L542():
    sol92 = ld sol;
    check L544() else D123();
  L543():
    r304 = dyn base46(<lang `|`(`<`(`$`(sol, par), 0.0), `>`(`$`(sol, par), 1.0))>);
    goto L121(c244, r304);
  L556():
    sol100 = ld sol;
    check L557() else D126();
  L618():
    dx166 = getTryDispatchBuiltinValue(dr128);
    goto L134(dx166);
  L619():
    fitted5 = force? fitted4;
    checkMissing(fitted5);
    c308 = `is.object`(fitted5);
    if c308 then L620() else L621(dx167);
  L631():
    gamma24 = force? gamma23;
    checkMissing(gamma24);
    c314 = `as.logical`(gamma24);
    c315 = `||`(c311, c314);
    goto L139(c315);
  L633():
    seasonal7 = ld seasonal;
    check L634() else D148();
  D78():
    deopt 330 [c136, sol4];
  D81():
    deopt 343 [sol12];
  D86():
    deopt 360 [sol20];
  D92():
    deopt 403 [c171, sol36];
  D95():
    deopt 416 [sol44];
  D100():
    deopt 433 [sol52];
  D106():
    deopt 473 [c206, sol64];
  D109():
    deopt 486 [sol72];
  D114():
    deopt 503 [sol80];
  D123():
    deopt 560 [c244, sol92];
  D126():
    deopt 573 [sol100];
  D131():
    deopt 590 [sol108];
  D148():
    deopt 688 [seasonal7];
  D153():
    deopt 725 [];
  L70(dx21):
    st `b.start` = dx21;
    goto L71(dx21);
  L135(dx172, dx173):
    r391 = `+`(dx172, dx173);
    l = ld fitted;
    c309 = `is.object`(l);
    if c309 then L623() else L624(r391);
  L307():
    dr14 = tryDispatchBuiltin.1("[", cf5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L309() else L308(dr14);
  L308(cf7):
    __6 = ldf `[` in base;
    r117 = dyn __6(cf7, 2);
    goto L70(r117);
  L361():
    sol5 = force? sol4;
    checkMissing(sol5);
    c142 = `is.object`(sol5);
    if c142 then L363() else L364(c136, sol5);
  L374():
    sol13 = force? sol12;
    checkMissing(sol13);
    c156 = `is.object`(sol13);
    if c156 then L376() else L377(sol13);
  L386():
    sol21 = force? sol20;
    checkMissing(sol21);
    c159 = `is.object`(sol21);
    if c159 then L388() else L389(sol21);
  L421():
    sol37 = force? sol36;
    checkMissing(sol37);
    c177 = `is.object`(sol37);
    if c177 then L423() else L424(c171, sol37);
  L434():
    sol45 = force? sol44;
    checkMissing(sol45);
    c191 = `is.object`(sol45);
    if c191 then L436() else L437(sol45);
  L446():
    sol53 = force? sol52;
    checkMissing(sol53);
    c194 = `is.object`(sol53);
    if c194 then L448() else L449(sol53);
  L477():
    sol65 = force? sol64;
    checkMissing(sol65);
    c212 = `is.object`(sol65);
    if c212 then L479() else L480(c206, sol65);
  L490():
    sol73 = force? sol72;
    checkMissing(sol73);
    c226 = `is.object`(sol73);
    if c226 then L492() else L493(sol73);
  L502():
    sol81 = force? sol80;
    checkMissing(sol81);
    c229 = `is.object`(sol81);
    if c229 then L504() else L505(sol81);
  L544():
    sol93 = force? sol92;
    checkMissing(sol93);
    c250 = `is.object`(sol93);
    if c250 then L546() else L547(c244, sol93);
  L557():
    sol101 = force? sol100;
    checkMissing(sol101);
    c264 = `is.object`(sol101);
    if c264 then L559() else L560(sol101);
  L569():
    sol109 = force? sol108;
    checkMissing(sol109);
    c267 = `is.object`(sol109);
    if c267 then L571() else L572(sol109);
  L620():
    dr130 = tryDispatchBuiltin.1("[", fitted5);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L622() else L621(dx167);
  L621(dx169):
    __27 = ldf `[` in base;
    r390 = dyn __27(fitted5, <missing>, "trend");
    goto L135(dx169, r390);
  L634():
    seasonal8 = force? seasonal7;
    checkMissing(seasonal8);
    r401 = `==`(seasonal8, "multiplicative");
    c318 = `as.logical`(r401);
    if c318 then L635() else L141();
  L657():
    p62 = prom<V +>{
      sym52 = ldf list;
      base52 = ldf list in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L13() else L14();
    L0(r416):
      return r416;
    L13():
      fitted24 = ld fitted;
      fitted25 = force? fitted24;
      checkMissing(fitted25);
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      alpha13 = ld alpha;
      alpha14 = force? alpha13;
      checkMissing(alpha14);
      beta33 = ld beta;
      beta34 = force? beta33;
      checkMissing(beta34);
      gamma25 = ld gamma;
      gamma26 = force? gamma25;
      checkMissing(gamma26);
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L15() else L16();
    L14():
      r415 = dyn base52[fitted, x, alpha, beta, gamma, coefficients, seasonal, SSE, call](<sym fitted>, <sym x>, <sym alpha>, <sym beta>, <sym gamma>, <lang c(a=`[`(`$`(final.fit, level), `+`(len, 1.0)), b=if(`||`(`!`(is.logical(beta)), beta), `[`(`$`(final.fit, trend), `+`(len, 1.0))), s=if(`||`(`!`(is.logical(gamma)), gamma), `[`(`$`(final.fit, seasonal), `+`(len, `:`(1, f)))))>, <sym seasonal>, <lang `$`(final.fit, SSE)>, <lang match.call()>);
      goto L0(r415);
    L1(r418):
      seasonal9 = ld seasonal;
      seasonal10 = force? seasonal9;
      checkMissing(seasonal10);
      final_fit28 = ld `final.fit`;
      final_fit29 = force? final_fit28;
      checkMissing(final_fit29);
      c347 = `is.object`(final_fit29);
      if c347 then L51() else L52(final_fit29);
    L15():
      final_fit16 = ld `final.fit`;
      final_fit17 = force? final_fit16;
      checkMissing(final_fit17);
      c324 = `is.object`(final_fit17);
      if c324 then L18() else L19(final_fit17);
    L16():
      r417 = dyn base53[a, b, s](<lang `[`(`$`(final.fit, level), `+`(len, 1.0))>, <lang if(`||`(`!`(is.logical(beta)), beta), `[`(`$`(final.fit, trend), `+`(len, 1.0)))>, <lang if(`||`(`!`(is.logical(gamma)), gamma), `[`(`$`(final.fit, seasonal), `+`(len, `:`(1, f))))>);
      goto L1(r417);
    L17(dx195):
      c325 = `is.object`(dx195);
      if c325 then L21() else L22(dx195);
    L18():
      dr144 = tryDispatchBuiltin.1("$", final_fit17);
      dc72 = getTryDispatchBuiltinDispatched(dr144);
      if dc72 then L20() else L19(dr144);
    L19(final_fit19):
      r419 = `$`(final_fit19, <sym level>);
      goto L17(r419);
    L50(dx215):
      match_call = ldf `match.call`;
      r437 = dyn match_call();
      list1 = ldf list in base;
      r438 = dyn list1(fitted25, x36, alpha14, beta34, gamma26, r418, seasonal10, dx215, r437);
      goto L0(r438);
    L51():
      dr156 = tryDispatchBuiltin.1("$", final_fit29);
      dc78 = getTryDispatchBuiltinDispatched(dr156);
      if dc78 then L53() else L52(dr156);
    L52(final_fit31):
      r436 = `$`(final_fit31, <sym SSE>);
      goto L50(r436);
    L2(dx199):
      sym54 = ldf `is.logical`;
      base54 = ldf `is.logical` in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L24() else L25();
    L20():
      dx194 = getTryDispatchBuiltinValue(dr144);
      goto L17(dx194);
    L21():
      dr146 = tryDispatchBuiltin.1("[", dx195);
      dc73 = getTryDispatchBuiltinDispatched(dr146);
      if dc73 then L23() else L22(dr146);
    L22(dx197):
      len8 = ld len;
      len9 = force? len8;
      checkMissing(len9);
      r420 = `+`(len9, 1.0);
      __32 = ldf `[` in base;
      r421 = dyn __32(dx197, r420);
      goto L2(r421);
    L53():
      dx214 = getTryDispatchBuiltinValue(dr156);
      goto L50(dx214);
    L3(r423):
      r424 = `!`(r423);
      c327 = `as.logical`(r424);
      if c327 then L4(c327) else L26();
    L23():
      dx198 = getTryDispatchBuiltinValue(dr146);
      goto L2(dx198);
    L24():
      beta35 = ld beta;
      beta36 = force? beta35;
      checkMissing(beta36);
      c326 = `is.logical`(beta36);
      goto L3(c326);
    L25():
      r422 = dyn base54(<sym beta>);
      goto L3(r422);
    L4(c328):
      c333 = `as.logical`(c328);
      if c333 then L28() else L5();
    L26():
      beta37 = ld beta;
      beta38 = force? beta37;
      checkMissing(beta38);
      c330 = `as.logical`(beta38);
      c331 = `||`(c327, c330);
      goto L4(c331);
    L5():
      goto L7(NULL);
    L7(dx206):
      sym55 = ldf `is.logical`;
      base55 = ldf `is.logical` in base;
      guard55 = `==`.4(sym55, base55);
      if guard55 then L37() else L38();
    L28():
      final_fit20 = ld `final.fit`;
      final_fit21 = force? final_fit20;
      checkMissing(final_fit21);
      c334 = `is.object`(final_fit21);
      if c334 then L30() else L31(final_fit21);
    L8(r429):
      r430 = `!`(r429);
      c337 = `as.logical`(r430);
      if c337 then L9(c337) else L39();
    L29(dx201):
      c335 = `is.object`(dx201);
      if c335 then L33() else L34(dx201);
    L30():
      dr148 = tryDispatchBuiltin.1("$", final_fit21);
      dc74 = getTryDispatchBuiltinDispatched(dr148);
      if dc74 then L32() else L31(dr148);
    L31(final_fit23):
      r425 = `$`(final_fit23, <sym trend>);
      goto L29(r425);
    L37():
      gamma27 = ld gamma;
      gamma28 = force? gamma27;
      checkMissing(gamma28);
      c336 = `is.logical`(gamma28);
      goto L8(c336);
    L38():
      r428 = dyn base55(<sym gamma>);
      goto L8(r428);
    L6(dx205):
      goto L7(dx205);
    L9(c338):
      c343 = `as.logical`(c338);
      if c343 then L41() else L10();
    L32():
      dx200 = getTryDispatchBuiltinValue(dr148);
      goto L29(dx200);
    L33():
      dr150 = tryDispatchBuiltin.1("[", dx201);
      dc75 = getTryDispatchBuiltinDispatched(dr150);
      if dc75 then L35() else L34(dr150);
    L34(dx203):
      len10 = ld len;
      len11 = force? len10;
      checkMissing(len11);
      r426 = `+`(len11, 1.0);
      __33 = ldf `[` in base;
      r427 = dyn __33(dx203, r426);
      goto L6(r427);
    L39():
      gamma29 = ld gamma;
      gamma30 = force? gamma29;
      checkMissing(gamma30);
      c340 = `as.logical`(gamma30);
      c341 = `||`(c337, c340);
      goto L9(c341);
    L10():
      goto L12(NULL);
    L12(dx213):
      c346 = ldf c in base;
      r435 = dyn c346(dx199, dx206, dx213);
      goto L1(r435);
    L35():
      dx204 = getTryDispatchBuiltinValue(dr150);
      goto L6(dx204);
    L41():
      final_fit24 = ld `final.fit`;
      final_fit25 = force? final_fit24;
      checkMissing(final_fit25);
      c344 = `is.object`(final_fit25);
      if c344 then L43() else L44(final_fit25);
    L42(dx208):
      c345 = `is.object`(dx208);
      if c345 then L46() else L47(dx208);
    L43():
      dr152 = tryDispatchBuiltin.1("$", final_fit25);
      dc76 = getTryDispatchBuiltinDispatched(dr152);
      if dc76 then L45() else L44(dr152);
    L44(final_fit27):
      r431 = `$`(final_fit27, <sym seasonal>);
      goto L42(r431);
    L11(dx212):
      goto L12(dx212);
    L45():
      dx207 = getTryDispatchBuiltinValue(dr152);
      goto L42(dx207);
    L46():
      dr154 = tryDispatchBuiltin.1("[", dx208);
      dc77 = getTryDispatchBuiltinDispatched(dr154);
      if dc77 then L48() else L47(dr154);
    L47(dx210):
      len12 = ld len;
      len13 = force? len12;
      checkMissing(len13);
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      r432 = `:`(1, f7);
      r433 = `+`(len13, r432);
      __34 = ldf `[` in base;
      r434 = dyn __34(dx210, r433);
      goto L11(r434);
    L48():
      dx211 = getTryDispatchBuiltinValue(dr154);
      goto L11(dx211);
    };
    r440 = dyn structure[, class](p62, "HoltWinters");
    check L658() else D154();
  D154():
    deopt 729 [r440];
  L136(r395, dx175):
    st fitted = dx175;
    goto L137();
  L141():
    fitted16 = ld fitted;
    check L645() else D151();
  L144(r405):
    l3 = ld fitted;
    c323 = `is.object`(l3);
    if c323 then L653() else L654(r405);
  L309():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L70(dx20);
  L362(c146, dx29):
    r158 = `<`(dx29, 0.0);
    sol8 = ld sol;
    check L366() else D79();
  L363():
    dr20 = tryDispatchBuiltin.1("$", sol5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L365() else L364(c136, dr20);
  L364(c144, sol7):
    r157 = `$`(sol7, <sym par>);
    goto L362(c144, r157);
  L375(dx33):
    r168 = `>`(dx33, 50.0);
    c157 = `as.logical`(r168);
    if c157 then L379() else L89();
  L376():
    dr24 = tryDispatchBuiltin.1("$", sol13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L378() else L377(dr24);
  L377(sol15):
    r167 = `$`(sol15, <sym convergence>);
    goto L375(r167);
  L387(dx37):
    c160 = `is.object`(dx37);
    if c160 then L391() else L392(dx37);
  L388():
    dr28 = tryDispatchBuiltin.1("$", sol21);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L390() else L389(dr28);
  L389(sol23):
    r177 = `$`(sol23, <sym par>);
    goto L387(r177);
  L422(c181, dx62):
    r205 = `<`(dx62, 0.0);
    sol40 = ld sol;
    check L426() else D93();
  L423():
    dr46 = tryDispatchBuiltin.1("$", sol37);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L425() else L424(c171, dr46);
  L424(c179, sol39):
    r204 = `$`(sol39, <sym par>);
    goto L422(c179, r204);
  L435(dx66):
    r215 = `>`(dx66, 50.0);
    c192 = `as.logical`(r215);
    if c192 then L439() else L99();
  L436():
    dr50 = tryDispatchBuiltin.1("$", sol45);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L438() else L437(dr50);
  L437(sol47):
    r214 = `$`(sol47, <sym convergence>);
    goto L435(r214);
  L447(dx70):
    c195 = `is.object`(dx70);
    if c195 then L451() else L452(dx70);
  L448():
    dr54 = tryDispatchBuiltin.1("$", sol53);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L450() else L449(dr54);
  L449(sol55):
    r224 = `$`(sol55, <sym par>);
    goto L447(r224);
  L478(c216, dx89):
    r252 = `<`(dx89, 0.0);
    sol68 = ld sol;
    check L482() else D107();
  L479():
    dr68 = tryDispatchBuiltin.1("$", sol65);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L481() else L480(c206, dr68);
  L480(c214, sol67):
    r251 = `$`(sol67, <sym par>);
    goto L478(c214, r251);
  L491(dx93):
    r262 = `>`(dx93, 50.0);
    c227 = `as.logical`(r262);
    if c227 then L495() else L110();
  L492():
    dr72 = tryDispatchBuiltin.1("$", sol73);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L494() else L493(dr72);
  L493(sol75):
    r261 = `$`(sol75, <sym convergence>);
    goto L491(r261);
  L503(dx97):
    c230 = `is.object`(dx97);
    if c230 then L507() else L508(dx97);
  L504():
    dr76 = tryDispatchBuiltin.1("$", sol81);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L506() else L505(dr76);
  L505(sol83):
    r271 = `$`(sol83, <sym par>);
    goto L503(r271);
  L545(c254, dx118):
    r307 = `<`(dx118, 0.0);
    sol96 = ld sol;
    check L549() else D124();
  L546():
    dr92 = tryDispatchBuiltin.1("$", sol93);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L548() else L547(c244, dr92);
  L547(c252, sol95):
    r306 = `$`(sol95, <sym par>);
    goto L545(c252, r306);
  L558(dx122):
    r317 = `>`(dx122, 50.0);
    c265 = `as.logical`(r317);
    if c265 then L562() else L123();
  L559():
    dr96 = tryDispatchBuiltin.1("$", sol101);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L561() else L560(dr96);
  L560(sol103):
    r316 = `$`(sol103, <sym convergence>);
    goto L558(r316);
  L570(dx126):
    c268 = `is.object`(dx126);
    if c268 then L574() else L575(dx126);
  L571():
    dr100 = tryDispatchBuiltin.1("$", sol109);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L573() else L572(dr100);
  L572(sol111):
    r326 = `$`(sol111, <sym par>);
    goto L570(r326);
  L622():
    dx171 = getTryDispatchBuiltinValue(dr130);
    goto L135(dx167, dx171);
  L623():
    dr132 = tryDispatchBuiltin.0("[<-", l, r391);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L625() else L624(r391);
  L624(r393):
    ___ = ldf `[<-` in base;
    r396 = dyn ___(l, <missing>, 1.0, r391);
    goto L136(r393, r396);
  L635():
    fitted8 = ld fitted;
    check L636() else D149();
  L658():
    popenv;
    return r440;
  D79():
    deopt 334 [c146, r158, sol8];
  D93():
    deopt 407 [c181, r205, sol40];
  D107():
    deopt 477 [c216, r252, sol68];
  D124():
    deopt 564 [c254, r307, sol96];
  D149():
    deopt 692 [fitted8];
  D151():
    deopt 704 [fitted16];
  L89():
    stop5 = ldf stop;
    check L383() else D84();
  L90(r174):
    goto L91();
  L92(dx41):
    st alpha = dx41;
    sol24 = ld sol;
    check L394() else D87();
  L99():
    stop6 = ldf stop;
    check L443() else D98();
  L100(r221):
    goto L101();
  L102(dx74):
    st alpha = dx74;
    sol56 = ld sol;
    check L454() else D101();
  L110():
    stop7 = ldf stop;
    check L499() else D112();
  L111(r268):
    goto L112();
  L113(dx101):
    st beta = dx101;
    sol84 = ld sol;
    check L510() else D115();
  L123():
    stop8 = ldf stop;
    check L566() else D129();
  L124(r323):
    goto L125();
  L126(dx130):
    st alpha = dx130;
    sol112 = ld sol;
    check L577() else D132();
  L147(r412, dx193):
    st fitted = dx193;
    goto L148();
  L365():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L362(c136, dx28);
  L366():
    sol9 = force? sol8;
    checkMissing(sol9);
    c147 = `is.object`(sol9);
    if c147 then L368() else L369(c146, r158, sol9);
  L378():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L375(dx32);
  L379():
    warning = ldf warning;
    check L380() else D82();
  L390():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L387(dx36);
  L391():
    dr30 = tryDispatchBuiltin.1("[", dx37);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L393() else L392(dr30);
  L392(dx39):
    __7 = ldf `[` in base;
    r178 = dyn __7(dx39, 1);
    goto L92(r178);
  L425():
    dx61 = getTryDispatchBuiltinValue(dr46);
    goto L422(c171, dx61);
  L426():
    sol41 = force? sol40;
    checkMissing(sol41);
    c182 = `is.object`(sol41);
    if c182 then L428() else L429(c181, r205, sol41);
  L438():
    dx65 = getTryDispatchBuiltinValue(dr50);
    goto L435(dx65);
  L439():
    warning1 = ldf warning;
    check L440() else D96();
  L450():
    dx69 = getTryDispatchBuiltinValue(dr54);
    goto L447(dx69);
  L451():
    dr56 = tryDispatchBuiltin.1("[", dx70);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L453() else L452(dr56);
  L452(dx72):
    __12 = ldf `[` in base;
    r225 = dyn __12(dx72, 1);
    goto L102(r225);
  L481():
    dx88 = getTryDispatchBuiltinValue(dr68);
    goto L478(c206, dx88);
  L482():
    sol69 = force? sol68;
    checkMissing(sol69);
    c217 = `is.object`(sol69);
    if c217 then L484() else L485(c216, r252, sol69);
  L494():
    dx92 = getTryDispatchBuiltinValue(dr72);
    goto L491(dx92);
  L495():
    warning2 = ldf warning;
    check L496() else D110();
  L506():
    dx96 = getTryDispatchBuiltinValue(dr76);
    goto L503(dx96);
  L507():
    dr78 = tryDispatchBuiltin.1("[", dx97);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L509() else L508(dr78);
  L508(dx99):
    __16 = ldf `[` in base;
    r272 = dyn __16(dx99, 1);
    goto L113(r272);
  L548():
    dx117 = getTryDispatchBuiltinValue(dr92);
    goto L545(c244, dx117);
  L549():
    sol97 = force? sol96;
    checkMissing(sol97);
    c255 = `is.object`(sol97);
    if c255 then L551() else L552(c254, r307, sol97);
  L561():
    dx121 = getTryDispatchBuiltinValue(dr96);
    goto L558(dx121);
  L562():
    warning3 = ldf warning;
    check L563() else D127();
  L573():
    dx125 = getTryDispatchBuiltinValue(dr100);
    goto L570(dx125);
  L574():
    dr102 = tryDispatchBuiltin.1("[", dx126);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L576() else L575(dr102);
  L575(dx128):
    __20 = ldf `[` in base;
    r327 = dyn __20(dx128, 1);
    goto L126(r327);
  L625():
    dx174 = getTryDispatchBuiltinValue(dr132);
    goto L136(r391, dx174);
  L636():
    fitted9 = force? fitted8;
    checkMissing(fitted9);
    c319 = `is.object`(fitted9);
    if c319 then L637() else L638();
  L645():
    fitted17 = force? fitted16;
    checkMissing(fitted17);
    c321 = `is.object`(fitted17);
    if c321 then L646() else L647();
  L653():
    dr142 = tryDispatchBuiltin.0("[<-", l3, r405);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L655() else L654(r405);
  L654(r410):
    ___1 = ldf `[<-` in base;
    r413 = dyn ___1(l3, <missing>, 1.0, r405);
    goto L147(r410, r413);
  D82():
    deopt 349 [];
  D84():
    deopt 355 [];
  D87():
    deopt 367 [sol24];
  D96():
    deopt 422 [];
  D98():
    deopt 428 [];
  D101():
    deopt 440 [sol56];
  D110():
    deopt 492 [];
  D112():
    deopt 498 [];
  D115():
    deopt 510 [sol84];
  D127():
    deopt 579 [];
  D129():
    deopt 585 [];
  D132():
    deopt 597 [sol112];
  L142(dx177):
    fitted12 = ld fitted;
    check L640() else D150();
  L145(dx185):
    fitted20 = ld fitted;
    check L649() else D152();
  L367(c151, r162, dx31):
    r164 = `>`(dx31, 1.0);
    r165 = `||`(r162, r164);
    any2 = ldf any in base;
    r166 = dyn any2(r165);
    check L371() else D80();
  L368():
    dr22 = tryDispatchBuiltin.1("$", sol9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L370() else L369(c146, r158, dr22);
  L369(c149, r160, sol11):
    r163 = `$`(sol11, <sym par>);
    goto L367(c149, r160, r163);
  L380():
    p23 = prom<V +>{
      gettextf = ldf gettextf;
      p22 = prom<V +>{
        sol16 = ld sol;
        sol17 = force? sol16;
        checkMissing(sol17);
        c158 = `is.object`(sol17);
        if c158 then L1() else L2(sol17);
      L0(dx35):
        return dx35;
      L1():
        dr26 = tryDispatchBuiltin.1("$", sol17);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(sol19):
        r169 = `$`(sol19, <sym message>);
        goto L0(r169);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx34);
      };
      r171 = dyn gettextf("optimization difficulties: %s", p22);
      return r171;
    };
    r173 = dyn warning[, domain](p23, NA_LGL);
    check L381() else D83();
  L383():
    r175 = dyn stop5("optimization failure");
    check L384() else D85();
  L393():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L92(dx40);
  L394():
    sol25 = force? sol24;
    checkMissing(sol25);
    c161 = `is.object`(sol25);
    if c161 then L396() else L397(sol25);
  L427(c186, r209, dx64):
    r211 = `>`(dx64, 1.0);
    r212 = `||`(r209, r211);
    any3 = ldf any in base;
    r213 = dyn any3(r212);
    check L431() else D94();
  L428():
    dr48 = tryDispatchBuiltin.1("$", sol41);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L430() else L429(c181, r205, dr48);
  L429(c184, r207, sol43):
    r210 = `$`(sol43, <sym par>);
    goto L427(c184, r207, r210);
  L440():
    p30 = prom<V +>{
      gettextf1 = ldf gettextf;
      p29 = prom<V +>{
        sol48 = ld sol;
        sol49 = force? sol48;
        checkMissing(sol49);
        c193 = `is.object`(sol49);
        if c193 then L1() else L2(sol49);
      L0(dx68):
        return dx68;
      L1():
        dr52 = tryDispatchBuiltin.1("$", sol49);
        dc26 = getTryDispatchBuiltinDispatched(dr52);
        if dc26 then L3() else L2(dr52);
      L2(sol51):
        r216 = `$`(sol51, <sym message>);
        goto L0(r216);
      L3():
        dx67 = getTryDispatchBuiltinValue(dr52);
        goto L0(dx67);
      };
      r218 = dyn gettextf1("optimization difficulties: %s", p29);
      return r218;
    };
    r220 = dyn warning1[, domain](p30, NA_LGL);
    check L441() else D97();
  L443():
    r222 = dyn stop6("optimization failure");
    check L444() else D99();
  L453():
    dx73 = getTryDispatchBuiltinValue(dr56);
    goto L102(dx73);
  L454():
    sol57 = force? sol56;
    checkMissing(sol57);
    c196 = `is.object`(sol57);
    if c196 then L456() else L457(sol57);
  L483(c221, r256, dx91):
    r258 = `>`(dx91, 1.0);
    r259 = `||`(r256, r258);
    any4 = ldf any in base;
    r260 = dyn any4(r259);
    check L487() else D108();
  L484():
    dr70 = tryDispatchBuiltin.1("$", sol69);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L486() else L485(c216, r252, dr70);
  L485(c219, r254, sol71):
    r257 = `$`(sol71, <sym par>);
    goto L483(c219, r254, r257);
  L496():
    p37 = prom<V +>{
      gettextf2 = ldf gettextf;
      p36 = prom<V +>{
        sol76 = ld sol;
        sol77 = force? sol76;
        checkMissing(sol77);
        c228 = `is.object`(sol77);
        if c228 then L1() else L2(sol77);
      L0(dx95):
        return dx95;
      L1():
        dr74 = tryDispatchBuiltin.1("$", sol77);
        dc37 = getTryDispatchBuiltinDispatched(dr74);
        if dc37 then L3() else L2(dr74);
      L2(sol79):
        r263 = `$`(sol79, <sym message>);
        goto L0(r263);
      L3():
        dx94 = getTryDispatchBuiltinValue(dr74);
        goto L0(dx94);
      };
      r265 = dyn gettextf2("optimization difficulties: %s", p36);
      return r265;
    };
    r267 = dyn warning2[, domain](p37, NA_LGL);
    check L497() else D111();
  L499():
    r269 = dyn stop7("optimization failure");
    check L500() else D113();
  L509():
    dx100 = getTryDispatchBuiltinValue(dr78);
    goto L113(dx100);
  L510():
    sol85 = force? sol84;
    checkMissing(sol85);
    c231 = `is.object`(sol85);
    if c231 then L512() else L513(sol85);
  L550(c259, r311, dx120):
    r313 = `>`(dx120, 1.0);
    r314 = `||`(r311, r313);
    any5 = ldf any in base;
    r315 = dyn any5(r314);
    check L554() else D125();
  L551():
    dr94 = tryDispatchBuiltin.1("$", sol97);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L553() else L552(c254, r307, dr94);
  L552(c257, r309, sol99):
    r312 = `$`(sol99, <sym par>);
    goto L550(c257, r309, r312);
  L563():
    p45 = prom<V +>{
      gettextf3 = ldf gettextf;
      p44 = prom<V +>{
        sol104 = ld sol;
        sol105 = force? sol104;
        checkMissing(sol105);
        c266 = `is.object`(sol105);
        if c266 then L1() else L2(sol105);
      L0(dx124):
        return dx124;
      L1():
        dr98 = tryDispatchBuiltin.1("$", sol105);
        dc49 = getTryDispatchBuiltinDispatched(dr98);
        if dc49 then L3() else L2(dr98);
      L2(sol107):
        r318 = `$`(sol107, <sym message>);
        goto L0(r318);
      L3():
        dx123 = getTryDispatchBuiltinValue(dr98);
        goto L0(dx123);
      };
      r320 = dyn gettextf3("optimization difficulties: %s", p44);
      return r320;
    };
    r322 = dyn warning3[, domain](p45, NA_LGL);
    check L564() else D128();
  L566():
    r324 = dyn stop8("optimization failure");
    check L567() else D130();
  L576():
    dx129 = getTryDispatchBuiltinValue(dr102);
    goto L126(dx129);
  L577():
    sol113 = force? sol112;
    checkMissing(sol113);
    c269 = `is.object`(sol113);
    if c269 then L579() else L580(sol113);
  L637():
    dr134 = tryDispatchBuiltin.1("[", fitted9);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L639() else L638();
  L638():
    __28 = ldf `[` in base;
    r402 = dyn __28(fitted9, <missing>, 1.0);
    goto L142(r402);
  L646():
    dr138 = tryDispatchBuiltin.1("[", fitted17);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L648() else L647();
  L647():
    __30 = ldf `[` in base;
    r406 = dyn __30(fitted17, <missing>, 1.0);
    goto L145(r406);
  L655():
    dx192 = getTryDispatchBuiltinValue(dr142);
    goto L147(r405, dx192);
  D80():
    deopt 341 [c151, r166];
  D83():
    deopt 353 [r173];
  D85():
    deopt 357 [r175];
  D94():
    deopt 414 [c186, r213];
  D97():
    deopt 426 [r220];
  D99():
    deopt 430 [r222];
  D108():
    deopt 484 [c221, r260];
  D111():
    deopt 496 [r267];
  D113():
    deopt 500 [r269];
  D125():
    deopt 571 [c259, r315];
  D128():
    deopt 583 [r322];
  D130():
    deopt 587 [r324];
  D150():
    deopt 697 [dx177, fitted12];
  D152():
    deopt 709 [dx185, fitted20];
  L370():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L367(c146, r158, dx30);
  L371():
    goto L87(c151, r166);
  L381():
    goto L90(r173);
  L384():
    goto L90(r175);
  L395(dx43):
    c162 = `is.object`(dx43);
    if c162 then L399() else L400(dx43);
  L396():
    dr32 = tryDispatchBuiltin.1("$", sol25);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L398() else L397(dr32);
  L397(sol27):
    r179 = `$`(sol27, <sym par>);
    goto L395(r179);
  L430():
    dx63 = getTryDispatchBuiltinValue(dr48);
    goto L427(c181, r205, dx63);
  L431():
    goto L97(c186, r213);
  L441():
    goto L100(r220);
  L444():
    goto L100(r222);
  L455(dx76):
    c197 = `is.object`(dx76);
    if c197 then L459() else L460(dx76);
  L456():
    dr58 = tryDispatchBuiltin.1("$", sol57);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L458() else L457(dr58);
  L457(sol59):
    r226 = `$`(sol59, <sym par>);
    goto L455(r226);
  L486():
    dx90 = getTryDispatchBuiltinValue(dr70);
    goto L483(c216, r252, dx90);
  L487():
    goto L108(c221, r260);
  L497():
    goto L111(r267);
  L500():
    goto L111(r269);
  L511(dx103):
    c232 = `is.object`(dx103);
    if c232 then L515() else L516(dx103);
  L512():
    dr80 = tryDispatchBuiltin.1("$", sol85);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L514() else L513(dr80);
  L513(sol87):
    r273 = `$`(sol87, <sym par>);
    goto L511(r273);
  L553():
    dx119 = getTryDispatchBuiltinValue(dr94);
    goto L550(c254, r307, dx119);
  L554():
    goto L121(c259, r315);
  L564():
    goto L124(r322);
  L567():
    goto L124(r324);
  L578(dx132):
    c270 = `is.object`(dx132);
    if c270 then L582() else L583(dx132);
  L579():
    dr104 = tryDispatchBuiltin.1("$", sol113);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L581() else L580(dr104);
  L580(sol115):
    r328 = `$`(sol115, <sym par>);
    goto L578(r328);
  L639():
    dx176 = getTryDispatchBuiltinValue(dr134);
    goto L142(dx176);
  L640():
    fitted13 = force? fitted12;
    checkMissing(fitted13);
    c320 = `is.object`(fitted13);
    if c320 then L641() else L642(dx177);
  L648():
    dx184 = getTryDispatchBuiltinValue(dr138);
    goto L145(dx184);
  L649():
    fitted21 = force? fitted20;
    checkMissing(fitted21);
    c322 = `is.object`(fitted21);
    if c322 then L650() else L651(dx185);
  L93(dx47):
    st beta = dx47;
    sol28 = ld sol;
    check L402() else D88();
  L103(dx80):
    st gamma = dx80;
    goto L95(dx80);
  L114(dx107):
    st gamma = dx107;
    goto L104(dx107);
  L127(dx136):
    st beta = dx136;
    goto L128(dx136);
  L143(dx182, dx183):
    r404 = `*`(dx182, dx183);
    goto L144(r404);
  L146(dx190, dx191):
    r408 = `+`(dx190, dx191);
    goto L144(r408);
  L398():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L395(dx42);
  L399():
    dr34 = tryDispatchBuiltin.1("[", dx43);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L401() else L400(dr34);
  L400(dx45):
    __8 = ldf `[` in base;
    r180 = dyn __8(dx45, 2);
    goto L93(r180);
  L458():
    dx75 = getTryDispatchBuiltinValue(dr58);
    goto L455(dx75);
  L459():
    dr60 = tryDispatchBuiltin.1("[", dx76);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L461() else L460(dr60);
  L460(dx78):
    __13 = ldf `[` in base;
    r227 = dyn __13(dx78, 2);
    goto L103(r227);
  L514():
    dx102 = getTryDispatchBuiltinValue(dr80);
    goto L511(dx102);
  L515():
    dr82 = tryDispatchBuiltin.1("[", dx103);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L517() else L516(dr82);
  L516(dx105):
    __17 = ldf `[` in base;
    r274 = dyn __17(dx105, 2);
    goto L114(r274);
  L581():
    dx131 = getTryDispatchBuiltinValue(dr104);
    goto L578(dx131);
  L582():
    dr106 = tryDispatchBuiltin.1("[", dx132);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L584() else L583(dr106);
  L583(dx134):
    __21 = ldf `[` in base;
    r329 = dyn __21(dx134, 2);
    goto L127(r329);
  L641():
    dr136 = tryDispatchBuiltin.1("[", fitted13);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L643() else L642(dx177);
  L642(dx179):
    __29 = ldf `[` in base;
    r403 = dyn __29(fitted13, <missing>, "season");
    goto L143(dx179, r403);
  L650():
    dr140 = tryDispatchBuiltin.1("[", fitted21);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L652() else L651(dx185);
  L651(dx187):
    __31 = ldf `[` in base;
    r407 = dyn __31(fitted21, <missing>, "season");
    goto L146(dx187, r407);
  D88():
    deopt 374 [sol28];
  L401():
    dx46 = getTryDispatchBuiltinValue(dr34);
    goto L93(dx46);
  L402():
    sol29 = force? sol28;
    checkMissing(sol29);
    c163 = `is.object`(sol29);
    if c163 then L404() else L405(sol29);
  L461():
    dx79 = getTryDispatchBuiltinValue(dr60);
    goto L103(dx79);
  L517():
    dx106 = getTryDispatchBuiltinValue(dr82);
    goto L114(dx106);
  L584():
    dx135 = getTryDispatchBuiltinValue(dr106);
    goto L127(dx135);
  L643():
    dx181 = getTryDispatchBuiltinValue(dr136);
    goto L143(dx177, dx181);
  L652():
    dx189 = getTryDispatchBuiltinValue(dr140);
    goto L146(dx185, dx189);
  L403(dx49):
    c164 = `is.object`(dx49);
    if c164 then L407() else L408(dx49);
  L404():
    dr36 = tryDispatchBuiltin.1("$", sol29);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L406() else L405(dr36);
  L405(sol31):
    r181 = `$`(sol31, <sym par>);
    goto L403(r181);
  L94(dx53):
    st gamma = dx53;
    goto L95(dx53);
  L406():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L403(dx48);
  L407():
    dr38 = tryDispatchBuiltin.1("[", dx49);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L409() else L408(dr38);
  L408(dx51):
    __9 = ldf `[` in base;
    r182 = dyn __9(dx51, 3);
    goto L94(r182);
  L409():
    dx52 = getTryDispatchBuiltinValue(dr38);
    goto L94(dx52);
  }
}
fun inner4085654289(alpha, beta, gamma) {
  (reg alpha:*, reg beta:*, reg gamma:*) -+> V { var alpha:*, var beta:*, var gamma:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_HoltWinters:*, reg C_HoltWinters1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x:*, reg x1:V, reg as_double:cls, reg r4:V, reg lenx:*, reg lenx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg r8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r9:V, reg r10:V, reg alpha1:*, reg alpha2:V, reg min:cls, reg r11:V, reg max:cls, reg r12:V, reg as_double1:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r16:V, reg r17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r18:V, reg r19:V, reg beta1:*, reg beta2:V, reg min1:cls, reg r20:V, reg max1:cls, reg r21:V, reg as_double2:cls, reg r22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r23:V, reg r24:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r25:V, reg r26:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r27:V, reg r28:V, reg gamma1:*, reg gamma2:V, reg min2:cls, reg r29:V, reg max2:cls, reg r30:V, reg as_double3:cls, reg r31:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r32:V, reg r33:V, reg start_time:*, reg start_time1:V, reg as_integer:cls, reg r34:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r35:V, reg r36:V, reg seasonal:*, reg seasonal1:V, reg r37:V, reg r38:V, reg r39:V, reg as_integer1:cls, reg r40:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r41:V, reg r42:V, reg f:*, reg f1:V, reg as_integer2:cls, reg r43:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r44:V, reg r45:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r46:V, reg r47:V, reg beta3:*, reg beta4:V, reg c:L, reg r48:V, reg c1:L, reg c2:V, reg beta5:*, reg beta6:V, reg c4:L, reg c5:V, reg as_integer3:cls, reg r49:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r50:V, reg r51:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r52:V, reg r53:V, reg gamma3:*, reg gamma4:V, reg c7:L, reg r54:V, reg c8:L, reg c9:V, reg gamma5:*, reg gamma6:V, reg c11:L, reg c12:V, reg as_integer4:cls, reg r55:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r56:V, reg r57:V, reg l_start:*, reg l_start1:V, reg as_double4:cls, reg r58:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r59:V, reg r60:V, reg b_start:*, reg b_start1:V, reg as_double5:cls, reg r61:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r62:V, reg r63:V, reg s_start:*, reg s_start1:V, reg as_double6:cls, reg r64:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r65:V, reg r66:V, reg as_double7:cls, reg r67:V, reg double:cls, reg len:*, reg len1:V, reg r68:V, reg p:p(V +), reg r70:V, reg double1:cls, reg len2:*, reg len3:V, reg r71:V, reg p1:p(V +), reg r73:V, reg double2:cls, reg len4:*, reg len5:V, reg f2:*, reg f3:V, reg r74:V, reg p2:p(V +), reg r76:V, reg _C:cls, reg r77:V |
    mkenv;
    st alpha = alpha;
    st beta = beta;
    st gamma = gamma;
    sym = ldf `.C`;
    base = ldf `.C` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r1):
    popenv;
    return r1;
  L24():
    C_HoltWinters = ld C_HoltWinters;
    check L26() else D0();
  L25():
    r = dyn base[, , , , , , , , , , , a, b, s, SSE, level, trend, seasonal](<sym C_HoltWinters>, <lang as.double(x)>, <sym lenx>, <lang as.double(max(min(alpha, 1.0), 0.0))>, <lang as.double(max(min(beta, 1.0), 0.0))>, <lang as.double(max(min(gamma, 1.0), 0.0))>, <lang as.integer(start.time)>, <lang as.integer(`!`(`+`(`(`(`==`(seasonal, "multiplicative")))))>, <lang as.integer(f)>, <lang as.integer(`||`(`!`(is.logical(beta)), beta))>, <lang as.integer(`||`(`!`(is.logical(gamma)), gamma))>, <lang as.double(l.start)>, <lang as.double(b.start)>, <lang as.double(s.start)>, <lang as.double(0.0)>, <lang double(`+`(len, 1))>, <lang double(`+`(len, 1))>, <lang double(`+`(len, f))>);
    goto L0(r);
  D0():
    deopt 2 [C_HoltWinters];
  L26():
    C_HoltWinters1 = force? C_HoltWinters;
    checkMissing(C_HoltWinters1);
    sym1 = ldf `as.double`;
    base1 = ldf `as.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L1(r3):
    lenx = ld lenx;
    check L31() else D3();
  L27():
    x = ld x;
    check L29() else D1();
  L28():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D1():
    deopt 6 [x];
  D3():
    deopt 10 [lenx];
  L29():
    x1 = force? x;
    checkMissing(x1);
    as_double = ldf `as.double` in base;
    r4 = dyn as_double(x1);
    check L30() else D2();
  L31():
    lenx1 = force? lenx;
    checkMissing(lenx1);
    sym2 = ldf `as.double`;
    base2 = ldf `as.double` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  D2():
    deopt 9 [r4];
  L2(r6):
    sym5 = ldf `as.double`;
    base5 = ldf `as.double` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L30():
    goto L1(r4);
  L32():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L33():
    r5 = dyn base2(<lang max(min(alpha, 1.0), 0.0)>);
    goto L2(r5);
  L3(r8):
    as_double1 = ldf `as.double` in base;
    r13 = dyn as_double1(r8);
    check L41() else D7();
  L5(r15):
    sym8 = ldf `as.double`;
    base8 = ldf `as.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L52() else L53();
  L34():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L35():
    r7 = dyn base3(<lang min(alpha, 1.0)>, 0.0);
    goto L3(r7);
  L42():
    sym6 = ldf max;
    base6 = ldf max in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L43():
    r14 = dyn base5(<lang max(min(beta, 1.0), 0.0)>);
    goto L5(r14);
  D7():
    deopt 27 [r13];
  L4(r10):
    max = ldf max in base;
    r12 = dyn max(r10, 0.0);
    check L40() else D6();
  L6(r17):
    as_double2 = ldf `as.double` in base;
    r22 = dyn as_double2(r17);
    check L51() else D11();
  L8(r24):
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L62() else L63();
  L36():
    alpha1 = ld alpha;
    check L38() else D4();
  L37():
    r9 = dyn base4(<sym alpha>, 1.0);
    goto L4(r9);
  L41():
    goto L2(r13);
  L44():
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L46() else L47();
  L45():
    r16 = dyn base6(<lang min(beta, 1.0)>, 0.0);
    goto L6(r16);
  L52():
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L54() else L55();
  L53():
    r23 = dyn base8(<lang max(min(gamma, 1.0), 0.0)>);
    goto L8(r23);
  D4():
    deopt 18 [alpha1];
  D6():
    deopt 25 [r12];
  D11():
    deopt 43 [r22];
  L7(r19):
    max1 = ldf max in base;
    r21 = dyn max1(r19, 0.0);
    check L50() else D10();
  L9(r26):
    as_double3 = ldf `as.double` in base;
    r31 = dyn as_double3(r26);
    check L61() else D15();
  L11(r33):
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L66() else L67();
  L38():
    alpha2 = force? alpha1;
    checkMissing(alpha2);
    min = ldf min in base;
    r11 = dyn min(alpha2, 1.0);
    check L39() else D5();
  L40():
    goto L3(r12);
  L46():
    beta1 = ld beta;
    check L48() else D8();
  L47():
    r18 = dyn base7(<sym beta>, 1.0);
    goto L7(r18);
  L51():
    goto L5(r22);
  L54():
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L56() else L57();
  L55():
    r25 = dyn base9(<lang min(gamma, 1.0)>, 0.0);
    goto L9(r25);
  L62():
    start_time = ld `start.time`;
    check L64() else D16();
  L63():
    r32 = dyn base11(<sym start.time>);
    goto L11(r32);
  D5():
    deopt 22 [r11];
  D8():
    deopt 34 [beta1];
  D10():
    deopt 41 [r21];
  D15():
    deopt 59 [r31];
  D16():
    deopt 62 [start_time];
  L10(r28):
    max2 = ldf max in base;
    r30 = dyn max2(r28, 0.0);
    check L60() else D14();
  L12(r36):
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L70() else L71();
  L39():
    goto L4(r11);
  L48():
    beta2 = force? beta1;
    checkMissing(beta2);
    min1 = ldf min in base;
    r20 = dyn min1(beta2, 1.0);
    check L49() else D9();
  L50():
    goto L6(r21);
  L56():
    gamma1 = ld gamma;
    check L58() else D12();
  L57():
    r27 = dyn base10(<sym gamma>, 1.0);
    goto L10(r27);
  L61():
    goto L8(r31);
  L64():
    start_time1 = force? start_time;
    checkMissing(start_time1);
    as_integer = ldf `as.integer` in base;
    r34 = dyn as_integer(start_time1);
    check L65() else D17();
  L66():
    seasonal = ld seasonal;
    check L68() else D18();
  L67():
    r35 = dyn base12(<lang `!`(`+`(`(`(`==`(seasonal, "multiplicative"))))>);
    goto L12(r35);
  D9():
    deopt 38 [r20];
  D12():
    deopt 50 [gamma1];
  D14():
    deopt 57 [r30];
  D17():
    deopt 65 [r34];
  D18():
    deopt 68 [seasonal];
  L13(r42):
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L74() else L75();
  L49():
    goto L7(r20);
  L58():
    gamma2 = force? gamma1;
    checkMissing(gamma2);
    min2 = ldf min in base;
    r29 = dyn min2(gamma2, 1.0);
    check L59() else D13();
  L60():
    goto L9(r30);
  L65():
    goto L11(r34);
  L68():
    seasonal1 = force? seasonal;
    checkMissing(seasonal1);
    r37 = `==`(seasonal1, "multiplicative");
    r38 = `+`(<missing>, r37);
    r39 = `!`(r38);
    as_integer1 = ldf `as.integer` in base;
    r40 = dyn as_integer1(r39);
    check L69() else D19();
  L70():
    f = ld f;
    check L72() else D20();
  L71():
    r41 = dyn base13(<sym f>);
    goto L13(r41);
  D13():
    deopt 54 [r29];
  D19():
    deopt 75 [r40];
  D20():
    deopt 78 [f];
  L14(r45):
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L83() else L84();
  L59():
    goto L10(r29);
  L69():
    goto L12(r40);
  L72():
    f1 = force? f;
    checkMissing(f1);
    as_integer2 = ldf `as.integer` in base;
    r43 = dyn as_integer2(f1);
    check L73() else D21();
  L74():
    sym15 = ldf `is.logical`;
    base15 = ldf `is.logical` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L76() else L77();
  L75():
    r44 = dyn base14(<lang `||`(`!`(is.logical(beta)), beta)>);
    goto L14(r44);
  D21():
    deopt 81 [r43];
  L15(r47):
    r48 = `!`(r47);
    c1 = `as.logical`(r48);
    if c1 then L16(c1) else L79();
  L17(r51):
    sym18 = ldf `as.double`;
    base18 = ldf `as.double` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L92() else L93();
  L73():
    goto L13(r43);
  L76():
    beta3 = ld beta;
    check L78() else D22();
  L77():
    r46 = dyn base15(<sym beta>);
    goto L15(r46);
  L83():
    sym17 = ldf `is.logical`;
    base17 = ldf `is.logical` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L85() else L86();
  L84():
    r50 = dyn base16(<lang `||`(`!`(is.logical(gamma)), gamma)>);
    goto L17(r50);
  D22():
    deopt 85 [beta3];
  L16(c2):
    as_integer3 = ldf `as.integer` in base;
    r49 = dyn as_integer3(c2);
    check L82() else D24();
  L18(r53):
    r54 = `!`(r53);
    c8 = `as.logical`(r54);
    if c8 then L19(c8) else L88();
  L20(r57):
    sym19 = ldf `as.double`;
    base19 = ldf `as.double` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L96() else L97();
  L78():
    beta4 = force? beta3;
    checkMissing(beta4);
    c = `is.logical`(beta4);
    goto L15(c);
  L79():
    beta5 = ld beta;
    check L80() else D23();
  L85():
    gamma3 = ld gamma;
    check L87() else D25();
  L86():
    r52 = dyn base17(<sym gamma>);
    goto L18(r52);
  L92():
    l_start = ld `l.start`;
    check L94() else D28();
  L93():
    r56 = dyn base18(<sym l.start>);
    goto L20(r56);
  D23():
    deopt 89 [c1, beta5];
  D24():
    deopt 93 [r49];
  D25():
    deopt 97 [gamma3];
  D28():
    deopt 108 [l_start];
  L19(c9):
    as_integer4 = ldf `as.integer` in base;
    r55 = dyn as_integer4(c9);
    check L91() else D27();
  L21(r60):
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L100() else L101();
  L80():
    beta6 = force? beta5;
    checkMissing(beta6);
    c4 = `as.logical`(beta6);
    c5 = `||`(c1, c4);
    goto L16(c5);
  L82():
    goto L14(r49);
  L87():
    gamma4 = force? gamma3;
    checkMissing(gamma4);
    c7 = `is.logical`(gamma4);
    goto L18(c7);
  L88():
    gamma5 = ld gamma;
    check L89() else D26();
  L94():
    l_start1 = force? l_start;
    checkMissing(l_start1);
    as_double4 = ldf `as.double` in base;
    r58 = dyn as_double4(l_start1);
    check L95() else D29();
  L96():
    b_start = ld `b.start`;
    check L98() else D30();
  L97():
    r59 = dyn base19(<sym b.start>);
    goto L21(r59);
  D26():
    deopt 101 [c8, gamma5];
  D27():
    deopt 105 [r55];
  D29():
    deopt 111 [r58];
  D30():
    deopt 115 [b_start];
  L22(r63):
    sym21 = ldf `as.double`;
    base21 = ldf `as.double` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L104() else L105();
  L89():
    gamma6 = force? gamma5;
    checkMissing(gamma6);
    c11 = `as.logical`(gamma6);
    c12 = `||`(c8, c11);
    goto L19(c12);
  L91():
    goto L17(r55);
  L95():
    goto L20(r58);
  L98():
    b_start1 = force? b_start;
    checkMissing(b_start1);
    as_double5 = ldf `as.double` in base;
    r61 = dyn as_double5(b_start1);
    check L99() else D31();
  L100():
    s_start = ld `s.start`;
    check L102() else D32();
  L101():
    r62 = dyn base20(<sym s.start>);
    goto L22(r62);
  D31():
    deopt 118 [r61];
  D32():
    deopt 122 [s_start];
  L23(r66):
    double = ldf double;
    check L107() else D35();
  L99():
    goto L21(r61);
  L102():
    s_start1 = force? s_start;
    checkMissing(s_start1);
    as_double6 = ldf `as.double` in base;
    r64 = dyn as_double6(s_start1);
    check L103() else D33();
  L104():
    as_double7 = ldf `as.double` in base;
    r67 = dyn as_double7(0.0);
    check L106() else D34();
  L105():
    r65 = dyn base21(0.0);
    goto L23(r65);
  D33():
    deopt 125 [r64];
  D34():
    deopt 131 [r67];
  D35():
    deopt 134 [];
  L103():
    goto L22(r64);
  L106():
    goto L23(r67);
  L107():
    p = prom<V +>{
      len = ld len;
      len1 = force? len;
      checkMissing(len1);
      r68 = `+`(len1, 1);
      return r68;
    };
    r70 = dyn double(p);
    check L108() else D36();
  D36():
    deopt 136 [r70];
  L108():
    double1 = ldf double;
    check L109() else D37();
  D37():
    deopt 139 [];
  L109():
    p1 = prom<V +>{
      len2 = ld len;
      len3 = force? len2;
      checkMissing(len3);
      r71 = `+`(len3, 1);
      return r71;
    };
    r73 = dyn double1(p1);
    check L110() else D38();
  D38():
    deopt 141 [r73];
  L110():
    double2 = ldf double;
    check L111() else D39();
  D39():
    deopt 144 [];
  L111():
    p2 = prom<V +>{
      len4 = ld len;
      len5 = force? len4;
      checkMissing(len5);
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      r74 = `+`(len5, f3);
      return r74;
    };
    r76 = dyn double2(p2);
    check L112() else D40();
  D40():
    deopt 146 [r76];
  L112():
    _C = ldf `.C` in base;
    r77 = dyn _C(C_HoltWinters1, r3, lenx1, r6, r15, r24, r33, r36, r42, r45, r51, r57, r60, r63, r66, r70, r73, r76);
    check L113() else D41();
  D41():
    deopt 149 [r77];
  L113():
    goto L0(r77);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg hw:cls, reg p1:*, reg p2:V, reg c:L, reg p4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p5:p(V +), reg p6:*, reg p7:V, reg c1:L, reg p9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r2:V, reg p10:p(V +), reg p11:*, reg p12:V, reg c2:L, reg p14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r4:V, reg p15:p(V +), reg r6:V, reg c3:L, reg r8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r9:V |
    mkenv;
    st p = p;
    hw = ldf hw;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p5 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      c = `is.object`(p2);
      if c then L1() else L2(p2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", p2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(p4):
      __ = ldf `[` in base;
      r = dyn __(p4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      p6 = ld p;
      p7 = force? p6;
      checkMissing(p7);
      c1 = `is.object`(p7);
      if c1 then L1() else L2(p7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", p7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(p9):
      __1 = ldf `[` in base;
      r2 = dyn __1(p9, 2);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p15 = prom<V +>{
      p11 = ld p;
      p12 = force? p11;
      checkMissing(p12);
      c2 = `is.object`(p12);
      if c2 then L1() else L2(p12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", p12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(p14):
      __2 = ldf `[` in base;
      r4 = dyn __2(p14, 3);
      goto L0(r4);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r6 = dyn hw(p5, p10, p15);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    c3 = `is.object`(r6);
    if c3 then L3() else L4(r6);
  L2(dx7):
    popenv;
    return dx7;
  L3():
    dr6 = tryDispatchBuiltin.1("$", r6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L5() else L4(dr6);
  L4(r8):
    r9 = `$`(r8, <sym SSE>);
    goto L2(r9);
  L5():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L2(dx6);
  }
}