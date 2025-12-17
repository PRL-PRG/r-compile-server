fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg nls:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg BOD:*, reg BOD1:V, reg p2:p(V +), reg r8:V, reg profile:cls, reg fm1:*, reg fm2:V, reg p3:p(V +), reg r10:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c1:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg plot:cls, reg pr1:*, reg pr2:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg r24:V, reg p7:p(V +), reg r26:V, reg plot1:cls, reg pr3:*, reg pr4:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg c3:cls, reg r30:V, reg r31:V, reg p9:p(V +), reg r33:V, reg mtext:cls, reg r34:V, reg mtext1:cls, reg r35:V, reg par1:cls, reg opar:*, reg opar1:V, reg p10:p(V +), reg r37:V |
    mkenv;
    r = clos inner4206313351;
    st `plot.profile.nls` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    nls = ldf nls;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r5 = dyn __(<sym demand>, <lang SSasympOrig(Time, A, lrc)>);
      return r5;
    };
    p2 = prom<V +>{
      BOD = ld BOD;
      BOD1 = force? BOD;
      checkMissing(BOD1);
      return BOD1;
    };
    r8 = dyn nls[, data](p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r8];
  L4():
    goto L0();
  L6():
    st fm1 = r8;
    profile = ldf profile;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p3 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r10 = dyn profile[, alphamax](p3, 0.05);
    check L8() else D5();
  D5():
    deopt 20 [r10];
  L8():
    st pr1 = r10;
    par = ldf par;
    check L9() else D6();
  D6():
    deopt 23 [];
  L9():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c = ldf c in base;
      r13 = dyn c(2.0, 2.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(2.0, 2.0);
      goto L0(r11);
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c1 = ldf c in base;
      r17 = dyn c1(1.1, 0.0, 1.1, 0.0);
      goto L0(r17);
    L2():
      r15 = dyn base2(1.1, 0.0, 1.1, 0.0);
      goto L0(r15);
    };
    r19 = dyn par[mfrow, oma, las](p4, p5, 1.0);
    check L10() else D7();
  D7():
    deopt 30 [r19];
  L10():
    st opar = r19;
    plot = ldf plot;
    check L11() else D8();
  D8():
    deopt 33 [];
  L11():
    p6 = prom<V +>{
      pr1 = ld pr1;
      pr2 = force? pr1;
      checkMissing(pr2);
      return pr2;
    };
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      r24 = `/`(r22, 100.0);
      return r24;
    L1():
      c2 = ldf c in base;
      r23 = dyn c2(95.0, 90.0, 80.0, 50.0);
      goto L0(r23);
    L2():
      r21 = dyn base3(95.0, 90.0, 80.0, 50.0);
      goto L0(r21);
    };
    r26 = dyn plot[, conf](p6, p7);
    check L12() else D9();
  D9():
    deopt 37 [r26];
  L12():
    plot1 = ldf plot;
    check L13() else D10();
  D10():
    deopt 39 [];
  L13():
    p8 = prom<V +>{
      pr3 = ld pr1;
      pr4 = force? pr3;
      checkMissing(pr4);
      return pr4;
    };
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r29):
      r31 = `/`(r29, 100.0);
      return r31;
    L1():
      c3 = ldf c in base;
      r30 = dyn c3(95.0, 90.0, 80.0, 50.0);
      goto L0(r30);
    L2():
      r28 = dyn base4(95.0, 90.0, 80.0, 50.0);
      goto L0(r28);
    };
    r33 = dyn plot1[, conf, absVal](p8, p9, FALSE);
    check L14() else D11();
  D11():
    deopt 45 [r33];
  L14():
    mtext = ldf mtext;
    check L15() else D12();
  D12():
    deopt 47 [];
  L15():
    r34 = dyn mtext[, side, outer]("Confidence intervals based on the profile sum of squares", 3.0, TRUE);
    check L16() else D13();
  D13():
    deopt 53 [r34];
  L16():
    mtext1 = ldf mtext;
    check L17() else D14();
  D14():
    deopt 55 [];
  L17():
    r35 = dyn mtext1[, side, outer]("BOD data - confidence levels of 50%, 80%, 90% and 95%", 1.0, TRUE);
    check L18() else D15();
  D15():
    deopt 61 [r35];
  L18():
    par1 = ldf par;
    check L19() else D16();
  D16():
    deopt 63 [];
  L19():
    p10 = prom<V +>{
      opar = ld opar;
      opar1 = force? opar;
      checkMissing(opar1);
      return opar1;
    };
    r37 = dyn par1(p10);
    check L20() else D17();
  D17():
    deopt 65 [r37];
  L20():
    popenv;
    return r37;
  }
}
fun inner4206313351(x, levels, conf, absVal, ylab, lty, `...`) {
  (reg x:*, reg levels:*, reg conf:*, reg absVal:*, reg ylab:*, reg lty:*, reg ddd:dots) -+> V { var x:*, var levels:*, var conf:*, reg conf_isMissing:L, reg conf_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:V, reg p:p(V +), var absVal:*, reg absVal_isMissing:L, reg absVal_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg obj:*, reg obj1:V, reg attr:cls, reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg qf:cls, reg pmax:cls, reg pmin:cls, reg conf1:*, reg conf2:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg dfres:*, reg dfres1:V, reg p4:p(V +), reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg levels1:*, reg levels2:V, reg r28:V, reg any:cls, reg r29:V, reg c4:L, reg levels3:*, reg levels4:V, reg c5:L, reg levels6:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg levels7:*, reg levels8:V, reg r30:V, reg __1:cls, reg r31:V, reg warning:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg levels9:*, reg levels10:V, reg max:cls, reg r36:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg obj2:*, reg obj3:V, reg names:cls, reg r40:V, reg par:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg c6:cls, reg r43:V, reg r44:V, reg p5:p(V +), reg r46:V, reg absVal1:*, reg absVal2:V, reg c7:L, reg nm:*, reg nm1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x3:V, reg __2:cls, reg r47:V, reg r48:cls, reg obj4:*, reg obj5:V, reg c9:L, reg obj7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg i5:*, reg i6:V, reg __3:cls, reg r49:V, reg c10:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r50:V, reg c11:L, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg __4:cls, reg r51:V, reg p6:p(V +), reg obj8:*, reg obj9:V, reg c12:L, reg obj11:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg i9:*, reg i10:V, reg __5:cls, reg r53:V, reg c13:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg r54:V, reg p7:p(V +), reg r56:V, reg __6:cls, reg r57:V, reg r58:cls, reg sp:*, reg sp1:V, reg p8:p(V +), reg r60:V, reg predict:cls, reg bsp:*, reg bsp1:V, reg p9:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg mlev:*, reg mlev1:V, reg r64:V, reg mlev2:*, reg mlev3:V, reg c14:cls, reg r65:V, reg p10:p(V +), reg r67:V, reg c15:L, reg i12:I, reg r69:V, reg dr16:V, reg dc8:L, reg dx24:V, reg i14:I, reg dx25:V, reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg i17:I, reg r72:V, reg xlim:*, reg xlim1:V, reg c16:L, reg i19:I, reg xlim3:V, reg dr18:V, reg dc9:L, reg dx26:V, reg i21:I, reg dx27:V, reg __7:cls, reg r73:V, reg is_na:cls, reg r74:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r75:V, reg i26:I, reg r76:V, reg x4:*, reg x5:V, reg c18:L, reg i28:I, reg x7:V, reg dr20:V, reg dc10:L, reg dx28:V, reg i30:I, reg dx29:V, reg i31:*, reg i32:V, reg __8:cls, reg r77:V, reg c19:L, reg i34:I, reg dx31:V, reg dr22:V, reg dc11:L, reg dx32:V, reg i36:I, reg dx33:V, reg r78:V, reg c20:L, reg i38:I, reg dx35:V, reg dr24:V, reg dc12:L, reg dx36:V, reg i40:I, reg dx37:V, reg i41:*, reg i42:V, reg __9:cls, reg r79:V, reg min:cls, reg r80:V, reg l1:*, reg c21:L, reg i44:I, reg r82:V, reg l3:*, reg dr26:V, reg dc13:L, reg dx38:V, reg i46:I, reg r84:V, reg dx39:V, reg ___:cls, reg r85:V, reg i47:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg i50:I, reg r88:V, reg xlim4:*, reg xlim5:V, reg c22:L, reg i52:I, reg xlim7:V, reg dr28:V, reg dc14:L, reg dx40:V, reg i54:I, reg dx41:V, reg __10:cls, reg r89:V, reg is_na1:cls, reg r90:V, reg c23:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r91:V, reg i59:I, reg r92:V, reg x8:*, reg x9:V, reg c24:L, reg i61:I, reg x11:V, reg dr30:V, reg dc15:L, reg dx42:V, reg i63:I, reg dx43:V, reg i64:*, reg i65:V, reg __11:cls, reg r93:V, reg c25:L, reg i67:I, reg dx45:V, reg dr32:V, reg dc16:L, reg dx46:V, reg i69:I, reg dx47:V, reg r94:V, reg c26:L, reg i71:I, reg dx49:V, reg dr34:V, reg dc17:L, reg dx50:V, reg i73:I, reg dx51:V, reg i74:*, reg i75:V, reg __12:cls, reg r95:V, reg max1:cls, reg r96:V, reg l4:*, reg c27:L, reg i77:I, reg r98:V, reg l6:*, reg dr36:V, reg dc18:L, reg dx52:V, reg i79:I, reg r100:V, reg dx53:V, reg ___1:cls, reg r101:V, reg i80:I, reg dev_hold:cls, reg r103:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r104:V, reg i83:I, reg r105:V, reg ylab1:*, reg ylab2:V, reg c28:V, reg c29:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r106:V, reg i88:I, reg r107:V, reg expression:cls, reg r108:V, reg i89:I, reg plot:cls, reg __13:cls, reg r110:V, reg p11:p(V +), reg obj12:*, reg obj13:V, reg c30:L, reg obj15:V, reg dr38:V, reg dc19:L, reg dx54:V, reg dx55:V, reg i90:*, reg i91:V, reg __14:cls, reg r112:V, reg p12:p(V +), reg i92:*, reg i93:V, reg p13:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r115:V, reg r116:V, reg mlev4:*, reg mlev5:V, reg c31:cls, reg r117:V, reg p14:p(V +), reg xlim8:*, reg xlim9:V, reg p15:p(V +), reg ylab3:*, reg ylab4:V, reg p16:p(V +), reg ddd1:dots?, reg r121:V, reg rbind:cls, reg as_data_frame:cls, reg predict1:cls, reg sp2:*, reg sp3:V, reg p17:p(V +), reg r123:V, reg p18:p(V +), reg r125:V, reg p19:p(V +), reg data_frame:cls, reg obj16:*, reg obj17:V, reg c32:L, reg obj19:V, reg dr40:V, reg dc20:L, reg dx56:V, reg dx57:V, reg i94:*, reg i95:V, reg __15:cls, reg r127:V, reg c33:L, reg dx59:V, reg dr42:V, reg dc21:L, reg dx60:V, reg dx61:V, reg r128:V, reg c34:L, reg dr44:V, reg dc22:L, reg dx64:V, reg dx65:V, reg i96:*, reg i97:V, reg __16:cls, reg r129:V, reg p20:p(V +), reg obj20:*, reg obj21:V, reg c35:L, reg obj23:V, reg dr46:V, reg dc23:L, reg dx66:V, reg dx67:V, reg i98:*, reg i99:V, reg __17:cls, reg r131:V, reg c36:L, reg dx69:V, reg dr48:V, reg dc24:L, reg dx70:V, reg dx71:V, reg r132:V, reg p21:p(V +), reg r134:V, reg p22:p(V +), reg r136:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r137:V, reg i102:I, reg r138:V, reg avals:*, reg avals1:V, reg c37:L, reg i104:I, reg avals3:V, reg dr50:V, reg dc25:L, reg dx72:V, reg i106:I, reg dx73:V, reg r139:V, reg abs:cls, reg r140:V, reg l7:*, reg c38:L, reg i108:I, reg r142:V, reg l9:*, reg dr52:V, reg dc26:L, reg dx74:V, reg i110:I, reg dx75:V, reg r145:V, reg lines:cls, reg avals4:*, reg avals5:V, reg c39:L, reg dr54:V, reg dc27:L, reg dx76:V, reg dx77:V, reg order:cls, reg avals8:*, reg avals9:V, reg c40:L, reg avals11:V, reg dr56:V, reg dc28:L, reg dx78:V, reg dx79:V, reg r146:V, reg p23:p(V +), reg r148:V, reg __18:cls, reg r149:V, reg p24:p(V +), reg r151:V, reg abline:cls, reg predict2:cls, reg bsp2:*, reg bsp3:V, reg p25:p(V +), reg r153:V, reg c41:L, reg r155:V, reg dr58:V, reg dc29:L, reg dx80:V, reg dx81:V, reg r156:V, reg p26:p(V +), reg lty1:*, reg lty2:V, reg p27:p(V +), reg r159:V, reg levels11:*, reg levels12:V, reg s1:V, reg l10:I, reg i111:I, reg i112:I, reg i113:I, reg i114:I, reg c42:L, reg x12:V, reg predict3:cls, reg bsp4:*, reg bsp5:V, reg p28:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r161:V, reg r162:V, reg lev:*, reg lev1:V, reg r163:V, reg lev2:*, reg lev3:V, reg c43:cls, reg r164:V, reg p29:p(V +), reg r166:V, reg c44:L, reg i121:I, reg i122:I, reg r168:V, reg dr60:V, reg dc30:L, reg dx82:V, reg i125:I, reg i126:I, reg dx83:V, reg r169:V, reg lines1:cls, reg pred:*, reg pred1:V, reg p30:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r171:V, reg r172:V, reg lev4:*, reg lev5:V, reg rep_int:cls, reg r173:V, reg p31:p(V +), reg lty3:*, reg lty4:V, reg p32:p(V +), reg r176:V, reg lines2:cls, reg pred2:*, reg pred3:V, reg p33:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r178:V, reg r179:V, reg lev6:*, reg lev7:V, reg rep_int1:cls, reg r180:V, reg p34:p(V +), reg lty5:*, reg lty6:V, reg p35:p(V +), reg r183:V, reg dev_flush:cls, reg r184:V, reg nm2:*, reg nm3:V, reg s2:V, reg l11:I, reg i128:I, reg i129:I, reg i130:I, reg c45:L, reg x13:V, reg __19:cls, reg r185:V, reg r186:cls, reg obj24:*, reg obj25:V, reg c46:L, reg obj27:V, reg dr62:V, reg dc31:L, reg dx84:V, reg dx85:V, reg i133:*, reg i134:V, reg __20:cls, reg r187:V, reg c47:L, reg dx87:V, reg dr64:V, reg dc32:L, reg dx88:V, reg dx89:V, reg r188:V, reg c48:L, reg dr66:V, reg dc33:L, reg dx92:V, reg dx93:V, reg i135:*, reg i136:V, reg __21:cls, reg r189:V, reg p36:p(V +), reg obj28:*, reg obj29:V, reg c49:L, reg obj31:V, reg dr68:V, reg dc34:L, reg dx94:V, reg dx95:V, reg i137:*, reg i138:V, reg __22:cls, reg r191:V, reg c50:L, reg dx97:V, reg dr70:V, reg dc35:L, reg dx98:V, reg dx99:V, reg r192:V, reg p37:p(V +), reg r194:V, reg __23:cls, reg r195:V, reg r196:cls, reg sp4:*, reg sp5:V, reg p38:p(V +), reg r198:V, reg predict4:cls, reg bsp6:*, reg bsp7:V, reg p39:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r200:V, reg r201:V, reg mlev6:*, reg mlev7:V, reg r202:V, reg mlev8:*, reg mlev9:V, reg c51:cls, reg r203:V, reg p40:p(V +), reg r205:V, reg c52:L, reg i140:I, reg r207:V, reg dr72:V, reg dc36:L, reg dx100:V, reg i142:I, reg dx101:V, reg r208:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r209:V, reg i145:I, reg r210:V, reg xlim10:*, reg xlim11:V, reg c53:L, reg i147:I, reg xlim13:V, reg dr74:V, reg dc37:L, reg dx102:V, reg i149:I, reg dx103:V, reg __24:cls, reg r211:V, reg is_na2:cls, reg r212:V, reg c54:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r213:V, reg i154:I, reg r214:V, reg x14:*, reg x15:V, reg c55:L, reg i156:I, reg x17:V, reg dr76:V, reg dc38:L, reg dx104:V, reg i158:I, reg dx105:V, reg i159:*, reg i160:V, reg __25:cls, reg r215:V, reg c56:L, reg i162:I, reg dx107:V, reg dr78:V, reg dc39:L, reg dx108:V, reg i164:I, reg dx109:V, reg r216:V, reg c57:L, reg i166:I, reg dx111:V, reg dr80:V, reg dc40:L, reg dx112:V, reg i168:I, reg dx113:V, reg i169:*, reg i170:V, reg __26:cls, reg r217:V, reg min1:cls, reg r218:V, reg l12:*, reg c58:L, reg i172:I, reg r220:V, reg l14:*, reg dr82:V, reg dc41:L, reg dx114:V, reg i174:I, reg r222:V, reg dx115:V, reg ___2:cls, reg r223:V, reg i175:I, reg sym23:cls, reg base23:cls, reg guard23:L, reg r225:V, reg i178:I, reg r226:V, reg xlim14:*, reg xlim15:V, reg c59:L, reg i180:I, reg xlim17:V, reg dr84:V, reg dc42:L, reg dx116:V, reg i182:I, reg dx117:V, reg __27:cls, reg r227:V, reg is_na3:cls, reg r228:V, reg c60:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r229:V, reg i187:I, reg r230:V, reg x18:*, reg x19:V, reg c61:L, reg i189:I, reg x21:V, reg dr86:V, reg dc43:L, reg dx118:V, reg i191:I, reg dx119:V, reg i192:*, reg i193:V, reg __28:cls, reg r231:V, reg c62:L, reg i195:I, reg dx121:V, reg dr88:V, reg dc44:L, reg dx122:V, reg i197:I, reg dx123:V, reg r232:V, reg c63:L, reg i199:I, reg dx125:V, reg dr90:V, reg dc45:L, reg dx126:V, reg i201:I, reg dx127:V, reg i202:*, reg i203:V, reg __29:cls, reg r233:V, reg max2:cls, reg r234:V, reg l15:*, reg c64:L, reg i205:I, reg r236:V, reg l17:*, reg dr92:V, reg dc46:L, reg dx128:V, reg i207:I, reg r238:V, reg dx129:V, reg ___3:cls, reg r239:V, reg i208:I, reg dev_hold1:cls, reg r241:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r242:V, reg i211:I, reg r243:V, reg ylab5:*, reg ylab6:V, reg c65:V, reg c66:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r244:V, reg i216:I, reg r245:V, reg expression1:cls, reg r246:V, reg i217:I, reg plot1:cls, reg __30:cls, reg r248:V, reg p41:p(V +), reg obj32:*, reg obj33:V, reg c67:L, reg obj35:V, reg dr94:V, reg dc47:L, reg dx130:V, reg dx131:V, reg i218:*, reg i219:V, reg __31:cls, reg r250:V, reg p42:p(V +), reg i220:*, reg i221:V, reg p43:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r253:V, reg r254:V, reg mlev10:*, reg mlev11:V, reg r255:V, reg mlev12:*, reg mlev13:V, reg c68:cls, reg r256:V, reg p44:p(V +), reg xlim18:*, reg xlim19:V, reg p45:p(V +), reg ylab7:*, reg ylab8:V, reg p46:p(V +), reg ddd2:dots?, reg r260:V, reg lines3:cls, reg predict5:cls, reg sp6:*, reg sp7:V, reg p47:p(V +), reg r262:V, reg p48:p(V +), reg r264:V, reg abline1:cls, reg lty7:*, reg lty8:V, reg p49:p(V +), reg r266:V, reg levels13:*, reg levels14:V, reg s3:V, reg l18:I, reg i222:I, reg i223:I, reg i224:I, reg i225:I, reg c69:L, reg x22:V, reg predict6:cls, reg bsp8:*, reg bsp9:V, reg p50:p(V +), reg sym28:cls, reg base28:cls, reg guard28:L, reg r268:V, reg r269:V, reg lev8:*, reg lev9:V, reg r270:V, reg lev10:*, reg lev11:V, reg c70:cls, reg r271:V, reg p51:p(V +), reg r273:V, reg c71:L, reg i232:I, reg i233:I, reg r275:V, reg dr96:V, reg dc48:L, reg dx132:V, reg i236:I, reg i237:I, reg dx133:V, reg r276:V, reg lines4:cls, reg pred4:*, reg pred5:V, reg p52:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r278:V, reg r279:V, reg lev12:*, reg lev13:V, reg r280:V, reg lev14:*, reg lev15:V, reg c72:cls, reg r281:V, reg p53:p(V +), reg lty9:*, reg lty10:V, reg p54:p(V +), reg r284:V, reg dev_flush1:cls, reg r285:V, reg par1:cls, reg opar:*, reg opar1:V, reg p55:p(V +), reg r287:V |
    mkenv;
    st x = x;
    st levels = levels;
    conf_isMissing = missing.0(conf);
    if conf_isMissing then L0() else L1(conf);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `/`(r1, 100.0);
      return r3;
    L1():
      c = ldf c in base;
      r2 = dyn c(99.0, 95.0, 90.0, 80.0, 50.0);
      goto L0(r2);
    L2():
      r = dyn base(99.0, 95.0, 90.0, 80.0, 50.0);
      goto L0(r);
    };
    goto L1(p);
  L1(conf_orDefault):
    st conf = conf_orDefault;
    absVal_isMissing = missing.0(absVal);
    if absVal_isMissing then L2(TRUE) else L2(absVal);
  L2(absVal_orDefault):
    st absVal = absVal_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L3(NULL) else L3(ylab);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L4(2.0) else L4(lty);
  L4(lty_orDefault):
    st lty = lty_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L68() else D0();
  D0():
    deopt 0 [x1];
  L68():
    x2 = force? x1;
    checkMissing(x2);
    st obj = x2;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L5(r6):
    c1 = `is.object`(r6);
    if c1 then L74() else L75(r6);
  L69():
    obj = ld obj;
    check L71() else D1();
  L70():
    r5 = dyn base1(<sym obj>, "summary");
    goto L5(r5);
  D1():
    deopt 5 [obj];
  L71():
    obj1 = force? obj;
    checkMissing(obj1);
    attr = ldf attr in base;
    r7 = dyn attr(obj1, "summary");
    check L72() else D2();
  L73(dx1):
    c2 = `is.object`(dx1);
    if c2 then L77() else L78(dx1);
  L74():
    dr = tryDispatchBuiltin.1("$", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L76() else L75(dr);
  L75(r9):
    r10 = `$`(r9, <sym df>);
    goto L73(r10);
  D2():
    deopt 9 [r7];
  L6(dx5):
    st dfres = dx5;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L80() else L81();
  L72():
    goto L5(r7);
  L76():
    dx = getTryDispatchBuiltinValue(dr);
    goto L73(dx);
  L77():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(dr2);
  L78(dx3):
    __ = ldf `[` in base;
    r11 = dyn __(dx3, 2);
    goto L6(r11);
  L7(r13):
    c3 = `as.logical`(r13);
    if c3 then L82() else L8();
  L79():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx4);
  L80():
    missing = ldf missing in base;
    r14 = dyn missing(<sym levels>);
    goto L7(r14);
  L81():
    r12 = dyn base2(<sym levels>);
    goto L7(r12);
  L8():
    goto L10();
  L10():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L82():
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L9(r16):
    st levels = r16;
    goto L10();
  L11(r27):
    c4 = `as.logical`(r27);
    if c4 then L92() else L12();
  L83():
    qf = ldf qf;
    check L85() else D3();
  L84():
    r15 = dyn base3(<lang qf(pmax(0.0, pmin(1.0, conf)), 1.0, dfres)>);
    goto L9(r15);
  L88():
    levels1 = ld levels;
    check L90() else D5();
  L89():
    r26 = dyn base4(<lang `<=`(levels, 0.0)>);
    goto L11(r26);
  D3():
    deopt 20 [];
  D5():
    deopt 31 [levels1];
  L12():
    goto L14();
  L14():
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L101() else L102();
  L85():
    p3 = prom<V +>{
      pmax = ldf pmax;
      p2 = prom<V +>{
        pmin = ldf pmin;
        p1 = prom<V +>{
          conf1 = ld conf;
          conf2 = force? conf1;
          checkMissing(conf2);
          return conf2;
        };
        r18 = dyn pmin(1.0, p1);
        return r18;
      };
      r20 = dyn pmax(0.0, p2);
      return r20;
    };
    p4 = prom<V +>{
      dfres = ld dfres;
      dfres1 = force? dfres;
      checkMissing(dfres1);
      return dfres1;
    };
    r23 = dyn qf(p3, 1.0, p4);
    check L86() else D4();
  L90():
    levels2 = force? levels1;
    checkMissing(levels2);
    r28 = `<=`(levels2, 0.0);
    any = ldf any in base;
    r29 = dyn any(r28);
    check L91() else D6();
  L92():
    levels3 = ld levels;
    check L93() else D7();
  D4():
    deopt 24 [r23];
  D6():
    deopt 36 [r29];
  D7():
    deopt 37 [levels3];
  L15(r35):
    r37 = `*`(r35, 1.05);
    st mlev = r37;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L86():
    r24 = sqrt(r23);
    goto L9(r24);
  L91():
    goto L11(r29);
  L93():
    levels4 = force? levels3;
    checkMissing(levels4);
    c5 = `is.object`(levels4);
    if c5 then L94() else L95(levels4);
  L101():
    levels9 = ld levels;
    check L103() else D11();
  L102():
    r34 = dyn base5(<sym levels>);
    goto L15(r34);
  D11():
    deopt 53 [levels9];
  L13(dx7):
    st levels = dx7;
    warning = ldf warning;
    check L98() else D9();
  L16(r39):
    st nm = r39;
    par = ldf par;
    check L109() else D15();
  L94():
    dr4 = tryDispatchBuiltin.1("[", levels4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L96() else L95(dr4);
  L95(levels6):
    levels7 = ld levels;
    check L97() else D8();
  L103():
    levels10 = force? levels9;
    checkMissing(levels10);
    max = ldf max in base;
    r36 = dyn max(levels10);
    check L104() else D12();
  L105():
    obj2 = ld obj;
    check L107() else D13();
  L106():
    r38 = dyn base6(<sym obj>);
    goto L16(r38);
  D8():
    deopt 39 [levels6, levels7];
  D9():
    deopt 46 [];
  D12():
    deopt 56 [r36];
  D13():
    deopt 62 [obj2];
  D15():
    deopt 68 [];
  L96():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx6);
  L97():
    levels8 = force? levels7;
    checkMissing(levels8);
    r30 = `>`(levels8, 0.0);
    __1 = ldf `[` in base;
    r31 = dyn __1(levels6, r30);
    goto L13(r31);
  L98():
    r32 = dyn warning("levels truncated to positive values only");
    check L99() else D10();
  L104():
    goto L15(r36);
  L107():
    obj3 = force? obj2;
    checkMissing(obj3);
    names = ldf names in base;
    r40 = dyn names(obj3);
    check L108() else D14();
  L109():
    p5 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r42):
      r44 = `+`(r42, 0.1);
      return r44;
    L1():
      c6 = ldf c in base;
      r43 = dyn c6(5.0, 4.0, 1.0, 1.0);
      goto L0(r43);
    L2():
      r41 = dyn base7(5.0, 4.0, 1.0, 1.0);
      goto L0(r41);
    };
    r46 = dyn par[mar](p5);
    check L110() else D16();
  D10():
    deopt 48 [r32];
  D14():
    deopt 65 [r40];
  D16():
    deopt 71 [r46];
  L99():
    goto L14();
  L108():
    goto L16(r40);
  L110():
    st opar = r46;
    absVal1 = ld absVal;
    check L111() else D17();
  D17():
    deopt 73 [absVal1];
  L111():
    absVal2 = force? absVal1;
    checkMissing(absVal2);
    c7 = `as.logical`(absVal2);
    if c7 then L112() else L17();
  L17():
    nm2 = ld nm;
    check L227() else D61();
  L43():
    par1 = ldf par;
    check L324() else D98();
  L112():
    nm = ld nm;
    check L113() else D18();
  D18():
    deopt 75 [nm];
  D61():
    deopt 266 [nm2];
  D98():
    deopt 431 [];
  L113():
    nm1 = force? nm;
    checkMissing(nm1);
    s = toForSeq(nm1);
    l = length(s);
    i = 0;
    goto L18(i);
  L227():
    nm3 = force? nm2;
    checkMissing(nm3);
    s2 = toForSeq(nm3);
    l11 = length(s2);
    i128 = 0;
    goto L44(i128);
  L324():
    p55 = prom<V +>{
      opar = ld opar;
      opar1 = force? opar;
      checkMissing(opar1);
      return opar1;
    };
    r287 = dyn par1(p55);
    check L325() else D99();
  D99():
    deopt 433 [r287];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L114() else L42();
  L44(i129):
    i130 = `+`.1(i129, 1);
    c45 = `<`.1(l11, i130);
    if c45 then L228() else L67();
  L325():
    popenv;
    return r287;
  L42():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    __2 = ldf `::`;
    check L115() else D19();
  L67():
    x13 = `[[`(s2, i130, NULL, TRUE);
    st i = x13;
    __19 = ldf `::`;
    check L229() else D62();
  L114():
    goto L43();
  L228():
    goto L43();
  D19():
    deopt 78 [i2];
  D62():
    deopt 269 [i130];
  L115():
    r47 = dyn __2("splines", "interpSpline");
    check L116() else D20();
  L229():
    r185 = dyn __19("splines", "interpSpline");
    check L230() else D63();
  D20():
    deopt 81 [i2, r47];
  D63():
    deopt 272 [i130, r185];
  L116():
    checkFun.0(r47);
    r48 = r47 as cls;
    p6 = prom<V +>{
      obj4 = ld obj;
      obj5 = force? obj4;
      checkMissing(obj5);
      c9 = `is.object`(obj5);
      if c9 then L2() else L3(obj5);
    L0(dx9):
      c10 = `is.object`(dx9);
      if c10 then L6() else L7(dx9);
    L2():
      dr6 = tryDispatchBuiltin.1("[[", obj5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(obj7):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r49 = dyn __3(obj7, i6);
      goto L0(r49);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    L5(dx13):
      c11 = `is.object`(dx13);
      if c11 then L9() else L10();
    L6():
      dr8 = tryDispatchBuiltin.1("$", dx9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L8() else L7(dr8);
    L7(dx11):
      r50 = `$`(dx11, <sym par.vals>);
      goto L5(r50);
    L1(dx17):
      return dx17;
    L8():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L5(dx12);
    L9():
      dr10 = tryDispatchBuiltin.1("[", dx13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L11() else L10();
    L10():
      i7 = ld i;
      i8 = force? i7;
      __4 = ldf `[` in base;
      r51 = dyn __4(dx13, <missing>, i8);
      goto L1(r51);
    L11():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx16);
    };
    p7 = prom<V +>{
      obj8 = ld obj;
      obj9 = force? obj8;
      checkMissing(obj9);
      c12 = `is.object`(obj9);
      if c12 then L1() else L2(obj9);
    L0(dx19):
      c13 = `is.object`(dx19);
      if c13 then L5() else L6(dx19);
    L1():
      dr12 = tryDispatchBuiltin.1("[[", obj9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(obj11):
      i9 = ld i;
      i10 = force? i9;
      __5 = ldf `[[` in base;
      r53 = dyn __5(obj11, i10);
      goto L0(r53);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    L4(dx23):
      return dx23;
    L5():
      dr14 = tryDispatchBuiltin.1("$", dx19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx21):
      r54 = `$`(dx21, <sym tau>);
      goto L4(r54);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L4(dx22);
    };
    r56 = dyn r48(p6, p7);
    check L117() else D21();
  L230():
    checkFun.0(r185);
    r186 = r185 as cls;
    p36 = prom<V +>{
      obj24 = ld obj;
      obj25 = force? obj24;
      checkMissing(obj25);
      c46 = `is.object`(obj25);
      if c46 then L2() else L3(obj25);
    L0(dx85):
      c47 = `is.object`(dx85);
      if c47 then L6() else L7(dx85);
    L2():
      dr62 = tryDispatchBuiltin.1("[[", obj25);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L4() else L3(dr62);
    L3(obj27):
      i133 = ld i;
      i134 = force? i133;
      __20 = ldf `[[` in base;
      r187 = dyn __20(obj27, i134);
      goto L0(r187);
    L4():
      dx84 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx84);
    L5(dx89):
      c48 = `is.object`(dx89);
      if c48 then L9() else L10();
    L6():
      dr64 = tryDispatchBuiltin.1("$", dx85);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L8() else L7(dr64);
    L7(dx87):
      r188 = `$`(dx87, <sym par.vals>);
      goto L5(r188);
    L1(dx93):
      return dx93;
    L8():
      dx88 = getTryDispatchBuiltinValue(dr64);
      goto L5(dx88);
    L9():
      dr66 = tryDispatchBuiltin.1("[", dx89);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L11() else L10();
    L10():
      i135 = ld i;
      i136 = force? i135;
      __21 = ldf `[` in base;
      r189 = dyn __21(dx89, <missing>, i136);
      goto L1(r189);
    L11():
      dx92 = getTryDispatchBuiltinValue(dr66);
      goto L1(dx92);
    };
    p37 = prom<V +>{
      obj28 = ld obj;
      obj29 = force? obj28;
      checkMissing(obj29);
      c49 = `is.object`(obj29);
      if c49 then L1() else L2(obj29);
    L0(dx95):
      c50 = `is.object`(dx95);
      if c50 then L5() else L6(dx95);
    L1():
      dr68 = tryDispatchBuiltin.1("[[", obj29);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(obj31):
      i137 = ld i;
      i138 = force? i137;
      __22 = ldf `[[` in base;
      r191 = dyn __22(obj31, i138);
      goto L0(r191);
    L3():
      dx94 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx94);
    L4(dx99):
      return dx99;
    L5():
      dr70 = tryDispatchBuiltin.1("$", dx95);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L7() else L6(dr70);
    L6(dx97):
      r192 = `$`(dx97, <sym tau>);
      goto L4(r192);
    L7():
      dx98 = getTryDispatchBuiltinValue(dr70);
      goto L4(dx98);
    };
    r194 = dyn r186(p36, p37);
    check L231() else D64();
  D21():
    deopt 85 [i2, r56];
  D64():
    deopt 276 [i130, r194];
  L117():
    st sp = r56;
    __6 = ldf `::`;
    check L118() else D22();
  L231():
    st sp = r194;
    __23 = ldf `::`;
    check L232() else D65();
  D22():
    deopt 88 [i2];
  D65():
    deopt 279 [i130];
  L118():
    r57 = dyn __6("splines", "backSpline");
    check L119() else D23();
  L232():
    r195 = dyn __23("splines", "backSpline");
    check L233() else D66();
  D23():
    deopt 91 [i2, r57];
  D66():
    deopt 282 [i130, r195];
  L119():
    checkFun.0(r57);
    r58 = r57 as cls;
    p8 = prom<V +>{
      sp = ld sp;
      sp1 = force? sp;
      checkMissing(sp1);
      return sp1;
    };
    r60 = dyn r58(p8);
    check L120() else D24();
  L233():
    checkFun.0(r195);
    r196 = r195 as cls;
    p38 = prom<V +>{
      sp4 = ld sp;
      sp5 = force? sp4;
      checkMissing(sp5);
      return sp5;
    };
    r198 = dyn r196(p38);
    check L234() else D67();
  D24():
    deopt 94 [i2, r60];
  D67():
    deopt 285 [i130, r198];
  L120():
    st bsp = r60;
    predict = ldf predict;
    check L121() else D25();
  L234():
    st bsp = r198;
    predict4 = ldf predict;
    check L235() else D68();
  D25():
    deopt 97 [i2];
  D68():
    deopt 288 [i130];
  L121():
    p9 = prom<V +>{
      bsp = ld bsp;
      bsp1 = force? bsp;
      checkMissing(bsp1);
      return bsp1;
    };
    p10 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      mlev = ld mlev;
      mlev1 = force? mlev;
      checkMissing(mlev1);
      r64 = `-`(<missing>, mlev1);
      mlev2 = ld mlev;
      mlev3 = force? mlev2;
      checkMissing(mlev3);
      c14 = ldf c in base;
      r65 = dyn c14(r64, mlev3);
      goto L0(r65);
    L2():
      r62 = dyn base8(<lang `-`(mlev)>, <sym mlev>);
      goto L0(r62);
    };
    r67 = dyn predict(p9, p10);
    check L122() else D26();
  L235():
    p39 = prom<V +>{
      bsp6 = ld bsp;
      bsp7 = force? bsp6;
      checkMissing(bsp7);
      return bsp7;
    };
    p40 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r201):
      return r201;
    L1():
      mlev6 = ld mlev;
      mlev7 = force? mlev6;
      checkMissing(mlev7);
      r202 = `-`(<missing>, mlev7);
      mlev8 = ld mlev;
      mlev9 = force? mlev8;
      checkMissing(mlev9);
      c51 = ldf c in base;
      r203 = dyn c51(r202, mlev9);
      goto L0(r203);
    L2():
      r200 = dyn base20(<lang `-`(mlev)>, <sym mlev>);
      goto L0(r200);
    };
    r205 = dyn predict4(p39, p40);
    check L236() else D69();
  D26():
    deopt 100 [i2, r67];
  D69():
    deopt 291 [i130, r205];
  L122():
    c15 = `is.object`(r67);
    if c15 then L124() else L125(i2, r67);
  L236():
    c52 = `is.object`(r205);
    if c52 then L238() else L239(i130, r205);
  L123(i14, dx25):
    st xlim = dx25;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L127() else L128();
  L124():
    dr16 = tryDispatchBuiltin.1("$", r67);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L126() else L125(i2, dr16);
  L125(i12, r69):
    r70 = `$`(r69, <sym y>);
    goto L123(i12, r70);
  L237(i142, dx101):
    st xlim = dx101;
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  L238():
    dr72 = tryDispatchBuiltin.1("$", r205);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L240() else L239(i130, dr72);
  L239(i140, r207):
    r208 = `$`(r207, <sym y>);
    goto L237(i140, r208);
  L19(i17, r72):
    c17 = `as.logical`(r72);
    if c17 then L134() else L21();
  L45(i145, r210):
    c54 = `as.logical`(r210);
    if c54 then L248() else L47();
  L126():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L123(i2, dx24);
  L127():
    xlim = ld xlim;
    check L129() else D27();
  L128():
    r71 = dyn base9(<lang `[`(xlim, 1)>);
    goto L19(i14, r71);
  L240():
    dx100 = getTryDispatchBuiltinValue(dr72);
    goto L237(i130, dx100);
  L241():
    xlim10 = ld xlim;
    check L243() else D70();
  L242():
    r209 = dyn base21(<lang `[`(xlim, 1)>);
    goto L45(i142, r209);
  D27():
    deopt 105 [i14, xlim];
  D70():
    deopt 296 [i142, xlim10];
  L21():
    goto L26(i17);
  L26(i47):
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L155() else L156();
  L47():
    goto L52(i145);
  L52(i175):
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L269() else L270();
  L129():
    xlim1 = force? xlim;
    checkMissing(xlim1);
    c16 = `is.object`(xlim1);
    if c16 then L130() else L131(i14, xlim1);
  L134():
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L135() else L136();
  L243():
    xlim11 = force? xlim10;
    checkMissing(xlim11);
    c53 = `is.object`(xlim11);
    if c53 then L244() else L245(i142, xlim11);
  L248():
    sym22 = ldf min;
    base22 = ldf min in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L249() else L250();
  L20(i21, dx27):
    is_na = ldf `is.na` in base;
    r74 = dyn is_na(dx27);
    check L133() else D28();
  L22(i26, r76):
    l1 = ld xlim;
    c21 = `is.object`(l1);
    if c21 then L151() else L152(i26, r76, l1);
  L27(i50, r88):
    c23 = `as.logical`(r88);
    if c23 then L162() else L29();
  L46(i149, dx103):
    is_na2 = ldf `is.na` in base;
    r212 = dyn is_na2(dx103);
    check L247() else D71();
  L48(i154, r214):
    l12 = ld xlim;
    c58 = `is.object`(l12);
    if c58 then L265() else L266(i154, r214, l12);
  L53(i178, r226):
    c60 = `as.logical`(r226);
    if c60 then L276() else L55();
  L130():
    dr18 = tryDispatchBuiltin.1("[", xlim1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L132() else L131(i14, dr18);
  L131(i19, xlim3):
    __7 = ldf `[` in base;
    r73 = dyn __7(xlim3, 1);
    goto L20(i19, r73);
  L135():
    x4 = ld x;
    check L137() else D29();
  L136():
    r75 = dyn base10(<lang `[`(`$`(`[[`(x, i), par.vals), , i)>);
    goto L22(i17, r75);
  L155():
    xlim4 = ld xlim;
    check L157() else D33();
  L156():
    r87 = dyn base11(<lang `[`(xlim, 2)>);
    goto L27(i47, r87);
  L244():
    dr74 = tryDispatchBuiltin.1("[", xlim11);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L246() else L245(i142, dr74);
  L245(i147, xlim13):
    __24 = ldf `[` in base;
    r211 = dyn __24(xlim13, 1);
    goto L46(i147, r211);
  L249():
    x14 = ld x;
    check L251() else D72();
  L250():
    r213 = dyn base22(<lang `[`(`$`(`[[`(x, i), par.vals), , i)>);
    goto L48(i145, r213);
  L269():
    xlim14 = ld xlim;
    check L271() else D76();
  L270():
    r225 = dyn base23(<lang `[`(xlim, 2)>);
    goto L53(i175, r225);
  D28():
    deopt 111 [i21, r74];
  D29():
    deopt 114 [i17, x4];
  D33():
    deopt 136 [i47, xlim4];
  D71():
    deopt 302 [i149, r212];
  D72():
    deopt 305 [i145, x14];
  D76():
    deopt 327 [i175, xlim14];
  L25(i46, r84, dx39):
    st xlim = dx39;
    goto L26(i46);
  L29():
    goto L34(i50);
  L34(i80):
    dev_hold = ldf `dev.hold`;
    check L183() else D39();
  L51(i174, r222, dx115):
    st xlim = dx115;
    goto L52(i174);
  L55():
    goto L60(i178);
  L60(i208):
    dev_hold1 = ldf `dev.hold`;
    check L297() else D82();
  L132():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L20(i14, dx26);
  L133():
    goto L19(i21, r74);
  L137():
    x5 = force? x4;
    checkMissing(x5);
    c18 = `is.object`(x5);
    if c18 then L138() else L139(i17, x5);
  L151():
    dr26 = tryDispatchBuiltin.0("[<-", l1, r76);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L153() else L152(i26, r76, dr26);
  L152(i44, r82, l3):
    ___ = ldf `[<-` in base;
    r85 = dyn ___(l3, r76, 1);
    goto L25(i44, r82, r85);
  L157():
    xlim5 = force? xlim4;
    checkMissing(xlim5);
    c22 = `is.object`(xlim5);
    if c22 then L158() else L159(i47, xlim5);
  L162():
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L163() else L164();
  L246():
    dx102 = getTryDispatchBuiltinValue(dr74);
    goto L46(i142, dx102);
  L247():
    goto L45(i149, r212);
  L251():
    x15 = force? x14;
    checkMissing(x15);
    c55 = `is.object`(x15);
    if c55 then L252() else L253(i145, x15);
  L265():
    dr82 = tryDispatchBuiltin.0("[<-", l12, r214);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L267() else L266(i154, r214, dr82);
  L266(i172, r220, l14):
    ___2 = ldf `[<-` in base;
    r223 = dyn ___2(l14, r214, 1);
    goto L51(i172, r220, r223);
  L271():
    xlim15 = force? xlim14;
    checkMissing(xlim15);
    c59 = `is.object`(xlim15);
    if c59 then L272() else L273(i175, xlim15);
  L276():
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L277() else L278();
  D39():
    deopt 166 [i80];
  D82():
    deopt 357 [i208];
  L23(i30, dx29):
    c19 = `is.object`(dx29);
    if c19 then L143() else L144(i30, dx29);
  L28(i54, dx41):
    is_na1 = ldf `is.na` in base;
    r90 = dyn is_na1(dx41);
    check L161() else D34();
  L30(i59, r92):
    l4 = ld xlim;
    c27 = `is.object`(l4);
    if c27 then L179() else L180(i59, r92, l4);
  L49(i158, dx105):
    c56 = `is.object`(dx105);
    if c56 then L257() else L258(i158, dx105);
  L54(i182, dx117):
    is_na3 = ldf `is.na` in base;
    r228 = dyn is_na3(dx117);
    check L275() else D77();
  L56(i187, r230):
    l15 = ld xlim;
    c64 = `is.object`(l15);
    if c64 then L293() else L294(i187, r230, l15);
  L138():
    dr20 = tryDispatchBuiltin.1("[[", x5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L140() else L139(i17, dr20);
  L139(i28, x7):
    i31 = ld i;
    check L141() else D30();
  L153():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L25(i26, r76, dx38);
  L158():
    dr28 = tryDispatchBuiltin.1("[", xlim5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L160() else L159(i47, dr28);
  L159(i52, xlim7):
    __10 = ldf `[` in base;
    r89 = dyn __10(xlim7, 2);
    goto L28(i52, r89);
  L163():
    x8 = ld x;
    check L165() else D35();
  L164():
    r91 = dyn base12(<lang `[`(`$`(`[[`(x, i), par.vals), , i)>);
    goto L30(i50, r91);
  L183():
    r103 = dyn dev_hold();
    check L184() else D40();
  L252():
    dr76 = tryDispatchBuiltin.1("[[", x15);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L254() else L253(i145, dr76);
  L253(i156, x17):
    i159 = ld i;
    check L255() else D73();
  L267():
    dx114 = getTryDispatchBuiltinValue(dr82);
    goto L51(i154, r214, dx114);
  L272():
    dr84 = tryDispatchBuiltin.1("[", xlim15);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L274() else L273(i175, dr84);
  L273(i180, xlim17):
    __27 = ldf `[` in base;
    r227 = dyn __27(xlim17, 2);
    goto L54(i180, r227);
  L277():
    x18 = ld x;
    check L279() else D78();
  L278():
    r229 = dyn base24(<lang `[`(`$`(`[[`(x, i), par.vals), , i)>);
    goto L56(i178, r229);
  L297():
    r241 = dyn dev_hold1();
    check L298() else D83();
  D30():
    deopt 116 [i28, x7, i31];
  D34():
    deopt 142 [i54, r90];
  D35():
    deopt 145 [i50, x8];
  D40():
    deopt 167 [i80, r103];
  D73():
    deopt 307 [i156, x17, i159];
  D77():
    deopt 333 [i182, r228];
  D78():
    deopt 336 [i178, x18];
  D83():
    deopt 358 [i208, r241];
  L33(i79, r100, dx53):
    st xlim = dx53;
    goto L34(i79);
  L59(i207, r238, dx129):
    st xlim = dx129;
    goto L60(i207);
  L140():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L23(i17, dx28);
  L141():
    i32 = force? i31;
    __8 = ldf `[[` in base;
    r77 = dyn __8(x7, i32);
    goto L23(i28, r77);
  L142(i36, dx33):
    c20 = `is.object`(dx33);
    if c20 then L146() else L147(i36, dx33);
  L143():
    dr22 = tryDispatchBuiltin.1("$", dx29);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L145() else L144(i30, dr22);
  L144(i34, dx31):
    r78 = `$`(dx31, <sym par.vals>);
    goto L142(i34, r78);
  L160():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L28(i47, dx40);
  L161():
    goto L27(i54, r90);
  L165():
    x9 = force? x8;
    checkMissing(x9);
    c24 = `is.object`(x9);
    if c24 then L166() else L167(i50, x9);
  L179():
    dr36 = tryDispatchBuiltin.0("[<-", l4, r92);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L181() else L180(i59, r92, dr36);
  L180(i77, r98, l6):
    ___1 = ldf `[<-` in base;
    r101 = dyn ___1(l6, r92, 2);
    goto L33(i77, r98, r101);
  L184():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L185() else L186();
  L254():
    dx104 = getTryDispatchBuiltinValue(dr76);
    goto L49(i145, dx104);
  L255():
    i160 = force? i159;
    __25 = ldf `[[` in base;
    r215 = dyn __25(x17, i160);
    goto L49(i156, r215);
  L256(i164, dx109):
    c57 = `is.object`(dx109);
    if c57 then L260() else L261(i164, dx109);
  L257():
    dr78 = tryDispatchBuiltin.1("$", dx105);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L259() else L258(i158, dr78);
  L258(i162, dx107):
    r216 = `$`(dx107, <sym par.vals>);
    goto L256(i162, r216);
  L274():
    dx116 = getTryDispatchBuiltinValue(dr84);
    goto L54(i175, dx116);
  L275():
    goto L53(i182, r228);
  L279():
    x19 = force? x18;
    checkMissing(x19);
    c61 = `is.object`(x19);
    if c61 then L280() else L281(i178, x19);
  L293():
    dr92 = tryDispatchBuiltin.0("[<-", l15, r230);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L295() else L294(i187, r230, dr92);
  L294(i205, r236, l17):
    ___3 = ldf `[<-` in base;
    r239 = dyn ___3(l17, r230, 2);
    goto L59(i205, r236, r239);
  L298():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L299() else L300();
  L24(i40, dx37):
    min = ldf min in base;
    r80 = dyn min(dx37);
    check L150() else D32();
  L31(i63, dx43):
    c25 = `is.object`(dx43);
    if c25 then L171() else L172(i63, dx43);
  L35(i83, r105):
    c29 = `as.logical`(r105);
    if c29 then L188() else L36();
  L50(i168, dx113):
    min1 = ldf min in base;
    r218 = dyn min1(dx113);
    check L264() else D75();
  L57(i191, dx119):
    c62 = `is.object`(dx119);
    if c62 then L285() else L286(i191, dx119);
  L61(i211, r243):
    c66 = `as.logical`(r243);
    if c66 then L302() else L62();
  L145():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L142(i30, dx32);
  L146():
    dr24 = tryDispatchBuiltin.1("[", dx33);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L148() else L147(i36, dr24);
  L147(i38, dx35):
    i41 = ld i;
    check L149() else D31();
  L166():
    dr30 = tryDispatchBuiltin.1("[[", x9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L168() else L167(i50, dr30);
  L167(i61, x11):
    i64 = ld i;
    check L169() else D36();
  L181():
    dx52 = getTryDispatchBuiltinValue(dr36);
    goto L33(i59, r92, dx52);
  L185():
    ylab1 = ld ylab;
    check L187() else D41();
  L186():
    r104 = dyn base13(<sym ylab>);
    goto L35(i80, r104);
  L259():
    dx108 = getTryDispatchBuiltinValue(dr78);
    goto L256(i158, dx108);
  L260():
    dr80 = tryDispatchBuiltin.1("[", dx109);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L262() else L261(i164, dr80);
  L261(i166, dx111):
    i169 = ld i;
    check L263() else D74();
  L280():
    dr86 = tryDispatchBuiltin.1("[[", x19);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L282() else L281(i178, dr86);
  L281(i189, x21):
    i192 = ld i;
    check L283() else D79();
  L295():
    dx128 = getTryDispatchBuiltinValue(dr92);
    goto L59(i187, r230, dx128);
  L299():
    ylab5 = ld ylab;
    check L301() else D84();
  L300():
    r242 = dyn base25(<sym ylab>);
    goto L61(i208, r242);
  D31():
    deopt 121 [i38, dx35, i41];
  D32():
    deopt 126 [i40, r80];
  D36():
    deopt 147 [i61, x11, i64];
  D41():
    deopt 169 [i80, ylab1];
  D74():
    deopt 312 [i166, dx111, i169];
  D75():
    deopt 317 [i168, r218];
  D79():
    deopt 338 [i189, x21, i192];
  D84():
    deopt 360 [i208, ylab5];
  L36():
    goto L38(i83);
  L38(i89):
    plot = ldf plot;
    check L192() else D42();
  L62():
    goto L64(i211);
  L64(i217):
    plot1 = ldf plot;
    check L306() else D85();
  L148():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L24(i36, dx36);
  L149():
    i42 = force? i41;
    __9 = ldf `[` in base;
    r79 = dyn __9(dx33, <missing>, i42);
    goto L24(i38, r79);
  L150():
    goto L22(i40, r80);
  L168():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L31(i50, dx42);
  L169():
    i65 = force? i64;
    __11 = ldf `[[` in base;
    r93 = dyn __11(x11, i65);
    goto L31(i61, r93);
  L170(i69, dx47):
    c26 = `is.object`(dx47);
    if c26 then L174() else L175(i69, dx47);
  L171():
    dr32 = tryDispatchBuiltin.1("$", dx43);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L173() else L172(i63, dr32);
  L172(i67, dx45):
    r94 = `$`(dx45, <sym par.vals>);
    goto L170(i67, r94);
  L187():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c28 = `==`(ylab2, NULL);
    goto L35(i80, c28);
  L188():
    sym14 = ldf expression;
    base14 = ldf expression in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L189() else L190();
  L262():
    dx112 = getTryDispatchBuiltinValue(dr80);
    goto L50(i164, dx112);
  L263():
    i170 = force? i169;
    __26 = ldf `[` in base;
    r217 = dyn __26(dx109, <missing>, i170);
    goto L50(i166, r217);
  L264():
    goto L48(i168, r218);
  L282():
    dx118 = getTryDispatchBuiltinValue(dr86);
    goto L57(i178, dx118);
  L283():
    i193 = force? i192;
    __28 = ldf `[[` in base;
    r231 = dyn __28(x21, i193);
    goto L57(i189, r231);
  L284(i197, dx123):
    c63 = `is.object`(dx123);
    if c63 then L288() else L289(i197, dx123);
  L285():
    dr88 = tryDispatchBuiltin.1("$", dx119);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L287() else L286(i191, dr88);
  L286(i195, dx121):
    r232 = `$`(dx121, <sym par.vals>);
    goto L284(i195, r232);
  L301():
    ylab6 = force? ylab5;
    checkMissing(ylab6);
    c65 = `==`(ylab6, NULL);
    goto L61(i208, c65);
  L302():
    sym26 = ldf expression;
    base26 = ldf expression in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L303() else L304();
  D42():
    deopt 179 [i89];
  D85():
    deopt 370 [i217];
  L32(i73, dx51):
    max1 = ldf max in base;
    r96 = dyn max1(dx51);
    check L178() else D38();
  L37(i88, r107):
    st ylab = r107;
    goto L38(i88);
  L58(i201, dx127):
    max2 = ldf max in base;
    r234 = dyn max2(dx127);
    check L292() else D81();
  L63(i216, r245):
    st ylab = r245;
    goto L64(i216);
  L173():
    dx46 = getTryDispatchBuiltinValue(dr32);
    goto L170(i63, dx46);
  L174():
    dr34 = tryDispatchBuiltin.1("[", dx47);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L176() else L175(i69, dr34);
  L175(i71, dx49):
    i74 = ld i;
    check L177() else D37();
  L189():
    expression = ldf expression in base;
    r108 = dyn expression(<lang abs(tau)>);
    goto L37(i83, r108);
  L190():
    r106 = dyn base14(<lang abs(tau)>);
    goto L37(i83, r106);
  L192():
    p11 = prom<V +>{
      __13 = ldf `~` in base;
      r110 = dyn __13(<lang abs(tau)>, <lang `[`(par.vals, , i)>);
      return r110;
    };
    p12 = prom<V +>{
      obj12 = ld obj;
      obj13 = force? obj12;
      checkMissing(obj13);
      c30 = `is.object`(obj13);
      if c30 then L1() else L2(obj13);
    L0(dx55):
      return dx55;
    L1():
      dr38 = tryDispatchBuiltin.1("[[", obj13);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(obj15):
      i90 = ld i;
      i91 = force? i90;
      __14 = ldf `[[` in base;
      r112 = dyn __14(obj15, i91);
      goto L0(r112);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx54);
    };
    p13 = prom<V +>{
      i92 = ld i;
      i93 = force? i92;
      checkMissing(i93);
      return i93;
    };
    p14 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      mlev4 = ld mlev;
      mlev5 = force? mlev4;
      checkMissing(mlev5);
      c31 = ldf c in base;
      r117 = dyn c31(0.0, mlev5);
      goto L0(r117);
    L2():
      r115 = dyn base15(0.0, <sym mlev>);
      goto L0(r115);
    };
    p15 = prom<V +>{
      xlim8 = ld xlim;
      xlim9 = force? xlim8;
      checkMissing(xlim9);
      return xlim9;
    };
    p16 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd1 = ld `...`;
    r121 = dyn plot[, data, xlab, ylim, xlim, ylab, type, `...`](p11, p12, p13, p14, p15, p16, "n", ddd1);
    check L193() else D43();
  L287():
    dx122 = getTryDispatchBuiltinValue(dr88);
    goto L284(i191, dx122);
  L288():
    dr90 = tryDispatchBuiltin.1("[", dx123);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L290() else L289(i197, dr90);
  L289(i199, dx125):
    i202 = ld i;
    check L291() else D80();
  L303():
    expression1 = ldf expression in base;
    r246 = dyn expression1(<sym tau>);
    goto L63(i211, r246);
  L304():
    r244 = dyn base26(<sym tau>);
    goto L63(i211, r244);
  L306():
    p41 = prom<V +>{
      __30 = ldf `~` in base;
      r248 = dyn __30(<sym tau>, <lang `[`(par.vals, , i)>);
      return r248;
    };
    p42 = prom<V +>{
      obj32 = ld obj;
      obj33 = force? obj32;
      checkMissing(obj33);
      c67 = `is.object`(obj33);
      if c67 then L1() else L2(obj33);
    L0(dx131):
      return dx131;
    L1():
      dr94 = tryDispatchBuiltin.1("[[", obj33);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(obj35):
      i218 = ld i;
      i219 = force? i218;
      __31 = ldf `[[` in base;
      r250 = dyn __31(obj35, i219);
      goto L0(r250);
    L3():
      dx130 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx130);
    };
    p43 = prom<V +>{
      i220 = ld i;
      i221 = force? i220;
      checkMissing(i221);
      return i221;
    };
    p44 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r254):
      return r254;
    L1():
      mlev10 = ld mlev;
      mlev11 = force? mlev10;
      checkMissing(mlev11);
      r255 = `-`(<missing>, mlev11);
      mlev12 = ld mlev;
      mlev13 = force? mlev12;
      checkMissing(mlev13);
      c68 = ldf c in base;
      r256 = dyn c68(r255, mlev13);
      goto L0(r256);
    L2():
      r253 = dyn base27(<lang `-`(mlev)>, <sym mlev>);
      goto L0(r253);
    };
    p45 = prom<V +>{
      xlim18 = ld xlim;
      xlim19 = force? xlim18;
      checkMissing(xlim19);
      return xlim19;
    };
    p46 = prom<V +>{
      ylab7 = ld ylab;
      ylab8 = force? ylab7;
      checkMissing(ylab8);
      return ylab8;
    };
    ddd2 = ld `...`;
    r260 = dyn plot1[, data, xlab, ylim, xlim, ylab, type, `...`](p41, p42, p43, p44, p45, p46, "n", ddd2);
    check L307() else D86();
  D37():
    deopt 152 [i71, dx49, i74];
  D38():
    deopt 157 [i73, r96];
  D43():
    deopt 194 [i89, r121];
  D80():
    deopt 343 [i199, dx125, i202];
  D81():
    deopt 348 [i201, r234];
  D86():
    deopt 385 [i217, r260];
  L176():
    dx50 = getTryDispatchBuiltinValue(dr34);
    goto L32(i69, dx50);
  L177():
    i75 = force? i74;
    __12 = ldf `[` in base;
    r95 = dyn __12(dx47, <missing>, i75);
    goto L32(i71, r95);
  L178():
    goto L30(i73, r96);
  L193():
    rbind = ldf rbind;
    check L194() else D44();
  L290():
    dx126 = getTryDispatchBuiltinValue(dr90);
    goto L58(i197, dx126);
  L291():
    i203 = force? i202;
    __29 = ldf `[` in base;
    r233 = dyn __29(dx123, <missing>, i203);
    goto L58(i199, r233);
  L292():
    goto L56(i201, r234);
  L307():
    lines3 = ldf lines;
    check L308() else D87();
  D44():
    deopt 196 [i89];
  D87():
    deopt 387 [i217];
  L194():
    p19 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p18 = prom<V +>{
        predict1 = ldf predict;
        p17 = prom<V +>{
          sp2 = ld sp;
          sp3 = force? sp2;
          checkMissing(sp3);
          return sp3;
        };
        r123 = dyn predict1(p17);
        return r123;
      };
      r125 = dyn as_data_frame(p18);
      return r125;
    };
    p22 = prom<V +>{
      data_frame = ldf `data.frame`;
      p20 = prom<V +>{
        obj16 = ld obj;
        obj17 = force? obj16;
        checkMissing(obj17);
        c32 = `is.object`(obj17);
        if c32 then L2() else L3(obj17);
      L0(dx57):
        c33 = `is.object`(dx57);
        if c33 then L6() else L7(dx57);
      L2():
        dr40 = tryDispatchBuiltin.1("[[", obj17);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L4() else L3(dr40);
      L3(obj19):
        i94 = ld i;
        i95 = force? i94;
        __15 = ldf `[[` in base;
        r127 = dyn __15(obj19, i95);
        goto L0(r127);
      L4():
        dx56 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx56);
      L5(dx61):
        c34 = `is.object`(dx61);
        if c34 then L9() else L10();
      L6():
        dr42 = tryDispatchBuiltin.1("$", dx57);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L8() else L7(dr42);
      L7(dx59):
        r128 = `$`(dx59, <sym par.vals>);
        goto L5(r128);
      L1(dx65):
        return dx65;
      L8():
        dx60 = getTryDispatchBuiltinValue(dr42);
        goto L5(dx60);
      L9():
        dr44 = tryDispatchBuiltin.1("[", dx61);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L11() else L10();
      L10():
        i96 = ld i;
        i97 = force? i96;
        __16 = ldf `[` in base;
        r129 = dyn __16(dx61, <missing>, i97);
        goto L1(r129);
      L11():
        dx64 = getTryDispatchBuiltinValue(dr44);
        goto L1(dx64);
      };
      p21 = prom<V +>{
        obj20 = ld obj;
        obj21 = force? obj20;
        checkMissing(obj21);
        c35 = `is.object`(obj21);
        if c35 then L1() else L2(obj21);
      L0(dx67):
        c36 = `is.object`(dx67);
        if c36 then L5() else L6(dx67);
      L1():
        dr46 = tryDispatchBuiltin.1("[[", obj21);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L3() else L2(dr46);
      L2(obj23):
        i98 = ld i;
        i99 = force? i98;
        __17 = ldf `[[` in base;
        r131 = dyn __17(obj23, i99);
        goto L0(r131);
      L3():
        dx66 = getTryDispatchBuiltinValue(dr46);
        goto L0(dx66);
      L4(dx71):
        return dx71;
      L5():
        dr48 = tryDispatchBuiltin.1("$", dx67);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L7() else L6(dr48);
      L6(dx69):
        r132 = `$`(dx69, <sym tau>);
        goto L4(r132);
      L7():
        dx70 = getTryDispatchBuiltinValue(dr48);
        goto L4(dx70);
      };
      r134 = dyn data_frame[x, y](p20, p21);
      return r134;
    };
    r136 = dyn rbind(p19, p22);
    check L195() else D45();
  L308():
    p48 = prom<V +>{
      predict5 = ldf predict;
      p47 = prom<V +>{
        sp6 = ld sp;
        sp7 = force? sp6;
        checkMissing(sp7);
        return sp7;
      };
      r262 = dyn predict5(p47);
      return r262;
    };
    r264 = dyn lines3[, col](p48, 4.0);
    check L309() else D88();
  D45():
    deopt 199 [i89, r136];
  D88():
    deopt 391 [i217, r264];
  L195():
    st avals = r136;
    sym16 = ldf abs;
    base16 = ldf abs in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L196() else L197();
  L309():
    abline1 = ldf abline;
    check L310() else D89();
  D89():
    deopt 393 [i217];
  L39(i102, r138):
    l7 = ld avals;
    c38 = `is.object`(l7);
    if c38 then L205() else L206(i102, r138, l7);
  L196():
    avals = ld avals;
    check L198() else D46();
  L197():
    r137 = dyn base16(<lang `$`(avals, y)>);
    goto L39(i89, r137);
  L310():
    p49 = prom<V +>{
      lty7 = ld lty;
      lty8 = force? lty7;
      checkMissing(lty8);
      return lty8;
    };
    r266 = dyn abline1[h, col, lty](0.0, 3.0, p49);
    check L311() else D90();
  D46():
    deopt 203 [i89, avals];
  D90():
    deopt 400 [i217, r266];
  L198():
    avals1 = force? avals;
    checkMissing(avals1);
    c37 = `is.object`(avals1);
    if c37 then L200() else L201(i89, avals1);
  L204(i110, dx75):
    st avals = dx75;
    lines = ldf lines;
    check L208() else D48();
  L205():
    dr52 = tryDispatchBuiltin.0("$<-", l7, r138);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L207() else L206(i102, r138, dr52);
  L206(i108, r142, l9):
    r145 = `$<-`(l9, <sym y>, r138);
    goto L204(i108, r145);
  L311():
    levels13 = ld levels;
    check L312() else D91();
  D48():
    deopt 212 [i110];
  D91():
    deopt 401 [i217, levels13];
  L199(i106, dx73):
    abs = ldf abs in base;
    r140 = dyn abs(dx73);
    check L203() else D47();
  L200():
    dr50 = tryDispatchBuiltin.1("$", avals1);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L202() else L201(i89, dr50);
  L201(i104, avals3):
    r139 = `$`(avals3, <sym y>);
    goto L199(i104, r139);
  L207():
    dx74 = getTryDispatchBuiltinValue(dr52);
    goto L204(i102, dx74);
  L208():
    p24 = prom<V +>{
      avals4 = ld avals;
      avals5 = force? avals4;
      checkMissing(avals5);
      c39 = `is.object`(avals5);
      if c39 then L1() else L2();
    L0(dx77):
      return dx77;
    L1():
      dr54 = tryDispatchBuiltin.1("[", avals5);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2();
    L2():
      order = ldf order;
      p23 = prom<V +>{
        avals8 = ld avals;
        avals9 = force? avals8;
        checkMissing(avals9);
        c40 = `is.object`(avals9);
        if c40 then L1() else L2(avals9);
      L0(dx79):
        return dx79;
      L1():
        dr56 = tryDispatchBuiltin.1("$", avals9);
        dc28 = getTryDispatchBuiltinDispatched(dr56);
        if dc28 then L3() else L2(dr56);
      L2(avals11):
        r146 = `$`(avals11, <sym x>);
        goto L0(r146);
      L3():
        dx78 = getTryDispatchBuiltinValue(dr56);
        goto L0(dx78);
      };
      r148 = dyn order(p23);
      __18 = ldf `[` in base;
      r149 = dyn __18(avals5, r148, <missing>);
      goto L0(r149);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx76);
    };
    r151 = dyn lines[, col](p24, 4.0);
    check L209() else D49();
  L312():
    levels14 = force? levels13;
    checkMissing(levels14);
    s3 = toForSeq(levels14);
    l18 = length(s3);
    i222 = 0;
    goto L65(i217, i222);
  D47():
    deopt 207 [i106, r140];
  D49():
    deopt 216 [i110, r151];
  L65(i223, i224):
    i225 = `+`.1(i224, 1);
    c69 = `<`.1(l18, i225);
    if c69 then L313() else L66();
  L202():
    dx72 = getTryDispatchBuiltinValue(dr50);
    goto L199(i89, dx72);
  L203():
    goto L39(i106, r140);
  L209():
    abline = ldf abline;
    check L210() else D50();
  D50():
    deopt 218 [i110];
  L66():
    x22 = `[[`(s3, i225, NULL, TRUE);
    st lev = x22;
    predict6 = ldf predict;
    check L314() else D92();
  L210():
    p26 = prom<V +>{
      predict2 = ldf predict;
      p25 = prom<V +>{
        bsp2 = ld bsp;
        bsp3 = force? bsp2;
        checkMissing(bsp3);
        return bsp3;
      };
      r153 = dyn predict2(p25, 0.0);
      c41 = `is.object`(r153);
      if c41 then L1() else L2(r153);
    L0(dx81):
      return dx81;
    L1():
      dr58 = tryDispatchBuiltin.1("$", r153);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(r155):
      r156 = `$`(r155, <sym y>);
      goto L0(r156);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx80);
    };
    p27 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    r159 = dyn abline[v, col, lty](p26, 3.0, p27);
    check L211() else D51();
  L313():
    dev_flush1 = ldf `dev.flush`;
    check L322() else D96();
  D51():
    deopt 225 [i110, r159];
  D92():
    deopt 404 [i223, i225];
  D96():
    deopt 425 [i223];
  L211():
    levels11 = ld levels;
    check L212() else D52();
  L314():
    p50 = prom<V +>{
      bsp8 = ld bsp;
      bsp9 = force? bsp8;
      checkMissing(bsp9);
      return bsp9;
    };
    p51 = prom<V +>{
      sym28 = ldf c;
      base28 = ldf c in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r269):
      return r269;
    L1():
      lev8 = ld lev;
      lev9 = force? lev8;
      checkMissing(lev9);
      r270 = `-`(<missing>, lev9);
      lev10 = ld lev;
      lev11 = force? lev10;
      checkMissing(lev11);
      c70 = ldf c in base;
      r271 = dyn c70(r270, lev11);
      goto L0(r271);
    L2():
      r268 = dyn base28(<lang `-`(lev)>, <sym lev>);
      goto L0(r268);
    };
    r273 = dyn predict6(p50, p51);
    check L315() else D93();
  L322():
    r285 = dyn dev_flush1();
    check L323() else D97();
  D52():
    deopt 226 [i110, levels11];
  D93():
    deopt 407 [i223, i225, r273];
  D97():
    deopt 426 [i223, r285];
  L212():
    levels12 = force? levels11;
    checkMissing(levels12);
    s1 = toForSeq(levels12);
    l10 = length(s1);
    i111 = 0;
    goto L40(i110, i111);
  L315():
    c71 = `is.object`(r273);
    if c71 then L317() else L318(i223, i225, r273);
  L323():
    goto L44(i223);
  L40(i112, i113):
    i114 = `+`.1(i113, 1);
    c42 = `<`.1(l10, i114);
    if c42 then L213() else L41();
  L316(i236, i237, dx133):
    st pred = dx133;
    lines4 = ldf lines;
    check L320() else D94();
  L317():
    dr96 = tryDispatchBuiltin.1("$", r273);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L319() else L318(i223, i225, dr96);
  L318(i232, i233, r275):
    r276 = `$`(r275, <sym y>);
    goto L316(i232, i233, r276);
  D94():
    deopt 411 [i236, i237];
  L41():
    x12 = `[[`(s1, i114, NULL, TRUE);
    st lev = x12;
    predict3 = ldf predict;
    check L214() else D53();
  L213():
    dev_flush = ldf `dev.flush`;
    check L224() else D59();
  L319():
    dx132 = getTryDispatchBuiltinValue(dr96);
    goto L316(i223, i225, dx132);
  L320():
    p52 = prom<V +>{
      pred4 = ld pred;
      pred5 = force? pred4;
      checkMissing(pred5);
      return pred5;
    };
    p53 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r279):
      return r279;
    L1():
      lev12 = ld lev;
      lev13 = force? lev12;
      checkMissing(lev13);
      r280 = `-`(<missing>, lev13);
      lev14 = ld lev;
      lev15 = force? lev14;
      checkMissing(lev15);
      c72 = ldf c in base;
      r281 = dyn c72(r280, lev15);
      goto L0(r281);
    L2():
      r278 = dyn base29(<lang `-`(lev)>, <sym lev>);
      goto L0(r278);
    };
    p54 = prom<V +>{
      lty9 = ld lty;
      lty10 = force? lty9;
      checkMissing(lty10);
      return lty10;
    };
    r284 = dyn lines4[, , type, col, lty](p52, p53, "h", 6.0, p54);
    check L321() else D95();
  D53():
    deopt 229 [i112, i114];
  D59():
    deopt 261 [i112];
  D95():
    deopt 420 [i236, i237, r284];
  L214():
    p28 = prom<V +>{
      bsp4 = ld bsp;
      bsp5 = force? bsp4;
      checkMissing(bsp5);
      return bsp5;
    };
    p29 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r162):
      return r162;
    L1():
      lev = ld lev;
      lev1 = force? lev;
      checkMissing(lev1);
      r163 = `-`(<missing>, lev1);
      lev2 = ld lev;
      lev3 = force? lev2;
      checkMissing(lev3);
      c43 = ldf c in base;
      r164 = dyn c43(r163, lev3);
      goto L0(r164);
    L2():
      r161 = dyn base17(<lang `-`(lev)>, <sym lev>);
      goto L0(r161);
    };
    r166 = dyn predict3(p28, p29);
    check L215() else D54();
  L224():
    r184 = dyn dev_flush();
    check L225() else D60();
  L321():
    goto L65(i236, i237);
  D54():
    deopt 232 [i112, i114, r166];
  D60():
    deopt 262 [i112, r184];
  L215():
    c44 = `is.object`(r166);
    if c44 then L217() else L218(i112, i114, r166);
  L225():
    goto L18(i112);
  L216(i125, i126, dx83):
    st pred = dx83;
    lines1 = ldf lines;
    check L220() else D55();
  L217():
    dr60 = tryDispatchBuiltin.1("$", r166);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L219() else L218(i112, i114, dr60);
  L218(i121, i122, r168):
    r169 = `$`(r168, <sym y>);
    goto L216(i121, i122, r169);
  D55():
    deopt 236 [i125, i126];
  L219():
    dx82 = getTryDispatchBuiltinValue(dr60);
    goto L216(i112, i114, dx82);
  L220():
    p30 = prom<V +>{
      pred = ld pred;
      pred1 = force? pred;
      checkMissing(pred1);
      return pred1;
    };
    p31 = prom<V +>{
      sym18 = ldf `rep.int`;
      base18 = ldf `rep.int` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r172):
      return r172;
    L1():
      lev4 = ld lev;
      lev5 = force? lev4;
      checkMissing(lev5);
      rep_int = ldf `rep.int` in base;
      r173 = dyn rep_int(lev5, 2.0);
      goto L0(r173);
    L2():
      r171 = dyn base18(<sym lev>, 2.0);
      goto L0(r171);
    };
    p32 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    r176 = dyn lines1[, , type, col, lty](p30, p31, "h", 6.0, p32);
    check L221() else D56();
  D56():
    deopt 245 [i125, i126, r176];
  L221():
    lines2 = ldf lines;
    check L222() else D57();
  D57():
    deopt 247 [i125, i126];
  L222():
    p33 = prom<V +>{
      pred2 = ld pred;
      pred3 = force? pred2;
      checkMissing(pred3);
      return pred3;
    };
    p34 = prom<V +>{
      sym19 = ldf `rep.int`;
      base19 = ldf `rep.int` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r179):
      return r179;
    L1():
      lev6 = ld lev;
      lev7 = force? lev6;
      checkMissing(lev7);
      rep_int1 = ldf `rep.int` in base;
      r180 = dyn rep_int1(lev7, 2.0);
      goto L0(r180);
    L2():
      r178 = dyn base19(<sym lev>, 2.0);
      goto L0(r178);
    };
    p35 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      return lty6;
    };
    r183 = dyn lines2[, , type, col, lty](p33, p34, "l", 6.0, p35);
    check L223() else D58();
  D58():
    deopt 256 [i125, i126, r183];
  L223():
    goto L40(i125, i126);
  }
}