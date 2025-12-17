fun main() {
  () -+> V { reg r:cls, reg arima0:cls, reg lh:*, reg lh1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg arima1:cls, reg lh2:*, reg lh3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg predict:cls, reg arima2:cls, reg lh4:*, reg lh5:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg arima3:cls, reg lh6:*, reg lh7:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg c3:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg arima4:cls, reg USAccDeaths:*, reg USAccDeaths1:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg c4:cls, reg r30:V, reg p10:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg c5:cls, reg r36:V, reg list:cls, reg r37:V, reg p11:p(V +), reg p12:p(V +), reg r40:V, reg predict1:cls, reg fit:*, reg fit1:V, reg p13:p(V +), reg r42:V, reg arima5:cls, reg LakeHuron:*, reg LakeHuron1:V, reg p14:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg c6:cls, reg r46:V, reg p15:p(V +), reg time:cls, reg LakeHuron2:*, reg LakeHuron3:V, reg p16:p(V +), reg r49:V, reg r50:V, reg p17:p(V +), reg r52:V |
    mkenv;
    r = clos inner3636783388;
    st arima0 = r;
    arima0 = ldf arima0;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
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
      r4 = dyn c(3.0, 0.0, 0.0);
      goto L0(r4);
    L2():
      r2 = dyn base(3.0, 0.0, 0.0);
      goto L0(r2);
    };
    r6 = dyn arima0[, order](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r6];
  L1():
    arima1 = ldf arima0;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      lh2 = ld lh;
      lh3 = force? lh2;
      checkMissing(lh3);
      return lh3;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c1 = ldf c in base;
      r10 = dyn c1(1.0, 0.0, 1.0);
      goto L0(r10);
    L2():
      r8 = dyn base1(1.0, 0.0, 1.0);
      goto L0(r8);
    };
    r12 = dyn arima1[, order](p2, p3);
    check L3() else D3();
  D3():
    deopt 14 [r12];
  L3():
    predict = ldf predict;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p6 = prom<V +>{
      arima2 = ldf arima0;
      p4 = prom<V +>{
        lh4 = ld lh;
        lh5 = force? lh4;
        checkMissing(lh5);
        return lh5;
      };
      p5 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        c2 = ldf c in base;
        r16 = dyn c2(3.0, 0.0, 0.0);
        goto L0(r16);
      L2():
        r14 = dyn base2(3.0, 0.0, 0.0);
        goto L0(r14);
      };
      r18 = dyn arima2[, order](p4, p5);
      return r18;
    };
    r20 = dyn predict[, `n.ahead`](p6, 12.0);
    check L5() else D5();
  D5():
    deopt 20 [r20];
  L5():
    arima3 = ldf arima0;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p7 = prom<V +>{
      lh6 = ld lh;
      lh7 = force? lh6;
      checkMissing(lh7);
      return lh7;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c3 = ldf c in base;
      r24 = dyn c3(3.0, 0.0, 0.0);
      goto L0(r24);
    L2():
      r22 = dyn base3(3.0, 0.0, 0.0);
      goto L0(r22);
    };
    r26 = dyn arima3[, order, method](p7, p8, "CSS");
    check L7() else D7();
  D7():
    deopt 28 [r26];
  L7():
    arima4 = ldf arima0;
    check L8() else D8();
  D8():
    deopt 30 [];
  L8():
    p9 = prom<V +>{
      USAccDeaths = ld USAccDeaths;
      USAccDeaths1 = force? USAccDeaths;
      checkMissing(USAccDeaths1);
      return USAccDeaths1;
    };
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c4 = ldf c in base;
      r30 = dyn c4(0.0, 1.0, 1.0);
      goto L0(r30);
    L2():
      r28 = dyn base4(0.0, 1.0, 1.0);
      goto L0(r28);
    };
    p11 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r33):
      return r33;
    L2():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r32 = dyn base5[order](<lang c(0.0, 1.0, 1.0)>);
      goto L0(r32);
    L1(r35):
      list = ldf list in base;
      r37 = dyn list(r35);
      goto L0(r37);
    L4():
      c5 = ldf c in base;
      r36 = dyn c5(0.0, 1.0, 1.0);
      goto L1(r36);
    L5():
      r34 = dyn base6(0.0, 1.0, 1.0);
      goto L1(r34);
    };
    p12 = prom<V +>{
      return -1.0;
    };
    r40 = dyn arima4[, order, seasonal, delta](p9, p10, p11, p12);
    check L9() else D9();
  D9():
    deopt 38 [r40];
  L9():
    st fit = r40;
    predict1 = ldf predict;
    check L10() else D10();
  D10():
    deopt 41 [];
  L10():
    p13 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r42 = dyn predict1[, `n.ahead`](p13, 6.0);
    check L11() else D11();
  D11():
    deopt 45 [r42];
  L11():
    arima5 = ldf arima0;
    check L12() else D12();
  D12():
    deopt 47 [];
  L12():
    p14 = prom<V +>{
      LakeHuron = ld LakeHuron;
      LakeHuron1 = force? LakeHuron;
      checkMissing(LakeHuron1);
      return LakeHuron1;
    };
    p15 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      c6 = ldf c in base;
      r46 = dyn c6(2.0, 0.0, 0.0);
      goto L0(r46);
    L2():
      r44 = dyn base7(2.0, 0.0, 0.0);
      goto L0(r44);
    };
    p17 = prom<V +>{
      time = ldf time;
      p16 = prom<V +>{
        LakeHuron2 = ld LakeHuron;
        LakeHuron3 = force? LakeHuron2;
        checkMissing(LakeHuron3);
        return LakeHuron3;
      };
      r49 = dyn time(p16);
      r50 = `-`(r49, 1920.0);
      return r50;
    };
    r52 = dyn arima5[, order, xreg](p14, p15, p17);
    check L13() else D13();
  D13():
    deopt 53 [r52];
  L13():
    popenv;
    return r52;
  }
}
fun inner3636783388(x, order, seasonal, xreg, `include.mean`, delta, `transform.pars`, fixed, init, method, `n.cond`, `optim.control`) {
  (reg x:*, reg order:*, reg seasonal:*, reg xreg:*, reg include_mean:*, reg delta:*, reg transform_pars:*, reg fixed:*, reg init:*, reg method:*, reg n_cond:*, reg optim_control:*) -+> V { var x:*, var order:*, reg order_isMissing:L, reg order_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var seasonal:*, reg seasonal_isMissing:L, reg seasonal_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg list:cls, reg r9:V, reg p1:p(V +), var xreg:*, reg xreg_isMissing:L, reg xreg_orDefault:*, var `include.mean`:*, reg include_mean_isMissing:L, reg include_mean_orDefault:*, var delta:*, reg delta_isMissing:L, reg delta_orDefault:*, var `transform.pars`:*, reg transform_pars_isMissing:L, reg transform_pars_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var init:*, reg init_isMissing:L, reg init_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), var `n.cond`:*, var `optim.control`:*, reg optim_control_isMissing:L, reg optim_control_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg list1:cls, reg r17:V, reg p3:p(V +), reg r19:cls, reg r20:cls, reg r21:cls, reg deparse1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg substitute:cls, reg r24:V, reg p4:p(V +), reg r26:V, reg NCOL:cls, reg x1:*, reg x2:V, reg p5:p(V +), reg r28:V, reg r29:V, reg c3:L, reg stop:cls, reg r30:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p6:p(V +), reg r33:V, reg as_ts:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg x5:*, reg x6:V, reg is_numeric:cls, reg r38:V, reg r39:V, reg c4:L, reg stop1:cls, reg r40:V, reg l:*, reg dim__:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg x7:*, reg x8:V, reg length:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg missing:cls, reg r48:V, reg r49:V, reg c5:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg order1:*, reg order2:V, reg is_numeric1:cls, reg r52:V, reg r53:V, reg c6:L, reg c7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg c11:L, reg r55:V, reg order3:*, reg order4:V, reg length1:cls, reg r56:V, reg r57:V, reg c12:L, reg c13:V, reg c15:L, reg c16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg c20:L, reg r59:V, reg order5:*, reg order6:V, reg r60:V, reg any:cls, reg r61:V, reg c21:L, reg c22:V, reg c24:L, reg stop2:cls, reg r62:V, reg r63:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg missing1:cls, reg r67:V, reg r68:V, reg c25:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg seasonal1:*, reg seasonal2:V, reg is_list:cls, reg r71:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r72:V, reg r73:V, reg seasonal3:*, reg seasonal4:V, reg c27:L, reg seasonal6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r74:V, reg c28:V, reg c29:L, reg stop3:cls, reg r75:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r77:V, reg r78:V, reg seasonal7:*, reg seasonal8:V, reg c30:L, reg seasonal10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r79:V, reg is_numeric2:cls, reg r80:V, reg r81:V, reg c31:L, reg c32:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r82:V, reg c36:L, reg r83:V, reg seasonal11:*, reg seasonal12:V, reg c37:L, reg c39:L, reg seasonal14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c41:L, reg dx5:V, reg r84:V, reg length2:cls, reg r85:V, reg r86:V, reg c42:L, reg c43:V, reg c45:L, reg c46:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r87:V, reg c50:L, reg r88:V, reg seasonal15:*, reg seasonal16:V, reg c51:L, reg c53:L, reg seasonal18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c55:L, reg dx7:V, reg r89:V, reg r90:V, reg any1:cls, reg r91:V, reg c56:L, reg c57:V, reg c59:L, reg stop4:cls, reg r92:V, reg r93:V, reg r94:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r95:V, reg r96:V, reg order7:*, reg order8:V, reg is_numeric3:cls, reg r97:V, reg c60:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg r99:V, reg order9:*, reg order10:V, reg length3:cls, reg r100:V, reg r101:V, reg c61:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r102:V, reg r103:V, reg seasonal19:*, reg seasonal20:V, reg list2:cls, reg r104:V, reg r105:V, reg stop5:cls, reg r106:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r108:V, reg r109:V, reg seasonal21:*, reg seasonal22:V, reg c62:L, reg seasonal24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r110:V, reg c63:V, reg c64:L, reg c65:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r111:V, reg c69:L, reg r112:V, reg seasonal25:*, reg seasonal26:V, reg c70:L, reg c72:L, reg seasonal28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c74:L, reg dx11:V, reg r113:V, reg is_na:cls, reg r114:V, reg c75:L, reg c76:V, reg c78:L, reg c79:V, reg seasonal29:*, reg seasonal30:V, reg c81:L, reg c83:L, reg seasonal32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c85:L, reg dx13:V, reg r115:V, reg r116:V, reg c86:L, reg c87:V, reg c89:L, reg frequency:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r118:V, reg l1:*, reg c90:L, reg r120:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r122:V, reg dx15:V, reg r123:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r125:V, reg r126:V, reg order11:*, reg order12:V, reg c91:L, reg order14:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __:cls, reg r127:V, reg seasonal33:*, reg seasonal34:V, reg c92:L, reg seasonal36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r128:V, reg c93:L, reg dx21:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __1:cls, reg r129:V, reg seasonal37:*, reg seasonal38:V, reg c94:L, reg seasonal40:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r130:V, reg order15:*, reg order16:V, reg c95:L, reg order18:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __2:cls, reg r131:V, reg seasonal41:*, reg seasonal42:V, reg c96:L, reg seasonal44:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg r132:V, reg c97:L, reg dx31:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg __3:cls, reg r133:V, reg c98:cls, reg r134:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r135:V, reg r136:V, reg arma:*, reg arma1:V, reg c99:L, reg arma3:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg __4:cls, reg r137:V, reg sum:cls, reg r138:V, reg order19:*, reg order20:V, reg c100:L, reg order22:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg __5:cls, reg r139:V, reg c101:L, reg diff:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg d:*, reg d1:V, reg p10:p(V +), reg r142:V, reg seasonal45:*, reg seasonal46:V, reg c102:L, reg seasonal48:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg r144:V, reg c103:L, reg dx41:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg __6:cls, reg r145:V, reg c104:L, reg diff1:cls, reg x13:*, reg x14:V, reg p11:p(V +), reg seasonal49:*, reg seasonal50:V, reg c105:L, reg seasonal52:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r147:V, reg p12:p(V +), reg d2:*, reg d3:V, reg p13:p(V +), reg r150:V, reg tsp:cls, reg x15:*, reg x16:V, reg p14:p(V +), reg r153:V, reg l4:*, reg tsp__:cls, reg r154:V, reg order23:*, reg order24:V, reg c106:L, reg order26:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg __7:cls, reg r155:V, reg seasonal53:*, reg seasonal54:V, reg c107:L, reg dx49:V, reg seasonal56:V, reg dr42:V, reg dc21:L, reg dx51:V, reg dx52:V, reg dx53:V, reg r156:V, reg c108:L, reg dx56:V, reg dx57:V, reg dr44:V, reg dc22:L, reg dx59:V, reg dx60:V, reg dx61:V, reg __8:cls, reg r157:V, reg r158:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r159:V, reg r160:V, reg x17:*, reg x18:V, reg length4:cls, reg r161:V, reg n:*, reg n1:V, reg n_used:*, reg n_used1:V, reg r162:V, reg method3:*, reg method4:V, reg r163:V, reg c109:L, reg order27:*, reg order28:V, reg c110:L, reg order30:V, reg dr46:V, reg dc23:L, reg dx62:V, reg dx63:V, reg __9:cls, reg r164:V, reg seasonal57:*, reg seasonal58:V, reg c111:L, reg dx65:V, reg seasonal60:V, reg dr48:V, reg dc24:L, reg dx67:V, reg dx68:V, reg dx69:V, reg r165:V, reg seasonal61:*, reg seasonal62:V, reg c112:L, reg dx72:V, reg dx73:V, reg seasonal64:V, reg dr50:V, reg dc25:L, reg dx76:V, reg dx77:V, reg dx78:V, reg dx79:V, reg r166:V, reg c113:L, reg dx83:V, reg dx84:V, reg dx85:V, reg dr52:V, reg dc26:L, reg dx88:V, reg dx89:V, reg dx90:V, reg dx91:V, reg __10:cls, reg r167:V, reg r168:V, reg r169:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r170:V, reg r171:V, reg missing2:cls, reg r172:V, reg r173:V, reg c114:L, reg ncond:*, reg ncond1:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r174:V, reg ncond4:V, reg r175:V, reg n_cond1:*, reg n_cond2:V, reg ncond5:*, reg ncond6:V, reg max:cls, reg r176:V, reg r177:V, reg r178:V, reg ncond7:*, reg ncond8:V, reg ncond9:*, reg ncond10:V, reg r179:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r181:V, reg r182:V, reg xreg1:*, reg xreg2:V, reg c115:V, reg c116:L, reg NROW:cls, reg xreg3:*, reg xreg4:V, reg p15:p(V +), reg r185:V, reg n2:*, reg n3:V, reg r186:V, reg c117:L, reg stop6:cls, reg r187:V, reg NCOL1:cls, reg xreg5:*, reg xreg6:V, reg p16:p(V +), reg r190:V, reg l5:*, reg class__:cls, reg r191:V, reg include_mean1:*, reg include_mean2:V, reg c118:L, reg c120:V, reg nd:*, reg nd1:V, reg r192:V, reg c121:L, reg c122:V, reg c124:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r193:V, reg r194:V, reg xreg7:*, reg xreg8:V, reg is_matrix:cls, reg r195:V, reg c125:L, reg c127:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r196:V, reg c130:L, reg r197:V, reg colnames:cls, reg xreg9:*, reg xreg10:V, reg p17:p(V +), reg r199:V, reg c131:V, reg c132:L, reg c133:V, reg c135:L, reg paste0:cls, reg ncxreg:*, reg ncxreg1:V, reg r200:V, reg p18:p(V +), reg r202:V, reg l6:*, reg colnames__:cls, reg r203:V, reg cbind:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r205:V, reg r206:V, reg n4:*, reg n5:V, reg rep_len:cls, reg r207:V, reg p19:p(V +), reg xreg11:*, reg xreg12:V, reg p20:p(V +), reg r210:V, reg ncxreg2:*, reg ncxreg3:V, reg r211:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r213:V, reg r214:V, reg fixed1:*, reg fixed2:V, reg c136:V, reg c137:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r215:V, reg r216:V, reg narma:*, reg narma1:V, reg ncxreg4:*, reg ncxreg5:V, reg r217:V, reg rep_len1:cls, reg r218:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r220:V, reg r221:V, reg fixed3:*, reg fixed4:V, reg length5:cls, reg r222:V, reg narma2:*, reg narma3:V, reg ncxreg6:*, reg ncxreg7:V, reg r223:V, reg r224:V, reg c138:L, reg stop7:cls, reg r225:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r226:V, reg r227:V, reg fixed5:*, reg fixed6:V, reg is_na1:cls, reg r228:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r229:V, reg r230:V, reg mask:*, reg mask1:V, reg any2:cls, reg r231:V, reg r232:V, reg c139:L, reg stop8:cls, reg r233:V, reg transform_pars1:*, reg transform_pars2:V, reg c140:L, reg c142:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r235:V, reg c145:L, reg r236:V, reg mask2:*, reg mask3:V, reg c146:L, reg c148:L, reg mask5:V, reg dr54:V, reg dc27:L, reg dx92:V, reg c150:L, reg dx93:V, reg narma4:*, reg narma5:V, reg r237:V, reg __11:cls, reg r238:V, reg r239:V, reg any3:cls, reg r240:V, reg c151:L, reg c152:V, reg c154:L, reg warning:cls, reg r241:V, reg ncxreg8:*, reg ncxreg9:V, reg c155:L, reg order31:*, reg order32:V, reg c156:L, reg order34:V, reg dr56:V, reg dc28:L, reg dx94:V, reg dx95:V, reg __12:cls, reg r243:V, reg c157:L, reg diff2:cls, reg xreg13:*, reg xreg14:V, reg p21:p(V +), reg d4:*, reg d5:V, reg p22:p(V +), reg r246:V, reg seasonal65:*, reg seasonal66:V, reg c158:L, reg seasonal68:V, reg dr58:V, reg dc29:L, reg dx96:V, reg dx97:V, reg r248:V, reg c159:L, reg dx99:V, reg dr60:V, reg dc30:L, reg dx100:V, reg dx101:V, reg __13:cls, reg r249:V, reg c160:L, reg diff3:cls, reg xreg15:*, reg xreg16:V, reg p23:p(V +), reg seasonal69:*, reg seasonal70:V, reg c161:L, reg seasonal72:V, reg dr62:V, reg dc31:L, reg dx102:V, reg dx103:V, reg r251:V, reg p24:p(V +), reg d6:*, reg d7:V, reg p25:p(V +), reg r254:V, reg as_matrix:cls, reg xreg17:*, reg xreg18:V, reg p26:p(V +), reg r257:V, reg qr:cls, reg na_omit:cls, reg xreg19:*, reg xreg20:V, reg p27:p(V +), reg r259:V, reg p28:p(V +), reg r261:V, reg c162:L, reg r263:V, reg dr64:V, reg dc32:L, reg dx104:V, reg dx105:V, reg r264:V, reg ncol:cls, reg xreg21:*, reg xreg22:V, reg p29:p(V +), reg r266:V, reg r267:V, reg c163:L, reg stop9:cls, reg r268:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r270:V, reg r271:V, reg colnames1:cls, reg xreg23:*, reg xreg24:V, reg p30:p(V +), reg r273:V, reg c164:V, reg c165:L, reg paste1:cls, reg ncxreg10:*, reg ncxreg11:V, reg r274:V, reg p31:p(V +), reg r276:V, reg r277:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r279:V, reg r280:V, reg x19:*, reg x20:V, reg anyNA:cls, reg r281:V, reg c166:L, reg c167:V, reg ncxreg12:*, reg ncxreg13:V, reg c169:L, reg c172:L, reg c173:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r282:V, reg c178:L, reg c179:L, reg r283:V, reg xreg25:*, reg xreg26:V, reg anyNA1:cls, reg r284:V, reg c180:L, reg c181:V, reg c184:L, reg c185:V, reg c187:L, reg method5:*, reg method6:V, reg r285:V, reg c188:L, reg c190:V, reg delta1:*, reg delta2:V, reg r286:V, reg c191:L, reg c192:V, reg c194:L, reg warning1:cls, reg r287:V, reg r288:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r290:V, reg r291:V, reg narma6:*, reg narma7:V, reg rep_len2:cls, reg r292:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r293:V, reg r294:V, reg narma8:*, reg narma9:V, reg rep_len3:cls, reg r295:V, reg ncxreg14:*, reg ncxreg15:V, reg c195:L, reg ncxreg16:*, reg ncxreg17:V, reg r296:V, reg c196:L, reg c197:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r297:V, reg c201:L, reg r298:V, reg mask6:*, reg mask7:V, reg c202:L, reg c204:L, reg mask9:V, reg dr66:V, reg dc33:L, reg dx106:V, reg c206:L, reg dx107:V, reg narma10:*, reg narma11:V, reg ncxreg18:*, reg ncxreg19:V, reg r299:V, reg r300:V, reg __14:cls, reg r301:V, reg r302:V, reg any4:cls, reg r303:V, reg c207:L, reg c208:V, reg orig_xreg:*, reg orig_xreg1:V, reg r304:V, reg c210:L, reg svd:cls, reg na_omit1:cls, reg xreg27:*, reg xreg28:V, reg p32:p(V +), reg r306:V, reg p33:p(V +), reg r308:V, reg xreg29:*, reg xreg30:V, reg S:*, reg S1:V, reg c211:L, reg S3:V, reg dr68:V, reg dc34:L, reg dx108:V, reg dx109:V, reg r309:V, reg ___:cls, reg r310:V, reg lm:cls, reg __15:cls, reg r312:V, reg p34:p(V +), reg na_omit2:*, reg na_omit3:V, reg p35:p(V +), reg r315:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r316:V, reg r317:V, reg init1:*, reg init2:V, reg coef:cls, reg fit:*, reg fit1:V, reg p36:p(V +), reg r319:V, reg c212:cls, reg r320:V, reg summary:cls, reg fit2:*, reg fit3:V, reg p37:p(V +), reg r322:V, reg c213:L, reg r324:V, reg dr70:V, reg dc35:L, reg dx110:V, reg dx111:V, reg r325:V, reg c214:L, reg dr72:V, reg dc36:L, reg dx114:V, reg dx115:V, reg __16:cls, reg r326:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r327:V, reg r328:V, reg parscale:*, reg parscale1:V, reg ses:*, reg ses1:V, reg c215:cls, reg r329:V, reg l7:*, reg storage_mode__:cls, reg r331:V, reg l8:*, reg storage_mode__1:cls, reg r332:V, reg method7:*, reg method8:V, reg r333:V, reg c216:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r335:V, reg r336:V, reg C_setup_starma:*, reg C_setup_starma1:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r337:V, reg C_setup_starma4:V, reg r338:V, reg arma4:*, reg arma5:V, reg as_integer:cls, reg r339:V, reg x21:*, reg x22:V, reg n_used2:*, reg n_used3:V, reg xreg31:*, reg xreg32:V, reg ncxreg20:*, reg ncxreg21:V, reg delta3:*, reg delta4:V, reg transform_pars3:*, reg transform_pars4:V, reg r340:V, reg ncond11:*, reg ncond12:V, reg n6:*, reg n7:V, reg n_used4:*, reg n_used5:V, reg r341:V, reg r342:V, reg vargs:dots, reg r343:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r344:V, reg on_exit:cls, reg r346:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r347:V, reg r348:V, reg init3:*, reg init4:V, reg c217:V, reg r349:V, reg c218:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r350:V, reg r351:V, reg init5:*, reg init6:V, reg length6:cls, reg r352:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r355:V, reg r356:V, reg r357:V, reg init7:*, reg init8:V, reg length7:cls, reg r358:V, reg r359:V, reg c219:L, reg stop10:cls, reg r360:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r362:V, reg r363:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r364:V, reg r365:V, reg init9:*, reg init10:V, reg is_na2:cls, reg r366:V, reg any5:cls, reg r367:V, reg c220:L, reg init11:*, reg init12:V, reg c221:L, reg init14:V, reg dr74:V, reg dc37:L, reg dx116:V, reg dx117:V, reg ind:*, reg ind1:V, reg __17:cls, reg r368:V, reg l9:*, reg c222:L, reg dx119:V, reg l11:*, reg dr76:V, reg dc38:L, reg dx121:V, reg dx122:V, reg dx123:V, reg ind2:*, reg ind3:V, reg ___1:cls, reg r369:V, reg transform_pars5:*, reg transform_pars6:V, reg c223:L, reg sym54:cls, reg base54:cls, reg guard54:L, reg r370:V, reg r371:V, reg mask10:*, reg mask11:V, reg c224:L, reg mask13:V, reg dr78:V, reg dc39:L, reg dx125:V, reg dx126:V, reg narma12:*, reg narma13:V, reg r372:V, reg __18:cls, reg r373:V, reg r374:V, reg any6:cls, reg r375:V, reg c225:L, reg warning2:cls, reg r376:V, reg arma6:*, reg arma7:V, reg c226:L, reg arma9:V, reg dr80:V, reg dc40:L, reg dx127:V, reg dx128:V, reg __19:cls, reg r378:V, reg r379:V, reg c227:L, reg arCheck:cls, reg init15:*, reg init16:V, reg c228:L, reg init18:V, reg dr82:V, reg dc41:L, reg dx129:V, reg dx130:V, reg arma10:*, reg arma11:V, reg c229:L, reg init20:V, reg r381:I, reg arma13:V, reg dr84:V, reg dc42:L, reg dx131:V, reg init22:V, reg r383:I, reg dx132:V, reg __20:cls, reg r384:V, reg r385:V, reg __21:cls, reg r386:V, reg p38:p(V +), reg r388:V, reg r389:V, reg c230:L, reg stop11:cls, reg r390:V, reg r391:V, reg arma14:*, reg arma15:V, reg c231:L, reg arma17:V, reg dr86:V, reg dc43:L, reg dx133:V, reg dx134:V, reg __22:cls, reg r393:V, reg r394:V, reg c232:L, reg arCheck1:cls, reg init23:*, reg init24:V, reg c233:L, reg init26:V, reg dr88:V, reg dc44:L, reg dx135:V, reg dx136:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r395:V, reg init29:V, reg r396:V, reg arma18:*, reg arma19:V, reg c234:L, reg init31:V, reg arma21:V, reg dr90:V, reg dc45:L, reg dx137:V, reg init33:V, reg dx138:V, reg __23:cls, reg r397:V, reg sum1:cls, reg r398:V, reg arma22:*, reg arma23:V, reg c235:L, reg init35:V, reg r401:V, reg r402:I, reg arma25:V, reg dr92:V, reg dc46:L, reg dx139:V, reg init37:V, reg r405:V, reg r406:I, reg dx140:V, reg __24:cls, reg r407:V, reg r408:V, reg r409:V, reg __25:cls, reg r410:V, reg p39:p(V +), reg r412:V, reg r413:V, reg c236:L, reg stop12:cls, reg r414:V, reg r415:V, reg arma26:*, reg arma27:V, reg c237:L, reg arma29:V, reg dr94:V, reg dc47:L, reg dx141:V, reg dx142:V, reg __26:cls, reg r417:V, reg r418:V, reg c238:L, reg arma30:*, reg arma31:V, reg c239:L, reg arma33:V, reg dr96:V, reg dc48:L, reg dx143:V, reg dx144:V, reg __27:cls, reg r419:V, reg arma34:*, reg arma35:V, reg c240:L, reg dx146:V, reg r421:I, reg arma37:V, reg dr98:V, reg dc49:L, reg dx148:V, reg dx149:V, reg r423:I, reg dx150:V, reg __28:cls, reg r424:V, reg r425:V, reg r426:V, reg maInvert:cls, reg init38:*, reg init39:V, reg c241:L, reg init41:V, reg dr100:V, reg dc50:L, reg dx151:V, reg dx152:V, reg ind4:*, reg ind5:V, reg __29:cls, reg r427:V, reg p40:p(V +), reg r429:V, reg l12:*, reg c242:L, reg r431:V, reg l14:*, reg dr102:V, reg dc51:L, reg dx153:V, reg r433:V, reg dx154:V, reg ind6:*, reg ind7:V, reg ___2:cls, reg r434:V, reg arma38:*, reg arma39:V, reg c243:L, reg arma41:V, reg dr104:V, reg dc52:L, reg dx155:V, reg dx156:V, reg __30:cls, reg r436:V, reg r437:V, reg c244:L, reg sym56:cls, reg base56:cls, reg guard56:L, reg r438:V, reg r439:V, reg arma42:*, reg arma43:V, reg c245:L, reg arma45:V, reg dr106:V, reg dc53:L, reg dx157:V, reg dx158:V, reg __31:cls, reg r440:V, reg sum2:cls, reg r441:V, reg arma46:*, reg arma47:V, reg c246:L, reg r444:V, reg r445:I, reg arma49:V, reg dr108:V, reg dc54:L, reg dx159:V, reg r448:V, reg r449:I, reg dx160:V, reg __32:cls, reg r450:V, reg r451:V, reg r452:V, reg maInvert1:cls, reg init42:*, reg init43:V, reg c247:L, reg init45:V, reg dr110:V, reg dc55:L, reg dx161:V, reg dx162:V, reg ind8:*, reg ind9:V, reg __33:cls, reg r453:V, reg p41:p(V +), reg r455:V, reg l15:*, reg c248:L, reg r457:V, reg l17:*, reg dr112:V, reg dc56:L, reg dx163:V, reg r459:V, reg dx164:V, reg ind10:*, reg ind11:V, reg ___3:cls, reg r460:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r462:V, reg r463:V, reg C_Invtrans:*, reg C_Invtrans1:V, reg G:*, reg G1:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r464:V, reg C_Invtrans4:V, reg G4:V, reg r465:V, reg init46:*, reg init47:V, reg as_double:cls, reg r466:V, reg vargs1:dots, reg r467:V, reg r468:V, reg init48:*, reg init49:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r470:V, reg C_Starma_method:*, reg C_Starma_method1:V, reg G5:*, reg G6:V, reg method9:*, reg method10:V, reg r472:V, reg vargs2:dots, reg r473:V, reg _in_:cls, reg sym60:cls, reg base60:cls, reg guard60:L, reg r474:V, reg r475:V, reg optim_control1:*, reg optim_control2:V, reg names:cls, reg r476:V, reg p42:p(V +), reg r478:V, reg r479:V, reg c249:L, reg parscale2:*, reg parscale3:V, reg c250:L, reg parscale5:V, reg dr114:V, reg dc57:L, reg dx165:V, reg dx166:V, reg mask14:*, reg mask15:V, reg __34:cls, reg r480:V, reg l18:*, reg c251:L, reg dx168:V, reg l20:*, reg dr116:V, reg dc58:L, reg dx170:V, reg dx171:V, reg dx172:V, reg r481:V, reg optim:cls, reg init50:*, reg init51:V, reg c252:L, reg init53:V, reg dr118:V, reg dc59:L, reg dx174:V, reg dx175:V, reg mask16:*, reg mask17:V, reg __35:cls, reg r482:V, reg p43:p(V +), reg arma0f:*, reg arma0f1:V, reg p44:p(V +), reg optim_control3:*, reg optim_control4:V, reg p45:p(V +), reg r486:V, reg res:*, reg res1:V, reg c253:L, reg res3:V, reg dr120:V, reg dc60:L, reg dx176:V, reg dx177:V, reg r487:V, reg r488:V, reg c254:L, reg warning3:cls, reg gettextf:cls, reg code:*, reg code1:V, reg p46:p(V +), reg r490:V, reg p47:p(V +), reg r492:V, reg res4:*, reg res5:V, reg c255:L, reg res7:V, reg dr122:V, reg dc61:L, reg dx178:V, reg dx179:V, reg r494:V, reg transform_pars7:*, reg transform_pars8:V, reg c256:L, reg fixed7:*, reg fixed8:V, reg coef1:*, reg coef2:V, reg l21:*, reg c257:L, reg coef4:V, reg l23:*, reg dr124:V, reg dc62:L, reg dx180:V, reg dx181:V, reg mask18:*, reg mask19:V, reg ___4:cls, reg r495:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r496:V, reg r497:V, reg C_Gradtrans:*, reg C_Gradtrans1:V, reg G7:*, reg G8:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r498:V, reg C_Gradtrans4:V, reg G11:V, reg r499:V, reg cf:*, reg cf1:V, reg as_double1:cls, reg r500:V, reg vargs3:dots, reg r501:V, reg c258:L, reg r503:V, reg dr126:V, reg dc63:L, reg dx182:V, reg dx183:V, reg mask20:*, reg mask21:V, reg mask22:*, reg mask23:V, reg __36:cls, reg r504:V, reg t:cls, reg A:*, reg A1:V, reg p48:p(V +), reg r506:V, reg solve:cls, reg res8:*, reg res9:V, reg c259:L, reg res11:V, reg dr128:V, reg dc64:L, reg dx184:V, reg dx185:V, reg r507:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r508:V, reg dx188:V, reg r509:V, reg x23:*, reg x24:V, reg length8:cls, reg r510:V, reg r511:V, reg p49:p(V +), reg r513:V, reg ___5:cls, reg r514:V, reg A2:*, reg A3:V, reg ___6:cls, reg r515:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r516:V, reg r517:V, reg C_Dotrans:*, reg C_Dotrans1:V, reg G12:*, reg G13:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r518:V, reg C_Dotrans4:V, reg G16:V, reg r519:V, reg cf2:*, reg cf3:V, reg as_double2:cls, reg r520:V, reg vargs4:dots, reg r521:V, reg c260:L, reg r523:V, reg dr130:V, reg dc65:L, reg dx189:V, reg dx190:V, reg mask24:*, reg mask25:V, reg __37:cls, reg r524:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r525:V, reg r526:V, reg C_set_trans:*, reg C_set_trans1:V, reg G17:*, reg G18:V, reg vargs5:dots, reg r527:V, reg solve1:cls, reg res12:*, reg res13:V, reg c261:L, reg res15:V, reg dr132:V, reg dc66:L, reg dx191:V, reg dx192:V, reg r529:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r530:V, reg dx195:V, reg r531:V, reg x25:*, reg x26:V, reg length9:cls, reg r532:V, reg r533:V, reg p50:p(V +), reg r535:V, reg arma0f2:cls, reg coef7:*, reg coef8:V, reg p51:p(V +), reg r537:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r538:V, reg r539:V, reg C_get_s2:*, reg C_get_s3:V, reg G19:*, reg G20:V, reg vargs6:dots, reg r540:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r541:V, reg r542:V, reg C_get_resid:*, reg C_get_resid1:V, reg G21:*, reg G22:V, reg vargs7:dots, reg r543:V, reg xtsp:*, reg xtsp1:V, reg l24:*, reg tsp__1:cls, reg r544:V, reg l25:*, reg class__1:cls, reg r545:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r546:V, reg r547:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r548:V, reg r549:V, reg resid:*, reg resid1:V, reg is_na3:cls, reg r550:V, reg r551:V, reg sum3:cls, reg r552:V, reg arma50:*, reg arma51:V, reg c262:L, reg arma53:V, reg dr134:V, reg dc67:L, reg dx196:V, reg dx197:V, reg __38:cls, reg r553:V, reg r554:V, reg c263:L, reg sym72:cls, reg base72:cls, reg guard72:L, reg r555:V, reg r556:V, reg nm:*, reg nm1:V, reg paste2:cls, reg arma54:*, reg arma55:V, reg c264:L, reg r558:I, reg arma57:V, reg dr136:V, reg dc68:L, reg dx198:V, reg r560:I, reg dx199:V, reg __39:cls, reg r561:V, reg r562:V, reg p52:p(V +), reg r564:V, reg c265:cls, reg r565:V, reg arma58:*, reg arma59:V, reg c266:L, reg arma61:V, reg dr138:V, reg dc69:L, reg dx200:V, reg dx201:V, reg __40:cls, reg r567:V, reg r568:V, reg c267:L, reg sym73:cls, reg base73:cls, reg guard73:L, reg r569:V, reg r570:V, reg nm2:*, reg nm3:V, reg paste3:cls, reg arma62:*, reg arma63:V, reg c268:L, reg r572:I, reg arma65:V, reg dr140:V, reg dc70:L, reg dx202:V, reg r574:I, reg dx203:V, reg __41:cls, reg r575:V, reg r576:V, reg p53:p(V +), reg r578:V, reg c269:cls, reg r579:V, reg arma66:*, reg arma67:V, reg c270:L, reg arma69:V, reg dr142:V, reg dc71:L, reg dx204:V, reg dx205:V, reg __42:cls, reg r581:V, reg r582:V, reg c271:L, reg sym74:cls, reg base74:cls, reg guard74:L, reg r583:V, reg r584:V, reg nm4:*, reg nm5:V, reg paste4:cls, reg arma70:*, reg arma71:V, reg c272:L, reg r586:I, reg arma73:V, reg dr144:V, reg dc72:L, reg dx206:V, reg r588:I, reg dx207:V, reg __43:cls, reg r589:V, reg r590:V, reg p54:p(V +), reg r592:V, reg c273:cls, reg r593:V, reg arma74:*, reg arma75:V, reg c274:L, reg arma77:V, reg dr146:V, reg dc73:L, reg dx208:V, reg dx209:V, reg __44:cls, reg r595:V, reg r596:V, reg c275:L, reg sym75:cls, reg base75:cls, reg guard75:L, reg r597:V, reg r598:V, reg nm6:*, reg nm7:V, reg paste5:cls, reg arma78:*, reg arma79:V, reg c276:L, reg r600:I, reg arma81:V, reg dr148:V, reg dc74:L, reg dx210:V, reg r602:I, reg dx211:V, reg __45:cls, reg r603:V, reg r604:V, reg p55:p(V +), reg r606:V, reg c277:cls, reg r607:V, reg coef9:*, reg coef10:V, reg l26:*, reg c278:L, reg coef12:V, reg l28:*, reg dr150:V, reg dc75:L, reg dx212:V, reg dx213:V, reg mask26:*, reg mask27:V, reg ___7:cls, reg r609:V, reg ncxreg22:*, reg ncxreg23:V, reg r610:V, reg c279:L, reg sym76:cls, reg base76:cls, reg guard76:L, reg r611:V, reg r612:V, reg nm8:*, reg nm9:V, reg cn:*, reg cn1:V, reg c280:cls, reg r613:V, reg orig_xreg2:*, reg orig_xreg3:V, reg r614:V, reg c281:L, reg narma14:*, reg narma15:V, reg ncxreg24:*, reg ncxreg25:V, reg r615:V, reg r616:V, reg S4:*, reg S5:V, reg c282:L, reg S7:V, reg dr152:V, reg dc76:L, reg dx214:V, reg dx215:V, reg r617:V, reg fixed9:*, reg fixed10:V, reg c283:L, reg fixed12:V, reg dr154:V, reg dc77:L, reg dx216:V, reg dx217:V, reg ind12:*, reg ind13:V, reg __46:cls, reg r618:V, reg ___8:cls, reg r619:V, reg l29:*, reg c284:L, reg r621:V, reg l31:*, reg dr156:V, reg dc78:L, reg dx218:V, reg dx219:V, reg ind14:*, reg ind15:V, reg ___9:cls, reg r624:V, reg diag:cls, reg narma16:*, reg narma17:V, reg ncxreg26:*, reg ncxreg27:V, reg r625:V, reg p56:p(V +), reg r627:V, reg S8:*, reg S9:V, reg c285:L, reg S11:V, reg dr158:V, reg dc79:L, reg dx220:V, reg dx221:V, reg r628:V, reg l32:*, reg c286:L, reg dx223:V, reg l34:*, reg dr160:V, reg dc80:L, reg dx225:V, reg dx227:V, reg ind16:*, reg ind17:V, reg ind18:*, reg ind19:V, reg ___10:cls, reg r629:V, reg A4:*, reg A5:V, reg c287:L, reg A7:V, reg dr162:V, reg dc81:L, reg dx228:V, reg dx229:V, reg mask28:*, reg mask29:V, reg mask30:*, reg mask31:V, reg __47:cls, reg r630:V, reg A8:*, reg A9:V, reg var:*, reg var1:V, reg ___11:cls, reg r631:V, reg t1:cls, reg A10:*, reg A11:V, reg p57:p(V +), reg r633:V, reg ___12:cls, reg r634:V, reg r635:V, reg nm10:*, reg nm11:V, reg l35:*, reg names__:cls, reg r637:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r638:V, reg r639:V, reg c288:cls, reg r640:V, reg l36:*, reg names__1:cls, reg r641:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r642:V, reg r643:V, reg nm12:*, reg nm13:V, reg c289:L, reg nm15:V, reg dr164:V, reg dc82:L, reg dx230:V, reg dx231:V, reg mask32:*, reg mask33:V, reg __48:cls, reg r644:V, reg nm16:*, reg nm17:V, reg c290:L, reg nm19:V, reg dr166:V, reg dc83:L, reg dx232:V, reg dx233:V, reg mask34:*, reg mask35:V, reg __49:cls, reg r645:V, reg list3:cls, reg r646:V, reg l37:*, reg dimnames__:cls, reg r647:V, reg n_used6:*, reg n_used7:V, reg r648:V, reg res16:*, reg res17:V, reg c291:L, reg r650:V, reg res19:V, reg dr168:V, reg dc84:L, reg dx234:V, reg r652:V, reg dx235:V, reg r653:V, reg r654:V, reg n_used8:*, reg n_used9:V, reg r655:V, reg n_used10:*, reg n_used11:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r658:V, reg r659:V, reg n_used14:V, reg r660:V, reg r661:V, reg r662:V, reg r663:V, reg method11:*, reg method12:V, reg r664:V, reg c292:L, reg value:*, reg value1:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r667:V, reg value4:V, reg r668:R, reg r669:V, reg coef15:*, reg coef16:V, reg length10:cls, reg r670:V, reg r671:V, reg r672:V, reg r673:V, reg r674:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r675:V, reg r676:V, reg fixed13:*, reg fixed14:V, reg sigma2:*, reg sigma3:V, reg var2:*, reg var3:V, reg mask36:*, reg mask37:V, reg value5:*, reg value6:V, reg r677:V, reg aic:*, reg aic1:V, reg arma82:*, reg arma83:V, reg resid2:*, reg resid3:V, reg match_call:cls, reg r678:V, reg series:*, reg series1:V, reg code2:*, reg code3:V, reg ncond13:*, reg ncond14:V, reg list4:cls, reg r679:V, reg l38:*, reg class__2:cls, reg r680:V, reg res20:*, reg res21:V |
    mkenv;
    st x = x;
    order_isMissing = missing.0(order);
    if order_isMissing then L0() else L1(order);
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
      r2 = dyn c(0.0, 0.0, 0.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 0.0, 0.0);
      goto L0(r);
    };
    goto L1(p);
  L1(order_orDefault):
    st order = order_orDefault;
    seasonal_isMissing = missing.0(seasonal);
    if seasonal_isMissing then L2() else L3(seasonal);
  L2():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r4 = dyn base1[order, period](<lang c(0.0, 0.0, 0.0)>, NA_LGL);
      goto L0(r4);
    L1(r7):
      list = ldf list in base;
      r9 = dyn list(r7, NA_LGL);
      goto L0(r9);
    L4():
      c1 = ldf c in base;
      r8 = dyn c1(0.0, 0.0, 0.0);
      goto L1(r8);
    L5():
      r6 = dyn base2(0.0, 0.0, 0.0);
      goto L1(r6);
    };
    goto L3(p1);
  L3(seasonal_orDefault):
    st seasonal = seasonal_orDefault;
    xreg_isMissing = missing.0(xreg);
    if xreg_isMissing then L4(NULL) else L4(xreg);
  L4(xreg_orDefault):
    st xreg = xreg_orDefault;
    include_mean_isMissing = missing.0(include_mean);
    if include_mean_isMissing then L5(TRUE) else L5(include_mean);
  L5(include_mean_orDefault):
    st `include.mean` = include_mean_orDefault;
    delta_isMissing = missing.0(delta);
    if delta_isMissing then L6(0.01) else L6(delta);
  L6(delta_orDefault):
    st delta = delta_orDefault;
    transform_pars_isMissing = missing.0(transform_pars);
    if transform_pars_isMissing then L7(TRUE) else L7(transform_pars);
  L7(transform_pars_orDefault):
    st `transform.pars` = transform_pars_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L8(NULL) else L8(fixed);
  L8(fixed_orDefault):
    st fixed = fixed_orDefault;
    init_isMissing = missing.0(init);
    if init_isMissing then L9(NULL) else L9(init);
  L9(init_orDefault):
    st init = init_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L10() else L11(method);
  L10():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("ML", "CSS");
      goto L0(r13);
    L2():
      r11 = dyn base3("ML", "CSS");
      goto L0(r11);
    };
    goto L11(p2);
  L11(method_orDefault):
    st method = method_orDefault;
    st `n.cond` = n_cond;
    optim_control_isMissing = missing.0(optim_control);
    if optim_control_isMissing then L12() else L13(optim_control);
  L12():
    p3 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      list1 = ldf list in base;
      r17 = dyn list1();
      goto L0(r17);
    L2():
      r15 = dyn base4();
      goto L0(r15);
    };
    goto L13(p3);
  L13(optim_control_orDefault):
    st `optim.control` = optim_control_orDefault;
    r19 = clos inner3913899244;
    st arma0f = r19;
    r20 = clos inner619691793;
    st arCheck = r20;
    r21 = clos inner223529780;
    st maInvert = r21;
    deparse1 = ldf deparse1;
    check L248() else D0();
  D0():
    deopt 10 [];
  L248():
    p4 = prom<V +>{
      sym5 = ldf substitute;
      base5 = ldf substitute in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      substitute = ldf substitute in base;
      r24 = dyn substitute(<sym x>);
      goto L0(r24);
    L2():
      r22 = dyn base5(<sym x>);
      goto L0(r22);
    };
    r26 = dyn deparse1(p4);
    check L249() else D1();
  D1():
    deopt 12 [r26];
  L249():
    st series = r26;
    NCOL = ldf NCOL;
    check L250() else D2();
  D2():
    deopt 15 [];
  L250():
    p5 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r28 = dyn NCOL(p5);
    check L251() else D3();
  D3():
    deopt 17 [r28];
  L251():
    r29 = `>`(r28, 1.0);
    c3 = `as.logical`(r29);
    if c3 then L252() else L14();
  L14():
    goto L15();
  L15():
    match_arg = ldf `match.arg`;
    check L256() else D6();
  L252():
    stop = ldf stop;
    check L253() else D4();
  D4():
    deopt 21 [];
  D6():
    deopt 27 [];
  L253():
    r30 = dyn stop("only implemented for univariate time series");
    check L254() else D5();
  L256():
    p6 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r33 = dyn match_arg(p6);
    check L257() else D7();
  D5():
    deopt 23 [r30];
  D7():
    deopt 29 [r33];
  L254():
    goto L15();
  L257():
    st method = r33;
    as_ts = ldf `as.ts`;
    check L258() else D8();
  D8():
    deopt 32 [];
  L258():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r35 = dyn as_ts(p7);
    check L259() else D9();
  D9():
    deopt 34 [r35];
  L259():
    st x = r35;
    sym6 = ldf `is.numeric`;
    base6 = ldf `is.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L260() else L261();
  L16(r37):
    r39 = `!`(r37);
    c4 = `as.logical`(r39);
    if c4 then L264() else L17();
  L260():
    x5 = ld x;
    check L262() else D10();
  L261():
    r36 = dyn base6(<sym x>);
    goto L16(r36);
  D10():
    deopt 38 [x5];
  L17():
    goto L18();
  L18():
    l = ld x;
    dim__ = ldf `dim<-`;
    check L268() else D14();
  L262():
    x6 = force? x5;
    checkMissing(x6);
    is_numeric = ldf `is.numeric` in base;
    r38 = dyn is_numeric(x6);
    check L263() else D11();
  L264():
    stop1 = ldf stop;
    check L265() else D12();
  D11():
    deopt 41 [r38];
  D12():
    deopt 44 [];
  D14():
    deopt 52 [NULL, l, NULL];
  L263():
    goto L16(r38);
  L265():
    r40 = dyn stop1("'x' must be numeric");
    check L266() else D13();
  L268():
    r42 = dyn dim__(l, NULL, NULL);
    check L269() else D15();
  D13():
    deopt 46 [r40];
  D15():
    deopt 54 [NULL, r42];
  L266():
    goto L18();
  L269():
    st x = r42;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L270() else L271();
  L19(r44):
    st n = r44;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L274() else L275();
  L270():
    x7 = ld x;
    check L272() else D16();
  L271():
    r43 = dyn base7(<sym x>);
    goto L19(r43);
  D16():
    deopt 58 [x7];
  L20(r47):
    r49 = `!`(r47);
    c5 = `as.logical`(r49);
    if c5 then L276() else L21();
  L272():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r45 = dyn length(x8);
    check L273() else D17();
  L274():
    missing = ldf missing in base;
    r48 = dyn missing(<sym order>);
    goto L20(r48);
  L275():
    r46 = dyn base8(<sym order>);
    goto L20(r46);
  D17():
    deopt 61 [r45];
  L21():
    goto L29();
  L29():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L298() else L299();
  L273():
    goto L19(r45);
  L276():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L277() else L278();
  L22(r51):
    r53 = `!`(r51);
    c6 = `as.logical`(r53);
    if c6 then L23(c6) else L281();
  L30(r66):
    r68 = `!`(r66);
    c25 = `as.logical`(r68);
    if c25 then L300() else L31();
  L277():
    order1 = ld order;
    check L279() else D18();
  L278():
    r50 = dyn base9(<sym order>);
    goto L22(r50);
  L298():
    missing1 = ldf missing in base;
    r67 = dyn missing1(<sym seasonal>);
    goto L30(r67);
  L299():
    r65 = dyn base12(<sym seasonal>);
    goto L30(r65);
  D18():
    deopt 69 [order1];
  L23(c7):
    c15 = `as.logical`(c7);
    if c15 then L25(c15) else L287();
  L31():
    goto L51();
  L51():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L369() else L370();
  L279():
    order2 = force? order1;
    checkMissing(order2);
    is_numeric1 = ldf `is.numeric` in base;
    r52 = dyn is_numeric1(order2);
    check L280() else D19();
  L281():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L282() else L283();
  L300():
    sym13 = ldf `is.list`;
    base13 = ldf `is.list` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L301() else L302();
  D19():
    deopt 72 [r52];
  L24(c11, r55):
    r57 = `!=`(r55, 3);
    c12 = `as.logical`(r57);
    c13 = `||`(c11, c12);
    goto L23(c13);
  L25(c16):
    c24 = `as.logical`(c16);
    if c24 then L293() else L27();
  L32(r70):
    c26 = `as.logical`(r70);
    if c26 then L305() else L33();
  L52(r109):
    c64 = `as.logical`(r109);
    if c64 then L53(c64) else L376();
  L280():
    goto L22(r52);
  L282():
    order3 = ld order;
    check L284() else D20();
  L283():
    r54 = dyn base10(<sym order>);
    goto L24(c6, r54);
  L287():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L288() else L289();
  L301():
    seasonal1 = ld seasonal;
    check L303() else D26();
  L302():
    r69 = dyn base13(<sym seasonal>);
    goto L32(r69);
  L369():
    seasonal21 = ld seasonal;
    check L371() else D47();
  L370():
    r108 = dyn base21(<lang `$`(seasonal, period)>);
    goto L52(r108);
  D20():
    deopt 76 [c6, order3];
  D26():
    deopt 106 [seasonal1];
  D47():
    deopt 186 [seasonal21];
  L26(c20, r59):
    c21 = `as.logical`(r59);
    c22 = `||`(c20, c21);
    goto L25(c22);
  L27():
    goto L28(NULL);
  L28(r63):
    goto L29();
  L33():
    sym18 = ldf `is.numeric`;
    base18 = ldf `is.numeric` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L350() else L351();
  L44(r94):
    goto L51();
  L53(c65):
    c78 = `as.logical`(c65);
    if c78 then L55(c78) else L386();
  L284():
    order4 = force? order3;
    checkMissing(order4);
    length1 = ldf length in base;
    r56 = dyn length1(order4);
    check L285() else D21();
  L288():
    order5 = ld order;
    check L290() else D22();
  L289():
    r58 = dyn base11(<lang `<`(order, 0.0)>);
    goto L26(c15, r58);
  L293():
    stop2 = ldf stop;
    check L294() else D24();
  L303():
    seasonal2 = force? seasonal1;
    checkMissing(seasonal2);
    is_list = ldf `is.list` in base;
    r71 = dyn is_list(seasonal2);
    check L304() else D27();
  L305():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L306() else L307();
  L371():
    seasonal22 = force? seasonal21;
    checkMissing(seasonal22);
    c62 = `is.object`(seasonal22);
    if c62 then L373() else L374(seasonal22);
  L376():
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L377() else L378();
  D21():
    deopt 79 [c6, r56];
  D22():
    deopt 85 [c15, order5];
  D24():
    deopt 93 [];
  D27():
    deopt 109 [r71];
  L34(r73):
    c29 = `as.logical`(r73);
    if c29 then L313() else L35();
  L45(r96):
    c60 = `as.logical`(r96);
    if c60 then L354() else L46();
  L54(c69, r112):
    c75 = `as.logical`(r112);
    c76 = `||`(c69, c75);
    goto L53(c76);
  L55(c79):
    c89 = `as.logical`(c79);
    if c89 then L393() else L56();
  L285():
    goto L24(c6, r56);
  L290():
    order6 = force? order5;
    checkMissing(order6);
    r60 = `<`(order6, 0.0);
    any = ldf any in base;
    r61 = dyn any(r60);
    check L291() else D23();
  L294():
    r62 = dyn stop2("'order' must be a non-negative numeric vector of length 3");
    check L295() else D25();
  L304():
    goto L32(r71);
  L306():
    seasonal3 = ld seasonal;
    check L308() else D28();
  L307():
    r72 = dyn base14(<lang `$`(seasonal, order)>);
    goto L34(r72);
  L350():
    order7 = ld order;
    check L352() else D39();
  L351():
    r95 = dyn base18(<sym order>);
    goto L45(r95);
  L372(dx9):
    c63 = `==`(dx9, NULL);
    goto L52(c63);
  L373():
    dr8 = tryDispatchBuiltin.1("$", seasonal22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L375() else L374(dr8);
  L374(seasonal24):
    r110 = `$`(seasonal24, <sym period>);
    goto L372(r110);
  L377():
    seasonal25 = ld seasonal;
    check L379() else D48();
  L378():
    r111 = dyn base22(<lang `$`(seasonal, period)>);
    goto L54(c64, r111);
  L386():
    seasonal29 = ld seasonal;
    check L387() else D50();
  D23():
    deopt 90 [c15, r61];
  D25():
    deopt 95 [r62];
  D28():
    deopt 111 [seasonal3];
  D39():
    deopt 157 [order7];
  D48():
    deopt 192 [c64, seasonal25];
  D50():
    deopt 198 [c78, seasonal29];
  L35():
    goto L36();
  L36():
    sym15 = ldf `is.numeric`;
    base15 = ldf `is.numeric` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L317() else L318();
  L46():
    stop5 = ldf stop;
    check L366() else D45();
  L56():
    goto L57();
  L57():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L401() else L402();
  L291():
    goto L26(c15, r61);
  L295():
    goto L28(r62);
  L308():
    seasonal4 = force? seasonal3;
    checkMissing(seasonal4);
    c27 = `is.object`(seasonal4);
    if c27 then L310() else L311(seasonal4);
  L313():
    stop3 = ldf stop;
    check L314() else D29();
  L352():
    order8 = force? order7;
    checkMissing(order8);
    is_numeric3 = ldf `is.numeric` in base;
    r97 = dyn is_numeric3(order8);
    check L353() else D40();
  L354():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L355() else L356();
  L375():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L372(dx8);
  L379():
    seasonal26 = force? seasonal25;
    checkMissing(seasonal26);
    c70 = `is.object`(seasonal26);
    if c70 then L381() else L382(c64, seasonal26);
  L387():
    seasonal30 = force? seasonal29;
    checkMissing(seasonal30);
    c81 = `is.object`(seasonal30);
    if c81 then L389() else L390(c78, seasonal30);
  L393():
    frequency = ldf frequency;
    check L394() else D51();
  D29():
    deopt 116 [];
  D40():
    deopt 160 [r97];
  D45():
    deopt 180 [];
  D51():
    deopt 205 [];
  L37(r78):
    r81 = `!`(r78);
    c31 = `as.logical`(r81);
    if c31 then L38(c31) else L325();
  L47(r99):
    r101 = `==`(r99, 3.0);
    c61 = `as.logical`(r101);
    if c61 then L359() else L48();
  L58(r126):
    st arma = r126;
    sym24 = ldf sum;
    base24 = ldf sum in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L433() else L434();
  L309(dx1):
    c28 = `==`(dx1, NULL);
    goto L34(c28);
  L310():
    dr = tryDispatchBuiltin.1("$", seasonal4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L312() else L311(dr);
  L311(seasonal6):
    r74 = `$`(seasonal6, <sym order>);
    goto L309(r74);
  L314():
    r75 = dyn stop3("'seasonal' must be a list with component 'order'");
    check L315() else D30();
  L317():
    seasonal7 = ld seasonal;
    check L319() else D31();
  L318():
    r77 = dyn base15(<lang `$`(seasonal, order)>);
    goto L37(r77);
  L353():
    goto L45(r97);
  L355():
    order9 = ld order;
    check L357() else D41();
  L356():
    r98 = dyn base19(<sym order>);
    goto L47(r98);
  L366():
    r106 = dyn stop5("'seasonal' must be a list with component 'order'");
    check L367() else D46();
  L380(c74, dx11):
    is_na = ldf `is.na` in base;
    r114 = dyn is_na(dx11);
    check L384() else D49();
  L381():
    dr10 = tryDispatchBuiltin.1("$", seasonal26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L383() else L382(c64, dr10);
  L382(c72, seasonal28):
    r113 = `$`(seasonal28, <sym period>);
    goto L380(c72, r113);
  L388(c85, dx13):
    r116 = `==`(dx13, 0.0);
    c86 = `as.logical`(r116);
    c87 = `||`(c85, c86);
    goto L55(c87);
  L389():
    dr12 = tryDispatchBuiltin.1("$", seasonal30);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L391() else L390(c78, dr12);
  L390(c83, seasonal32):
    r115 = `$`(seasonal32, <sym period>);
    goto L388(c83, r115);
  L394():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r118 = dyn frequency(p8);
    check L395() else D52();
  L401():
    order11 = ld order;
    check L403() else D53();
  L402():
    r125 = dyn base23(<lang `[`(order, `-`(2))>, <lang `[`(`$`(seasonal, order), `-`(2))>, <lang `$`(seasonal, period)>, <lang `[`(order, 2)>, <lang `[`(`$`(seasonal, order), 2)>);
    goto L58(r125);
  D30():
    deopt 118 [r75];
  D31():
    deopt 123 [seasonal7];
  D41():
    deopt 163 [order9];
  D46():
    deopt 182 [r106];
  D49():
    deopt 196 [c74, r114];
  D52():
    deopt 207 [r118];
  D53():
    deopt 215 [order11];
  L38(c32):
    c45 = `as.logical`(c32);
    if c45 then L40(c45) else L335();
  L48():
    goto L50("'seasonal' is of the wrong length");
  L50(r105):
    goto L44(r105);
  L63(r136):
    st narma = r136;
    order19 = ld order;
    check L440() else D61();
  L312():
    dx = getTryDispatchBuiltinValue(dr);
    goto L309(dx);
  L315():
    goto L36();
  L319():
    seasonal8 = force? seasonal7;
    checkMissing(seasonal8);
    c30 = `is.object`(seasonal8);
    if c30 then L321() else L322(seasonal8);
  L325():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L326() else L327();
  L357():
    order10 = force? order9;
    checkMissing(order10);
    length3 = ldf length in base;
    r100 = dyn length3(order10);
    check L358() else D42();
  L359():
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L360() else L361();
  L367():
    goto L44(r106);
  L383():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L380(c64, dx10);
  L384():
    goto L54(c74, r114);
  L391():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L388(c78, dx12);
  L395():
    l1 = ld seasonal;
    c90 = `is.object`(l1);
    if c90 then L397() else L398(r118, l1);
  L403():
    order12 = force? order11;
    checkMissing(order12);
    c91 = `is.object`(order12);
    if c91 then L404() else L405(order12);
  L433():
    arma = ld arma;
    check L435() else D59();
  L434():
    r135 = dyn base24(<lang `[`(arma, `:`(1, 4))>);
    goto L63(r135);
  D42():
    deopt 166 [r100];
  D59():
    deopt 245 [arma];
  D61():
    deopt 253 [order19];
  L39(c36, r83):
    r86 = `!=`(r83, 3);
    c42 = `as.logical`(r86);
    c43 = `||`(c36, c42);
    goto L38(c43);
  L40(c46):
    c59 = `as.logical`(c46);
    if c59 then L345() else L42();
  L49(r103):
    st seasonal = r103;
    goto L50(r103);
  L59(dx17):
    seasonal33 = ld seasonal;
    check L407() else D54();
  L320(dx3):
    is_numeric2 = ldf `is.numeric` in base;
    r80 = dyn is_numeric2(dx3);
    check L324() else D32();
  L321():
    dr2 = tryDispatchBuiltin.1("$", seasonal8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L323() else L322(dr2);
  L322(seasonal10):
    r79 = `$`(seasonal10, <sym order>);
    goto L320(r79);
  L326():
    seasonal11 = ld seasonal;
    check L328() else D33();
  L327():
    r82 = dyn base16(<lang `$`(seasonal, order)>);
    goto L39(c31, r82);
  L335():
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L336() else L337();
  L358():
    goto L47(r100);
  L360():
    seasonal19 = ld seasonal;
    check L362() else D43();
  L361():
    r102 = dyn base20[order](<sym seasonal>);
    goto L49(r102);
  L396(r122, dx15):
    st seasonal = dx15;
    goto L57();
  L397():
    dr14 = tryDispatchBuiltin.0("$<-", l1, r118);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L399() else L398(r118, dr14);
  L398(r120, l3):
    r123 = `$<-`(l3, <sym period>, r118);
    goto L396(r120, r123);
  L404():
    dr16 = tryDispatchBuiltin.1("[", order12);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L406() else L405(dr16);
  L405(order14):
    __ = ldf `[` in base;
    r127 = dyn __(order14, -2);
    goto L59(r127);
  L435():
    arma1 = force? arma;
    checkMissing(arma1);
    c99 = `is.object`(arma1);
    if c99 then L436() else L437(arma1);
  L440():
    order20 = force? order19;
    checkMissing(order20);
    c100 = `is.object`(order20);
    if c100 then L441() else L442(order20);
  D32():
    deopt 127 [r80];
  D33():
    deopt 131 [c31, seasonal11];
  D43():
    deopt 171 [seasonal19];
  D54():
    deopt 220 [seasonal33];
  L41(c50, r88):
    c56 = `as.logical`(r88);
    c57 = `||`(c50, c56);
    goto L40(c57);
  L42():
    goto L43(NULL);
  L43(r93):
    goto L44(r93);
  L64(dx35):
    sum = ldf sum in base;
    r138 = dyn sum(dx35);
    check L439() else D60();
  L65(dx37):
    st d = dx37;
    c101 = `as.logical`(dx37);
    if c101 then L444() else L66();
  L323():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L320(dx2);
  L324():
    goto L37(r80);
  L328():
    seasonal12 = force? seasonal11;
    checkMissing(seasonal12);
    c37 = `is.object`(seasonal12);
    if c37 then L330() else L331(c31, seasonal12);
  L336():
    seasonal15 = ld seasonal;
    check L338() else D35();
  L337():
    r87 = dyn base17(<lang `<`(`$`(seasonal, order), 0.0)>);
    goto L41(c45, r87);
  L345():
    stop4 = ldf stop;
    check L346() else D37();
  L362():
    seasonal20 = force? seasonal19;
    checkMissing(seasonal20);
    list2 = ldf list in base;
    r104 = dyn list2(seasonal20);
    check L363() else D44();
  L399():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L396(r118, dx14);
  L406():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L59(dx16);
  L407():
    seasonal34 = force? seasonal33;
    checkMissing(seasonal34);
    c92 = `is.object`(seasonal34);
    if c92 then L409() else L410(seasonal34);
  L436():
    dr30 = tryDispatchBuiltin.1("[", arma1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L438() else L437(dr30);
  L437(arma3):
    __4 = ldf `[` in base;
    r137 = dyn __4(arma3, <int 1, 2, 3, 4>);
    goto L64(r137);
  L441():
    dr32 = tryDispatchBuiltin.1("[", order20);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L443() else L442(dr32);
  L442(order22):
    __5 = ldf `[` in base;
    r139 = dyn __5(order22, 2);
    goto L65(r139);
  D35():
    deopt 141 [c45, seasonal15];
  D37():
    deopt 150 [];
  D44():
    deopt 175 [r104];
  D60():
    deopt 251 [r138];
  L66():
    goto L67();
  L67():
    seasonal45 = ld seasonal;
    check L448() else D64();
  L329(c41, dx5):
    length2 = ldf length in base;
    r85 = dyn length2(dx5);
    check L333() else D34();
  L330():
    dr4 = tryDispatchBuiltin.1("$", seasonal12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L332() else L331(c31, dr4);
  L331(c39, seasonal14):
    r84 = `$`(seasonal14, <sym order>);
    goto L329(c39, r84);
  L338():
    seasonal16 = force? seasonal15;
    checkMissing(seasonal16);
    c51 = `is.object`(seasonal16);
    if c51 then L340() else L341(c45, seasonal16);
  L346():
    r92 = dyn stop4("'seasonal$order' must be a non-negative numeric vector of length 3");
    check L347() else D38();
  L363():
    goto L49(r104);
  L408(dx19):
    c93 = `is.object`(dx19);
    if c93 then L412() else L413(dx19);
  L409():
    dr18 = tryDispatchBuiltin.1("$", seasonal34);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L411() else L410(dr18);
  L410(seasonal36):
    r128 = `$`(seasonal36, <sym order>);
    goto L408(r128);
  L438():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L64(dx34);
  L439():
    goto L63(r138);
  L443():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L65(dx36);
  L444():
    diff = ldf diff;
    check L445() else D62();
  D34():
    deopt 135 [c41, r85];
  D38():
    deopt 152 [r92];
  D62():
    deopt 260 [];
  D64():
    deopt 268 [seasonal45];
  L60(dx23):
    seasonal37 = ld seasonal;
    check L415() else D55();
  L332():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L329(c31, dx4);
  L333():
    goto L39(c41, r85);
  L339(c55, dx7):
    r90 = `<`(dx7, 0.0);
    any1 = ldf any in base;
    r91 = dyn any1(r90);
    check L343() else D36();
  L340():
    dr6 = tryDispatchBuiltin.1("$", seasonal16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L342() else L341(c45, dr6);
  L341(c53, seasonal18):
    r89 = `$`(seasonal18, <sym order>);
    goto L339(c53, r89);
  L347():
    goto L43(r92);
  L411():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L408(dx18);
  L412():
    dr20 = tryDispatchBuiltin.1("[", dx19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L414() else L413(dr20);
  L413(dx21):
    __1 = ldf `[` in base;
    r129 = dyn __1(dx21, -2);
    goto L60(r129);
  L445():
    p9 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p10 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r142 = dyn diff(p9, 1.0, p10);
    check L446() else D63();
  L448():
    seasonal46 = force? seasonal45;
    checkMissing(seasonal46);
    c102 = `is.object`(seasonal46);
    if c102 then L450() else L451(seasonal46);
  D36():
    deopt 147 [c55, r91];
  D55():
    deopt 226 [seasonal37];
  D63():
    deopt 264 [r142];
  L342():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L339(c45, dx6);
  L343():
    goto L41(c55, r91);
  L414():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L60(dx22);
  L415():
    seasonal38 = force? seasonal37;
    checkMissing(seasonal38);
    c94 = `is.object`(seasonal38);
    if c94 then L417() else L418(seasonal38);
  L446():
    st x = r142;
    goto L67();
  L449(dx39):
    c103 = `is.object`(dx39);
    if c103 then L453() else L454(dx39);
  L450():
    dr34 = tryDispatchBuiltin.1("$", seasonal46);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L452() else L451(dr34);
  L451(seasonal48):
    r144 = `$`(seasonal48, <sym order>);
    goto L449(r144);
  L68(dx43):
    st d = dx43;
    c104 = `as.logical`(dx43);
    if c104 then L456() else L69();
  L416(dx25):
    order15 = ld order;
    check L420() else D56();
  L417():
    dr22 = tryDispatchBuiltin.1("$", seasonal38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L419() else L418(dr22);
  L418(seasonal40):
    r130 = `$`(seasonal40, <sym period>);
    goto L416(r130);
  L452():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L449(dx38);
  L453():
    dr36 = tryDispatchBuiltin.1("[", dx39);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L455() else L454(dr36);
  L454(dx41):
    __6 = ldf `[` in base;
    r145 = dyn __6(dx41, 2);
    goto L68(r145);
  D56():
    deopt 229 [order15];
  L69():
    goto L70();
  L70():
    tsp = ldf tsp;
    check L460() else D67();
  L419():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L416(dx24);
  L420():
    order16 = force? order15;
    checkMissing(order16);
    c95 = `is.object`(order16);
    if c95 then L421() else L422(order16);
  L455():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L68(dx42);
  L456():
    diff1 = ldf diff;
    check L457() else D65();
  D65():
    deopt 276 [];
  D67():
    deopt 285 [];
  L61(dx27):
    seasonal41 = ld seasonal;
    check L424() else D57();
  L421():
    dr24 = tryDispatchBuiltin.1("[", order16);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L423() else L422(dr24);
  L422(order18):
    __2 = ldf `[` in base;
    r131 = dyn __2(order18, 2);
    goto L61(r131);
  L457():
    p11 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p12 = prom<V +>{
      seasonal49 = ld seasonal;
      seasonal50 = force? seasonal49;
      checkMissing(seasonal50);
      c105 = `is.object`(seasonal50);
      if c105 then L1() else L2(seasonal50);
    L0(dx45):
      return dx45;
    L1():
      dr38 = tryDispatchBuiltin.1("$", seasonal50);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(seasonal52):
      r147 = `$`(seasonal52, <sym period>);
      goto L0(r147);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx44);
    };
    p13 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r150 = dyn diff1(p11, p12, p13);
    check L458() else D66();
  L460():
    p14 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r153 = dyn tsp(p14);
    check L461() else D68();
  D57():
    deopt 234 [seasonal41];
  D66():
    deopt 280 [r150];
  D68():
    deopt 287 [r153];
  L423():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L61(dx26);
  L424():
    seasonal42 = force? seasonal41;
    checkMissing(seasonal42);
    c96 = `is.object`(seasonal42);
    if c96 then L426() else L427(seasonal42);
  L458():
    st x = r150;
    goto L70();
  L461():
    st xtsp = r153;
    l4 = ld x;
    tsp__ = ldf `tsp<-`;
    check L462() else D69();
  D69():
    deopt 292 [NULL, l4, NULL];
  L425(dx29):
    c97 = `is.object`(dx29);
    if c97 then L429() else L430(dx29);
  L426():
    dr26 = tryDispatchBuiltin.1("$", seasonal42);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L428() else L427(dr26);
  L427(seasonal44):
    r132 = `$`(seasonal44, <sym order>);
    goto L425(r132);
  L462():
    r154 = dyn tsp__(l4, NULL, NULL);
    check L463() else D70();
  D70():
    deopt 294 [NULL, r154];
  L62(dx33):
    c98 = ldf c in base;
    r134 = dyn c98(dx17, dx23, dx25, dx27, dx33);
    check L432() else D58();
  L428():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L425(dx28);
  L429():
    dr28 = tryDispatchBuiltin.1("[", dx29);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L431() else L430(dr28);
  L430(dx31):
    __3 = ldf `[` in base;
    r133 = dyn __3(dx31, 2);
    goto L62(r133);
  L463():
    st x = r154;
    order23 = ld order;
    check L464() else D71();
  D58():
    deopt 241 [r134];
  D71():
    deopt 296 [order23];
  L431():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L62(dx32);
  L432():
    goto L58(r134);
  L464():
    order24 = force? order23;
    checkMissing(order24);
    c106 = `is.object`(order24);
    if c106 then L465() else L466(order24);
  L71(dx47):
    seasonal53 = ld seasonal;
    check L468() else D72();
  L465():
    dr40 = tryDispatchBuiltin.1("[", order24);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L467() else L466(dr40);
  L466(order26):
    __7 = ldf `[` in base;
    r155 = dyn __7(order26, 2);
    goto L71(r155);
  D72():
    deopt 300 [dx47, seasonal53];
  L467():
    dx46 = getTryDispatchBuiltinValue(dr40);
    goto L71(dx46);
  L468():
    seasonal54 = force? seasonal53;
    checkMissing(seasonal54);
    c107 = `is.object`(seasonal54);
    if c107 then L470() else L471(dx47, seasonal54);
  L469(dx52, dx53):
    c108 = `is.object`(dx53);
    if c108 then L473() else L474(dx52, dx53);
  L470():
    dr42 = tryDispatchBuiltin.1("$", seasonal54);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L472() else L471(dx47, dr42);
  L471(dx49, seasonal56):
    r156 = `$`(seasonal56, <sym order>);
    goto L469(dx49, r156);
  L72(dx60, dx61):
    r158 = `+`(dx60, dx61);
    st nd = r158;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L476() else L477();
  L472():
    dx51 = getTryDispatchBuiltinValue(dr42);
    goto L469(dx47, dx51);
  L473():
    dr44 = tryDispatchBuiltin.1("[", dx53);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L475() else L474(dx52, dr44);
  L474(dx56, dx57):
    __8 = ldf `[` in base;
    r157 = dyn __8(dx57, 2);
    goto L72(dx56, r157);
  L73(r160):
    st `n.used` = r160;
    n = ld n;
    check L480() else D75();
  L475():
    dx59 = getTryDispatchBuiltinValue(dr44);
    goto L72(dx52, dx59);
  L476():
    x17 = ld x;
    check L478() else D73();
  L477():
    r159 = dyn base25(<sym x>);
    goto L73(r159);
  D73():
    deopt 310 [x17];
  D75():
    deopt 315 [n];
  L478():
    x18 = force? x17;
    checkMissing(x18);
    length4 = ldf length in base;
    r161 = dyn length4(x18);
    check L479() else D74();
  L480():
    n1 = force? n;
    checkMissing(n1);
    n_used = ld `n.used`;
    check L481() else D76();
  D74():
    deopt 313 [r161];
  D76():
    deopt 316 [n1, n_used];
  L479():
    goto L73(r161);
  L481():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    r162 = `-`(n1, n_used1);
    st ncond = r162;
    method3 = ld method;
    check L482() else D77();
  D77():
    deopt 320 [method3];
  L482():
    method4 = force? method3;
    checkMissing(method4);
    r163 = `==`(method4, "CSS");
    c109 = `as.logical`(r163);
    if c109 then L483() else L74();
  L74():
    goto L81();
  L81():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L514() else L515();
  L483():
    order27 = ld order;
    check L484() else D78();
  D78():
    deopt 324 [order27];
  L82(r182):
    c116 = `as.logical`(r182);
    if c116 then L517() else L83();
  L484():
    order28 = force? order27;
    checkMissing(order28);
    c110 = `is.object`(order28);
    if c110 then L485() else L486(order28);
  L514():
    xreg1 = ld xreg;
    check L516() else D87();
  L515():
    r181 = dyn base28(<sym xreg>);
    goto L82(r181);
  D87():
    deopt 361 [xreg1];
  L75(dx63):
    seasonal57 = ld seasonal;
    check L488() else D79();
  L83():
    NROW = ldf NROW;
    check L519() else D88();
  L84():
    l5 = ld xreg;
    class__ = ldf `class<-`;
    check L528() else D95();
  L485():
    dr46 = tryDispatchBuiltin.1("[", order28);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L487() else L486(dr46);
  L486(order30):
    __9 = ldf `[` in base;
    r164 = dyn __9(order30, 1);
    goto L75(r164);
  L516():
    xreg2 = force? xreg1;
    checkMissing(xreg2);
    c115 = `==`(xreg2, NULL);
    goto L82(c115);
  L517():
    st ncxreg = 0.0;
    goto L84();
  D79():
    deopt 328 [dx63, seasonal57];
  D88():
    deopt 368 [];
  D95():
    deopt 387 [NULL, l5, NULL];
  L487():
    dx62 = getTryDispatchBuiltinValue(dr46);
    goto L75(dx62);
  L488():
    seasonal58 = force? seasonal57;
    checkMissing(seasonal58);
    c111 = `is.object`(seasonal58);
    if c111 then L490() else L491(dx63, seasonal58);
  L519():
    p15 = prom<V +>{
      xreg3 = ld xreg;
      xreg4 = force? xreg3;
      checkMissing(xreg4);
      return xreg4;
    };
    r185 = dyn NROW(p15);
    check L520() else D89();
  L528():
    r191 = dyn class__(l5, NULL, NULL);
    check L529() else D96();
  D89():
    deopt 370 [r185];
  D96():
    deopt 389 [NULL, r191];
  L489(dx68, dx69):
    seasonal61 = ld seasonal;
    check L493() else D80();
  L490():
    dr48 = tryDispatchBuiltin.1("$", seasonal58);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L492() else L491(dx63, dr48);
  L491(dx65, seasonal60):
    r165 = `$`(seasonal60, <sym period>);
    goto L489(dx65, r165);
  L520():
    n2 = ld n;
    check L521() else D90();
  L529():
    st xreg = r191;
    include_mean1 = ld `include.mean`;
    check L530() else D97();
  D80():
    deopt 330 [dx68, dx69, seasonal61];
  D90():
    deopt 370 [r185, n2];
  D97():
    deopt 391 [include_mean1];
  L492():
    dx67 = getTryDispatchBuiltinValue(dr48);
    goto L489(dx63, dx67);
  L493():
    seasonal62 = force? seasonal61;
    checkMissing(seasonal62);
    c112 = `is.object`(seasonal62);
    if c112 then L495() else L496(dx68, dx69, seasonal62);
  L521():
    n3 = force? n2;
    checkMissing(n3);
    r186 = `!=`(r185, n3);
    c117 = `as.logical`(r186);
    if c117 then L522() else L85();
  L530():
    include_mean2 = force? include_mean1;
    checkMissing(include_mean2);
    c118 = `as.logical`(include_mean2);
    if c118 then L531() else L87(c118);
  L85():
    goto L86();
  L86():
    NCOL1 = ldf NCOL;
    check L526() else D93();
  L87(c120):
    c124 = `as.logical`(c120);
    if c124 then L534() else L88();
  L494(dx77, dx78, dx79):
    c113 = `is.object`(dx79);
    if c113 then L498() else L499(dx77, dx78, dx79);
  L495():
    dr50 = tryDispatchBuiltin.1("$", seasonal62);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L497() else L496(dx68, dx69, dr50);
  L496(dx72, dx73, seasonal64):
    r166 = `$`(seasonal64, <sym order>);
    goto L494(dx72, dx73, r166);
  L522():
    stop6 = ldf stop;
    check L523() else D91();
  L531():
    nd = ld nd;
    check L532() else D98();
  D91():
    deopt 374 [];
  D93():
    deopt 380 [];
  D98():
    deopt 393 [c118, nd];
  L76(dx89, dx90, dx91):
    r168 = `*`(dx90, dx91);
    r169 = `+`(dx89, r168);
    st ncond1 = r169;
    sym26 = ldf missing;
    base26 = ldf missing in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L501() else L502();
  L88():
    goto L94();
  L94():
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L555() else L556();
  L497():
    dx76 = getTryDispatchBuiltinValue(dr50);
    goto L494(dx68, dx69, dx76);
  L498():
    dr52 = tryDispatchBuiltin.1("[", dx79);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L500() else L499(dx77, dx78, dr52);
  L499(dx83, dx84, dx85):
    __10 = ldf `[` in base;
    r167 = dyn __10(dx85, 1);
    goto L76(dx83, dx84, r167);
  L523():
    r187 = dyn stop6("lengths of 'x' and 'xreg' do not match");
    check L524() else D92();
  L526():
    p16 = prom<V +>{
      xreg5 = ld xreg;
      xreg6 = force? xreg5;
      checkMissing(xreg6);
      return xreg6;
    };
    r190 = dyn NCOL1(p16);
    check L527() else D94();
  L532():
    nd1 = force? nd;
    checkMissing(nd1);
    r192 = `==`(nd1, 0.0);
    c121 = `as.logical`(r192);
    c122 = `&&`(c118, c121);
    goto L87(c122);
  L534():
    sym29 = ldf `is.matrix`;
    base29 = ldf `is.matrix` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L535() else L536();
  D92():
    deopt 376 [r187];
  D94():
    deopt 382 [r190];
  L77(r171):
    r173 = `!`(r171);
    c114 = `as.logical`(r173);
    if c114 then L503() else L78();
  L89(r194):
    c125 = `as.logical`(r194);
    if c125 then L539() else L90(c125);
  L95(r214):
    c137 = `as.logical`(r214);
    if c137 then L558() else L96();
  L500():
    dx88 = getTryDispatchBuiltinValue(dr52);
    goto L76(dx77, dx78, dx88);
  L501():
    missing2 = ldf missing in base;
    r172 = dyn missing2(<sym n.cond>);
    goto L77(r172);
  L502():
    r170 = dyn base26(<sym n.cond>);
    goto L77(r170);
  L524():
    goto L86();
  L527():
    st ncxreg = r190;
    goto L84();
  L535():
    xreg7 = ld xreg;
    check L537() else D99();
  L536():
    r193 = dyn base29(<sym xreg>);
    goto L89(r193);
  L555():
    fixed1 = ld fixed;
    check L557() else D110();
  L556():
    r213 = dyn base32(<sym fixed>);
    goto L95(r213);
  D99():
    deopt 400 [xreg7];
  D110():
    deopt 439 [fixed1];
  L78():
    ncond7 = ld ncond;
    check L511() else D85();
  L80(r178):
    st ncond = r178;
    goto L81();
  L90(c127):
    c135 = `as.logical`(c127);
    if c135 then L545() else L92();
  L96():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L565() else L566();
  L98():
    sym35 = ldf `is.na`;
    base35 = ldf `is.na` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L575() else L576();
  L503():
    ncond = ld ncond;
    check L504() else D81();
  L537():
    xreg8 = force? xreg7;
    checkMissing(xreg8);
    is_matrix = ldf `is.matrix` in base;
    r195 = dyn is_matrix(xreg8);
    check L538() else D100();
  L539():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L540() else L541();
  L557():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    c136 = `==`(fixed2, NULL);
    goto L95(c136);
  L558():
    sym33 = ldf rep_len;
    base33 = ldf rep_len in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L559() else L560();
  D81():
    deopt 343 [ncond];
  D85():
    deopt 353 [ncond7];
  D100():
    deopt 403 [r195];
  L91(c130, r197):
    c132 = `as.logical`(r197);
    c133 = `&&`(c130, c132);
    goto L90(c133);
  L92():
    goto L93();
  L93():
    cbind = ldf cbind;
    check L551() else D107();
  L97(r216):
    st fixed = r216;
    goto L98();
  L99(r221):
    narma2 = ld narma;
    check L569() else D116();
  L101(r227):
    st mask = r227;
    sym36 = ldf any;
    base36 = ldf any in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L579() else L580();
  L504():
    ncond1 = force? ncond;
    checkMissing(ncond1);
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L505() else L506();
  L511():
    ncond8 = force? ncond7;
    checkMissing(ncond8);
    ncond9 = ld ncond1;
    check L512() else D86();
  L538():
    goto L89(r195);
  L540():
    colnames = ldf colnames;
    check L542() else D101();
  L541():
    r196 = dyn base30(<lang colnames(xreg)>);
    goto L91(c125, r196);
  L545():
    paste0 = ldf paste0;
    check L546() else D103();
  L559():
    narma = ld narma;
    check L561() else D111();
  L560():
    r215 = dyn base33(NA_REAL, <lang `+`(narma, ncxreg)>);
    goto L97(r215);
  L565():
    fixed3 = ld fixed;
    check L567() else D114();
  L566():
    r220 = dyn base34(<sym fixed>);
    goto L99(r220);
  L575():
    fixed5 = ld fixed;
    check L577() else D120();
  L576():
    r226 = dyn base35(<sym fixed>);
    goto L101(r226);
  D86():
    deopt 354 [ncond8, ncond9];
  D101():
    deopt 406 [c125];
  D103():
    deopt 412 [];
  D107():
    deopt 424 [];
  D111():
    deopt 445 [narma];
  D114():
    deopt 454 [fixed3];
  D116():
    deopt 457 [r221, narma2];
  D120():
    deopt 470 [fixed5];
  L79(ncond4, r175):
    r177 = `+`(ncond4, r175);
    goto L80(r177);
  L102(r230):
    r232 = `!`(r230);
    c139 = `as.logical`(r232);
    if c139 then L583() else L103();
  L505():
    n_cond1 = ld `n.cond`;
    check L507() else D82();
  L506():
    r174 = dyn base27(<sym n.cond>, <sym ncond1>);
    goto L79(ncond1, r174);
  L512():
    ncond10 = force? ncond9;
    checkMissing(ncond10);
    r179 = `+`(ncond8, ncond10);
    goto L80(r179);
  L542():
    p17 = prom<V +>{
      xreg9 = ld xreg;
      xreg10 = force? xreg9;
      checkMissing(xreg10);
      return xreg10;
    };
    r199 = dyn colnames(p17);
    check L543() else D102();
  L546():
    p18 = prom<V +>{
      ncxreg = ld ncxreg;
      ncxreg1 = force? ncxreg;
      checkMissing(ncxreg1);
      r200 = `:`(1, ncxreg1);
      return r200;
    };
    r202 = dyn paste0("xreg", p18);
    check L547() else D104();
  L551():
    p19 = prom<V +>{
      sym31 = ldf rep_len;
      base31 = ldf rep_len in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r206):
      return r206;
    L1():
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      rep_len = ldf rep_len in base;
      r207 = dyn rep_len(1.0, n5);
      goto L0(r207);
    L2():
      r205 = dyn base31(1.0, <sym n>);
      goto L0(r205);
    };
    p20 = prom<V +>{
      xreg11 = ld xreg;
      xreg12 = force? xreg11;
      checkMissing(xreg12);
      return xreg12;
    };
    r210 = dyn cbind[intercept, xreg](p19, p20);
    check L552() else D108();
  L561():
    narma1 = force? narma;
    checkMissing(narma1);
    ncxreg4 = ld ncxreg;
    check L562() else D112();
  L567():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    length5 = ldf length in base;
    r222 = dyn length5(fixed4);
    check L568() else D115();
  L569():
    narma3 = force? narma2;
    checkMissing(narma3);
    ncxreg6 = ld ncxreg;
    check L570() else D117();
  L577():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    is_na1 = ldf `is.na` in base;
    r228 = dyn is_na1(fixed6);
    check L578() else D121();
  L579():
    mask = ld mask;
    check L581() else D122();
  L580():
    r229 = dyn base36(<sym mask>);
    goto L102(r229);
  D82():
    deopt 346 [ncond1, n_cond1];
  D102():
    deopt 408 [c125, r199];
  D104():
    deopt 415 [r202];
  D108():
    deopt 429 [r210];
  D112():
    deopt 446 [narma1, ncxreg4];
  D115():
    deopt 457 [r222];
  D117():
    deopt 458 [r221, narma3, ncxreg6];
  D121():
    deopt 473 [r228];
  D122():
    deopt 477 [mask];
  L103():
    goto L104();
  L104():
    transform_pars1 = ld `transform.pars`;
    check L587() else D126();
  L507():
    n_cond2 = force? n_cond1;
    checkMissing(n_cond2);
    ncond5 = ld ncond1;
    check L508() else D83();
  L543():
    c131 = `==`(r199, NULL);
    goto L91(c125, c131);
  L547():
    l6 = ld xreg;
    colnames__ = ldf `colnames<-`;
    check L548() else D105();
  L552():
    st xreg = r210;
    ncxreg2 = ld ncxreg;
    check L553() else D109();
  L562():
    ncxreg5 = force? ncxreg4;
    checkMissing(ncxreg5);
    r217 = `+`(narma1, ncxreg5);
    rep_len1 = ldf rep_len in base;
    r218 = dyn rep_len1(NA_REAL, r217);
    check L563() else D113();
  L568():
    goto L99(r222);
  L570():
    ncxreg7 = force? ncxreg6;
    checkMissing(ncxreg7);
    r223 = `+`(narma3, ncxreg7);
    r224 = `!=`(r221, r223);
    c138 = `as.logical`(r224);
    if c138 then L571() else L100();
  L578():
    goto L101(r228);
  L581():
    mask1 = force? mask;
    checkMissing(mask1);
    any2 = ldf any in base;
    r231 = dyn any2(mask1);
    check L582() else D123();
  L583():
    stop8 = ldf stop;
    check L584() else D124();
  D83():
    deopt 348 [ncond1, ncond5];
  D105():
    deopt 417 [r202, l6, r202];
  D109():
    deopt 431 [ncxreg2];
  D113():
    deopt 450 [r218];
  D123():
    deopt 480 [r231];
  D124():
    deopt 483 [];
  D126():
    deopt 488 [transform_pars1];
  L100():
    goto L98();
  L508():
    ncond6 = force? ncond5;
    checkMissing(ncond6);
    max = ldf max in base;
    r176 = dyn max(n_cond2, ncond6);
    check L509() else D84();
  L548():
    r203 = dyn colnames__(l6, NULL, r202);
    check L549() else D106();
  L553():
    ncxreg3 = force? ncxreg2;
    checkMissing(ncxreg3);
    r211 = `+`(ncxreg3, 1.0);
    st ncxreg = r211;
    goto L94();
  L563():
    goto L97(r218);
  L571():
    stop7 = ldf stop;
    check L572() else D118();
  L582():
    goto L102(r231);
  L584():
    r233 = dyn stop8("all parameters were fixed");
    check L585() else D125();
  L587():
    transform_pars2 = force? transform_pars1;
    checkMissing(transform_pars2);
    c140 = `as.logical`(transform_pars2);
    if c140 then L588() else L105(c140);
  D84():
    deopt 351 [ncond1, r176];
  D106():
    deopt 419 [r202, r203];
  D118():
    deopt 463 [];
  D125():
    deopt 485 [r233];
  L105(c142):
    c154 = `as.logical`(c142);
    if c154 then L598() else L108();
  L509():
    goto L79(ncond1, r176);
  L549():
    st xreg = r203;
    goto L93();
  L572():
    r225 = dyn stop7("wrong length for 'fixed'");
    check L573() else D119();
  L585():
    goto L104();
  L588():
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L589() else L590();
  D119():
    deopt 465 [r225];
  L106(c145, r236):
    c151 = `as.logical`(r236);
    c152 = `&&`(c145, c151);
    goto L105(c152);
  L108():
    goto L109();
  L109():
    ncxreg8 = ld ncxreg;
    check L602() else D132();
  L573():
    goto L98();
  L589():
    mask2 = ld mask;
    check L591() else D127();
  L590():
    r235 = dyn base37(<lang `!`(`[`(mask, `:`(1, narma)))>);
    goto L106(c140, r235);
  L598():
    warning = ldf warning;
    check L599() else D130();
  D127():
    deopt 492 [c140, mask2];
  D130():
    deopt 504 [];
  D132():
    deopt 512 [ncxreg8];
  L591():
    mask3 = force? mask2;
    checkMissing(mask3);
    c146 = `is.object`(mask3);
    if c146 then L592() else L593(c140, mask3);
  L599():
    r241 = dyn warning("some ARMA parameters were fixed: setting transform.pars = FALSE");
    check L600() else D131();
  L602():
    ncxreg9 = force? ncxreg8;
    checkMissing(ncxreg9);
    c155 = `as.logical`(ncxreg9);
    if c155 then L603() else L110();
  D131():
    deopt 506 [r241];
  L107(c150, dx93):
    r239 = `!`(dx93);
    any3 = ldf any in base;
    r240 = dyn any3(r239);
    check L596() else D129();
  L110():
    goto L122();
  L122():
    sym39 = ldf anyNA;
    base39 = ldf anyNA in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L647() else L648();
  L592():
    dr54 = tryDispatchBuiltin.1("[", mask3);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L594() else L593(c140, dr54);
  L593(c148, mask5):
    narma4 = ld narma;
    check L595() else D128();
  L600():
    st `transform.pars` = FALSE;
    goto L109();
  L603():
    order31 = ld order;
    check L604() else D133();
  D128():
    deopt 495 [c148, mask5, 1, narma4];
  D129():
    deopt 501 [c150, r240];
  D133():
    deopt 514 [order31];
  L123(r280):
    c166 = `as.logical`(r280);
    if c166 then L124(c166) else L651();
  L594():
    dx92 = getTryDispatchBuiltinValue(dr54);
    goto L107(c140, dx92);
  L595():
    narma5 = force? narma4;
    checkMissing(narma5);
    r237 = `:`(1, narma5);
    __11 = ldf `[` in base;
    r238 = dyn __11(mask5, r237);
    goto L107(c148, r238);
  L596():
    goto L106(c150, r240);
  L604():
    order32 = force? order31;
    checkMissing(order32);
    c156 = `is.object`(order32);
    if c156 then L605() else L606(order32);
  L647():
    x19 = ld x;
    check L649() else D151();
  L648():
    r279 = dyn base39(<sym x>);
    goto L123(r279);
  D151():
    deopt 584 [x19];
  L111(dx95):
    st d = dx95;
    c157 = `as.logical`(dx95);
    if c157 then L608() else L112();
  L124(c167):
    c187 = `as.logical`(c167);
    if c187 then L660() else L127();
  L605():
    dr56 = tryDispatchBuiltin.1("[", order32);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L607() else L606(dr56);
  L606(order34):
    __12 = ldf `[` in base;
    r243 = dyn __12(order34, 2);
    goto L111(r243);
  L649():
    x20 = force? x19;
    checkMissing(x20);
    anyNA = ldf anyNA in base;
    r281 = dyn anyNA(x20);
    check L650() else D152();
  L651():
    ncxreg12 = ld ncxreg;
    check L652() else D153();
  D152():
    deopt 587 [r281];
  D153():
    deopt 588 [c166, ncxreg12];
  L112():
    goto L113();
  L113():
    seasonal65 = ld seasonal;
    check L612() else D136();
  L127():
    goto L131();
  L131():
    sym41 = ldf rep_len;
    base41 = ldf rep_len in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L670() else L671();
  L607():
    dx94 = getTryDispatchBuiltinValue(dr56);
    goto L111(dx94);
  L608():
    diff2 = ldf diff;
    check L609() else D134();
  L650():
    goto L123(r281);
  L652():
    ncxreg13 = force? ncxreg12;
    checkMissing(ncxreg13);
    c169 = `as.logical`(ncxreg13);
    if c169 then L653() else L125(c166, c169);
  L660():
    method5 = ld method;
    check L661() else D156();
  D134():
    deopt 521 [];
  D136():
    deopt 529 [seasonal65];
  D156():
    deopt 598 [method5];
  L125(c172, c173):
    c184 = `as.logical`(c173);
    c185 = `||`(c172, c184);
    goto L124(c185);
  L132(r291):
    st init0 = r291;
    sym42 = ldf rep_len;
    base42 = ldf rep_len in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L674() else L675();
  L609():
    p21 = prom<V +>{
      xreg13 = ld xreg;
      xreg14 = force? xreg13;
      checkMissing(xreg14);
      return xreg14;
    };
    p22 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    r246 = dyn diff2(p21, 1.0, p22);
    check L610() else D135();
  L612():
    seasonal66 = force? seasonal65;
    checkMissing(seasonal66);
    c158 = `is.object`(seasonal66);
    if c158 then L614() else L615(seasonal66);
  L653():
    sym40 = ldf anyNA;
    base40 = ldf anyNA in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L654() else L655();
  L661():
    method6 = force? method5;
    checkMissing(method6);
    r285 = `==`(method6, "ML");
    c188 = `as.logical`(r285);
    if c188 then L662() else L128(c188);
  L670():
    narma6 = ld narma;
    check L672() else D160();
  L671():
    r290 = dyn base41(0.0, <sym narma>);
    goto L132(r290);
  D135():
    deopt 525 [r246];
  D160():
    deopt 621 [narma6];
  L126(c178, c179, r283):
    c180 = `as.logical`(r283);
    c181 = `&&`(c179, c180);
    goto L125(c178, c181);
  L128(c190):
    c194 = `as.logical`(c190);
    if c194 then L665() else L129();
  L133(r294):
    st parscale = r294;
    ncxreg14 = ld ncxreg;
    check L678() else D164();
  L610():
    st xreg = r246;
    goto L113();
  L613(dx97):
    c159 = `is.object`(dx97);
    if c159 then L617() else L618(dx97);
  L614():
    dr58 = tryDispatchBuiltin.1("$", seasonal66);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L616() else L615(dr58);
  L615(seasonal68):
    r248 = `$`(seasonal68, <sym order>);
    goto L613(r248);
  L654():
    xreg25 = ld xreg;
    check L656() else D154();
  L655():
    r282 = dyn base40(<sym xreg>);
    goto L126(c166, c169, r282);
  L662():
    delta1 = ld delta;
    check L663() else D157();
  L672():
    narma7 = force? narma6;
    checkMissing(narma7);
    rep_len2 = ldf rep_len in base;
    r292 = dyn rep_len2(0.0, narma7);
    check L673() else D161();
  L674():
    narma8 = ld narma;
    check L676() else D162();
  L675():
    r293 = dyn base42(1.0, <sym narma>);
    goto L133(r293);
  D154():
    deopt 592 [c166, c169, xreg25];
  D157():
    deopt 602 [c188, delta1];
  D161():
    deopt 624 [r292];
  D162():
    deopt 629 [narma8];
  D164():
    deopt 634 [ncxreg14];
  L114(dx101):
    st d = dx101;
    c160 = `as.logical`(dx101);
    if c160 then L620() else L115();
  L129():
    goto L130(NULL);
  L130(r288):
    goto L131();
  L616():
    dx96 = getTryDispatchBuiltinValue(dr58);
    goto L613(dx96);
  L617():
    dr60 = tryDispatchBuiltin.1("[", dx97);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L619() else L618(dr60);
  L618(dx99):
    __13 = ldf `[` in base;
    r249 = dyn __13(dx99, 2);
    goto L114(r249);
  L656():
    xreg26 = force? xreg25;
    checkMissing(xreg26);
    anyNA1 = ldf anyNA in base;
    r284 = dyn anyNA1(xreg26);
    check L657() else D155();
  L663():
    delta2 = force? delta1;
    checkMissing(delta2);
    r286 = `>=`(delta2, 0.0);
    c191 = `as.logical`(r286);
    c192 = `&&`(c188, c191);
    goto L128(c192);
  L665():
    warning1 = ldf warning;
    check L666() else D158();
  L673():
    goto L132(r292);
  L676():
    narma9 = force? narma8;
    checkMissing(narma9);
    rep_len3 = ldf rep_len in base;
    r295 = dyn rep_len3(1.0, narma9);
    check L677() else D163();
  L678():
    ncxreg15 = force? ncxreg14;
    checkMissing(ncxreg15);
    c195 = `as.logical`(ncxreg15);
    if c195 then L679() else L134();
  D155():
    deopt 595 [c166, c169, r284];
  D158():
    deopt 608 [];
  D163():
    deopt 632 [r295];
  L115():
    goto L116();
  L116():
    as_matrix = ldf `as.matrix`;
    check L624() else D139();
  L134():
    goto L143();
  L143():
    l7 = ld xreg;
    storage_mode__ = ldf `storage.mode<-`;
    check L727() else D187();
  L619():
    dx100 = getTryDispatchBuiltinValue(dr60);
    goto L114(dx100);
  L620():
    diff3 = ldf diff;
    check L621() else D137();
  L657():
    goto L126(c166, c169, r284);
  L666():
    r287 = dyn warning1("NAs present: setting 'delta' to -1");
    check L667() else D159();
  L677():
    goto L133(r295);
  L679():
    ncxreg16 = ld ncxreg;
    check L680() else D165();
  D137():
    deopt 537 [];
  D139():
    deopt 546 [];
  D159():
    deopt 610 [r287];
  D165():
    deopt 636 [ncxreg16];
  D187():
    deopt 717 ["double", l7, "double"];
  L621():
    p23 = prom<V +>{
      xreg15 = ld xreg;
      xreg16 = force? xreg15;
      checkMissing(xreg16);
      return xreg16;
    };
    p24 = prom<V +>{
      seasonal69 = ld seasonal;
      seasonal70 = force? seasonal69;
      checkMissing(seasonal70);
      c161 = `is.object`(seasonal70);
      if c161 then L1() else L2(seasonal70);
    L0(dx103):
      return dx103;
    L1():
      dr62 = tryDispatchBuiltin.1("$", seasonal70);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(seasonal72):
      r251 = `$`(seasonal72, <sym period>);
      goto L0(r251);
    L3():
      dx102 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx102);
    };
    p25 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      return d7;
    };
    r254 = dyn diff3(p23, p24, p25);
    check L622() else D138();
  L624():
    p26 = prom<V +>{
      xreg17 = ld xreg;
      xreg18 = force? xreg17;
      checkMissing(xreg18);
      return xreg18;
    };
    r257 = dyn as_matrix(p26);
    check L625() else D140();
  L667():
    st delta = -1.0;
    goto L130(-1.0);
  L680():
    ncxreg17 = force? ncxreg16;
    checkMissing(ncxreg17);
    r296 = `==`(ncxreg17, 1.0);
    c196 = `as.logical`(r296);
    if c196 then L135(c196) else L681();
  L727():
    r331 = dyn storage_mode__(l7, NULL, "double");
    check L728() else D188();
  D138():
    deopt 541 [r254];
  D140():
    deopt 548 [r257];
  D188():
    deopt 719 ["double", r331];
  L135(c197):
    st `orig.xreg` = c197;
    orig_xreg = ld `orig.xreg`;
    check L692() else D170();
  L622():
    st xreg = r254;
    goto L116();
  L625():
    st xreg = r257;
    qr = ldf qr;
    check L626() else D141();
  L681():
    sym43 = ldf any;
    base43 = ldf any in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L682() else L683();
  L728():
    st xreg = r331;
    l8 = ld x;
    storage_mode__1 = ldf `storage.mode<-`;
    check L729() else D189();
  D141():
    deopt 551 [];
  D170():
    deopt 656 [orig_xreg];
  D189():
    deopt 722 ["double", l8, "double"];
  L136(c201, r298):
    c207 = `as.logical`(r298);
    c208 = `||`(c201, c207);
    goto L135(c208);
  L626():
    p28 = prom<V +>{
      na_omit = ldf `na.omit`;
      p27 = prom<V +>{
        xreg19 = ld xreg;
        xreg20 = force? xreg19;
        checkMissing(xreg20);
        return xreg20;
      };
      r259 = dyn na_omit(p27);
      return r259;
    };
    r261 = dyn qr(p28);
    check L627() else D142();
  L682():
    mask6 = ld mask;
    check L684() else D166();
  L683():
    r297 = dyn base43(<lang `!`(`[`(mask, `+`(narma, `:`(1, ncxreg))))>);
    goto L136(c196, r297);
  L692():
    orig_xreg1 = force? orig_xreg;
    checkMissing(orig_xreg1);
    r304 = `!`(orig_xreg1);
    c210 = `as.logical`(r304);
    if c210 then L693() else L138();
  L729():
    r332 = dyn storage_mode__1(l8, NULL, "double");
    check L730() else D190();
  D142():
    deopt 553 [r261];
  D166():
    deopt 642 [c196, mask6];
  D190():
    deopt 724 ["double", r332];
  L138():
    goto L139();
  L139():
    lm = ldf lm;
    check L704() else D176();
  L627():
    c162 = `is.object`(r261);
    if c162 then L629() else L630(r261);
  L684():
    mask7 = force? mask6;
    checkMissing(mask7);
    c202 = `is.object`(mask7);
    if c202 then L685() else L686(c196, mask7);
  L693():
    svd = ldf svd;
    check L694() else D171();
  L730():
    st x = r332;
    method7 = ld method;
    check L731() else D191();
  D171():
    deopt 660 [];
  D176():
    deopt 676 [];
  D191():
    deopt 726 [method7];
  L137(c206, dx107):
    r302 = `!`(dx107);
    any4 = ldf any in base;
    r303 = dyn any4(r302);
    check L690() else D169();
  L628(dx105):
    ncol = ldf ncol;
    check L632() else D143();
  L629():
    dr64 = tryDispatchBuiltin.1("$", r261);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L631() else L630(dr64);
  L630(r263):
    r264 = `$`(r263, <sym rank>);
    goto L628(r264);
  L685():
    dr66 = tryDispatchBuiltin.1("[", mask7);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L687() else L686(c196, dr66);
  L686(c204, mask9):
    narma10 = ld narma;
    check L688() else D167();
  L694():
    p33 = prom<V +>{
      na_omit1 = ldf `na.omit`;
      p32 = prom<V +>{
        xreg27 = ld xreg;
        xreg28 = force? xreg27;
        checkMissing(xreg28);
        return xreg28;
      };
      r306 = dyn na_omit1(p32);
      return r306;
    };
    r308 = dyn svd(p33);
    check L695() else D172();
  L704():
    p34 = prom<V +>{
      __15 = ldf `~` in base;
      r312 = dyn __15(<sym x>, <lang `-`(xreg, 1.0)>);
      return r312;
    };
    p35 = prom<V +>{
      na_omit2 = ld `na.omit`;
      na_omit3 = force? na_omit2;
      checkMissing(na_omit3);
      return na_omit3;
    };
    r315 = dyn lm[, `na.action`](p34, p35);
    check L705() else D177();
  L731():
    method8 = force? method7;
    checkMissing(method8);
    r333 = `==`(method8, "CSS");
    c216 = `as.logical`(r333);
    if c216 then L732() else L144();
  D143():
    deopt 555 [dx105];
  D167():
    deopt 644 [c204, mask9, narma10];
  D169():
    deopt 653 [c206, r303];
  D172():
    deopt 662 [r308];
  D177():
    deopt 680 [r315];
  L144():
    goto L145();
  L145():
    sym46 = ldf `.Call`;
    base46 = ldf `.Call` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L734() else L735();
  L631():
    dx104 = getTryDispatchBuiltinValue(dr64);
    goto L628(dx104);
  L632():
    p29 = prom<V +>{
      xreg21 = ld xreg;
      xreg22 = force? xreg21;
      checkMissing(xreg22);
      return xreg22;
    };
    r266 = dyn ncol(p29);
    check L633() else D144();
  L687():
    dx106 = getTryDispatchBuiltinValue(dr66);
    goto L137(c196, dx106);
  L688():
    narma11 = force? narma10;
    checkMissing(narma11);
    ncxreg18 = ld ncxreg;
    check L689() else D168();
  L690():
    goto L136(c206, r303);
  L695():
    st S = r308;
    xreg29 = ld xreg;
    check L696() else D173();
  L705():
    st fit = r315;
    sym44 = ldf c;
    base44 = ldf c in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L706() else L707();
  L732():
    st `transform.pars` = 0.0;
    goto L145();
  D144():
    deopt 557 [dx105, r266];
  D168():
    deopt 646 [c204, mask9, narma11, 1, ncxreg18];
  D173():
    deopt 665 [xreg29];
  L140(r317):
    st init0 = r317;
    summary = ldf summary;
    check L712() else D182();
  L146(r336):
    st G = r336;
    sym48 = ldf `on.exit`;
    base48 = ldf `on.exit` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L750() else L751();
  L633():
    r267 = `<`(dx105, r266);
    c163 = `as.logical`(r267);
    if c163 then L634() else L117();
  L689():
    ncxreg19 = force? ncxreg18;
    checkMissing(ncxreg19);
    r299 = `:`(1, ncxreg19);
    r300 = `+`(narma11, r299);
    __14 = ldf `[` in base;
    r301 = dyn __14(mask9, r300);
    goto L137(c204, r301);
  L696():
    xreg30 = force? xreg29;
    checkMissing(xreg30);
    S = ld S;
    check L697() else D174();
  L706():
    init1 = ld init0;
    check L708() else D178();
  L707():
    r316 = dyn base44(<sym init0>, <lang coef(fit)>);
    goto L140(r316);
  L734():
    C_setup_starma = ld C_setup_starma;
    check L736() else D192();
  L735():
    r335 = dyn base46(<sym C_setup_starma>, <lang as.integer(arma)>, <sym x>, <sym n.used>, <sym xreg>, <sym ncxreg>, <sym delta>, <lang `>`(transform.pars, 0.0)>, <lang `-`(ncond, `(`(`-`(n, n.used)))>);
    goto L146(r335);
  D174():
    deopt 667 [S];
  D178():
    deopt 684 [init1];
  D182():
    deopt 694 [];
  D192():
    deopt 736 [C_setup_starma];
  L117():
    goto L118();
  L118():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L638() else L639();
  L148():
    sym49 = ldf `is.null`;
    base49 = ldf `is.null` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L752() else L753();
  L634():
    stop9 = ldf stop;
    check L635() else D145();
  L697():
    S1 = force? S;
    checkMissing(S1);
    c211 = `is.object`(S1);
    if c211 then L699() else L700(S1);
  L708():
    init2 = force? init1;
    checkMissing(init2);
    coef = ldf coef;
    check L709() else D179();
  L712():
    p37 = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    r322 = dyn summary(p37);
    check L713() else D183();
  L736():
    C_setup_starma1 = force? C_setup_starma;
    checkMissing(C_setup_starma1);
    sym47 = ldf `as.integer`;
    base47 = ldf `as.integer` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L737() else L738();
  L750():
    on_exit = ldf `on.exit` in base;
    r346 = dyn on_exit(<lang .Call(C_free_starma, G)>);
    goto L148();
  L751():
    r344 = dyn base48(<lang .Call(C_free_starma, G)>);
    goto L148();
  D145():
    deopt 560 [];
  D179():
    deopt 687 [];
  D183():
    deopt 696 [r322];
  L119(r271):
    c165 = `as.logical`(r271);
    if c165 then L642() else L120();
  L147(C_setup_starma4, r338):
    x21 = ld x;
    check L741() else D195();
  L149(r348):
    r349 = `!`(r348);
    c218 = `as.logical`(r349);
    if c218 then L755() else L150();
  L635():
    r268 = dyn stop9("'xreg' is collinear");
    check L636() else D146();
  L638():
    colnames1 = ldf colnames;
    check L640() else D147();
  L639():
    r270 = dyn base38(<lang `<-`(cn, colnames(xreg))>);
    goto L119(r270);
  L698(dx109):
    ___ = ldf `%*%` in base;
    r310 = dyn ___(xreg30, dx109);
    check L702() else D175();
  L699():
    dr68 = tryDispatchBuiltin.1("$", S1);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L701() else L700(dr68);
  L700(S3):
    r309 = `$`(S3, <sym v>);
    goto L698(r309);
  L709():
    p36 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r319 = dyn coef(p36);
    check L710() else D180();
  L713():
    c213 = `is.object`(r322);
    if c213 then L715() else L716(r322);
  L737():
    arma4 = ld arma;
    check L739() else D193();
  L738():
    r337 = dyn base47(<sym arma>);
    goto L147(C_setup_starma1, r337);
  L752():
    init3 = ld init;
    check L754() else D204();
  L753():
    r347 = dyn base49(<sym init>);
    goto L149(r347);
  D146():
    deopt 562 [r268];
  D147():
    deopt 567 [];
  D175():
    deopt 671 [r310];
  D180():
    deopt 689 [r319];
  D193():
    deopt 739 [C_setup_starma1, arma4];
  D195():
    deopt 742 [C_setup_starma4, r338, x21];
  D204():
    deopt 762 [init3];
  L120():
    goto L121(NULL);
  L121(r277):
    goto L122();
  L150():
    init48 = ld init0;
    check L877() else D250();
  L192():
    sym59 = ldf `.Call`;
    base59 = ldf `.Call` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L878() else L879();
  L636():
    goto L118();
  L640():
    p30 = prom<V +>{
      xreg23 = ld xreg;
      xreg24 = force? xreg23;
      checkMissing(xreg24);
      return xreg24;
    };
    r273 = dyn colnames1(p30);
    check L641() else D148();
  L642():
    paste1 = ldf paste0;
    check L643() else D149();
  L701():
    dx108 = getTryDispatchBuiltinValue(dr68);
    goto L698(dx108);
  L702():
    st xreg = r310;
    goto L139();
  L710():
    c212 = ldf c in base;
    r320 = dyn c212(init2, r319);
    check L711() else D181();
  L714(dx111):
    c214 = `is.object`(dx111);
    if c214 then L718() else L719();
  L715():
    dr70 = tryDispatchBuiltin.1("$", r322);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L717() else L716(dr70);
  L716(r324):
    r325 = `$`(r324, <sym coefficients>);
    goto L714(r325);
  L739():
    arma5 = force? arma4;
    checkMissing(arma5);
    as_integer = ldf `as.integer` in base;
    r339 = dyn as_integer(arma5);
    check L740() else D194();
  L741():
    x22 = force? x21;
    checkMissing(x22);
    n_used2 = ld `n.used`;
    check L742() else D196();
  L754():
    init4 = force? init3;
    checkMissing(init4);
    c217 = `==`(init4, NULL);
    goto L149(c217);
  L755():
    sym50 = ldf length;
    base50 = ldf length in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L756() else L757();
  D148():
    deopt 569 [r273];
  D149():
    deopt 573 [];
  D181():
    deopt 691 [r320];
  D194():
    deopt 742 [C_setup_starma1, r339];
  D196():
    deopt 743 [C_setup_starma4, r338, x22, n_used2];
  D250():
    deopt 946 [init48];
  L141(dx115):
    st ses = dx115;
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L721() else L722();
  L151(r351):
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L760() else L761();
  L193():
    _in_ = ldf `%in%`;
    check L883() else D254();
  L641():
    st cn = r273;
    c164 = `==`(r273, NULL);
    goto L119(c164);
  L643():
    p31 = prom<V +>{
      ncxreg10 = ld ncxreg;
      ncxreg11 = force? ncxreg10;
      checkMissing(ncxreg11);
      r274 = `:`(1, ncxreg11);
      return r274;
    };
    r276 = dyn paste1("xreg", p31);
    check L644() else D150();
  L711():
    goto L140(r320);
  L717():
    dx110 = getTryDispatchBuiltinValue(dr70);
    goto L714(dx110);
  L718():
    dr72 = tryDispatchBuiltin.1("[", dx111);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L720() else L719();
  L719():
    __16 = ldf `[` in base;
    r326 = dyn __16(dx111, <missing>, 2.0);
    goto L141(r326);
  L740():
    goto L147(C_setup_starma1, r339);
  L742():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    xreg31 = ld xreg;
    check L743() else D197();
  L756():
    init5 = ld init;
    check L758() else D205();
  L757():
    r350 = dyn base50(<sym init>);
    goto L151(r350);
  L877():
    init49 = force? init48;
    checkMissing(init49);
    st init = init49;
    goto L192();
  L878():
    C_Starma_method = ld C_Starma_method;
    check L880() else D251();
  L879():
    r470 = dyn base59(<sym C_Starma_method>, <sym G>, <lang `==`(method, "CSS")>);
    goto L193();
  D150():
    deopt 576 [r276];
  D197():
    deopt 744 [C_setup_starma4, r338, x22, n_used3, xreg31];
  D205():
    deopt 768 [init5];
  D251():
    deopt 950 [C_Starma_method];
  D254():
    deopt 958 [];
  L142(r328):
    st parscale = r328;
    goto L143();
  L152(r356, r357):
    r359 = `!=`(r356, r357);
    c219 = `as.logical`(r359);
    if c219 then L764() else L153();
  L644():
    st cn = r276;
    goto L121(r276);
  L720():
    dx114 = getTryDispatchBuiltinValue(dr72);
    goto L141(dx114);
  L721():
    parscale = ld parscale;
    check L723() else D184();
  L722():
    r327 = dyn base45(<sym parscale>, <sym ses>);
    goto L142(r327);
  L743():
    xreg32 = force? xreg31;
    checkMissing(xreg32);
    ncxreg20 = ld ncxreg;
    check L744() else D198();
  L758():
    init6 = force? init5;
    checkMissing(init6);
    length6 = ldf length in base;
    r352 = dyn length6(init6);
    check L759() else D206();
  L760():
    init7 = ld init0;
    check L762() else D207();
  L761():
    r355 = dyn base51(<sym init0>);
    goto L152(r351, r355);
  L880():
    C_Starma_method1 = force? C_Starma_method;
    checkMissing(C_Starma_method1);
    G5 = ld G;
    check L881() else D252();
  L883():
    p42 = prom<V +>{
      sym60 = ldf names;
      base60 = ldf names in base;
      guard60 = `==`.4(sym60, base60);
      if guard60 then L1() else L2();
    L0(r475):
      return r475;
    L1():
      optim_control1 = ld `optim.control`;
      optim_control2 = force? optim_control1;
      checkMissing(optim_control2);
      names = ldf names in base;
      r476 = dyn names(optim_control2);
      goto L0(r476);
    L2():
      r474 = dyn base60(<sym optim.control>);
      goto L0(r474);
    };
    r478 = dyn _in_("parscale", p42);
    check L884() else D255();
  D184():
    deopt 705 [parscale];
  D198():
    deopt 745 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg20];
  D206():
    deopt 771 [r352];
  D207():
    deopt 773 [r351, init7];
  D252():
    deopt 951 [C_Starma_method1, G5];
  D255():
    deopt 961 [r478];
  L153():
    goto L154();
  L154():
    sym52 = ldf any;
    base52 = ldf any in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L768() else L769();
  L723():
    parscale1 = force? parscale;
    checkMissing(parscale1);
    ses = ld ses;
    check L724() else D185();
  L744():
    ncxreg21 = force? ncxreg20;
    checkMissing(ncxreg21);
    delta3 = ld delta;
    check L745() else D199();
  L759():
    goto L151(r352);
  L762():
    init8 = force? init7;
    checkMissing(init8);
    length7 = ldf length in base;
    r358 = dyn length7(init8);
    check L763() else D208();
  L764():
    stop10 = ldf stop;
    check L765() else D209();
  L881():
    G6 = force? G5;
    checkMissing(G6);
    method9 = ld method;
    check L882() else D253();
  L884():
    r479 = `!`(r478);
    c249 = `as.logical`(r479);
    if c249 then L885() else L194();
  D185():
    deopt 707 [ses];
  D199():
    deopt 746 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg21, delta3];
  D208():
    deopt 776 [r351, r358];
  D209():
    deopt 779 [];
  D253():
    deopt 952 [C_Starma_method1, G6, method9];
  L155(r363):
    c220 = `as.logical`(r363);
    if c220 then L775() else L157();
  L194():
    goto L196();
  L196():
    optim = ldf optim;
    check L896() else D258();
  L724():
    ses1 = force? ses;
    checkMissing(ses1);
    c215 = ldf c in base;
    r329 = dyn c215(parscale1, ses1);
    check L725() else D186();
  L745():
    delta4 = force? delta3;
    checkMissing(delta4);
    transform_pars3 = ld `transform.pars`;
    check L746() else D200();
  L763():
    goto L152(r351, r358);
  L765():
    r360 = dyn stop10("'init' is of the wrong length");
    check L766() else D210();
  L768():
    sym53 = ldf `is.na`;
    base53 = ldf `is.na` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L770() else L771();
  L769():
    r362 = dyn base52(<lang `<-`(ind, is.na(init))>);
    goto L155(r362);
  L882():
    method10 = force? method9;
    checkMissing(method10);
    r472 = `==`(method10, "CSS");
    vargs2 = dots[G6, r472];
    r473 = `.Call`(C_Starma_method1, vargs2, <missing>);
    goto L193();
  L885():
    parscale2 = ld parscale;
    check L886() else D256();
  D186():
    deopt 710 [r329];
  D200():
    deopt 747 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg21, delta4, transform_pars3];
  D210():
    deopt 781 [r360];
  D256():
    deopt 963 [parscale2];
  D258():
    deopt 974 [];
  L156(r365):
    st ind = r365;
    any5 = ldf any in base;
    r367 = dyn any5(r365);
    check L774() else D213();
  L157():
    goto L160();
  L160():
    transform_pars5 = ld `transform.pars`;
    check L786() else D217();
  L725():
    goto L142(r329);
  L746():
    transform_pars4 = force? transform_pars3;
    checkMissing(transform_pars4);
    r340 = `>`(transform_pars4, 0.0);
    ncond11 = ld ncond;
    check L747() else D201();
  L766():
    goto L154();
  L770():
    init9 = ld init;
    check L772() else D211();
  L771():
    r364 = dyn base53(<sym init>);
    goto L156(r364);
  L775():
    init11 = ld init0;
    check L776() else D214();
  L886():
    parscale3 = force? parscale2;
    checkMissing(parscale3);
    c250 = `is.object`(parscale3);
    if c250 then L887() else L888(parscale3);
  L896():
    p43 = prom<V +>{
      init50 = ld init;
      init51 = force? init50;
      checkMissing(init51);
      c252 = `is.object`(init51);
      if c252 then L1() else L2(init51);
    L0(dx175):
      return dx175;
    L1():
      dr118 = tryDispatchBuiltin.1("[", init51);
      dc59 = getTryDispatchBuiltinDispatched(dr118);
      if dc59 then L3() else L2(dr118);
    L2(init53):
      mask16 = ld mask;
      mask17 = force? mask16;
      __35 = ldf `[` in base;
      r482 = dyn __35(init53, mask17);
      goto L0(r482);
    L3():
      dx174 = getTryDispatchBuiltinValue(dr118);
      goto L0(dx174);
    };
    p44 = prom<V +>{
      arma0f = ld arma0f;
      arma0f1 = force? arma0f;
      checkMissing(arma0f1);
      return arma0f1;
    };
    p45 = prom<V +>{
      optim_control3 = ld `optim.control`;
      optim_control4 = force? optim_control3;
      checkMissing(optim_control4);
      return optim_control4;
    };
    r486 = dyn optim[, , method, hessian, control](p43, p44, "BFGS", TRUE, p45);
    check L897() else D259();
  D201():
    deopt 750 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg21, delta4, r340, ncond11];
  D211():
    deopt 788 [init9];
  D213():
    deopt 794 [r367];
  D214():
    deopt 795 [init11];
  D217():
    deopt 807 [transform_pars5];
  D259():
    deopt 983 [r486];
  L195(dx166):
    l18 = ld `optim.control`;
    c251 = `is.object`(l18);
    if c251 then L892() else L893(dx166, l18);
  L747():
    ncond12 = force? ncond11;
    checkMissing(ncond12);
    n6 = ld n;
    check L748() else D202();
  L772():
    init10 = force? init9;
    checkMissing(init10);
    is_na2 = ldf `is.na` in base;
    r366 = dyn is_na2(init10);
    check L773() else D212();
  L774():
    goto L155(r367);
  L776():
    init12 = force? init11;
    checkMissing(init12);
    c221 = `is.object`(init12);
    if c221 then L777() else L778(init12);
  L786():
    transform_pars6 = force? transform_pars5;
    checkMissing(transform_pars6);
    c223 = `as.logical`(transform_pars6);
    if c223 then L787() else L161();
  L887():
    dr114 = tryDispatchBuiltin.1("[", parscale3);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L889() else L888(dr114);
  L888(parscale5):
    mask14 = ld mask;
    check L890() else D257();
  L897():
    st res = r486;
    res = ld res;
    check L898() else D260();
  D202():
    deopt 751 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg21, delta4, r340, ncond12, n6];
  D212():
    deopt 791 [r366];
  D257():
    deopt 965 [parscale5, mask14];
  D260():
    deopt 985 [res];
  L158(dx117):
    l9 = ld init;
    c222 = `is.object`(l9);
    if c222 then L781() else L782(dx117, l9);
  L161():
    goto L191(NULL);
  L191(r468):
    goto L192();
  L748():
    n7 = force? n6;
    checkMissing(n7);
    n_used4 = ld `n.used`;
    check L749() else D203();
  L773():
    goto L156(r366);
  L777():
    dr74 = tryDispatchBuiltin.1("[", init12);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L779() else L778(dr74);
  L778(init14):
    ind = ld ind;
    check L780() else D215();
  L787():
    sym54 = ldf any;
    base54 = ldf any in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L788() else L789();
  L889():
    dx165 = getTryDispatchBuiltinValue(dr114);
    goto L195(dx165);
  L890():
    mask15 = force? mask14;
    __34 = ldf `[` in base;
    r480 = dyn __34(parscale5, mask15);
    goto L195(r480);
  L891(dx171, dx172):
    st `optim.control` = dx172;
    goto L196();
  L892():
    dr116 = tryDispatchBuiltin.0("$<-", l18, dx166);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L894() else L893(dx166, dr116);
  L893(dx168, l20):
    r481 = `$<-`(l20, <sym parscale>, dx166);
    goto L891(dx168, r481);
  L898():
    res1 = force? res;
    checkMissing(res1);
    c253 = `is.object`(res1);
    if c253 then L900() else L901(res1);
  D203():
    deopt 752 [C_setup_starma4, r338, x22, n_used3, xreg32, ncxreg21, delta4, r340, ncond12, n7, n_used4];
  D215():
    deopt 797 [init14, ind];
  L159(dx122, dx123):
    st init = dx123;
    goto L160();
  L162(r371):
    c225 = `as.logical`(r371);
    if c225 then L796() else L164();
  L749():
    n_used5 = force? n_used4;
    checkMissing(n_used5);
    r341 = `-`(n7, n_used5);
    r342 = `-`(ncond12, r341);
    vargs = dots[r338, x22, n_used3, xreg32, ncxreg21, delta4, r340, r342];
    r343 = `.Call`(C_setup_starma4, vargs, <missing>);
    goto L146(r343);
  L779():
    dx116 = getTryDispatchBuiltinValue(dr74);
    goto L158(dx116);
  L780():
    ind1 = force? ind;
    __17 = ldf `[` in base;
    r368 = dyn __17(init14, ind1);
    goto L158(r368);
  L781():
    dr76 = tryDispatchBuiltin.0("[<-", l9, dx117);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L783() else L782(dx117, dr76);
  L782(dx119, l11):
    ind2 = ld ind;
    check L784() else D216();
  L788():
    mask10 = ld mask;
    check L790() else D218();
  L789():
    r370 = dyn base54(<lang `!`(`[`(mask, `:`(1, narma)))>);
    goto L162(r370);
  L894():
    dx170 = getTryDispatchBuiltinValue(dr116);
    goto L891(dx166, dx170);
  L899(dx177):
    st code = dx177;
    r488 = `>`(dx177, 0.0);
    c254 = `as.logical`(r488);
    if c254 then L903() else L197();
  L900():
    dr120 = tryDispatchBuiltin.1("$", res1);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L902() else L901(dr120);
  L901(res3):
    r487 = `$`(res3, <sym convergence>);
    goto L899(r487);
  D216():
    deopt 801 [dx119, l11, dx117, ind2];
  D218():
    deopt 811 [mask10];
  L164():
    goto L165();
  L165():
    arma6 = ld arma;
    check L800() else D223();
  L197():
    goto L198();
  L198():
    res4 = ld res;
    check L907() else D263();
  L783():
    dx121 = getTryDispatchBuiltinValue(dr76);
    goto L159(dx117, dx121);
  L784():
    ind3 = force? ind2;
    ___1 = ldf `[<-` in base;
    r369 = dyn ___1(l11, dx117, ind3);
    goto L159(dx119, r369);
  L790():
    mask11 = force? mask10;
    checkMissing(mask11);
    c224 = `is.object`(mask11);
    if c224 then L791() else L792(mask11);
  L796():
    warning2 = ldf warning;
    check L797() else D221();
  L902():
    dx176 = getTryDispatchBuiltinValue(dr120);
    goto L899(dx176);
  L903():
    warning3 = ldf warning;
    check L904() else D261();
  D221():
    deopt 822 [];
  D223():
    deopt 827 [arma6];
  D261():
    deopt 992 [];
  D263():
    deopt 999 [res4];
  L163(dx126):
    r374 = `!`(dx126);
    any6 = ldf any in base;
    r375 = dyn any6(r374);
    check L795() else D220();
  L791():
    dr78 = tryDispatchBuiltin.1("[", mask11);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L793() else L792(dr78);
  L792(mask13):
    narma12 = ld narma;
    check L794() else D219();
  L797():
    r376 = dyn warning2("transformed ARMA parameters were fixed");
    check L798() else D222();
  L800():
    arma7 = force? arma6;
    checkMissing(arma7);
    c226 = `is.object`(arma7);
    if c226 then L801() else L802(arma7);
  L904():
    p47 = prom<V +>{
      gettextf = ldf gettextf;
      p46 = prom<V +>{
        code = ld code;
        code1 = force? code;
        checkMissing(code1);
        return code1;
      };
      r490 = dyn gettextf("possible convergence problem: optim gave code = %d", p46);
      return r490;
    };
    r492 = dyn warning3[, domain](p47, NA_LGL);
    check L905() else D262();
  L907():
    res5 = force? res4;
    checkMissing(res5);
    c255 = `is.object`(res5);
    if c255 then L909() else L910(res5);
  D219():
    deopt 814 [mask13, 1, narma12];
  D220():
    deopt 820 [r375];
  D222():
    deopt 824 [r376];
  D262():
    deopt 996 [r492];
  L166(dx128):
    r379 = `>`(dx128, 0.0);
    c227 = `as.logical`(r379);
    if c227 then L804() else L167();
  L793():
    dx125 = getTryDispatchBuiltinValue(dr78);
    goto L163(dx125);
  L794():
    narma13 = force? narma12;
    checkMissing(narma13);
    r372 = `:`(1, narma13);
    __18 = ldf `[` in base;
    r373 = dyn __18(mask13, r372);
    goto L163(r373);
  L795():
    goto L162(r375);
  L798():
    goto L165();
  L801():
    dr80 = tryDispatchBuiltin.1("[", arma7);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L803() else L802(dr80);
  L802(arma9):
    __19 = ldf `[` in base;
    r378 = dyn __19(arma9, 1);
    goto L166(r378);
  L905():
    goto L198();
  L908(dx179):
    st coef = dx179;
    transform_pars7 = ld `transform.pars`;
    check L912() else D264();
  L909():
    dr122 = tryDispatchBuiltin.1("$", res5);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L911() else L910(dr122);
  L910(res7):
    r494 = `$`(res7, <sym par>);
    goto L908(r494);
  D264():
    deopt 1003 [transform_pars7];
  L167():
    goto L170();
  L170():
    arma14 = ld arma;
    check L812() else D228();
  L803():
    dx127 = getTryDispatchBuiltinValue(dr80);
    goto L166(dx127);
  L804():
    arCheck = ldf arCheck;
    check L805() else D224();
  L911():
    dx178 = getTryDispatchBuiltinValue(dr122);
    goto L908(dx178);
  L912():
    transform_pars8 = force? transform_pars7;
    checkMissing(transform_pars8);
    c256 = `as.logical`(transform_pars8);
    if c256 then L913() else L199();
  D224():
    deopt 835 [];
  D228():
    deopt 847 [arma14];
  L199():
    solve1 = ldf solve;
    check L957() else D288();
  L208():
    arma0f2 = ldf arma0f;
    check L959() else D290();
  L805():
    p38 = prom<V +>{
      init15 = ld init;
      init16 = force? init15;
      checkMissing(init16);
      c228 = `is.object`(init16);
      if c228 then L2() else L3(init16);
    L0(dx130):
      return dx130;
    L2():
      dr82 = tryDispatchBuiltin.1("[", init16);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L4() else L3(dr82);
    L3(init18):
      arma10 = ld arma;
      arma11 = force? arma10;
      checkMissing(arma11);
      c229 = `is.object`(arma11);
      if c229 then L5() else L6(init18, 1, arma11);
    L1(init22, r383, dx132):
      r385 = `:`(r383, dx132);
      __21 = ldf `[` in base;
      r386 = dyn __21(init22, r385);
      goto L0(r386);
    L4():
      dx129 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx129);
    L5():
      dr84 = tryDispatchBuiltin.1("[", arma11);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L7() else L6(init18, 1, dr84);
    L6(init20, r381, arma13):
      __20 = ldf `[` in base;
      r384 = dyn __20(arma13, 1);
      goto L1(init20, r381, r384);
    L7():
      dx131 = getTryDispatchBuiltinValue(dr84);
      goto L1(init18, 1, dx131);
    };
    r388 = dyn arCheck(p38);
    check L806() else D225();
  L812():
    arma15 = force? arma14;
    checkMissing(arma15);
    c231 = `is.object`(arma15);
    if c231 then L813() else L814(arma15);
  L913():
    fixed7 = ld fixed;
    check L914() else D265();
  D225():
    deopt 837 [r388];
  D265():
    deopt 1005 [fixed7];
  D288():
    deopt 1068 [];
  D290():
    deopt 1073 [];
  L171(dx134):
    r394 = `>`(dx134, 0.0);
    c232 = `as.logical`(r394);
    if c232 then L816() else L172();
  L806():
    r389 = `!`(r388);
    c230 = `as.logical`(r389);
    if c230 then L807() else L168();
  L813():
    dr86 = tryDispatchBuiltin.1("[", arma15);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L815() else L814(dr86);
  L814(arma17):
    __22 = ldf `[` in base;
    r393 = dyn __22(arma17, 3);
    goto L171(r393);
  L914():
    fixed8 = force? fixed7;
    checkMissing(fixed8);
    st cf = fixed8;
    coef1 = ld coef;
    check L915() else D266();
  L957():
    p50 = prom<V +>{
      res12 = ld res;
      res13 = force? res12;
      checkMissing(res13);
      c261 = `is.object`(res13);
      if c261 then L2() else L3(res13);
    L1(dx192):
      sym67 = ldf length;
      base67 = ldf length in base;
      guard67 = `==`.4(sym67, base67);
      if guard67 then L5() else L6();
    L2():
      dr132 = tryDispatchBuiltin.1("$", res13);
      dc66 = getTryDispatchBuiltinDispatched(dr132);
      if dc66 then L4() else L3(dr132);
    L3(res15):
      r529 = `$`(res15, <sym hessian>);
      goto L1(r529);
    L0(dx195, r531):
      r533 = `*`(dx195, r531);
      return r533;
    L4():
      dx191 = getTryDispatchBuiltinValue(dr132);
      goto L1(dx191);
    L5():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      length9 = ldf length in base;
      r532 = dyn length9(x26);
      goto L0(dx192, r532);
    L6():
      r530 = dyn base67(<sym x>);
      goto L0(dx192, r530);
    };
    r535 = dyn solve1(p50);
    check L958() else D289();
  L959():
    p51 = prom<V +>{
      coef7 = ld coef;
      coef8 = force? coef7;
      checkMissing(coef8);
      return coef8;
    };
    r537 = dyn arma0f2(p51);
    check L960() else D291();
  D266():
    deopt 1008 [coef1];
  D289():
    deopt 1070 [r535];
  D291():
    deopt 1075 [r537];
  L168():
    goto L169(NULL);
  L169(r391):
    goto L170();
  L172():
    goto L175();
  L175():
    arma26 = ld arma;
    check L824() else D233();
  L807():
    stop11 = ldf stop;
    check L808() else D226();
  L815():
    dx133 = getTryDispatchBuiltinValue(dr86);
    goto L171(dx133);
  L816():
    arCheck1 = ldf arCheck;
    check L817() else D229();
  L915():
    coef2 = force? coef1;
    checkMissing(coef2);
    l21 = ld cf;
    c257 = `is.object`(l21);
    if c257 then L916() else L917(coef2, l21);
  L958():
    st var = r535;
    goto L208();
  L960():
    sym68 = ldf `.Call`;
    base68 = ldf `.Call` in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L961() else L962();
  D226():
    deopt 840 [];
  D229():
    deopt 855 [];
  D233():
    deopt 867 [arma26];
  L200(dx181):
    st cf = dx181;
    sym61 = ldf `.Call`;
    base61 = ldf `.Call` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L920() else L921();
  L209(r539):
    st sigma2 = r539;
    sym69 = ldf `.Call`;
    base69 = ldf `.Call` in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L965() else L966();
  L808():
    r390 = dyn stop11("non-stationary AR part");
    check L809() else D227();
  L817():
    p39 = prom<V +>{
      init23 = ld init;
      init24 = force? init23;
      checkMissing(init24);
      c233 = `is.object`(init24);
      if c233 then L4() else L5(init24);
    L0(dx136):
      return dx136;
    L4():
      dr88 = tryDispatchBuiltin.1("[", init24);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L6() else L5(dr88);
    L5(init26):
      sym55 = ldf sum;
      base55 = ldf sum in base;
      guard55 = `==`.4(sym55, base55);
      if guard55 then L7() else L8();
    L1(init29, r396):
      arma22 = ld arma;
      arma23 = force? arma22;
      checkMissing(arma23);
      c235 = `is.object`(arma23);
      if c235 then L12() else L13(init29, r396, 1, arma23);
    L6():
      dx135 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx135);
    L7():
      arma18 = ld arma;
      arma19 = force? arma18;
      checkMissing(arma19);
      c234 = `is.object`(arma19);
      if c234 then L9() else L10(init26, arma19);
    L8():
      r395 = dyn base55(<lang `[`(arma, `:`(1, 2.0))>);
      goto L1(init26, r395);
    L2(init33, dx138):
      sum1 = ldf sum in base;
      r398 = dyn sum1(dx138);
      goto L1(init33, r398);
    L3(init37, r405, r406, dx140):
      r408 = `:`(r406, dx140);
      r409 = `+`(r405, r408);
      __25 = ldf `[` in base;
      r410 = dyn __25(init37, r409);
      goto L0(r410);
    L9():
      dr90 = tryDispatchBuiltin.1("[", arma19);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L11() else L10(init26, dr90);
    L10(init31, arma21):
      __23 = ldf `[` in base;
      r397 = dyn __23(arma21, <int 1, 2>);
      goto L2(init31, r397);
    L12():
      dr92 = tryDispatchBuiltin.1("[", arma23);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L14() else L13(init29, r396, 1, dr92);
    L13(init35, r401, r402, arma25):
      __24 = ldf `[` in base;
      r407 = dyn __24(arma25, 3);
      goto L3(init35, r401, r402, r407);
    L11():
      dx137 = getTryDispatchBuiltinValue(dr90);
      goto L2(init26, dx137);
    L14():
      dx139 = getTryDispatchBuiltinValue(dr92);
      goto L3(init29, r396, 1, dx139);
    };
    r412 = dyn arCheck1(p39);
    check L818() else D230();
  L824():
    arma27 = force? arma26;
    checkMissing(arma27);
    c237 = `is.object`(arma27);
    if c237 then L825() else L826(arma27);
  L916():
    dr124 = tryDispatchBuiltin.0("[<-", l21, coef2);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L918() else L917(coef2, dr124);
  L917(coef4, l23):
    mask18 = ld mask;
    check L919() else D267();
  L961():
    C_get_s2 = ld C_get_s2;
    check L963() else D292();
  L962():
    r538 = dyn base68(<sym C_get_s2>, <sym G>);
    goto L209(r538);
  D227():
    deopt 842 [r390];
  D230():
    deopt 857 [r412];
  D267():
    deopt 1011 [coef4, l23, coef2, mask18];
  D292():
    deopt 1077 [C_get_s2];
  L176(dx142):
    r418 = `>`(dx142, 0.0);
    c238 = `as.logical`(r418);
    if c238 then L828() else L177();
  L201(r497):
    c258 = `is.object`(r497);
    if c258 then L928() else L929(r497);
  L210(r542):
    st resid = r542;
    xtsp = ld xtsp;
    check L969() else D296();
  L809():
    goto L169(r390);
  L818():
    r413 = `!`(r412);
    c236 = `as.logical`(r413);
    if c236 then L819() else L173();
  L825():
    dr94 = tryDispatchBuiltin.1("[", arma27);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L827() else L826(dr94);
  L826(arma29):
    __26 = ldf `[` in base;
    r417 = dyn __26(arma29, 2);
    goto L176(r417);
  L918():
    dx180 = getTryDispatchBuiltinValue(dr124);
    goto L200(dx180);
  L919():
    mask19 = force? mask18;
    ___4 = ldf `[<-` in base;
    r495 = dyn ___4(l23, coef2, mask19);
    goto L200(r495);
  L920():
    C_Gradtrans = ld C_Gradtrans;
    check L922() else D268();
  L921():
    r496 = dyn base61(<sym C_Gradtrans>, <sym G>, <lang as.double(cf)>);
    goto L201(r496);
  L963():
    C_get_s3 = force? C_get_s2;
    checkMissing(C_get_s3);
    G19 = ld G;
    check L964() else D293();
  L965():
    C_get_resid = ld C_get_resid;
    check L967() else D294();
  L966():
    r541 = dyn base69(<sym C_get_resid>, <sym G>);
    goto L210(r541);
  D268():
    deopt 1016 [C_Gradtrans];
  D293():
    deopt 1078 [C_get_s3, G19];
  D294():
    deopt 1083 [C_get_resid];
  D296():
    deopt 1088 [xtsp];
  L173():
    goto L174(NULL);
  L174(r415):
    goto L175();
  L177():
    goto L181();
  L181():
    arma38 = ld arma;
    check L844() else D239();
  L203(dx183):
    st A = dx183;
    t = ldf t;
    check L933() else D274();
  L819():
    stop12 = ldf stop;
    check L820() else D231();
  L827():
    dx141 = getTryDispatchBuiltinValue(dr94);
    goto L176(dx141);
  L828():
    arma30 = ld arma;
    check L829() else D234();
  L922():
    C_Gradtrans1 = force? C_Gradtrans;
    checkMissing(C_Gradtrans1);
    G7 = ld G;
    check L923() else D269();
  L928():
    dr126 = tryDispatchBuiltin.1("[", r497);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L930() else L929(dr126);
  L929(r503):
    mask20 = ld mask;
    check L931() else D272();
  L964():
    G20 = force? G19;
    checkMissing(G20);
    vargs6 = dots[G20];
    r540 = `.Call`(C_get_s3, vargs6, <missing>);
    goto L209(r540);
  L967():
    C_get_resid1 = force? C_get_resid;
    checkMissing(C_get_resid1);
    G21 = ld G;
    check L968() else D295();
  L969():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l24 = ld resid;
    tsp__1 = ldf `tsp<-`;
    check L970() else D297();
  D231():
    deopt 860 [];
  D234():
    deopt 874 [arma30];
  D239():
    deopt 898 [arma38];
  D269():
    deopt 1017 [C_Gradtrans1, G7];
  D272():
    deopt 1025 [r503, mask20];
  D274():
    deopt 1033 [];
  D295():
    deopt 1084 [C_get_resid1, G21];
  D297():
    deopt 1091 [xtsp1, l24, xtsp1];
  L820():
    r414 = dyn stop12("non-stationary seasonal AR part");
    check L821() else D232();
  L829():
    arma31 = force? arma30;
    checkMissing(arma31);
    c239 = `is.object`(arma31);
    if c239 then L830() else L831(arma31);
  L844():
    arma39 = force? arma38;
    checkMissing(arma39);
    c243 = `is.object`(arma39);
    if c243 then L845() else L846(arma39);
  L923():
    G8 = force? G7;
    checkMissing(G8);
    sym62 = ldf `as.double`;
    base62 = ldf `as.double` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L924() else L925();
  L930():
    dx182 = getTryDispatchBuiltinValue(dr126);
    goto L203(dx182);
  L931():
    mask21 = force? mask20;
    mask22 = ld mask;
    check L932() else D273();
  L933():
    p48 = prom<V +>{
      A = ld A;
      A1 = force? A;
      checkMissing(A1);
      return A1;
    };
    r506 = dyn t(p48);
    check L934() else D275();
  L968():
    G22 = force? G21;
    checkMissing(G22);
    vargs7 = dots[G22];
    r543 = `.Call`(C_get_resid1, vargs7, <missing>);
    goto L210(r543);
  L970():
    r544 = dyn tsp__1(l24, NULL, xtsp1);
    check L971() else D298();
  D232():
    deopt 862 [r414];
  D273():
    deopt 1026 [r503, mask21, mask22];
  D275():
    deopt 1035 [r506];
  D298():
    deopt 1093 [xtsp1, r544];
  L178(dx144):
    arma34 = ld arma;
    check L833() else D235();
  L182(dx156):
    r437 = `>`(dx156, 0.0);
    c244 = `as.logical`(r437);
    if c244 then L848() else L183();
  L202(C_Gradtrans4, G11, r499):
    vargs3 = dots[G11, r499];
    r501 = `.Call`(C_Gradtrans4, vargs3, <missing>);
    goto L201(r501);
  L821():
    goto L174(r414);
  L830():
    dr96 = tryDispatchBuiltin.1("[", arma31);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L832() else L831(dr96);
  L831(arma33):
    __27 = ldf `[` in base;
    r419 = dyn __27(arma33, 1);
    goto L178(r419);
  L845():
    dr104 = tryDispatchBuiltin.1("[", arma39);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L847() else L846(dr104);
  L846(arma41):
    __30 = ldf `[` in base;
    r436 = dyn __30(arma41, 4);
    goto L182(r436);
  L924():
    cf = ld cf;
    check L926() else D270();
  L925():
    r498 = dyn base62(<sym cf>);
    goto L202(C_Gradtrans1, G8, r498);
  L932():
    mask23 = force? mask22;
    __36 = ldf `[` in base;
    r504 = dyn __36(r503, mask21, mask23);
    goto L203(r504);
  L934():
    solve = ldf solve;
    check L935() else D276();
  L971():
    st resid = r544;
    l25 = ld resid;
    class__1 = ldf `class<-`;
    check L972() else D299();
  D235():
    deopt 879 [dx144, 1, arma34];
  D270():
    deopt 1020 [C_Gradtrans1, G8, cf];
  D276():
    deopt 1037 [];
  D299():
    deopt 1098 ["ts", l25, "ts"];
  L183():
    goto L188();
  L188():
    sym57 = ldf `.Call`;
    base57 = ldf `.Call` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L867() else L868();
  L832():
    dx143 = getTryDispatchBuiltinValue(dr96);
    goto L178(dx143);
  L833():
    arma35 = force? arma34;
    checkMissing(arma35);
    c240 = `is.object`(arma35);
    if c240 then L834() else L835(dx144, 1, arma35);
  L847():
    dx155 = getTryDispatchBuiltinValue(dr104);
    goto L182(dx155);
  L848():
    sym56 = ldf sum;
    base56 = ldf sum in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L849() else L850();
  L926():
    cf1 = force? cf;
    checkMissing(cf1);
    as_double1 = ldf `as.double` in base;
    r500 = dyn as_double1(cf1);
    check L927() else D271();
  L935():
    p49 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      c259 = `is.object`(res9);
      if c259 then L2() else L3(res9);
    L1(dx185):
      sym63 = ldf length;
      base63 = ldf length in base;
      guard63 = `==`.4(sym63, base63);
      if guard63 then L5() else L6();
    L2():
      dr128 = tryDispatchBuiltin.1("$", res9);
      dc64 = getTryDispatchBuiltinDispatched(dr128);
      if dc64 then L4() else L3(dr128);
    L3(res11):
      r507 = `$`(res11, <sym hessian>);
      goto L1(r507);
    L0(dx188, r509):
      r511 = `*`(dx188, r509);
      return r511;
    L4():
      dx184 = getTryDispatchBuiltinValue(dr128);
      goto L1(dx184);
    L5():
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      length8 = ldf length in base;
      r510 = dyn length8(x24);
      goto L0(dx185, r510);
    L6():
      r508 = dyn base63(<sym x>);
      goto L0(dx185, r508);
    };
    r513 = dyn solve(p49);
    check L936() else D277();
  L972():
    r545 = dyn class__1(l25, NULL, "ts");
    check L973() else D300();
  D271():
    deopt 1023 [C_Gradtrans1, G8, r500];
  D277():
    deopt 1039 [r513];
  D300():
    deopt 1100 ["ts", r545];
  L179(dx149, r423, dx150):
    r425 = `:`(r423, dx150);
    r426 = `+`(dx149, r425);
    st ind = r426;
    maInvert = ldf maInvert;
    check L837() else D236();
  L184(r439):
    arma46 = ld arma;
    check L856() else D242();
  L189(r463):
    st init = r463;
    goto L191(r463);
  L834():
    dr98 = tryDispatchBuiltin.1("[", arma35);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L836() else L835(dx144, 1, dr98);
  L835(dx146, r421, arma37):
    __28 = ldf `[` in base;
    r424 = dyn __28(arma37, 2);
    goto L179(dx146, r421, r424);
  L849():
    arma42 = ld arma;
    check L851() else D240();
  L850():
    r438 = dyn base56(<lang `[`(arma, `:`(1, 3.0))>);
    goto L184(r438);
  L867():
    C_Invtrans = ld C_Invtrans;
    check L869() else D246();
  L868():
    r462 = dyn base57(<sym C_Invtrans>, <sym G>, <lang as.double(init)>);
    goto L189(r462);
  L927():
    goto L202(C_Gradtrans1, G8, r500);
  L936():
    ___5 = ldf `%*%` in base;
    r514 = dyn ___5(r506, r513);
    check L937() else D278();
  L973():
    st resid = r545;
    sym70 = ldf sum;
    base70 = ldf sum in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L974() else L975();
  D236():
    deopt 888 [];
  D240():
    deopt 907 [arma42];
  D242():
    deopt 914 [r439, 1, arma46];
  D246():
    deopt 934 [C_Invtrans];
  D278():
    deopt 1041 [r514];
  L211(r547):
    st `n.used` = r547;
    st nm = NULL;
    arma50 = ld arma;
    check L981() else D304();
  L836():
    dx148 = getTryDispatchBuiltinValue(dr98);
    goto L179(dx144, 1, dx148);
  L837():
    p40 = prom<V +>{
      init38 = ld init;
      init39 = force? init38;
      checkMissing(init39);
      c241 = `is.object`(init39);
      if c241 then L1() else L2(init39);
    L0(dx152):
      return dx152;
    L1():
      dr100 = tryDispatchBuiltin.1("[", init39);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L3() else L2(dr100);
    L2(init41):
      ind4 = ld ind;
      ind5 = force? ind4;
      __29 = ldf `[` in base;
      r427 = dyn __29(init41, ind5);
      goto L0(r427);
    L3():
      dx151 = getTryDispatchBuiltinValue(dr100);
      goto L0(dx151);
    };
    r429 = dyn maInvert(p40);
    check L838() else D237();
  L851():
    arma43 = force? arma42;
    checkMissing(arma43);
    c245 = `is.object`(arma43);
    if c245 then L852() else L853(arma43);
  L856():
    arma47 = force? arma46;
    checkMissing(arma47);
    c246 = `is.object`(arma47);
    if c246 then L857() else L858(r439, 1, arma47);
  L869():
    C_Invtrans1 = force? C_Invtrans;
    checkMissing(C_Invtrans1);
    G = ld G;
    check L870() else D247();
  L937():
    A2 = ld A;
    check L938() else D279();
  L974():
    sym71 = ldf `is.na`;
    base71 = ldf `is.na` in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L976() else L977();
  L975():
    r546 = dyn base70(<lang `!`(is.na(resid))>);
    goto L211(r546);
  D237():
    deopt 890 [r429];
  D247():
    deopt 935 [C_Invtrans1, G];
  D279():
    deopt 1042 [A2];
  D304():
    deopt 1117 [arma50];
  L185(dx158):
    sum2 = ldf sum in base;
    r441 = dyn sum2(dx158);
    check L855() else D241();
  L186(r448, r449, dx160):
    r451 = `:`(r449, dx160);
    r452 = `+`(r448, r451);
    st ind = r452;
    maInvert1 = ldf maInvert;
    check L860() else D243();
  L212(r549):
    r551 = `!`(r549);
    sum3 = ldf sum in base;
    r552 = dyn sum3(r551);
    check L980() else D303();
  L838():
    l12 = ld init;
    c242 = `is.object`(l12);
    if c242 then L839() else L840(r429, l12);
  L852():
    dr106 = tryDispatchBuiltin.1("[", arma43);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L854() else L853(dr106);
  L853(arma45):
    __31 = ldf `[` in base;
    r440 = dyn __31(arma45, <int 1, 2, 3>);
    goto L185(r440);
  L857():
    dr108 = tryDispatchBuiltin.1("[", arma47);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L859() else L858(r439, 1, dr108);
  L858(r444, r445, arma49):
    __32 = ldf `[` in base;
    r450 = dyn __32(arma49, 4);
    goto L186(r444, r445, r450);
  L870():
    G1 = force? G;
    checkMissing(G1);
    sym58 = ldf `as.double`;
    base58 = ldf `as.double` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L871() else L872();
  L938():
    A3 = force? A2;
    checkMissing(A3);
    ___6 = ldf `%*%` in base;
    r515 = dyn ___6(r514, A3);
    check L939() else D280();
  L976():
    resid = ld resid;
    check L978() else D301();
  L977():
    r548 = dyn base71(<sym resid>);
    goto L212(r548);
  L981():
    arma51 = force? arma50;
    checkMissing(arma51);
    c262 = `is.object`(arma51);
    if c262 then L982() else L983(arma51);
  D241():
    deopt 913 [r441];
  D243():
    deopt 923 [];
  D280():
    deopt 1045 [r515];
  D301():
    deopt 1106 [resid];
  D303():
    deopt 1112 [r552];
  L180(r433, dx154):
    st init = dx154;
    goto L181();
  L190(C_Invtrans4, G4, r465):
    vargs1 = dots[G4, r465];
    r467 = `.Call`(C_Invtrans4, vargs1, <missing>);
    goto L189(r467);
  L213(dx197):
    r554 = `>`(dx197, 0.0);
    c263 = `as.logical`(r554);
    if c263 then L985() else L214();
  L839():
    dr102 = tryDispatchBuiltin.0("[<-", l12, r429);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L841() else L840(r429, dr102);
  L840(r431, l14):
    ind6 = ld ind;
    check L842() else D238();
  L854():
    dx157 = getTryDispatchBuiltinValue(dr106);
    goto L185(dx157);
  L855():
    goto L184(r441);
  L859():
    dx159 = getTryDispatchBuiltinValue(dr108);
    goto L186(r439, 1, dx159);
  L860():
    p41 = prom<V +>{
      init42 = ld init;
      init43 = force? init42;
      checkMissing(init43);
      c247 = `is.object`(init43);
      if c247 then L1() else L2(init43);
    L0(dx162):
      return dx162;
    L1():
      dr110 = tryDispatchBuiltin.1("[", init43);
      dc55 = getTryDispatchBuiltinDispatched(dr110);
      if dc55 then L3() else L2(dr110);
    L2(init45):
      ind8 = ld ind;
      ind9 = force? ind8;
      __33 = ldf `[` in base;
      r453 = dyn __33(init45, ind9);
      goto L0(r453);
    L3():
      dx161 = getTryDispatchBuiltinValue(dr110);
      goto L0(dx161);
    };
    r455 = dyn maInvert1(p41);
    check L861() else D244();
  L871():
    init46 = ld init;
    check L873() else D248();
  L872():
    r464 = dyn base58(<sym init>);
    goto L190(C_Invtrans1, G1, r464);
  L939():
    st var = r515;
    sym64 = ldf `.Call`;
    base64 = ldf `.Call` in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L940() else L941();
  L978():
    resid1 = force? resid;
    checkMissing(resid1);
    is_na3 = ldf `is.na` in base;
    r550 = dyn is_na3(resid1);
    check L979() else D302();
  L980():
    goto L211(r552);
  L982():
    dr134 = tryDispatchBuiltin.1("[", arma51);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L984() else L983(dr134);
  L983(arma53):
    __38 = ldf `[` in base;
    r553 = dyn __38(arma53, 1);
    goto L213(r553);
  D238():
    deopt 892 [r431, l14, r429, ind6];
  D244():
    deopt 925 [r455];
  D248():
    deopt 938 [C_Invtrans1, G1, init46];
  D302():
    deopt 1109 [r550];
  L204(r517):
    c260 = `is.object`(r517);
    if c260 then L948() else L949(r517);
  L214():
    goto L216();
  L216():
    arma58 = ld arma;
    check L993() else D309();
  L841():
    dx153 = getTryDispatchBuiltinValue(dr102);
    goto L180(r429, dx153);
  L842():
    ind7 = force? ind6;
    ___2 = ldf `[<-` in base;
    r434 = dyn ___2(l14, r429, ind7);
    goto L180(r431, r434);
  L861():
    l15 = ld init;
    c248 = `is.object`(l15);
    if c248 then L862() else L863(r455, l15);
  L873():
    init47 = force? init46;
    checkMissing(init47);
    as_double = ldf `as.double` in base;
    r466 = dyn as_double(init47);
    check L874() else D249();
  L940():
    C_Dotrans = ld C_Dotrans;
    check L942() else D281();
  L941():
    r516 = dyn base64(<sym C_Dotrans>, <sym G>, <lang as.double(cf)>);
    goto L204(r516);
  L979():
    goto L212(r550);
  L984():
    dx196 = getTryDispatchBuiltinValue(dr134);
    goto L213(dx196);
  L985():
    sym72 = ldf c;
    base72 = ldf c in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L986() else L987();
  D249():
    deopt 941 [C_Invtrans1, G1, r466];
  D281():
    deopt 1048 [C_Dotrans];
  D309():
    deopt 1138 [arma58];
  L187(r459, dx164):
    st init = dx164;
    goto L188();
  L206(dx190):
    st coef = dx190;
    sym66 = ldf `.Call`;
    base66 = ldf `.Call` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L952() else L953();
  L215(r556):
    st nm = r556;
    goto L216();
  L862():
    dr112 = tryDispatchBuiltin.0("[<-", l15, r455);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L864() else L863(r455, dr112);
  L863(r457, l17):
    ind10 = ld ind;
    check L865() else D245();
  L874():
    goto L190(C_Invtrans1, G1, r466);
  L942():
    C_Dotrans1 = force? C_Dotrans;
    checkMissing(C_Dotrans1);
    G12 = ld G;
    check L943() else D282();
  L948():
    dr130 = tryDispatchBuiltin.1("[", r517);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L950() else L949(dr130);
  L949(r523):
    mask24 = ld mask;
    check L951() else D285();
  L986():
    nm = ld nm;
    check L988() else D305();
  L987():
    r555 = dyn base72(<sym nm>, <lang paste0("ar", `:`(1, `[`(arma, 1)))>);
    goto L215(r555);
  L993():
    arma59 = force? arma58;
    checkMissing(arma59);
    c266 = `is.object`(arma59);
    if c266 then L994() else L995(arma59);
  D245():
    deopt 927 [r457, l17, r455, ind10];
  D282():
    deopt 1049 [C_Dotrans1, G12];
  D285():
    deopt 1057 [r523, mask24];
  D305():
    deopt 1126 [nm];
  L207(r526):
    goto L208();
  L217(dx201):
    r568 = `>`(dx201, 0.0);
    c267 = `as.logical`(r568);
    if c267 then L997() else L218();
  L864():
    dx163 = getTryDispatchBuiltinValue(dr112);
    goto L187(r455, dx163);
  L865():
    ind11 = force? ind10;
    ___3 = ldf `[<-` in base;
    r460 = dyn ___3(l17, r455, ind11);
    goto L187(r457, r460);
  L943():
    G13 = force? G12;
    checkMissing(G13);
    sym65 = ldf `as.double`;
    base65 = ldf `as.double` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L944() else L945();
  L950():
    dx189 = getTryDispatchBuiltinValue(dr130);
    goto L206(dx189);
  L951():
    mask25 = force? mask24;
    __37 = ldf `[` in base;
    r524 = dyn __37(r523, mask25);
    goto L206(r524);
  L952():
    C_set_trans = ld C_set_trans;
    check L954() else D286();
  L953():
    r525 = dyn base66(<sym C_set_trans>, <sym G>, 0.0);
    goto L207(r525);
  L988():
    nm1 = force? nm;
    checkMissing(nm1);
    paste2 = ldf paste0;
    check L989() else D306();
  L994():
    dr138 = tryDispatchBuiltin.1("[", arma59);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L996() else L995(dr138);
  L995(arma61):
    __40 = ldf `[` in base;
    r567 = dyn __40(arma61, 2);
    goto L217(r567);
  D286():
    deopt 1062 [C_set_trans];
  D306():
    deopt 1129 [];
  L205(C_Dotrans4, G16, r519):
    vargs4 = dots[G16, r519];
    r521 = `.Call`(C_Dotrans4, vargs4, <missing>);
    goto L204(r521);
  L218():
    goto L220();
  L220():
    arma66 = ld arma;
    check L1005() else D314();
  L944():
    cf2 = ld cf;
    check L946() else D283();
  L945():
    r518 = dyn base65(<sym cf>);
    goto L205(C_Dotrans1, G13, r518);
  L954():
    C_set_trans1 = force? C_set_trans;
    checkMissing(C_set_trans1);
    G17 = ld G;
    check L955() else D287();
  L989():
    p52 = prom<V +>{
      arma54 = ld arma;
      arma55 = force? arma54;
      checkMissing(arma55);
      c264 = `is.object`(arma55);
      if c264 then L1() else L2(1, arma55);
    L0(r560, dx199):
      r562 = `:`(r560, dx199);
      return r562;
    L1():
      dr136 = tryDispatchBuiltin.1("[", arma55);
      dc68 = getTryDispatchBuiltinDispatched(dr136);
      if dc68 then L3() else L2(1, dr136);
    L2(r558, arma57):
      __39 = ldf `[` in base;
      r561 = dyn __39(arma57, 1);
      goto L0(r558, r561);
    L3():
      dx198 = getTryDispatchBuiltinValue(dr136);
      goto L0(1, dx198);
    };
    r564 = dyn paste2("ar", p52);
    check L990() else D307();
  L996():
    dx200 = getTryDispatchBuiltinValue(dr138);
    goto L217(dx200);
  L997():
    sym73 = ldf c;
    base73 = ldf c in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L998() else L999();
  D283():
    deopt 1052 [C_Dotrans1, G13, cf2];
  D287():
    deopt 1063 [C_set_trans1, G17];
  D307():
    deopt 1132 [r564];
  D314():
    deopt 1159 [arma66];
  L219(r570):
    st nm = r570;
    goto L220();
  L946():
    cf3 = force? cf2;
    checkMissing(cf3);
    as_double2 = ldf `as.double` in base;
    r520 = dyn as_double2(cf3);
    check L947() else D284();
  L955():
    G18 = force? G17;
    checkMissing(G18);
    vargs5 = dots[G18, 0.0];
    r527 = `.Call`(C_set_trans1, vargs5, <missing>);
    goto L207(r527);
  L990():
    c265 = ldf c in base;
    r565 = dyn c265(nm1, r564);
    check L991() else D308();
  L998():
    nm2 = ld nm;
    check L1000() else D310();
  L999():
    r569 = dyn base73(<sym nm>, <lang paste0("ma", `:`(1, `[`(arma, 2)))>);
    goto L219(r569);
  L1005():
    arma67 = force? arma66;
    checkMissing(arma67);
    c270 = `is.object`(arma67);
    if c270 then L1006() else L1007(arma67);
  D284():
    deopt 1055 [C_Dotrans1, G13, r520];
  D308():
    deopt 1134 [r565];
  D310():
    deopt 1147 [nm2];
  L221(dx205):
    r582 = `>`(dx205, 0.0);
    c271 = `as.logical`(r582);
    if c271 then L1009() else L222();
  L947():
    goto L205(C_Dotrans1, G13, r520);
  L991():
    goto L215(r565);
  L1000():
    nm3 = force? nm2;
    checkMissing(nm3);
    paste3 = ldf paste0;
    check L1001() else D311();
  L1006():
    dr142 = tryDispatchBuiltin.1("[", arma67);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L1008() else L1007(dr142);
  L1007(arma69):
    __42 = ldf `[` in base;
    r581 = dyn __42(arma69, 3);
    goto L221(r581);
  D311():
    deopt 1150 [];
  L222():
    goto L224();
  L224():
    arma74 = ld arma;
    check L1017() else D319();
  L1001():
    p53 = prom<V +>{
      arma62 = ld arma;
      arma63 = force? arma62;
      checkMissing(arma63);
      c268 = `is.object`(arma63);
      if c268 then L1() else L2(1, arma63);
    L0(r574, dx203):
      r576 = `:`(r574, dx203);
      return r576;
    L1():
      dr140 = tryDispatchBuiltin.1("[", arma63);
      dc70 = getTryDispatchBuiltinDispatched(dr140);
      if dc70 then L3() else L2(1, dr140);
    L2(r572, arma65):
      __41 = ldf `[` in base;
      r575 = dyn __41(arma65, 2);
      goto L0(r572, r575);
    L3():
      dx202 = getTryDispatchBuiltinValue(dr140);
      goto L0(1, dx202);
    };
    r578 = dyn paste3("ma", p53);
    check L1002() else D312();
  L1008():
    dx204 = getTryDispatchBuiltinValue(dr142);
    goto L221(dx204);
  L1009():
    sym74 = ldf c;
    base74 = ldf c in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L1010() else L1011();
  D312():
    deopt 1153 [r578];
  D319():
    deopt 1180 [arma74];
  L223(r584):
    st nm = r584;
    goto L224();
  L1002():
    c269 = ldf c in base;
    r579 = dyn c269(nm3, r578);
    check L1003() else D313();
  L1010():
    nm4 = ld nm;
    check L1012() else D315();
  L1011():
    r583 = dyn base74(<sym nm>, <lang paste0("sar", `:`(1, `[`(arma, 3)))>);
    goto L223(r583);
  L1017():
    arma75 = force? arma74;
    checkMissing(arma75);
    c274 = `is.object`(arma75);
    if c274 then L1018() else L1019(arma75);
  D313():
    deopt 1155 [r579];
  D315():
    deopt 1168 [nm4];
  L225(dx209):
    r596 = `>`(dx209, 0.0);
    c275 = `as.logical`(r596);
    if c275 then L1021() else L226();
  L1003():
    goto L219(r579);
  L1012():
    nm5 = force? nm4;
    checkMissing(nm5);
    paste4 = ldf paste0;
    check L1013() else D316();
  L1018():
    dr146 = tryDispatchBuiltin.1("[", arma75);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L1020() else L1019(dr146);
  L1019(arma77):
    __44 = ldf `[` in base;
    r595 = dyn __44(arma77, 4);
    goto L225(r595);
  D316():
    deopt 1171 [];
  L226():
    goto L228();
  L228():
    coef9 = ld coef;
    check L1029() else D324();
  L1013():
    p54 = prom<V +>{
      arma70 = ld arma;
      arma71 = force? arma70;
      checkMissing(arma71);
      c272 = `is.object`(arma71);
      if c272 then L1() else L2(1, arma71);
    L0(r588, dx207):
      r590 = `:`(r588, dx207);
      return r590;
    L1():
      dr144 = tryDispatchBuiltin.1("[", arma71);
      dc72 = getTryDispatchBuiltinDispatched(dr144);
      if dc72 then L3() else L2(1, dr144);
    L2(r586, arma73):
      __43 = ldf `[` in base;
      r589 = dyn __43(arma73, 3);
      goto L0(r586, r589);
    L3():
      dx206 = getTryDispatchBuiltinValue(dr144);
      goto L0(1, dx206);
    };
    r592 = dyn paste4("sar", p54);
    check L1014() else D317();
  L1020():
    dx208 = getTryDispatchBuiltinValue(dr146);
    goto L225(dx208);
  L1021():
    sym75 = ldf c;
    base75 = ldf c in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L1022() else L1023();
  D317():
    deopt 1174 [r592];
  D324():
    deopt 1201 [coef9];
  L227(r598):
    st nm = r598;
    goto L228();
  L1014():
    c273 = ldf c in base;
    r593 = dyn c273(nm5, r592);
    check L1015() else D318();
  L1022():
    nm6 = ld nm;
    check L1024() else D320();
  L1023():
    r597 = dyn base75(<sym nm>, <lang paste0("sma", `:`(1, `[`(arma, 4)))>);
    goto L227(r597);
  L1029():
    coef10 = force? coef9;
    checkMissing(coef10);
    l26 = ld fixed;
    c278 = `is.object`(l26);
    if c278 then L1030() else L1031(coef10, l26);
  D318():
    deopt 1176 [r593];
  D320():
    deopt 1189 [nm6];
  L229(dx213):
    st fixed = dx213;
    ncxreg22 = ld ncxreg;
    check L1034() else D326();
  L1015():
    goto L223(r593);
  L1024():
    nm7 = force? nm6;
    checkMissing(nm7);
    paste5 = ldf paste0;
    check L1025() else D321();
  L1030():
    dr150 = tryDispatchBuiltin.0("[<-", l26, coef10);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L1032() else L1031(coef10, dr150);
  L1031(coef12, l28):
    mask26 = ld mask;
    check L1033() else D325();
  D321():
    deopt 1192 [];
  D325():
    deopt 1204 [coef12, l28, coef10, mask26];
  D326():
    deopt 1208 [ncxreg22];
  L1025():
    p55 = prom<V +>{
      arma78 = ld arma;
      arma79 = force? arma78;
      checkMissing(arma79);
      c276 = `is.object`(arma79);
      if c276 then L1() else L2(1, arma79);
    L0(r602, dx211):
      r604 = `:`(r602, dx211);
      return r604;
    L1():
      dr148 = tryDispatchBuiltin.1("[", arma79);
      dc74 = getTryDispatchBuiltinDispatched(dr148);
      if dc74 then L3() else L2(1, dr148);
    L2(r600, arma81):
      __45 = ldf `[` in base;
      r603 = dyn __45(arma81, 4);
      goto L0(r600, r603);
    L3():
      dx210 = getTryDispatchBuiltinValue(dr148);
      goto L0(1, dx210);
    };
    r606 = dyn paste5("sma", p55);
    check L1026() else D322();
  L1032():
    dx212 = getTryDispatchBuiltinValue(dr150);
    goto L229(dx212);
  L1033():
    mask27 = force? mask26;
    ___7 = ldf `[<-` in base;
    r609 = dyn ___7(l28, coef10, mask27);
    goto L229(r609);
  L1034():
    ncxreg23 = force? ncxreg22;
    checkMissing(ncxreg23);
    r610 = `>`(ncxreg23, 0.0);
    c279 = `as.logical`(r610);
    if c279 then L1035() else L230();
  D322():
    deopt 1195 [r606];
  L230():
    goto L238();
  L238():
    nm10 = ld nm;
    check L1086() else D352();
  L1026():
    c277 = ldf c in base;
    r607 = dyn c277(nm7, r606);
    check L1027() else D323();
  L1035():
    sym76 = ldf c;
    base76 = ldf c in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L1036() else L1037();
  D323():
    deopt 1197 [r607];
  D352():
    deopt 1287 [nm10];
  L231(r612):
    st nm = r612;
    orig_xreg2 = ld `orig.xreg`;
    check L1041() else D330();
  L1027():
    goto L227(r607);
  L1036():
    nm8 = ld nm;
    check L1038() else D327();
  L1037():
    r611 = dyn base76(<sym nm>, <sym cn>);
    goto L231(r611);
  L1086():
    nm11 = force? nm10;
    checkMissing(nm11);
    l35 = ld fixed;
    names__ = ldf `names<-`;
    check L1087() else D353();
  D327():
    deopt 1214 [nm8];
  D330():
    deopt 1221 [orig_xreg2];
  D353():
    deopt 1290 [nm11, l35, nm11];
  L1038():
    nm9 = force? nm8;
    checkMissing(nm9);
    cn = ld cn;
    check L1039() else D328();
  L1041():
    orig_xreg3 = force? orig_xreg2;
    checkMissing(orig_xreg3);
    r614 = `!`(orig_xreg3);
    c281 = `as.logical`(r614);
    if c281 then L1042() else L232();
  L1087():
    r637 = dyn names__(l35, NULL, nm11);
    check L1088() else D354();
  D328():
    deopt 1216 [cn];
  D354():
    deopt 1292 [nm11, r637];
  L232():
    goto L237(NULL);
  L237(r635):
    goto L238();
  L1039():
    cn1 = force? cn;
    checkMissing(cn1);
    c280 = ldf c in base;
    r613 = dyn c280(nm9, cn1);
    check L1040() else D329();
  L1042():
    narma14 = ld narma;
    check L1043() else D331();
  L1088():
    st fixed = r637;
    sym77 = ldf c;
    base77 = ldf c in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L1089() else L1090();
  D329():
    deopt 1219 [r613];
  D331():
    deopt 1224 [narma14];
  L239(r639):
    l36 = ld arma;
    names__1 = ldf `names<-`;
    check L1092() else D356();
  L1040():
    goto L231(r613);
  L1043():
    narma15 = force? narma14;
    checkMissing(narma15);
    ncxreg24 = ld ncxreg;
    check L1044() else D332();
  L1089():
    c288 = ldf c in base;
    r640 = dyn c288("ar", "ma", "sar", "sma", "period", "diff", "sdiff");
    check L1091() else D355();
  L1090():
    r638 = dyn base77("ar", "ma", "sar", "sma", "period", "diff", "sdiff");
    goto L239(r638);
  D332():
    deopt 1226 [narma15, 1, ncxreg24];
  D355():
    deopt 1304 [r640];
  D356():
    deopt 1306 [r639, l36, r639];
  L1044():
    ncxreg25 = force? ncxreg24;
    checkMissing(ncxreg25);
    r615 = `:`(1, ncxreg25);
    r616 = `+`(narma15, r615);
    st ind = r616;
    S4 = ld S;
    check L1045() else D333();
  L1091():
    goto L239(r640);
  L1092():
    r641 = dyn names__1(l36, NULL, r639);
    check L1093() else D357();
  D333():
    deopt 1232 [S4];
  D357():
    deopt 1308 [r639, r641];
  L1045():
    S5 = force? S4;
    checkMissing(S5);
    c282 = `is.object`(S5);
    if c282 then L1047() else L1048(S5);
  L1093():
    st arma = r641;
    sym78 = ldf list;
    base78 = ldf list in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L1094() else L1095();
  L240(r643):
    l37 = ld var;
    dimnames__ = ldf `dimnames<-`;
    check L1107() else D363();
  L1046(dx215):
    fixed9 = ld fixed;
    check L1050() else D334();
  L1047():
    dr152 = tryDispatchBuiltin.1("$", S5);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L1049() else L1048(dr152);
  L1048(S7):
    r617 = `$`(S7, <sym v>);
    goto L1046(r617);
  L1094():
    nm12 = ld nm;
    check L1096() else D358();
  L1095():
    r642 = dyn base78(<lang `[`(nm, mask)>, <lang `[`(nm, mask)>);
    goto L240(r642);
  D334():
    deopt 1235 [fixed9];
  D358():
    deopt 1312 [nm12];
  D363():
    deopt 1325 [r643, l37, r643];
  L1049():
    dx214 = getTryDispatchBuiltinValue(dr152);
    goto L1046(dx214);
  L1050():
    fixed10 = force? fixed9;
    checkMissing(fixed10);
    c283 = `is.object`(fixed10);
    if c283 then L1051() else L1052(fixed10);
  L1096():
    nm13 = force? nm12;
    checkMissing(nm13);
    c289 = `is.object`(nm13);
    if c289 then L1097() else L1098(nm13);
  L1107():
    r647 = dyn dimnames__(l37, NULL, r643);
    check L1108() else D364();
  D364():
    deopt 1327 [r643, r647];
  L233(dx217):
    ___8 = ldf `%*%` in base;
    r619 = dyn ___8(dx215, dx217);
    check L1055() else D336();
  L241(dx231):
    nm16 = ld nm;
    check L1101() else D360();
  L1051():
    dr154 = tryDispatchBuiltin.1("[", fixed10);
    dc77 = getTryDispatchBuiltinDispatched(dr154);
    if dc77 then L1053() else L1052(dr154);
  L1052(fixed12):
    ind12 = ld ind;
    check L1054() else D335();
  L1097():
    dr164 = tryDispatchBuiltin.1("[", nm13);
    dc82 = getTryDispatchBuiltinDispatched(dr164);
    if dc82 then L1099() else L1098(dr164);
  L1098(nm15):
    mask32 = ld mask;
    check L1100() else D359();
  L1108():
    st var = r647;
    n_used6 = ld `n.used`;
    check L1109() else D365();
  D335():
    deopt 1237 [fixed12, ind12];
  D336():
    deopt 1241 [r619];
  D359():
    deopt 1314 [nm15, mask32];
  D360():
    deopt 1317 [nm16];
  D365():
    deopt 1330 [2.0, n_used6];
  L1053():
    dx216 = getTryDispatchBuiltinValue(dr154);
    goto L233(dx216);
  L1054():
    ind13 = force? ind12;
    __46 = ldf `[` in base;
    r618 = dyn __46(fixed12, ind13);
    goto L233(r618);
  L1055():
    l29 = ld fixed;
    c284 = `is.object`(l29);
    if c284 then L1056() else L1057(r619, l29);
  L1099():
    dx230 = getTryDispatchBuiltinValue(dr164);
    goto L241(dx230);
  L1100():
    mask33 = force? mask32;
    __48 = ldf `[` in base;
    r644 = dyn __48(nm15, mask33);
    goto L241(r644);
  L1101():
    nm17 = force? nm16;
    checkMissing(nm17);
    c290 = `is.object`(nm17);
    if c290 then L1102() else L1103(nm17);
  L1109():
    n_used7 = force? n_used6;
    checkMissing(n_used7);
    r648 = `*`(2.0, n_used7);
    res16 = ld res;
    check L1110() else D366();
  D366():
    deopt 1332 [r648, res16];
  L234(dx219):
    st fixed = dx219;
    diag = ldf diag;
    check L1060() else D338();
  L242(dx233):
    list3 = ldf list in base;
    r646 = dyn list3(dx231, dx233);
    check L1106() else D362();
  L1056():
    dr156 = tryDispatchBuiltin.0("[<-", l29, r619);
    dc78 = getTryDispatchBuiltinDispatched(dr156);
    if dc78 then L1058() else L1057(r619, dr156);
  L1057(r621, l31):
    ind14 = ld ind;
    check L1059() else D337();
  L1102():
    dr166 = tryDispatchBuiltin.1("[", nm17);
    dc83 = getTryDispatchBuiltinDispatched(dr166);
    if dc83 then L1104() else L1103(dr166);
  L1103(nm19):
    mask34 = ld mask;
    check L1105() else D361();
  L1110():
    res17 = force? res16;
    checkMissing(res17);
    c291 = `is.object`(res17);
    if c291 then L1112() else L1113(r648, res17);
  D337():
    deopt 1243 [r621, l31, r619, ind14];
  D338():
    deopt 1248 [];
  D361():
    deopt 1319 [nm19, mask34];
  D362():
    deopt 1323 [r646];
  L1058():
    dx218 = getTryDispatchBuiltinValue(dr156);
    goto L234(dx218);
  L1059():
    ind15 = force? ind14;
    ___9 = ldf `[<-` in base;
    r624 = dyn ___9(l31, r619, ind15);
    goto L234(r624);
  L1060():
    p56 = prom<V +>{
      narma16 = ld narma;
      narma17 = force? narma16;
      checkMissing(narma17);
      ncxreg26 = ld ncxreg;
      ncxreg27 = force? ncxreg26;
      checkMissing(ncxreg27);
      r625 = `+`(narma17, ncxreg27);
      return r625;
    };
    r627 = dyn diag(p56);
    check L1061() else D339();
  L1104():
    dx232 = getTryDispatchBuiltinValue(dr166);
    goto L242(dx232);
  L1105():
    mask35 = force? mask34;
    __49 = ldf `[` in base;
    r645 = dyn __49(nm19, mask35);
    goto L242(r645);
  L1106():
    goto L240(r646);
  L1111(r652, dx235):
    r654 = `*`(r652, dx235);
    n_used8 = ld `n.used`;
    check L1115() else D367();
  L1112():
    dr168 = tryDispatchBuiltin.1("$", res17);
    dc84 = getTryDispatchBuiltinDispatched(dr168);
    if dc84 then L1114() else L1113(r648, dr168);
  L1113(r650, res19):
    r653 = `$`(res19, <sym value>);
    goto L1111(r650, r653);
  D339():
    deopt 1250 [r627];
  D367():
    deopt 1335 [r654, n_used8];
  L1061():
    st A = r627;
    S8 = ld S;
    check L1062() else D340();
  L1114():
    dx234 = getTryDispatchBuiltinValue(dr168);
    goto L1111(r648, dx234);
  L1115():
    n_used9 = force? n_used8;
    checkMissing(n_used9);
    r655 = `+`(r654, n_used9);
    n_used10 = ld `n.used`;
    check L1116() else D368();
  D340():
    deopt 1252 [S8];
  D368():
    deopt 1337 [r655, n_used10];
  L1062():
    S9 = force? S8;
    checkMissing(S9);
    c285 = `is.object`(S9);
    if c285 then L1064() else L1065(S9);
  L1116():
    n_used11 = force? n_used10;
    checkMissing(n_used11);
    sym79 = ldf log;
    base79 = ldf log in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L1117() else L1118();
  L243(r659, n_used14, r660):
    r662 = `*`(n_used14, r660);
    r663 = `+`(r659, r662);
    st value = r663;
    method11 = ld method;
    check L1119() else D369();
  L1063(dx221):
    l32 = ld A;
    c286 = `is.object`(l32);
    if c286 then L1067() else L1068(dx221, l32);
  L1064():
    dr158 = tryDispatchBuiltin.1("$", S9);
    dc79 = getTryDispatchBuiltinDispatched(dr158);
    if dc79 then L1066() else L1065(dr158);
  L1065(S11):
    r628 = `$`(S11, <sym v>);
    goto L1063(r628);
  L1117():
    r661 = log(6.283185307179586, 2.718281828459045);
    goto L243(r655, n_used11, r661);
  L1118():
    r658 = dyn base79(<lang `*`(2.0, pi)>);
    goto L243(r655, n_used11, r658);
  D369():
    deopt 1345 [method11];
  L235(dx227):
    st A = dx227;
    A4 = ld A;
    check L1072() else D343();
  L1066():
    dx220 = getTryDispatchBuiltinValue(dr158);
    goto L1063(dx220);
  L1067():
    dr160 = tryDispatchBuiltin.0("[<-", l32, dx221);
    dc80 = getTryDispatchBuiltinDispatched(dr160);
    if dc80 then L1069() else L1068(dx221, dr160);
  L1068(dx223, l34):
    ind16 = ld ind;
    check L1070() else D341();
  L1119():
    method12 = force? method11;
    checkMissing(method12);
    r664 = `!=`(method12, "CSS");
    c292 = `as.logical`(r664);
    if c292 then L1120() else L244();
  D341():
    deopt 1256 [dx223, l34, dx221, ind16];
  D343():
    deopt 1261 [A4];
  L244():
    goto L246(NA_LGL);
  L246(r674):
    st aic = r674;
    sym81 = ldf list;
    base81 = ldf list in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L1127() else L1128();
  L1069():
    dx225 = getTryDispatchBuiltinValue(dr160);
    goto L235(dx225);
  L1070():
    ind17 = force? ind16;
    ind18 = ld ind;
    check L1071() else D342();
  L1072():
    A5 = force? A4;
    checkMissing(A5);
    c287 = `is.object`(A5);
    if c287 then L1073() else L1074(A5);
  L1120():
    value = ld value;
    check L1121() else D370();
  D342():
    deopt 1257 [dx223, l34, dx221, ind17, ind18];
  D370():
    deopt 1349 [value];
  L236(dx229):
    st A = dx229;
    A8 = ld A;
    check L1078() else D346();
  L247(r676):
    st res = r676;
    l38 = ld res;
    class__2 = ldf `class<-`;
    check L1143() else D387();
  L1071():
    ind19 = force? ind18;
    ___10 = ldf `[<-` in base;
    r629 = dyn ___10(l34, dx221, ind17, ind19);
    goto L235(r629);
  L1073():
    dr162 = tryDispatchBuiltin.1("[", A5);
    dc81 = getTryDispatchBuiltinDispatched(dr162);
    if dc81 then L1075() else L1074(dr162);
  L1074(A7):
    mask28 = ld mask;
    check L1076() else D344();
  L1121():
    value1 = force? value;
    checkMissing(value1);
    sym80 = ldf length;
    base80 = ldf length in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L1122() else L1123();
  L1127():
    fixed13 = ld fixed;
    check L1129() else D373();
  L1128():
    r675 = dyn base81[coef, sigma2, `var.coef`, mask, loglik, aic, arma, residuals, call, series, code, `n.cond`](<sym fixed>, <sym sigma2>, <sym var>, <sym mask>, <lang `*`(`-`(0.5), value)>, <sym aic>, <sym arma>, <sym resid>, <lang match.call()>, <sym series>, <sym code>, <sym ncond>);
    goto L247(r675);
  D344():
    deopt 1263 [A7, mask28];
  D346():
    deopt 1270 [A8];
  D373():
    deopt 1366 [fixed13];
  D387():
    deopt 1411 ["arima0", l38, "arima0"];
  L245(value4, r668, r669):
    r671 = `*`(r668, r669);
    r672 = `+`(value4, r671);
    r673 = `+`(r672, 2.0);
    goto L246(r673);
  L1075():
    dx228 = getTryDispatchBuiltinValue(dr162);
    goto L236(dx228);
  L1076():
    mask29 = force? mask28;
    mask30 = ld mask;
    check L1077() else D345();
  L1078():
    A9 = force? A8;
    checkMissing(A9);
    var = ld var;
    check L1079() else D347();
  L1122():
    coef15 = ld coef;
    check L1124() else D371();
  L1123():
    r667 = dyn base80(<sym coef>);
    goto L245(value1, 2.0, r667);
  L1129():
    fixed14 = force? fixed13;
    checkMissing(fixed14);
    sigma2 = ld sigma2;
    check L1130() else D374();
  L1143():
    r680 = dyn class__2(l38, NULL, "arima0");
    check L1144() else D388();
  D345():
    deopt 1264 [A7, mask29, mask30];
  D347():
    deopt 1272 [var];
  D371():
    deopt 1353 [value1, 2.0, coef15];
  D374():
    deopt 1369 [sigma2];
  D388():
    deopt 1413 ["arima0", r680];
  L1077():
    mask31 = force? mask30;
    __47 = ldf `[` in base;
    r630 = dyn __47(A7, mask29, mask31);
    goto L236(r630);
  L1079():
    var1 = force? var;
    checkMissing(var1);
    ___11 = ldf `%*%` in base;
    r631 = dyn ___11(A9, var1);
    check L1080() else D348();
  L1124():
    coef16 = force? coef15;
    checkMissing(coef16);
    length10 = ldf length in base;
    r670 = dyn length10(coef16);
    check L1125() else D372();
  L1130():
    sigma3 = force? sigma2;
    checkMissing(sigma3);
    var2 = ld var;
    check L1131() else D375();
  L1144():
    st res = r680;
    res20 = ld res;
    check L1145() else D389();
  D348():
    deopt 1275 [r631];
  D372():
    deopt 1356 [value1, 2.0, r670];
  D375():
    deopt 1372 [var2];
  D389():
    deopt 1415 [res20];
  L1080():
    t1 = ldf t;
    check L1081() else D349();
  L1125():
    goto L245(value1, 2.0, r670);
  L1131():
    var3 = force? var2;
    checkMissing(var3);
    mask36 = ld mask;
    check L1132() else D376();
  L1145():
    res21 = force? res20;
    checkMissing(res21);
    popenv;
    return res21;
  D349():
    deopt 1277 [];
  D376():
    deopt 1375 [mask36];
  L1081():
    p57 = prom<V +>{
      A10 = ld A;
      A11 = force? A10;
      checkMissing(A11);
      return A11;
    };
    r633 = dyn t1(p57);
    check L1082() else D350();
  L1132():
    mask37 = force? mask36;
    checkMissing(mask37);
    value5 = ld value;
    check L1133() else D377();
  D350():
    deopt 1279 [r633];
  D377():
    deopt 1379 [-0.5, value5];
  L1082():
    ___12 = ldf `%*%` in base;
    r634 = dyn ___12(r631, r633);
    check L1083() else D351();
  L1133():
    value6 = force? value5;
    checkMissing(value6);
    r677 = `*`(-0.5, value6);
    aic = ld aic;
    check L1134() else D378();
  D351():
    deopt 1281 [r634];
  D378():
    deopt 1383 [aic];
  L1083():
    st var = r634;
    goto L237(r634);
  L1134():
    aic1 = force? aic;
    checkMissing(aic1);
    arma82 = ld arma;
    check L1135() else D379();
  D379():
    deopt 1386 [arma82];
  L1135():
    arma83 = force? arma82;
    checkMissing(arma83);
    resid2 = ld resid;
    check L1136() else D380();
  D380():
    deopt 1389 [resid2];
  L1136():
    resid3 = force? resid2;
    checkMissing(resid3);
    match_call = ldf `match.call`;
    check L1137() else D381();
  D381():
    deopt 1393 [];
  L1137():
    r678 = dyn match_call();
    check L1138() else D382();
  D382():
    deopt 1394 [r678];
  L1138():
    series = ld series;
    check L1139() else D383();
  D383():
    deopt 1396 [series];
  L1139():
    series1 = force? series;
    checkMissing(series1);
    code2 = ld code;
    check L1140() else D384();
  D384():
    deopt 1399 [code2];
  L1140():
    code3 = force? code2;
    checkMissing(code3);
    ncond13 = ld ncond;
    check L1141() else D385();
  D385():
    deopt 1402 [ncond13];
  L1141():
    ncond14 = force? ncond13;
    checkMissing(ncond14);
    list4 = ldf list in base;
    r679 = dyn list4(fixed14, sigma3, var3, mask37, r677, aic1, arma83, resid3, r678, series1, code3, ncond14);
    check L1142() else D386();
  D386():
    deopt 1406 [r679];
  L1142():
    goto L247(r679);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fixed:*, reg fixed1:V, reg as_double:cls, reg r2:V, reg p1:*, reg p2:V, reg l:*, reg c:L, reg p4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg mask:*, reg mask1:V, reg ___:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg C_arma0fa:*, reg C_arma0fa1:V, reg G:*, reg G1:V, reg par:*, reg par1:V, reg vargs:dots, reg r6:V |
    mkenv;
    st p = p;
    sym = ldf `as.double`;
    base = ldf `as.double` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st par = r1;
    p1 = ld p;
    check L7() else D2();
  L3():
    fixed = ld fixed;
    check L5() else D0();
  L4():
    r = dyn base(<sym fixed>);
    goto L0(r);
  D0():
    deopt 2 [fixed];
  D2():
    deopt 7 [p1];
  L5():
    fixed1 = force? fixed;
    checkMissing(fixed1);
    as_double = ldf `as.double` in base;
    r2 = dyn as_double(fixed1);
    check L6() else D1();
  L7():
    p2 = force? p1;
    checkMissing(p2);
    l = ld par;
    c = `is.object`(l);
    if c then L8() else L9(p2, l);
  D1():
    deopt 5 [r2];
  L1(dx1):
    st par = dx1;
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L6():
    goto L0(r2);
  L8():
    dr = tryDispatchBuiltin.0("[<-", l, p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(p2, dr);
  L9(p4, l2):
    mask = ld mask;
    check L11() else D3();
  D3():
    deopt 10 [p4, l2, p2, mask];
  L2(r5):
    popenv;
    return r5;
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    mask1 = force? mask;
    ___ = ldf `[<-` in base;
    r3 = dyn ___(l2, p2, mask1);
    goto L1(r3);
  L12():
    C_arma0fa = ld C_arma0fa;
    check L14() else D4();
  L13():
    r4 = dyn base1(<sym C_arma0fa>, <sym G>, <sym par>);
    goto L2(r4);
  D4():
    deopt 15 [C_arma0fa];
  L14():
    C_arma0fa1 = force? C_arma0fa;
    checkMissing(C_arma0fa1);
    G = ld G;
    check L15() else D5();
  D5():
    deopt 16 [C_arma0fa1, G];
  L15():
    G1 = force? G;
    checkMissing(G1);
    par = ld par;
    check L16() else D6();
  D6():
    deopt 17 [C_arma0fa1, G1, par];
  L16():
    par1 = force? par;
    checkMissing(par1);
    vargs = dots[G1, par1];
    r6 = `.Call`(C_arma0fa1, vargs, <missing>);
    goto L2(r6);
  }
}
fun inner619691793(ar) {
  (reg ar:*) -+> V { var ar:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg which:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg ar1:*, reg ar2:V, reg r4:V, reg c:cls, reg r5:V, reg r6:V, reg p:p(V +), reg r8:V, reg max:cls, reg r9:V, reg r10:V, reg p1:*, reg p2:V, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg ar3:*, reg ar4:V, reg c2:L, reg ar6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p3:*, reg p4:V, reg r22:V, reg __:cls, reg r23:V, reg r24:V, reg c3:cls, reg r25:V, reg polyroot:cls, reg r26:V, reg Mod:cls, reg r27:V, reg r28:V, reg all:cls, reg r29:V |
    mkenv;
    st ar = ar;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r10 = `-`(r1, 1.0);
    st p = r10;
    p1 = ld p;
    check L13() else D3();
  L8():
    which = ldf which;
    check L10() else D0();
  L9():
    r = dyn base(<lang which(`!=`(c(1.0, `-`(ar)), 0.0))>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 11 [p1];
  L10():
    p = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      r6 = `!=`(r3, 0.0);
      return r6;
    L1():
      ar1 = ld ar;
      ar2 = force? ar1;
      checkMissing(ar2);
      r4 = `-`(<missing>, ar2);
      c = ldf c in base;
      r5 = dyn c(1.0, r4);
      goto L0(r5);
    L2():
      r2 = dyn base1(1.0, <lang `-`(ar)>);
      goto L0(r2);
    };
    r8 = dyn which(p);
    check L11() else D1();
  L13():
    p2 = force? p1;
    checkMissing(p2);
    r11 = `!`(p2);
    c1 = `as.logical`(r11);
    if c1 then L14() else L1();
  D1():
    deopt 5 [r8];
  L1():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L11():
    max = ldf max in base;
    r9 = dyn max(r8);
    check L12() else D2();
  L14():
    popenv;
    return TRUE;
  D2():
    deopt 7 [r9];
  L3(r15):
    popenv;
    return r15;
  L12():
    goto L0(r9);
  L17():
    sym3 = ldf Mod;
    base3 = ldf Mod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L18():
    r14 = dyn base2(<lang `>`(Mod(polyroot(c(1.0, `-`(`[`(ar, `:`(1, p)))))), 1.0)>);
    goto L3(r14);
  L4(r17):
    r28 = `>`(r17, 1.0);
    all = ldf all in base;
    r29 = dyn all(r28);
    check L33() else D9();
  L19():
    sym4 = ldf polyroot;
    base4 = ldf polyroot in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L20():
    r16 = dyn base3(<lang polyroot(c(1.0, `-`(`[`(ar, `:`(1, p)))))>);
    goto L4(r16);
  D9():
    deopt 45 [r29];
  L5(r19):
    Mod = ldf Mod in base;
    r27 = dyn Mod(r19);
    check L32() else D8();
  L21():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L23() else L24();
  L22():
    r18 = dyn base4(<lang c(1.0, `-`(`[`(ar, `:`(1, p))))>);
    goto L5(r18);
  L33():
    goto L3(r29);
  D8():
    deopt 41 [r27];
  L6(r21):
    polyroot = ldf polyroot in base;
    r26 = dyn polyroot(r21);
    check L31() else D7();
  L23():
    ar3 = ld ar;
    check L25() else D4();
  L24():
    r20 = dyn base5(1.0, <lang `-`(`[`(ar, `:`(1, p)))>);
    goto L6(r20);
  L32():
    goto L4(r27);
  D4():
    deopt 28 [ar3];
  D7():
    deopt 39 [r26];
  L25():
    ar4 = force? ar3;
    checkMissing(ar4);
    c2 = `is.object`(ar4);
    if c2 then L26() else L27(ar4);
  L31():
    goto L5(r26);
  L7(dx1):
    r24 = `-`(<missing>, dx1);
    c3 = ldf c in base;
    r25 = dyn c3(1.0, r24);
    check L30() else D6();
  L26():
    dr = tryDispatchBuiltin.1("[", ar4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(ar6):
    p3 = ld p;
    check L29() else D5();
  D5():
    deopt 31 [ar6, 1, p3];
  D6():
    deopt 37 [r25];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L29():
    p4 = force? p3;
    checkMissing(p4);
    r22 = `:`(1, p4);
    __ = ldf `[` in base;
    r23 = dyn __(ar6, r22);
    goto L7(r23);
  L30():
    goto L6(r25);
  }
}
fun inner223529780(ma) {
  (reg ma:*) -+> V { var ma:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ma1:*, reg ma2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg which:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg ma3:*, reg ma4:V, reg c:cls, reg r7:V, reg r8:V, reg p:p(V +), reg r10:V, reg max:cls, reg r11:V, reg r12:V, reg q0:*, reg q1:V, reg r13:V, reg c1:L, reg ma5:*, reg ma6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg ma7:*, reg ma8:V, reg c2:L, reg ma10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg q2:*, reg q3:V, reg r20:V, reg __:cls, reg r21:V, reg c3:cls, reg r22:V, reg polyroot:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg roots:*, reg roots1:V, reg Mod:cls, reg r26:V, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg ind:*, reg ind1:V, reg r30:V, reg all:cls, reg r31:V, reg c4:L, reg ma11:*, reg ma12:V, reg warning:cls, reg r34:V, reg q4:*, reg q5:V, reg r35:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg ma13:*, reg ma14:V, reg c6:L, reg r39:R, reg ma16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r41:R, reg dx3:V, reg __1:cls, reg r42:V, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg rep:cls, reg r46:V, reg c7:cls, reg r47:V, reg roots2:*, reg roots3:V, reg c8:L, reg r51:R, reg roots5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r53:R, reg dx5:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r54:V, reg r55:V, reg l:*, reg c9:L, reg r57:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r60:V, reg roots6:*, reg roots7:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg i7:I, reg r62:V, reg x1:*, reg x2:V, reg c11:cls, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg i10:I, reg r67:V, reg r68:V, reg x3:*, reg x4:V, reg c12:cls, reg r69:V, reg r70:*, reg r71:V, reg r72:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg r77:V, reg x5:*, reg x6:V, reg c13:L, reg x8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r78:V, reg Re:cls, reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg rep1:cls, reg r82:V, reg c14:cls, reg r83:V |
    mkenv;
    st ma = ma;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    st q = r1;
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    ma1 = ld ma;
    check L28() else D0();
  L27():
    r = dyn base(<sym ma>);
    goto L0(r);
  D0():
    deopt 2 [ma1];
  L1(r4):
    r12 = `-`(r4, 1.0);
    st q0 = r12;
    q0 = ld q0;
    check L35() else D5();
  L28():
    ma2 = force? ma1;
    checkMissing(ma2);
    length = ldf length in base;
    r2 = dyn length(ma2);
    check L29() else D1();
  L30():
    which = ldf which;
    check L32() else D2();
  L31():
    r3 = dyn base1(<lang which(`!=`(c(1.0, ma), 0.0))>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [];
  D5():
    deopt 18 [q0];
  L29():
    goto L0(r2);
  L32():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      r8 = `!=`(r6, 0.0);
      return r8;
    L1():
      ma3 = ld ma;
      ma4 = force? ma3;
      checkMissing(ma4);
      c = ldf c in base;
      r7 = dyn c(1.0, ma4);
      goto L0(r7);
    L2():
      r5 = dyn base2(1.0, <sym ma>);
      goto L0(r5);
    };
    r10 = dyn which(p);
    check L33() else D3();
  L35():
    q1 = force? q0;
    checkMissing(q1);
    r13 = `!`(q1);
    c1 = `as.logical`(r13);
    if c1 then L36() else L2();
  D3():
    deopt 12 [r10];
  L2():
    sym3 = ldf polyroot;
    base3 = ldf polyroot in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L33():
    max = ldf max in base;
    r11 = dyn max(r10);
    check L34() else D4();
  L36():
    ma5 = ld ma;
    check L37() else D6();
  D4():
    deopt 14 [r11];
  D6():
    deopt 21 [ma5];
  L4(r17):
    st roots = r17;
    sym5 = ldf Mod;
    base5 = ldf Mod in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L34():
    goto L1(r11);
  L37():
    ma6 = force? ma5;
    checkMissing(ma6);
    popenv;
    return ma6;
  L40():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L41():
    r16 = dyn base3(<lang c(1.0, `[`(ma, `:`(1, q0)))>);
    goto L4(r16);
  L5(r19):
    polyroot = ldf polyroot in base;
    r23 = dyn polyroot(r19);
    check L50() else D10();
  L7(r25):
    r27 = `<`(r25, 1.0);
    st ind = r27;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L42():
    ma7 = ld ma;
    check L44() else D7();
  L43():
    r18 = dyn base4(1.0, <lang `[`(ma, `:`(1, q0))>);
    goto L5(r18);
  L51():
    roots = ld roots;
    check L53() else D11();
  L52():
    r24 = dyn base5(<sym roots>);
    goto L7(r24);
  D7():
    deopt 31 [ma7];
  D10():
    deopt 41 [r23];
  D11():
    deopt 45 [roots];
  L8(r29):
    c4 = `as.logical`(r29);
    if c4 then L59() else L9();
  L44():
    ma8 = force? ma7;
    checkMissing(ma8);
    c2 = `is.object`(ma8);
    if c2 then L45() else L46(ma8);
  L50():
    goto L4(r23);
  L53():
    roots1 = force? roots;
    checkMissing(roots1);
    Mod = ldf Mod in base;
    r26 = dyn Mod(roots1);
    check L54() else D12();
  L55():
    ind = ld ind;
    check L57() else D13();
  L56():
    r28 = dyn base6(<lang `!`(ind)>);
    goto L8(r28);
  D12():
    deopt 48 [r26];
  D13():
    deopt 54 [ind];
  L6(dx1):
    c3 = ldf c in base;
    r22 = dyn c3(1.0, dx1);
    check L49() else D9();
  L9():
    warning = ldf warning;
    check L63() else D16();
  L45():
    dr = tryDispatchBuiltin.1("[", ma8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(ma10):
    q2 = ld q0;
    check L48() else D8();
  L54():
    goto L7(r26);
  L57():
    ind1 = force? ind;
    checkMissing(ind1);
    r30 = `!`(ind1);
    all = ldf all in base;
    r31 = dyn all(r30);
    check L58() else D14();
  L59():
    ma11 = ld ma;
    check L60() else D15();
  D8():
    deopt 34 [ma10, 1, q2];
  D9():
    deopt 39 [r22];
  D14():
    deopt 58 [r31];
  D15():
    deopt 59 [ma11];
  D16():
    deopt 65 [];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L48():
    q3 = force? q2;
    checkMissing(q3);
    r20 = `:`(1, q3);
    __ = ldf `[` in base;
    r21 = dyn __(ma10, r20);
    goto L6(r21);
  L49():
    goto L5(r22);
  L58():
    goto L8(r31);
  L60():
    ma12 = force? ma11;
    checkMissing(ma12);
    popenv;
    return ma12;
  L63():
    r34 = dyn warning("converting non-invertible initial MA values");
    check L64() else D17();
  D17():
    deopt 67 [r34];
  L64():
    q4 = ld q0;
    check L65() else D18();
  D18():
    deopt 68 [q4];
  L65():
    q5 = force? q4;
    checkMissing(q5);
    r35 = `==`(q5, 1.0);
    c5 = `as.logical`(r35);
    if c5 then L66() else L11();
  L11():
    roots2 = ld roots;
    check L78() else D21();
  L66():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  D21():
    deopt 90 [1.0, roots2];
  L12(r37):
    popenv;
    return r37;
  L67():
    ma13 = ld ma;
    check L69() else D19();
  L68():
    r36 = dyn base7(<lang `/`(1.0, `[`(ma, 1))>, <lang rep(0.0, `-`(q, q0))>);
    goto L12(r36);
  L78():
    roots3 = force? roots2;
    checkMissing(roots3);
    c8 = `is.object`(roots3);
    if c8 then L79() else L80(1.0, roots3);
  D19():
    deopt 75 [1.0, ma13];
  L16(r53, dx5):
    r55 = `/`(r53, dx5);
    l = ld roots;
    c9 = `is.object`(l);
    if c9 then L83() else L84(r55, l);
  L69():
    ma14 = force? ma13;
    checkMissing(ma14);
    c6 = `is.object`(ma14);
    if c6 then L70() else L71(1.0, ma14);
  L79():
    dr4 = tryDispatchBuiltin.1("[", roots3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L81() else L80(1.0, dr4);
  L80(r51, roots5):
    ind2 = ld ind;
    check L82() else D22();
  D22():
    deopt 92 [r51, roots5, ind2];
  L13(r41, dx3):
    r43 = `/`(r41, dx3);
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L17(dx7):
    st roots = dx7;
    st x = 1.0;
    roots6 = ld roots;
    check L87() else D24();
  L70():
    dr2 = tryDispatchBuiltin.1("[", ma14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(1.0, dr2);
  L71(r39, ma16):
    __1 = ldf `[` in base;
    r42 = dyn __1(ma16, 1);
    goto L13(r39, r42);
  L81():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(1.0, dx4);
  L82():
    ind3 = force? ind2;
    __2 = ldf `[` in base;
    r54 = dyn __2(roots5, ind3);
    goto L16(r51, r54);
  L83():
    dr6 = tryDispatchBuiltin.0("[<-", l, r55);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(r55, dr6);
  L84(r57, l2):
    ind4 = ld ind;
    check L86() else D23();
  D23():
    deopt 97 [r57, l2, r55, ind4];
  D24():
    deopt 104 [roots6];
  L14(r45):
    c7 = ldf c in base;
    r47 = dyn c7(r43, r45);
    check L75() else D20();
  L72():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(1.0, dx2);
  L73():
    rep = ldf rep in base;
    r46 = dyn rep(0.0, <lang `-`(q, q0)>);
    goto L14(r46);
  L74():
    r44 = dyn base8(0.0, <lang `-`(q, q0)>);
    goto L14(r44);
  L85():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L86():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l2, r55, ind5);
    goto L17(r60);
  L87():
    roots7 = force? roots6;
    checkMissing(roots7);
    s = toForSeq(roots7);
    l3 = length(s);
    i = 0;
    goto L18(i);
  D20():
    deopt 85 [r47];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l3, i2);
    if c10 then L88() else L21();
  L75():
    goto L12(r47);
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st r = x;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  L88():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L98() else L99();
  L19(i7, r62):
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L93() else L94();
  L22(r75):
    popenv;
    return r75;
  L89():
    x1 = ld x;
    check L91() else D25();
  L90():
    r61 = dyn base9(<sym x>, 0.0);
    goto L19(i2, r61);
  L98():
    sym12 = ldf Re;
    base12 = ldf Re in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L100() else L101();
  L99():
    r74 = dyn base11(<lang Re(`[`(x, `-`(1)))>, <lang rep(0.0, `-`(q, q0))>);
    goto L22(r74);
  D25():
    deopt 108 [i2, x1];
  L20(i10, r67, r68):
    r70 = ld r;
    check L97() else D29();
  L23(r77):
    sym13 = ldf rep;
    base13 = ldf rep in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L107() else L108();
  L91():
    x2 = force? x1;
    checkMissing(x2);
    c11 = ldf c in base;
    r63 = dyn c11(x2, 0.0);
    check L92() else D26();
  L93():
    x3 = ld x;
    check L95() else D27();
  L94():
    r66 = dyn base10(0.0, <sym x>);
    goto L20(i7, r62, r66);
  L100():
    x5 = ld x;
    check L102() else D30();
  L101():
    r76 = dyn base12(<lang `[`(x, `-`(1))>);
    goto L23(r76);
  D26():
    deopt 112 [i2, r63];
  D27():
    deopt 115 [i7, r62, x3];
  D29():
    deopt 118 [i10, r67, r68, r70];
  D30():
    deopt 130 [x5];
  L25(r81):
    c14 = ldf c in base;
    r83 = dyn c14(r77, r81);
    check L109() else D32();
  L92():
    goto L19(i2, r63);
  L95():
    x4 = force? x3;
    checkMissing(x4);
    c12 = ldf c in base;
    r69 = dyn c12(0.0, x4);
    check L96() else D28();
  L97():
    r71 = force? r70;
    checkMissing(r71);
    r72 = `/`(r68, r71);
    r73 = `-`(r67, r72);
    st x = r73;
    goto L18(i10);
  L102():
    x6 = force? x5;
    checkMissing(x6);
    c13 = `is.object`(x6);
    if c13 then L103() else L104(x6);
  L107():
    rep1 = ldf rep in base;
    r82 = dyn rep1(0.0, <lang `-`(q, q0)>);
    goto L25(r82);
  L108():
    r80 = dyn base13(0.0, <lang `-`(q, q0)>);
    goto L25(r80);
  D28():
    deopt 118 [i7, r62, r69];
  D32():
    deopt 141 [r83];
  L24(dx9):
    Re = ldf Re in base;
    r79 = dyn Re(dx9);
    check L106() else D31();
  L96():
    goto L20(i7, r62, r69);
  L103():
    dr8 = tryDispatchBuiltin.1("[", x6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(dr8);
  L104(x8):
    __3 = ldf `[` in base;
    r78 = dyn __3(x8, -1);
    goto L24(r78);
  L109():
    goto L22(r83);
  D31():
    deopt 136 [r79];
  L105():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L106():
    goto L23(r79);
  }
}