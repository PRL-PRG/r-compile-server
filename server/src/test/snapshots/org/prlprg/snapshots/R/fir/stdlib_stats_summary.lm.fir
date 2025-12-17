fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg coef:cls, reg lm_D90:*, reg lm_D91:V, reg p:p(V +), reg r5:V, reg summary:cls, reg lm:cls, reg __1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sld90:*, reg sld91:V, reg coef1:cls, reg sld92:*, reg sld93:V, reg p3:p(V +), reg r12:V, reg lm1:cls, reg __2:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg summary1:cls, reg lm_D9_:*, reg lm_D9_1:V, reg p5:p(V +), reg r17:V, reg Sm_D9_:*, reg Sm_D9_1:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg coef2:cls, reg lm_D9_2:*, reg lm_D9_3:V, reg p6:p(V +), reg r21:V, reg length:cls, reg r22:V, reg r23:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg cc:*, reg cc1:V, reg c:L, reg cc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r27:V, reg is_na:cls, reg r28:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg coef3:cls, reg Sm_D9_2:*, reg Sm_D9_3:V, reg p9:p(V +), reg r33:V, reg dim:cls, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg r39:V, reg c1:cls, reg r40:V, reg r41:V, reg p10:p(V +), reg Sm_D9_4:*, reg Sm_D9_5:V, reg c2:L, reg Sm_D9_7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg dx6:V, reg r45:V, reg c3:cls, reg r46:V, reg r47:V, reg p11:p(V +), reg r49:V |
    mkenv;
    r = clos inner3368391425;
    st `summary.lm` = r;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn __("utils", "example");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2[, echo]("lm", FALSE);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    coef = ldf coef;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    p = prom<V +>{
      lm_D90 = ld `lm.D90`;
      lm_D91 = force? lm_D90;
      checkMissing(lm_D91);
      return lm_D91;
    };
    r5 = dyn coef(p);
    check L4() else D4();
  D4():
    deopt 16 [r5];
  L4():
    summary = ldf summary;
    check L5() else D5();
  D5():
    deopt 18 [];
  L5():
    p2 = prom<V +>{
      lm = ldf lm;
      p1 = prom<V +>{
        __1 = ldf `~` in base;
        r6 = dyn __1(<sym weight>, <lang `-`(group, 1.0)>);
        return r6;
      };
      r8 = dyn lm(p1);
      st `lm.D90` = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn summary(p2);
    check L6() else D6();
  D6():
    deopt 20 [r10];
  L6():
    st sld90 = r10;
    sld90 = ld sld90;
    check L7() else D7();
  D7():
    deopt 22 [sld90];
  L7():
    sld91 = force? sld90;
    checkMissing(sld91);
    coef1 = ldf coef;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p3 = prom<V +>{
      sld92 = ld sld90;
      sld93 = force? sld92;
      checkMissing(sld93);
      return sld93;
    };
    r12 = dyn coef1(p3);
    check L9() else D9();
  D9():
    deopt 27 [r12];
  L9():
    lm1 = ldf lm;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p4 = prom<V +>{
      __2 = ldf `~` in base;
      r13 = dyn __2(<sym weight>, <lang `+`(group, I(`!=`(group, "Ctl")))>);
      return r13;
    };
    r15 = dyn lm1(p4);
    check L11() else D11();
  D11():
    deopt 31 [r15];
  L11():
    st `lm.D9.` = r15;
    summary1 = ldf summary;
    check L12() else D12();
  D12():
    deopt 34 [];
  L12():
    p5 = prom<V +>{
      lm_D9_ = ld `lm.D9.`;
      lm_D9_1 = force? lm_D9_;
      checkMissing(lm_D9_1);
      return lm_D9_1;
    };
    r17 = dyn summary1(p5);
    check L13() else D13();
  D13():
    deopt 36 [r17];
  L13():
    st `Sm.D9.` = r17;
    Sm_D9_ = ld `Sm.D9.`;
    check L14() else D14();
  D14():
    deopt 38 [Sm_D9_];
  L14():
    Sm_D9_1 = force? Sm_D9_;
    checkMissing(Sm_D9_1);
    stopifnot = ldf stopifnot;
    check L15() else D15();
  D15():
    deopt 41 [];
  L15():
    p7 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r19):
      r23 = `==`(r19, 3.0);
      return r23;
    L1():
      coef2 = ldf coef;
      p6 = prom<V +>{
        lm_D9_2 = ld `lm.D9.`;
        lm_D9_3 = force? lm_D9_2;
        checkMissing(lm_D9_3);
        return lm_D9_3;
      };
      r21 = dyn coef2(p6);
      st cc = r21;
      length = ldf length in base;
      r22 = dyn length(r21);
      goto L0(r22);
    L2():
      r18 = dyn base(<lang `<-`(cc, coef(lm.D9.))>);
      goto L0(r18);
    };
    p8 = prom<V +>{
      sym1 = ldf `is.na`;
      base1 = ldf `is.na` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r26):
      return r26;
    L2():
      cc = ld cc;
      cc1 = force? cc;
      checkMissing(cc1);
      c = `is.object`(cc1);
      if c then L4() else L5(cc1);
    L3():
      r25 = dyn base1(<lang `[`(cc, 3.0)>);
      goto L0(r25);
    L1(dx1):
      is_na = ldf `is.na` in base;
      r28 = dyn is_na(dx1);
      goto L0(r28);
    L4():
      dr = tryDispatchBuiltin.1("[", cc1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(cc3):
      __3 = ldf `[` in base;
      r27 = dyn __3(cc3, 3.0);
      goto L1(r27);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p10 = prom<V +>{
      sym2 = ldf dim;
      base2 = ldf dim in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r31):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L2():
      coef3 = ldf coef;
      p9 = prom<V +>{
        Sm_D9_2 = ld `Sm.D9.`;
        Sm_D9_3 = force? Sm_D9_2;
        checkMissing(Sm_D9_3);
        return Sm_D9_3;
      };
      r33 = dyn coef3(p9);
      dim = ldf dim in base;
      r34 = dyn dim(r33);
      goto L0(r34);
    L3():
      r30 = dyn base2(<lang coef(Sm.D9.)>);
      goto L0(r30);
    L1(r38, r39):
      r41 = `==`(r38, r39);
      return r41;
    L4():
      c1 = ldf c in base;
      r40 = dyn c1(2.0, 4.0);
      goto L1(r31, r40);
    L5():
      r37 = dyn base3(2.0, 4.0);
      goto L1(r31, r37);
    };
    p11 = prom<V +>{
      Sm_D9_4 = ld `Sm.D9.`;
      Sm_D9_5 = force? Sm_D9_4;
      checkMissing(Sm_D9_5);
      c2 = `is.object`(Sm_D9_5);
      if c2 then L2() else L3(Sm_D9_5);
    L1(dx3):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L2():
      dr2 = tryDispatchBuiltin.1("$", Sm_D9_5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(Sm_D9_7):
      r43 = `$`(Sm_D9_7, <sym df>);
      goto L1(r43);
    L0(dx6, r45):
      r47 = `==`(dx6, r45);
      return r47;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L5():
      c3 = ldf c in base;
      r46 = dyn c3(2.0, 18.0, 3.0);
      goto L0(dx3, r46);
    L6():
      r44 = dyn base4(2.0, 18.0, 3.0);
      goto L0(dx3, r44);
    };
    r49 = dyn stopifnot(p7, p8, p10, p11);
    check L16() else D16();
  D16():
    deopt 46 [r49];
  L16():
    popenv;
    return r49;
  }
}
fun inner3368391425(object, correlation, `symbolic.cor`, `...`) {
  (reg object:*, reg correlation:*, reg symbolic_cor:*, reg ddd:dots) -+> V { var object:*, var correlation:*, reg correlation_isMissing:L, reg correlation_orDefault:*, var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg z:*, reg z1:V, reg c:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg z4:*, reg z5:V, reg c1:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg p:*, reg p1:V, reg r2:V, reg c2:L, reg z8:*, reg z9:V, reg c3:L, reg z11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg r6:*, reg r7:V, reg length:cls, reg r8:V, reg z12:*, reg z13:V, reg c4:L, reg z15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg w:*, reg w1:V, reg c5:V, reg c6:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg r14:*, reg r15:V, reg r16:V, reg sum:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg w2:*, reg w3:V, reg r21:*, reg r22:V, reg r23:V, reg r24:V, reg sum1:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg w4:*, reg w5:V, reg r28:V, reg r29:*, reg r30:V, reg r31:V, reg rss:*, reg rss1:V, reg rdf:*, reg rdf1:V, reg r32:V, reg z16:*, reg z17:V, reg c7:L, reg z19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg z22:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg z25:V, reg r36:V, reg z26:*, reg z27:V, reg c8:L, reg z30:V, reg z31:V, reg dr10:V, reg dc5:L, reg dx10:V, reg z33:V, reg dx11:V, reg r37:V, reg c9:V, reg r38:V, reg c10:L, reg z36:V, reg r39:V, reg c11:cls, reg r40:V, reg __:cls, reg r41:V, reg l:*, reg class__:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg coef:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r46:V, reg is_na:cls, reg r47:V, reg l1:*, reg c12:L, reg r49:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r52:V, reg r53:*, reg r54:V, reg l4:*, reg c13:L, reg r56:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg n:*, reg n1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg ans:*, reg ans1:V, reg c14:L, reg ans3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r64:V, reg length1:cls, reg r65:V, reg c15:cls, reg r66:V, reg l7:*, reg c16:L, reg r68:V, reg l9:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r71:V, reg matrix:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg c17:cls, reg r76:V, reg list:cls, reg r77:V, reg p3:p(V +), reg r79:V, reg l10:*, reg c18:L, reg r81:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r84:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg resvar:*, reg resvar1:V, reg r87:V, reg l13:*, reg c19:L, reg r89:V, reg l15:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r92:V, reg l16:*, reg c20:L, reg r94:R, reg l18:*, reg dr24:V, reg dc12:L, reg dx24:V, reg r96:R, reg dx25:V, reg r97:V, reg l19:*, reg c21:L, reg r99:R, reg l21:*, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r102:V, reg matrix1:cls, reg r103:V, reg l22:*, reg c22:L, reg r105:V, reg l24:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r108:V, reg correlation1:*, reg correlation2:V, reg c23:L, reg ans4:*, reg ans5:V, reg c24:L, reg ans7:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r109:V, reg l25:*, reg c25:L, reg dx33:V, reg l27:*, reg dr32:V, reg dc16:L, reg dx35:V, reg dx36:V, reg dx37:V, reg r110:V, reg ans8:*, reg ans9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r113:V, reg r114:V, reg z37:*, reg z38:V, reg c26:L, reg z40:V, reg dr34:V, reg dc17:L, reg dx39:V, reg dx40:V, reg r115:V, reg c27:V, reg c28:L, reg stop:cls, reg r116:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r118:V, reg r119:V, reg object5:*, reg object6:V, reg inherits:cls, reg r120:V, reg r121:V, reg c29:L, reg warning:cls, reg r122:V, reg qr_lm:cls, reg object7:*, reg object8:V, reg p4:p(V +), reg r125:V, reg NROW:cls, reg Qr:*, reg Qr1:V, reg c30:L, reg Qr3:V, reg dr36:V, reg dc18:L, reg dx41:V, reg dx42:V, reg r126:V, reg p5:p(V +), reg r128:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r129:V, reg r130:V, reg z41:*, reg z42:V, reg c31:L, reg z44:V, reg dr38:V, reg dc19:L, reg dx43:V, reg dx44:V, reg r131:V, reg is_na1:cls, reg r132:V, reg c32:L, reg c33:V, reg n2:*, reg n3:V, reg p6:*, reg p7:V, reg r133:V, reg z45:*, reg z46:V, reg c35:L, reg c37:L, reg r135:V, reg z48:V, reg dr40:V, reg dc20:L, reg dx45:V, reg c39:L, reg r137:V, reg dx46:V, reg r138:V, reg r139:V, reg c40:L, reg c41:V, reg c43:L, reg warning1:cls, reg r140:V, reg z49:*, reg z50:V, reg c44:L, reg z52:V, reg dr42:V, reg dc21:L, reg dx47:V, reg dx48:V, reg r142:V, reg z53:*, reg z54:V, reg c45:L, reg z56:V, reg dr44:V, reg dc22:L, reg dx49:V, reg dx50:V, reg r143:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r144:V, reg r145:V, reg z57:*, reg z58:V, reg c46:L, reg z60:V, reg dr46:V, reg dc23:L, reg dx51:V, reg dx52:V, reg r146:V, reg c47:V, reg r147:V, reg c48:L, reg f:*, reg f1:V, reg z61:*, reg z62:V, reg c49:L, reg f3:V, reg z64:V, reg dr48:V, reg dc24:L, reg dx53:V, reg f5:V, reg dx54:V, reg r148:V, reg r149:V, reg z65:*, reg z66:V, reg c50:L, reg z68:V, reg dr50:V, reg dc25:L, reg dx55:V, reg dx56:V, reg r151:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r152:V, reg r153:V, reg w6:*, reg w7:V, reg c51:V, reg c52:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r154:V, reg r155:V, reg z69:*, reg z70:V, reg c53:L, reg z72:V, reg dr52:V, reg dc26:L, reg dx57:V, reg dx58:V, reg r156:V, reg attr:cls, reg r157:V, reg c54:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r158:V, reg r159:V, reg f6:*, reg f7:V, reg mean:cls, reg f8:*, reg f9:V, reg p8:p(V +), reg r161:V, reg r162:V, reg r163:V, reg sum2:cls, reg r164:V, reg r165:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r166:V, reg f10:*, reg f11:V, reg r167:V, reg sum3:cls, reg r168:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r169:V, reg r170:V, reg r171:*, reg r172:V, reg r173:V, reg sum4:cls, reg r174:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r176:V, reg r177:V, reg z73:*, reg z74:V, reg c55:L, reg z76:V, reg dr54:V, reg dc27:L, reg dx59:V, reg dx60:V, reg r178:V, reg attr1:cls, reg r179:V, reg c56:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r180:V, reg r181:V, reg w8:*, reg w9:V, reg f12:*, reg f13:V, reg r182:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r185:V, reg r186:V, reg r187:V, reg w10:*, reg w11:V, reg sum5:cls, reg r188:V, reg r189:V, reg sum6:cls, reg r190:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r191:V, reg r192:V, reg w12:*, reg w13:V, reg f14:*, reg f15:V, reg m:*, reg m1:V, reg r193:V, reg r194:V, reg r195:V, reg sum7:cls, reg r196:V, reg r197:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r198:V, reg w14:*, reg w15:V, reg f16:*, reg f17:V, reg r199:V, reg r200:V, reg sum8:cls, reg r201:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r202:V, reg r203:V, reg w16:*, reg w17:V, reg r204:*, reg r205:V, reg r206:V, reg r207:V, reg sum9:cls, reg r208:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r209:V, reg r210:V, reg w18:*, reg w19:V, reg r211:V, reg r212:*, reg r213:V, reg r214:V, reg rss2:*, reg rss3:V, reg rdf2:*, reg rdf3:V, reg r215:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r216:V, reg r217:V, reg resvar2:*, reg resvar3:V, reg is_finite:cls, reg r218:V, reg c57:L, reg c59:V, reg resvar4:*, reg resvar5:V, reg mean1:cls, reg f18:*, reg f19:V, reg p9:p(V +), reg r220:V, reg r221:V, reg var:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r222:V, reg r223:V, reg f20:*, reg f21:V, reg c60:cls, reg r224:V, reg p10:p(V +), reg r226:V, reg r227:V, reg r228:V, reg r229:V, reg c61:L, reg c62:V, reg c64:L, reg warning2:cls, reg r230:V, reg p11:*, reg p12:V, reg r232:V, reg chol2inv:cls, reg Qr4:*, reg Qr5:V, reg c65:L, reg Qr7:V, reg dr56:V, reg dc28:L, reg dx61:V, reg dx62:V, reg r233:V, reg c66:L, reg dr58:V, reg dc29:L, reg dx65:V, reg dx66:V, reg p13:*, reg p14:V, reg p15:*, reg p16:V, reg __1:cls, reg r234:V, reg p17:p(V +), reg r236:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r237:V, reg r238:V, reg diag:cls, reg R:*, reg R1:V, reg p18:p(V +), reg r240:V, reg resvar6:*, reg resvar7:V, reg r241:V, reg r242:V, reg z77:*, reg z78:V, reg c67:L, reg z80:V, reg dr60:V, reg dc30:L, reg dx67:V, reg dx68:V, reg r243:V, reg c68:L, reg dx70:V, reg dr62:V, reg dc31:L, reg dx71:V, reg dx72:V, reg Qr8:*, reg Qr9:V, reg c69:L, reg dx74:V, reg Qr11:V, reg dr64:V, reg dc32:L, reg dx76:V, reg dx77:V, reg dx78:V, reg r244:V, reg c70:L, reg dx81:V, reg dx82:V, reg dr66:V, reg dc33:L, reg dx84:V, reg dx85:V, reg dx86:V, reg p19:*, reg p20:V, reg __2:cls, reg r245:V, reg __3:cls, reg r246:V, reg est:*, reg est1:V, reg se:*, reg se1:V, reg r247:V, reg z81:*, reg z82:V, reg c71:L, reg z84:V, reg dr68:V, reg dc34:L, reg dx87:V, reg dx88:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r248:V, reg z87:V, reg r249:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r250:V, reg z90:V, reg r251:V, reg z91:*, reg z92:V, reg c72:L, reg z95:V, reg z96:V, reg dr70:V, reg dc35:L, reg dx89:V, reg z98:V, reg dx90:V, reg r252:V, reg c73:V, reg r253:V, reg c74:L, reg z101:V, reg r254:V, reg c75:cls, reg r255:V, reg __4:cls, reg r256:V, reg r257:*, reg r258:V, reg l28:*, reg c76:L, reg r260:V, reg l30:*, reg dr72:V, reg dc36:L, reg dx91:V, reg dx92:V, reg r263:V, reg cbind:cls, reg est2:*, reg est3:V, reg p21:p(V +), reg se2:*, reg se3:V, reg p22:p(V +), reg tval:*, reg tval1:V, reg p23:p(V +), reg pt:cls, reg sym34:cls, reg base34:cls, reg guard34:L, reg r267:V, reg r268:V, reg tval2:*, reg tval3:V, reg abs:cls, reg r269:V, reg p24:p(V +), reg rdf4:*, reg rdf5:V, reg p25:p(V +), reg r272:V, reg r273:V, reg p26:p(V +), reg r275:V, reg l31:*, reg c77:L, reg r277:V, reg l33:*, reg dr74:V, reg dc37:L, reg dx93:V, reg dx94:V, reg r280:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r281:V, reg r282:V, reg z102:*, reg z103:V, reg c78:L, reg z105:V, reg dr76:V, reg dc38:L, reg dx95:V, reg dx96:V, reg r283:V, reg is_na2:cls, reg r284:V, reg l34:*, reg c79:L, reg r286:V, reg l36:*, reg dr78:V, reg dc39:L, reg dx97:V, reg dx98:V, reg r289:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r290:V, reg r291:V, reg resvar8:*, reg resvar9:V, reg r292:V, reg l37:*, reg c80:L, reg r294:V, reg l39:*, reg dr80:V, reg dc40:L, reg dx99:V, reg dx100:V, reg r297:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r298:V, reg r299:V, reg p27:*, reg p28:V, reg rdf6:*, reg rdf7:V, reg NCOL:cls, reg Qr12:*, reg Qr13:V, reg c81:L, reg Qr15:V, reg dr82:V, reg dc41:L, reg dx101:V, reg dx102:V, reg r300:V, reg p29:p(V +), reg r302:V, reg c82:cls, reg r303:V, reg l40:*, reg c83:L, reg r305:V, reg l42:*, reg dr84:V, reg dc42:L, reg dx103:V, reg dx104:V, reg r308:V, reg p30:*, reg p31:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r309:V, reg p34:V, reg r310:V, reg z106:*, reg z107:V, reg c84:L, reg p36:V, reg z109:V, reg dr86:V, reg dc43:L, reg dx105:V, reg p38:V, reg dx106:V, reg r311:V, reg attr2:cls, reg r312:V, reg r313:V, reg c85:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r314:V, reg r315:V, reg z110:*, reg z111:V, reg c86:L, reg z113:V, reg dr88:V, reg dc44:L, reg dx107:V, reg dx108:V, reg r316:V, reg attr3:cls, reg r317:V, reg c87:L, reg r318:I, reg mss:*, reg mss1:V, reg mss2:*, reg mss3:V, reg rss4:*, reg rss5:V, reg r319:V, reg r320:V, reg l43:*, reg c88:L, reg r322:V, reg l45:*, reg dr90:V, reg dc45:L, reg dx109:V, reg dx110:V, reg r325:V, reg ans10:*, reg ans11:V, reg c89:L, reg r328:R, reg r329:R, reg ans13:V, reg dr92:V, reg dc46:L, reg dx111:V, reg r332:R, reg r333:R, reg dx112:V, reg r334:V, reg r335:V, reg n4:*, reg n5:V, reg df_int:*, reg df_int1:V, reg r336:V, reg rdf8:*, reg rdf9:V, reg r337:V, reg r338:V, reg r339:V, reg l46:*, reg c90:L, reg r341:V, reg l48:*, reg dr94:V, reg dc47:L, reg dx113:V, reg dx114:V, reg r344:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r345:V, reg r346:V, reg mss4:*, reg mss5:V, reg p39:*, reg p40:V, reg df_int2:*, reg df_int3:V, reg r347:V, reg r348:V, reg resvar10:*, reg resvar11:V, reg r349:V, reg p41:*, reg p42:V, reg df_int4:*, reg df_int5:V, reg r350:V, reg rdf10:*, reg rdf11:V, reg c91:cls, reg r351:V, reg l49:*, reg c92:L, reg r353:V, reg l51:*, reg dr96:V, reg dc48:L, reg dx115:V, reg r355:V, reg dx116:V, reg r356:V, reg l52:*, reg c93:L, reg r359:R, reg l54:*, reg dr98:V, reg dc49:L, reg dx117:V, reg r361:R, reg dx118:V, reg r362:V, reg l55:*, reg c94:L, reg r364:R, reg l57:*, reg dr100:V, reg dc50:L, reg dx119:V, reg r366:R, reg dx120:V, reg r367:V, reg R2:*, reg R3:V, reg l58:*, reg c95:L, reg R5:V, reg l60:*, reg dr102:V, reg dc51:L, reg dx121:V, reg dx122:V, reg r368:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r369:V, reg r370:V, reg ans14:*, reg ans15:V, reg c96:L, reg ans17:V, reg dr104:V, reg dc52:L, reg dx123:V, reg dx124:V, reg r371:V, reg dimnames:cls, reg r372:V, reg c97:L, reg r374:V, reg dr106:V, reg dc53:L, reg dx125:V, reg dx126:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r377:V, reg r378:V, reg r379:V, reg c98:cls, reg r380:V, reg __5:cls, reg r381:V, reg l61:*, reg c99:L, reg dx129:V, reg l64:*, reg dx130:V, reg l65:*, reg dr108:V, reg dc54:L, reg dx133:V, reg dx134:V, reg l67:*, reg dx135:V, reg dx136:V, reg r382:V, reg dimnames__:cls, reg r383:V, reg c100:L, reg dx138:V, reg l69:*, reg dr110:V, reg dc55:L, reg dx140:V, reg dx142:V, reg r384:V, reg correlation3:*, reg correlation4:V, reg c101:L, reg R8:*, reg R9:V, reg resvar12:*, reg resvar13:V, reg r385:V, reg outer:cls, reg se4:*, reg se5:V, reg p43:p(V +), reg se6:*, reg se7:V, reg p44:p(V +), reg r388:V, reg r389:V, reg l70:*, reg c102:L, reg r391:V, reg l72:*, reg dr112:V, reg dc56:L, reg dx143:V, reg dx144:V, reg r394:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r395:V, reg r396:V, reg ans18:*, reg ans19:V, reg c103:L, reg ans21:V, reg dr114:V, reg dc57:L, reg dx145:V, reg dx146:V, reg r397:V, reg dimnames1:cls, reg r398:V, reg l73:*, reg c104:L, reg r401:V, reg l76:*, reg r402:V, reg l77:*, reg dr116:V, reg dc58:L, reg dx147:V, reg r405:V, reg l79:*, reg r406:V, reg dx148:V, reg r407:V, reg dimnames__1:cls, reg r408:V, reg c105:L, reg r410:V, reg l81:*, reg dr118:V, reg dc59:L, reg dx149:V, reg dx150:V, reg r413:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg l82:*, reg c106:L, reg symbolic_cor4:V, reg l84:*, reg dr120:V, reg dc60:L, reg dx151:V, reg symbolic_cor6:V, reg dx152:V, reg r414:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r415:V, reg r416:V, reg z114:*, reg z115:V, reg c107:L, reg z117:V, reg dr122:V, reg dc61:L, reg dx153:V, reg dx154:V, reg r417:V, reg c108:V, reg r418:V, reg c109:L, reg z118:*, reg z119:V, reg c110:L, reg z121:V, reg dr124:V, reg dc62:L, reg dx155:V, reg dx156:V, reg r419:V, reg l85:*, reg c111:L, reg dx158:V, reg l87:*, reg dr126:V, reg dc63:L, reg dx160:V, reg dx161:V, reg dx162:V, reg r420:V, reg l88:*, reg class__1:cls, reg r421:V, reg ans22:*, reg ans23:V |
    mkenv;
    st object = object;
    correlation_isMissing = missing.0(correlation);
    if correlation_isMissing then L0(FALSE) else L0(correlation);
  L0(correlation_orDefault):
    st correlation = correlation_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L1(FALSE) else L1(symbolic_cor);
  L1(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L82() else D0();
  D0():
    deopt 0 [object1];
  L82():
    object2 = force? object1;
    checkMissing(object2);
    st z = object2;
    z = ld z;
    check L83() else D1();
  D1():
    deopt 3 [z];
  L83():
    z1 = force? z;
    checkMissing(z1);
    c = `is.object`(z1);
    if c then L85() else L86(z1);
  L84(dx1):
    st p = dx1;
    z4 = ld z;
    check L88() else D2();
  L85():
    dr = tryDispatchBuiltin.1("$", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(dr);
  L86(z3):
    r = `$`(z3, <sym rank>);
    goto L84(r);
  D2():
    deopt 7 [z4];
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L84(dx);
  L88():
    z5 = force? z4;
    checkMissing(z5);
    c1 = `is.object`(z5);
    if c1 then L90() else L91(z5);
  L89(dx3):
    st rdf = dx3;
    p = ld p;
    check L93() else D3();
  L90():
    dr2 = tryDispatchBuiltin.1("$", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L92() else L91(dr2);
  L91(z7):
    r1 = `$`(z7, <sym df.residual>);
    goto L89(r1);
  D3():
    deopt 11 [p];
  L92():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L89(dx2);
  L93():
    p1 = force? p;
    checkMissing(p1);
    r2 = `==`(p1, 0.0);
    c2 = `as.logical`(r2);
    if c2 then L94() else L2();
  L2():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L219() else L220();
  L94():
    z8 = ld z;
    check L95() else D4();
  D4():
    deopt 15 [z8];
  L22(r114):
    c28 = `as.logical`(r114);
    if c28 then L226() else L23();
  L95():
    z9 = force? z8;
    checkMissing(z9);
    c3 = `is.object`(z9);
    if c3 then L97() else L98(z9);
  L219():
    z37 = ld z;
    check L221() else D39();
  L220():
    r113 = dyn base13(<lang `$`(z, terms)>);
    goto L22(r113);
  D39():
    deopt 177 [z37];
  L23():
    goto L24();
  L24():
    sym14 = ldf inherits;
    base14 = ldf inherits in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L230() else L231();
  L96(dx5):
    st r = dx5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L100() else L101();
  L97():
    dr4 = tryDispatchBuiltin.1("$", z9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L99() else L98(dr4);
  L98(z11):
    r3 = `$`(z11, <sym residuals>);
    goto L96(r3);
  L221():
    z38 = force? z37;
    checkMissing(z38);
    c26 = `is.object`(z38);
    if c26 then L223() else L224(z38);
  L226():
    stop = ldf stop;
    check L227() else D40();
  D40():
    deopt 182 [];
  L3(r5):
    st n = r5;
    z12 = ld z;
    check L104() else D7();
  L25(r119):
    r121 = `!`(r119);
    c29 = `as.logical`(r121);
    if c29 then L234() else L26();
  L99():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L96(dx4);
  L100():
    r6 = ld r;
    check L102() else D5();
  L101():
    r4 = dyn base(<sym r>);
    goto L3(r4);
  L222(dx40):
    c27 = `==`(dx40, NULL);
    goto L22(c27);
  L223():
    dr34 = tryDispatchBuiltin.1("$", z38);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L225() else L224(dr34);
  L224(z40):
    r115 = `$`(z40, <sym terms>);
    goto L222(r115);
  L227():
    r116 = dyn stop("invalid 'lm' object:  no 'terms' component");
    check L228() else D41();
  L230():
    object5 = ld object;
    check L232() else D42();
  L231():
    r118 = dyn base14(<sym object>, "lm");
    goto L25(r118);
  D5():
    deopt 21 [r6];
  D7():
    deopt 26 [z12];
  D41():
    deopt 184 [r116];
  D42():
    deopt 189 [object5];
  L26():
    goto L27();
  L27():
    qr_lm = ldf `qr.lm`;
    check L238() else D46();
  L102():
    r7 = force? r6;
    checkMissing(r7);
    length = ldf length in base;
    r8 = dyn length(r7);
    check L103() else D6();
  L104():
    z13 = force? z12;
    checkMissing(z13);
    c4 = `is.object`(z13);
    if c4 then L106() else L107(z13);
  L225():
    dx39 = getTryDispatchBuiltinValue(dr34);
    goto L222(dx39);
  L228():
    goto L24();
  L232():
    object6 = force? object5;
    checkMissing(object6);
    inherits = ldf inherits in base;
    r120 = dyn inherits(object6, "lm", FALSE);
    check L233() else D43();
  L234():
    warning = ldf warning;
    check L235() else D44();
  D6():
    deopt 24 [r8];
  D43():
    deopt 194 [r120];
  D44():
    deopt 197 [];
  D46():
    deopt 203 [];
  L103():
    goto L3(r8);
  L105(dx7):
    st w = dx7;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L109() else L110();
  L106():
    dr6 = tryDispatchBuiltin.1("$", z13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(dr6);
  L107(z15):
    r9 = `$`(z15, <sym weights>);
    goto L105(r9);
  L233():
    goto L25(r120);
  L235():
    r122 = dyn warning("calling summary.lm(<fake-lm-object>) ...");
    check L236() else D45();
  L238():
    p4 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r125 = dyn qr_lm(p4);
    check L239() else D47();
  D45():
    deopt 199 [r122];
  D47():
    deopt 205 [r125];
  L4(r11):
    c6 = `as.logical`(r11);
    if c6 then L112() else L5();
  L108():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L105(dx6);
  L109():
    w = ld w;
    check L111() else D8();
  L110():
    r10 = dyn base1(<sym w>);
    goto L4(r10);
  L236():
    goto L27();
  L239():
    st Qr = r125;
    NROW = ldf NROW;
    check L240() else D48();
  D8():
    deopt 31 [w];
  D48():
    deopt 208 [];
  L5():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L118() else L119();
  L7():
    rss = ld rss;
    check L127() else D16();
  L111():
    w1 = force? w;
    checkMissing(w1);
    c5 = `==`(w1, NULL);
    goto L4(c5);
  L112():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L113() else L114();
  L240():
    p5 = prom<V +>{
      Qr = ld Qr;
      Qr1 = force? Qr;
      checkMissing(Qr1);
      c30 = `is.object`(Qr1);
      if c30 then L1() else L2(Qr1);
    L0(dx42):
      return dx42;
    L1():
      dr36 = tryDispatchBuiltin.1("$", Qr1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(Qr3):
      r126 = `$`(Qr3, <sym qr>);
      goto L0(r126);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx41);
    };
    r128 = dyn NROW(p5);
    check L241() else D49();
  D16():
    deopt 61 [rss];
  D49():
    deopt 210 [r128];
  L6(r13):
    st rss = r13;
    goto L7();
  L8(r20):
    st rss = r20;
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L123() else L124();
  L113():
    r14 = ld r;
    check L115() else D9();
  L114():
    r12 = dyn base2(<lang `^`(r, 2.0)>);
    goto L6(r12);
  L118():
    w2 = ld w;
    check L120() else D11();
  L119():
    r19 = dyn base3(<lang `*`(w, `^`(r, 2.0))>);
    goto L8(r19);
  L127():
    rss1 = force? rss;
    checkMissing(rss1);
    rdf = ld rdf;
    check L128() else D17();
  L241():
    st n = r128;
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L242() else L243();
  D9():
    deopt 36 [r14];
  D11():
    deopt 45 [w2];
  D17():
    deopt 62 [rss1, rdf];
  L9(r27):
    r29 = ld r;
    check L126() else D15();
  L28(r130):
    c32 = `as.logical`(r130);
    if c32 then L29(c32) else L250();
  L115():
    r15 = force? r14;
    checkMissing(r15);
    r16 = `^`(r15, 2.0);
    sum = ldf sum in base;
    r17 = dyn sum(r16);
    check L116() else D10();
  L120():
    w3 = force? w2;
    checkMissing(w3);
    r21 = ld r;
    check L121() else D12();
  L123():
    w4 = ld w;
    check L125() else D14();
  L124():
    r26 = dyn base4(<sym w>);
    goto L9(r26);
  L128():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r32 = `/`(rss1, rdf1);
    st resvar = r32;
    z16 = ld z;
    check L129() else D18();
  L242():
    z41 = ld z;
    check L244() else D50();
  L243():
    r129 = dyn base15(<lang `$`(z, df.residual)>);
    goto L28(r129);
  D10():
    deopt 41 [r17];
  D12():
    deopt 46 [w3, r21];
  D14():
    deopt 55 [w4];
  D15():
    deopt 57 [r27, r29];
  D18():
    deopt 66 [z16];
  D50():
    deopt 214 [z41];
  L29(c33):
    c43 = `as.logical`(c33);
    if c43 then L259() else L30();
  L116():
    goto L6(r17);
  L121():
    r22 = force? r21;
    checkMissing(r22);
    r23 = `^`(r22, 2.0);
    r24 = `*`(w3, r23);
    sum1 = ldf sum in base;
    r25 = dyn sum1(r24);
    check L122() else D13();
  L125():
    w5 = force? w4;
    checkMissing(w5);
    r28 = sqrt(w5);
    goto L9(r28);
  L126():
    r30 = force? r29;
    checkMissing(r30);
    r31 = `*`(r27, r30);
    st r = r31;
    goto L7();
  L129():
    z17 = force? z16;
    checkMissing(z17);
    c7 = `is.object`(z17);
    if c7 then L130() else L131(z17);
  L244():
    z42 = force? z41;
    checkMissing(z42);
    c31 = `is.object`(z42);
    if c31 then L246() else L247(z42);
  L250():
    n2 = ld n;
    check L251() else D52();
  D13():
    deopt 52 [r25];
  D52():
    deopt 219 [c32, n2];
  L10(dx9):
    st ans = dx9;
    l = ld ans;
    class__ = ldf `class<-`;
    check L145() else D21();
  L30():
    goto L31();
  L31():
    z49 = ld z;
    check L263() else D57();
  L122():
    goto L8(r25);
  L130():
    dr8 = tryDispatchBuiltin.1("[", z17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L132() else L131(dr8);
  L131(z19):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L133() else L134();
  L245(dx44):
    is_na1 = ldf `is.na` in base;
    r132 = dyn is_na1(dx44);
    check L249() else D51();
  L246():
    dr38 = tryDispatchBuiltin.1("$", z42);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L248() else L247(dr38);
  L247(z44):
    r131 = `$`(z44, <sym df.residual>);
    goto L245(r131);
  L251():
    n3 = force? n2;
    checkMissing(n3);
    p6 = ld p;
    check L252() else D53();
  L259():
    warning1 = ldf warning;
    check L260() else D55();
  D21():
    deopt 89 ["summary.lm", l, "summary.lm"];
  D51():
    deopt 218 [r132];
  D53():
    deopt 220 [c32, n3, p6];
  D55():
    deopt 228 [];
  D57():
    deopt 233 [z49];
  L11(z22, r34):
    __ = ldf `[` in base;
    r41 = dyn __(z22, r34);
    goto L10(r41);
  L132():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L133():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L135() else L136();
  L134():
    r33 = dyn base5("call", "terms", <lang if(`!`(is.null(`$`(z, weights))), "weights")>);
    goto L11(z19, r33);
  L145():
    r42 = dyn class__(l, NULL, "summary.lm");
    check L146() else D22();
  L248():
    dx43 = getTryDispatchBuiltinValue(dr38);
    goto L245(dx43);
  L249():
    goto L28(r132);
  L252():
    p7 = force? p6;
    checkMissing(p7);
    r133 = `-`(n3, p7);
    z45 = ld z;
    check L253() else D54();
  L260():
    r140 = dyn warning1("residual degrees of freedom in object suggest this is not an \"lm\" fit");
    check L261() else D56();
  L263():
    z50 = force? z49;
    checkMissing(z50);
    c44 = `is.object`(z50);
    if c44 then L265() else L266(z50);
  D22():
    deopt 91 ["summary.lm", r42];
  D54():
    deopt 222 [c32, r133, z45];
  D56():
    deopt 230 [r140];
  L12(z25, r36):
    r38 = `!`(r36);
    c10 = `as.logical`(r38);
    if c10 then L142() else L13();
  L135():
    z26 = ld z;
    check L137() else D19();
  L136():
    r35 = dyn base6(<lang `$`(z, weights)>);
    goto L12(z19, r35);
  L146():
    st ans = r42;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L147() else L148();
  L253():
    z46 = force? z45;
    checkMissing(z46);
    c35 = `is.object`(z46);
    if c35 then L255() else L256(c32, r133, z46);
  L261():
    goto L31();
  L264(dx48):
    st r = dx48;
    z53 = ld z;
    check L268() else D58();
  L265():
    dr42 = tryDispatchBuiltin.1("$", z50);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L267() else L266(dr42);
  L266(z52):
    r142 = `$`(z52, <sym residuals>);
    goto L264(r142);
  D19():
    deopt 73 [z19, z26];
  D58():
    deopt 237 [z53];
  L13():
    goto L14(z25, NULL);
  L14(z36, r39):
    c11 = ldf c in base;
    r40 = dyn c11("call", "terms", r39);
    check L144() else D20();
  L15(r44):
    l1 = ld ans;
    c12 = `is.object`(l1);
    if c12 then L153() else L154(r44, l1);
  L137():
    z27 = force? z26;
    checkMissing(z27);
    c8 = `is.object`(z27);
    if c8 then L139() else L140(z19, z27);
  L142():
    goto L14(z25, "weights");
  L147():
    coef = ldf coef;
    check L149() else D23();
  L148():
    r43 = dyn base7(<lang coef(object)>);
    goto L15(r43);
  L254(c39, r137, dx46):
    r139 = `!=`(r137, dx46);
    c40 = `as.logical`(r139);
    c41 = `||`(c39, c40);
    goto L29(c41);
  L255():
    dr40 = tryDispatchBuiltin.1("$", z46);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L257() else L256(c32, r133, dr40);
  L256(c37, r135, z48):
    r138 = `$`(z48, <sym df.residual>);
    goto L254(c37, r135, r138);
  L267():
    dx47 = getTryDispatchBuiltinValue(dr42);
    goto L264(dx47);
  L268():
    z54 = force? z53;
    checkMissing(z54);
    c45 = `is.object`(z54);
    if c45 then L270() else L271(z54);
  D20():
    deopt 83 [z36, r40];
  D23():
    deopt 96 [];
  L138(z33, dx11):
    c9 = `==`(dx11, NULL);
    goto L12(z33, c9);
  L139():
    dr10 = tryDispatchBuiltin.1("$", z27);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L141() else L140(z19, dr10);
  L140(z30, z31):
    r37 = `$`(z31, <sym weights>);
    goto L138(z30, r37);
  L144():
    goto L11(z36, r40);
  L149():
    p2 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r46 = dyn coef(p2);
    check L150() else D24();
  L152(dx13):
    st ans = dx13;
    r53 = ld r;
    check L156() else D26();
  L153():
    dr12 = tryDispatchBuiltin.0("$<-", l1, r44);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L155() else L154(r44, dr12);
  L154(r49, l3):
    r52 = `$<-`(l3, <sym aliased>, r44);
    goto L152(r52);
  L257():
    dx45 = getTryDispatchBuiltinValue(dr40);
    goto L254(c32, r133, dx45);
  L269(dx50):
    st f = dx50;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L273() else L274();
  L270():
    dr44 = tryDispatchBuiltin.1("$", z54);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L272() else L271(dr44);
  L271(z56):
    r143 = `$`(z56, <sym fitted.values>);
    goto L269(r143);
  D24():
    deopt 98 [r46];
  D26():
    deopt 104 [r53];
  L32(r145):
    r147 = `!`(r145);
    c48 = `as.logical`(r147);
    if c48 then L280() else L33();
  L141():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L138(z19, dx10);
  L150():
    is_na = ldf `is.na` in base;
    r47 = dyn is_na(r46);
    check L151() else D25();
  L155():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L152(dx12);
  L156():
    r54 = force? r53;
    checkMissing(r54);
    l4 = ld ans;
    c13 = `is.object`(l4);
    if c13 then L158() else L159(r54, l4);
  L272():
    dx49 = getTryDispatchBuiltinValue(dr44);
    goto L269(dx49);
  L273():
    z57 = ld z;
    check L275() else D59();
  L274():
    r144 = dyn base16(<lang `$`(z, offset)>);
    goto L32(r144);
  D25():
    deopt 100 [r47];
  D59():
    deopt 242 [z57];
  L33():
    goto L34();
  L34():
    z65 = ld z;
    check L288() else D62();
  L151():
    goto L15(r47);
  L157(dx15):
    st ans = dx15;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L161() else L162();
  L158():
    dr14 = tryDispatchBuiltin.0("$<-", l4, r54);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L160() else L159(r54, dr14);
  L159(r56, l6):
    r59 = `$<-`(l6, <sym residuals>, r54);
    goto L157(r59);
  L275():
    z58 = force? z57;
    checkMissing(z58);
    c46 = `is.object`(z58);
    if c46 then L277() else L278(z58);
  L280():
    f = ld f;
    check L281() else D60();
  D60():
    deopt 247 [f];
  D62():
    deopt 255 [z65];
  L16(r61):
    l7 = ld ans;
    c16 = `is.object`(l7);
    if c16 then L174() else L175(r61, l7);
  L160():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L157(dx14);
  L161():
    n = ld n;
    check L163() else D27();
  L162():
    r60 = dyn base8(0, <sym n>, <lang length(`$`(ans, aliased))>);
    goto L16(r60);
  L276(dx52):
    c47 = `==`(dx52, NULL);
    goto L32(c47);
  L277():
    dr46 = tryDispatchBuiltin.1("$", z58);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L279() else L278(dr46);
  L278(z60):
    r146 = `$`(z60, <sym offset>);
    goto L276(r146);
  L281():
    f1 = force? f;
    checkMissing(f1);
    z61 = ld z;
    check L282() else D61();
  L288():
    z66 = force? z65;
    checkMissing(z66);
    c50 = `is.object`(z66);
    if c50 then L290() else L291(z66);
  D27():
    deopt 112 [n];
  D61():
    deopt 248 [f1, z61];
  L163():
    n1 = force? n;
    checkMissing(n1);
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L164() else L165();
  L173(dx19):
    st ans = dx19;
    matrix = ldf matrix;
    check L177() else D31();
  L174():
    dr18 = tryDispatchBuiltin.0("$<-", l7, r61);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L176() else L175(r61, dr18);
  L175(r68, l9):
    r71 = `$<-`(l9, <sym df>, r61);
    goto L173(r71);
  L279():
    dx51 = getTryDispatchBuiltinValue(dr46);
    goto L276(dx51);
  L282():
    z62 = force? z61;
    checkMissing(z62);
    c49 = `is.object`(z62);
    if c49 then L284() else L285(f1, z62);
  L289(dx56):
    st w = dx56;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L293() else L294();
  L290():
    dr50 = tryDispatchBuiltin.1("$", z66);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L292() else L291(dr50);
  L291(z68):
    r151 = `$`(z68, <sym weights>);
    goto L289(r151);
  D31():
    deopt 127 [];
  L17(r63):
    c15 = ldf c in base;
    r66 = dyn c15(0, n1, r63);
    check L172() else D30();
  L35(r153):
    c52 = `as.logical`(r153);
    if c52 then L296() else L36();
  L164():
    ans = ld ans;
    check L166() else D28();
  L165():
    r62 = dyn base9(<lang `$`(ans, aliased)>);
    goto L17(r62);
  L176():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L173(dx18);
  L177():
    p3 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r73):
      return r73;
    L2():
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r72 = dyn base10(NULL, <lang c("Estimate", "Std. Error", "t value", "Pr(>|t|)")>);
      goto L0(r72);
    L1(r75):
      list = ldf list in base;
      r77 = dyn list(NULL, r75);
      goto L0(r77);
    L4():
      c17 = ldf c in base;
      r76 = dyn c17("Estimate", "Std. Error", "t value", "Pr(>|t|)");
      goto L1(r76);
    L5():
      r74 = dyn base11("Estimate", "Std. Error", "t value", "Pr(>|t|)");
      goto L1(r74);
    };
    r79 = dyn matrix[, , , dimnames](NA_REAL, 0, 4, p3);
    check L178() else D32();
  L283(f5, dx54):
    r149 = `-`(f5, dx54);
    st f = r149;
    goto L34();
  L284():
    dr48 = tryDispatchBuiltin.1("$", z62);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L286() else L285(f1, dr48);
  L285(f3, z64):
    r148 = `$`(z64, <sym offset>);
    goto L283(f3, r148);
  L292():
    dx55 = getTryDispatchBuiltinValue(dr50);
    goto L289(dx55);
  L293():
    w6 = ld w;
    check L295() else D63();
  L294():
    r152 = dyn base17(<sym w>);
    goto L35(r152);
  D28():
    deopt 116 [ans];
  D30():
    deopt 122 [r66];
  D32():
    deopt 133 [r79];
  D63():
    deopt 260 [w6];
  L36():
    sym22 = ldf attr;
    base22 = ldf attr in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L322() else L323();
  L42():
    rss2 = ld rss;
    check L361() else D93();
  L166():
    ans1 = force? ans;
    checkMissing(ans1);
    c14 = `is.object`(ans1);
    if c14 then L168() else L169(ans1);
  L172():
    goto L16(r66);
  L178():
    l10 = ld ans;
    c18 = `is.object`(l10);
    if c18 then L180() else L181(r79, l10);
  L286():
    dx53 = getTryDispatchBuiltinValue(dr48);
    goto L283(f1, dx53);
  L295():
    w7 = force? w6;
    checkMissing(w7);
    c51 = `==`(w7, NULL);
    goto L35(c51);
  L296():
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L297() else L298();
  D93():
    deopt 365 [rss2];
  L37(r155):
    c54 = `as.logical`(r155);
    if c54 then L305() else L38();
  L43(r177):
    c56 = `as.logical`(r177);
    if c56 then L330() else L44();
  L167(dx17):
    length1 = ldf length in base;
    r65 = dyn length1(dx17);
    check L171() else D29();
  L168():
    dr16 = tryDispatchBuiltin.1("$", ans1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L170() else L169(dr16);
  L169(ans3):
    r64 = `$`(ans3, <sym aliased>);
    goto L167(r64);
  L179(dx21):
    st ans = dx21;
    sym12 = ldf sqrt;
    base12 = ldf sqrt in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L183() else L184();
  L180():
    dr20 = tryDispatchBuiltin.0("$<-", l10, r79);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L182() else L181(r79, dr20);
  L181(r81, l12):
    r84 = `$<-`(l12, <sym coefficients>, r79);
    goto L179(r84);
  L297():
    z69 = ld z;
    check L299() else D64();
  L298():
    r154 = dyn base18(<lang `$`(z, terms)>, "intercept");
    goto L37(r154);
  L322():
    z73 = ld z;
    check L324() else D74();
  L323():
    r176 = dyn base22(<lang `$`(z, terms)>, "intercept");
    goto L43(r176);
  L361():
    rss3 = force? rss2;
    checkMissing(rss3);
    rdf2 = ld rdf;
    check L362() else D94();
  D29():
    deopt 120 [r65];
  D64():
    deopt 265 [z69];
  D74():
    deopt 303 [z73];
  D94():
    deopt 366 [rss3, rdf2];
  L18(r86):
    l13 = ld ans;
    c19 = `is.object`(l13);
    if c19 then L187() else L188(r86, l13);
  L38():
    sym20 = ldf sum;
    base20 = ldf sum in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L313() else L314();
  L40(r165):
    st mss = r165;
    sym21 = ldf sum;
    base21 = ldf sum in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L317() else L318();
  L44():
    sym26 = ldf sum;
    base26 = ldf sum in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L347() else L348();
  L48(r197):
    st mss = r197;
    sym27 = ldf sum;
    base27 = ldf sum in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L352() else L353();
  L170():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L167(dx16);
  L171():
    goto L17(r65);
  L182():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L179(dx20);
  L183():
    resvar = ld resvar;
    check L185() else D33();
  L184():
    r85 = dyn base12(<sym resvar>);
    goto L18(r85);
  L299():
    z70 = force? z69;
    checkMissing(z70);
    c53 = `is.object`(z70);
    if c53 then L301() else L302(z70);
  L305():
    sym19 = ldf sum;
    base19 = ldf sum in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L306() else L307();
  L324():
    z74 = force? z73;
    checkMissing(z74);
    c55 = `is.object`(z74);
    if c55 then L326() else L327(z74);
  L330():
    sym23 = ldf sum;
    base23 = ldf sum in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L331() else L332();
  L362():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    r215 = `/`(rss3, rdf3);
    st resvar = r215;
    sym29 = ldf `is.finite`;
    base29 = ldf `is.finite` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L363() else L364();
  D33():
    deopt 138 [resvar];
  L39(r159):
    goto L40(r159);
  L41(r170):
    st rss = r170;
    goto L42();
  L45(r181):
    st m = r181;
    sym25 = ldf sum;
    base25 = ldf sum in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L340() else L341();
  L49(r203):
    st rss = r203;
    sym28 = ldf sqrt;
    base28 = ldf sqrt in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L357() else L358();
  L51(r217):
    c57 = `as.logical`(r217);
    if c57 then L367() else L52(c57);
  L185():
    resvar1 = force? resvar;
    checkMissing(resvar1);
    r87 = sqrt(resvar1);
    goto L18(r87);
  L186(dx23):
    st ans = dx23;
    l16 = ld ans;
    c20 = `is.object`(l16);
    if c20 then L191() else L192(0.0, l16);
  L187():
    dr22 = tryDispatchBuiltin.0("$<-", l13, r86);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L189() else L188(r86, dr22);
  L188(r89, l15):
    r92 = `$<-`(l15, <sym sigma>, r86);
    goto L186(r92);
  L300(dx58):
    attr = ldf attr in base;
    r157 = dyn attr(dx58, "intercept");
    check L304() else D65();
  L301():
    dr52 = tryDispatchBuiltin.1("$", z70);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L303() else L302(dr52);
  L302(z72):
    r156 = `$`(z72, <sym terms>);
    goto L300(r156);
  L306():
    f6 = ld f;
    check L308() else D66();
  L307():
    r158 = dyn base19(<lang `^`(`(`(`-`(f, mean(f))), 2.0)>);
    goto L39(r158);
  L313():
    f10 = ld f;
    check L315() else D70();
  L314():
    r166 = dyn base20(<lang `^`(f, 2.0)>);
    goto L40(r166);
  L317():
    r171 = ld r;
    check L319() else D72();
  L318():
    r169 = dyn base21(<lang `^`(r, 2.0)>);
    goto L41(r169);
  L325(dx60):
    attr1 = ldf attr in base;
    r179 = dyn attr1(dx60, "intercept");
    check L329() else D75();
  L326():
    dr54 = tryDispatchBuiltin.1("$", z74);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L328() else L327(dr54);
  L327(z76):
    r178 = `$`(z76, <sym terms>);
    goto L325(r178);
  L331():
    w8 = ld w;
    check L333() else D76();
  L332():
    r180 = dyn base23(<lang `/`(`*`(w, f), sum(w))>);
    goto L45(r180);
  L347():
    w14 = ld w;
    check L349() else D85();
  L348():
    r198 = dyn base26(<lang `*`(w, `^`(f, 2.0))>);
    goto L48(r198);
  L352():
    w16 = ld w;
    check L354() else D88();
  L353():
    r202 = dyn base27(<lang `*`(w, `^`(r, 2.0))>);
    goto L49(r202);
  L363():
    resvar2 = ld resvar;
    check L365() else D95();
  L364():
    r216 = dyn base29(<sym resvar>);
    goto L51(r216);
  D65():
    deopt 270 [r157];
  D66():
    deopt 273 [f6];
  D70():
    deopt 285 [f10];
  D72():
    deopt 294 [r171];
  D75():
    deopt 308 [r179];
  D76():
    deopt 311 [w8];
  D85():
    deopt 338 [w14];
  D88():
    deopt 349 [w16];
  D95():
    deopt 372 [resvar2];
  L47(r192):
    goto L48(r192);
  L50(r210):
    r212 = ld r;
    check L360() else D92();
  L52(c59):
    c64 = `as.logical`(c59);
    if c64 then L374() else L53();
  L189():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L186(dx22);
  L190(r96, dx25):
    st ans = dx25;
    l19 = ld ans;
    c21 = `is.object`(l19);
    if c21 then L195() else L196(r96, l19);
  L191():
    dr24 = tryDispatchBuiltin.0("$<-", l16, 0.0);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L193() else L192(0.0, dr24);
  L192(r94, l18):
    r97 = `$<-`(l18, <sym adj.r.squared>, 0.0);
    goto L190(r94, r97);
  L303():
    dx57 = getTryDispatchBuiltinValue(dr52);
    goto L300(dx57);
  L304():
    goto L37(r157);
  L308():
    f7 = force? f6;
    checkMissing(f7);
    mean = ldf mean;
    check L309() else D67();
  L315():
    f11 = force? f10;
    checkMissing(f11);
    r167 = `^`(f11, 2.0);
    sum3 = ldf sum in base;
    r168 = dyn sum3(r167);
    check L316() else D71();
  L319():
    r172 = force? r171;
    checkMissing(r172);
    r173 = `^`(r172, 2.0);
    sum4 = ldf sum in base;
    r174 = dyn sum4(r173);
    check L320() else D73();
  L328():
    dx59 = getTryDispatchBuiltinValue(dr54);
    goto L325(dx59);
  L329():
    goto L43(r179);
  L333():
    w9 = force? w8;
    checkMissing(w9);
    f12 = ld f;
    check L334() else D77();
  L340():
    w12 = ld w;
    check L342() else D81();
  L341():
    r191 = dyn base25(<lang `*`(w, `^`(`(`(`-`(f, m)), 2.0))>);
    goto L47(r191);
  L349():
    w15 = force? w14;
    checkMissing(w15);
    f16 = ld f;
    check L350() else D86();
  L354():
    w17 = force? w16;
    checkMissing(w17);
    r204 = ld r;
    check L355() else D89();
  L357():
    w18 = ld w;
    check L359() else D91();
  L358():
    r209 = dyn base28(<sym w>);
    goto L50(r209);
  L365():
    resvar3 = force? resvar2;
    checkMissing(resvar3);
    is_finite = ldf `is.finite` in base;
    r218 = dyn is_finite(resvar3);
    check L366() else D96();
  L367():
    resvar4 = ld resvar;
    check L368() else D97();
  D67():
    deopt 275 [f7];
  D71():
    deopt 290 [r168];
  D73():
    deopt 299 [r174];
  D77():
    deopt 312 [w9, f12];
  D81():
    deopt 326 [w12];
  D86():
    deopt 339 [w15, f16];
  D89():
    deopt 350 [w17, r204];
  D91():
    deopt 359 [w18];
  D92():
    deopt 361 [r210, r212];
  D96():
    deopt 375 [r218];
  D97():
    deopt 376 [c57, resvar4];
  L53():
    goto L54();
  L54():
    p11 = ld p;
    check L378() else D104();
  L193():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L190(0.0, dx24);
  L194(dx27):
    st ans = dx27;
    matrix1 = ldf matrix;
    check L198() else D34();
  L195():
    dr26 = tryDispatchBuiltin.0("$<-", l19, r96);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L197() else L196(r96, dr26);
  L196(r99, l21):
    r102 = `$<-`(l21, <sym r.squared>, r96);
    goto L194(r102);
  L309():
    p8 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    r161 = dyn mean(p8);
    check L310() else D68();
  L316():
    goto L40(r168);
  L320():
    goto L41(r174);
  L334():
    f13 = force? f12;
    checkMissing(f13);
    r182 = `*`(w9, f13);
    sym24 = ldf sum;
    base24 = ldf sum in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L335() else L336();
  L342():
    w13 = force? w12;
    checkMissing(w13);
    f14 = ld f;
    check L343() else D82();
  L350():
    f17 = force? f16;
    checkMissing(f17);
    r199 = `^`(f17, 2.0);
    r200 = `*`(w15, r199);
    sum8 = ldf sum in base;
    r201 = dyn sum8(r200);
    check L351() else D87();
  L355():
    r205 = force? r204;
    checkMissing(r205);
    r206 = `^`(r205, 2.0);
    r207 = `*`(w17, r206);
    sum9 = ldf sum in base;
    r208 = dyn sum9(r207);
    check L356() else D90();
  L359():
    w19 = force? w18;
    checkMissing(w19);
    r211 = sqrt(w19);
    goto L50(r211);
  L360():
    r213 = force? r212;
    checkMissing(r213);
    r214 = `*`(r210, r213);
    st r = r214;
    goto L42();
  L366():
    goto L51(r218);
  L368():
    resvar5 = force? resvar4;
    checkMissing(resvar5);
    mean1 = ldf mean;
    check L369() else D98();
  L374():
    warning2 = ldf warning;
    check L375() else D102();
  D34():
    deopt 153 [];
  D68():
    deopt 277 [f7, r161];
  D82():
    deopt 327 [w13, f14];
  D87():
    deopt 345 [r201];
  D90():
    deopt 356 [r208];
  D98():
    deopt 378 [c57, resvar5];
  D102():
    deopt 392 [];
  D104():
    deopt 398 [1, p11];
  L46(r186, r187):
    r189 = `/`(r186, r187);
    sum6 = ldf sum in base;
    r190 = dyn sum6(r189);
    check L339() else D80();
  L197():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L194(dx26);
  L198():
    r103 = dyn matrix1(NA_REAL, 0, 0);
    check L199() else D35();
  L310():
    r162 = `-`(f7, r161);
    r163 = `^`(r162, 2.0);
    sum2 = ldf sum in base;
    r164 = dyn sum2(r163);
    check L311() else D69();
  L335():
    w10 = ld w;
    check L337() else D78();
  L336():
    r185 = dyn base24(<sym w>);
    goto L46(r182, r185);
  L343():
    f15 = force? f14;
    checkMissing(f15);
    m = ld m;
    check L344() else D83();
  L351():
    goto L48(r201);
  L356():
    goto L49(r208);
  L369():
    p9 = prom<V +>{
      f18 = ld f;
      f19 = force? f18;
      checkMissing(f19);
      return f19;
    };
    r220 = dyn mean1(p9);
    check L370() else D99();
  L375():
    r230 = dyn warning2("essentially perfect fit: summary may be unreliable");
    check L376() else D103();
  L378():
    p12 = force? p11;
    checkMissing(p12);
    r232 = `:`(1, p12);
    st p1 = r232;
    chol2inv = ldf chol2inv;
    check L379() else D105();
  D35():
    deopt 157 [r103];
  D69():
    deopt 282 [r164];
  D78():
    deopt 316 [r182, w10];
  D80():
    deopt 322 [r190];
  D83():
    deopt 328 [w13, f15, m];
  D99():
    deopt 380 [c57, resvar5, r220];
  D103():
    deopt 394 [r230];
  D105():
    deopt 403 [];
  L199():
    l22 = ld ans;
    c22 = `is.object`(l22);
    if c22 then L201() else L202(r103, l22);
  L311():
    goto L39(r164);
  L337():
    w11 = force? w10;
    checkMissing(w11);
    sum5 = ldf sum in base;
    r188 = dyn sum5(w11);
    check L338() else D79();
  L339():
    goto L45(r190);
  L344():
    m1 = force? m;
    checkMissing(m1);
    r193 = `-`(f15, m1);
    r194 = `^`(r193, 2.0);
    r195 = `*`(w13, r194);
    sum7 = ldf sum in base;
    r196 = dyn sum7(r195);
    check L345() else D84();
  L370():
    r221 = `^`(r220, 2.0);
    var = ldf var;
    check L371() else D100();
  L376():
    goto L54();
  L379():
    p17 = prom<V +>{
      Qr4 = ld Qr;
      Qr5 = force? Qr4;
      checkMissing(Qr5);
      c65 = `is.object`(Qr5);
      if c65 then L2() else L3(Qr5);
    L1(dx62):
      c66 = `is.object`(dx62);
      if c66 then L5() else L6();
    L2():
      dr56 = tryDispatchBuiltin.1("$", Qr5);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L4() else L3(dr56);
    L3(Qr7):
      r233 = `$`(Qr7, <sym qr>);
      goto L1(r233);
    L0(dx66):
      return dx66;
    L4():
      dx61 = getTryDispatchBuiltinValue(dr56);
      goto L1(dx61);
    L5():
      dr58 = tryDispatchBuiltin.1("[", dx62);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L7() else L6();
    L6():
      p13 = ld p1;
      p14 = force? p13;
      p15 = ld p1;
      p16 = force? p15;
      __1 = ldf `[` in base;
      r234 = dyn __1(dx62, p14, p16, FALSE);
      goto L0(r234);
    L7():
      dx65 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx65);
    };
    r236 = dyn chol2inv(p17);
    check L380() else D106();
  D79():
    deopt 319 [r182, r188];
  D84():
    deopt 335 [r196];
  D100():
    deopt 383 [c57, resvar5, r221];
  D106():
    deopt 405 [r236];
  L200(dx29):
    st ans = dx29;
    correlation1 = ld correlation;
    check L204() else D36();
  L201():
    dr28 = tryDispatchBuiltin.0("$<-", l22, r103);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L203() else L202(r103, dr28);
  L202(r105, l24):
    r108 = `$<-`(l24, <sym cov.unscaled>, r103);
    goto L200(r108);
  L338():
    goto L46(r182, r188);
  L345():
    goto L47(r196);
  L371():
    p10 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r223):
      return r223;
    L1():
      f20 = ld f;
      f21 = force? f20;
      checkMissing(f21);
      c60 = ldf c in base;
      r224 = dyn c60(f21);
      goto L0(r224);
    L2():
      r222 = dyn base30(<sym f>);
      goto L0(r222);
    };
    r226 = dyn var(p10);
    check L372() else D101();
  L380():
    st R = r236;
    sym31 = ldf sqrt;
    base31 = ldf sqrt in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L381() else L382();
  D36():
    deopt 161 [correlation1];
  D101():
    deopt 385 [c57, resvar5, r221, r226];
  L55(r238):
    st se = r238;
    z77 = ld z;
    check L386() else D110();
  L203():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L200(dx28);
  L204():
    correlation2 = force? correlation1;
    checkMissing(correlation2);
    c23 = `as.logical`(correlation2);
    if c23 then L205() else L19();
  L372():
    r227 = `+`(r221, r226);
    r228 = `*`(r227, 1.0E-30);
    r229 = `<`(resvar5, r228);
    c61 = `as.logical`(r229);
    c62 = `&&`(c57, c61);
    goto L52(c62);
  L381():
    diag = ldf diag;
    check L383() else D107();
  L382():
    r237 = dyn base31(<lang `*`(diag(R), resvar)>);
    goto L55(r237);
  D107():
    deopt 409 [];
  D110():
    deopt 416 [z77];
  L19():
    goto L20();
  L20():
    ans8 = ld ans;
    check L216() else D38();
  L205():
    ans4 = ld ans;
    check L206() else D37();
  L383():
    p18 = prom<V +>{
      R = ld R;
      R1 = force? R;
      checkMissing(R1);
      return R1;
    };
    r240 = dyn diag(p18);
    check L384() else D108();
  L386():
    z78 = force? z77;
    checkMissing(z78);
    c67 = `is.object`(z78);
    if c67 then L388() else L389(z78);
  D37():
    deopt 163 [ans4];
  D38():
    deopt 171 [ans8];
  D108():
    deopt 411 [r240];
  L206():
    ans5 = force? ans4;
    checkMissing(ans5);
    c24 = `is.object`(ans5);
    if c24 then L208() else L209(ans5);
  L216():
    ans9 = force? ans8;
    checkMissing(ans9);
    popenv;
    return ans9;
  L384():
    resvar6 = ld resvar;
    check L385() else D109();
  L387(dx68):
    c68 = `is.object`(dx68);
    if c68 then L391() else L392(dx68);
  L388():
    dr60 = tryDispatchBuiltin.1("$", z78);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L390() else L389(dr60);
  L389(z80):
    r243 = `$`(z80, <sym coefficients>);
    goto L387(r243);
  D109():
    deopt 411 [r240, resvar6];
  L56(dx72):
    st est = dx72;
    est = ld est;
    check L403() else D113();
  L207(dx31):
    l25 = ld ans;
    c25 = `is.object`(l25);
    if c25 then L212() else L213(dx31, l25);
  L208():
    dr30 = tryDispatchBuiltin.1("$", ans5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L210() else L209(dr30);
  L209(ans7):
    r109 = `$`(ans7, <sym cov.unscaled>);
    goto L207(r109);
  L385():
    resvar7 = force? resvar6;
    checkMissing(resvar7);
    r241 = `*`(r240, resvar7);
    r242 = sqrt(r241);
    goto L55(r242);
  L390():
    dx67 = getTryDispatchBuiltinValue(dr60);
    goto L387(dx67);
  L391():
    dr62 = tryDispatchBuiltin.1("[", dx68);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L393() else L392(dr62);
  L392(dx70):
    Qr8 = ld Qr;
    check L394() else D111();
  D111():
    deopt 419 [dx70, Qr8];
  D113():
    deopt 427 [est];
  L210():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L207(dx30);
  L211(dx36, dx37):
    st ans = dx37;
    goto L20();
  L212():
    dr32 = tryDispatchBuiltin.0("$<-", l25, dx31);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L214() else L213(dx31, dr32);
  L213(dx33, l27):
    r110 = `$<-`(l27, <sym correlation>, dx31);
    goto L211(dx33, r110);
  L393():
    dx71 = getTryDispatchBuiltinValue(dr62);
    goto L56(dx71);
  L394():
    Qr9 = force? Qr8;
    checkMissing(Qr9);
    c69 = `is.object`(Qr9);
    if c69 then L396() else L397(dx70, Qr9);
  L403():
    est1 = force? est;
    checkMissing(est1);
    se = ld se;
    check L404() else D114();
  D114():
    deopt 428 [est1, se];
  L214():
    dx35 = getTryDispatchBuiltinValue(dr32);
    goto L211(dx31, dx35);
  L395(dx77, dx78):
    c70 = `is.object`(dx78);
    if c70 then L399() else L400(dx77, dx78);
  L396():
    dr64 = tryDispatchBuiltin.1("$", Qr9);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L398() else L397(dx70, dr64);
  L397(dx74, Qr11):
    r244 = `$`(Qr11, <sym pivot>);
    goto L395(dx74, r244);
  L404():
    se1 = force? se;
    checkMissing(se1);
    r247 = `/`(est1, se1);
    st tval = r247;
    z81 = ld z;
    check L405() else D115();
  D115():
    deopt 432 [z81];
  L57(dx85, dx86):
    __3 = ldf `[` in base;
    r246 = dyn __3(dx85, dx86);
    goto L56(r246);
  L398():
    dx76 = getTryDispatchBuiltinValue(dr64);
    goto L395(dx70, dx76);
  L399():
    dr66 = tryDispatchBuiltin.1("[", dx78);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L401() else L400(dx77, dr66);
  L400(dx81, dx82):
    p19 = ld p1;
    check L402() else D112();
  L405():
    z82 = force? z81;
    checkMissing(z82);
    c71 = `is.object`(z82);
    if c71 then L406() else L407(z82);
  D112():
    deopt 422 [dx81, dx82, p19];
  L58(dx88):
    st ans = dx88;
    r257 = ld r;
    check L421() else D118();
  L401():
    dx84 = getTryDispatchBuiltinValue(dr66);
    goto L57(dx77, dx84);
  L402():
    p20 = force? p19;
    __2 = ldf `[` in base;
    r245 = dyn __2(dx82, p20);
    goto L57(dx81, r245);
  L406():
    dr68 = tryDispatchBuiltin.1("[", z82);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L408() else L407(dr68);
  L407(z84):
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L409() else L410();
  D118():
    deopt 452 [r257];
  L59(z87, r249):
    __4 = ldf `[` in base;
    r256 = dyn __4(z87, r249);
    goto L58(r256);
  L408():
    dx87 = getTryDispatchBuiltinValue(dr68);
    goto L58(dx87);
  L409():
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L411() else L412();
  L410():
    r248 = dyn base32("call", "terms", <lang if(`!`(is.null(`$`(z, weights))), "weights")>);
    goto L59(z84, r248);
  L421():
    r258 = force? r257;
    checkMissing(r258);
    l28 = ld ans;
    c76 = `is.object`(l28);
    if c76 then L423() else L424(r258, l28);
  L60(z90, r251):
    r253 = `!`(r251);
    c74 = `as.logical`(r253);
    if c74 then L418() else L61();
  L411():
    z91 = ld z;
    check L413() else D116();
  L412():
    r250 = dyn base33(<lang `$`(z, weights)>);
    goto L60(z84, r250);
  L422(dx92):
    st ans = dx92;
    cbind = ldf cbind;
    check L426() else D119();
  L423():
    dr72 = tryDispatchBuiltin.0("$<-", l28, r258);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L425() else L424(r258, dr72);
  L424(r260, l30):
    r263 = `$<-`(l30, <sym residuals>, r258);
    goto L422(r263);
  D116():
    deopt 439 [z84, z91];
  D119():
    deopt 458 [];
  L61():
    goto L62(z90, NULL);
  L62(z101, r254):
    c75 = ldf c in base;
    r255 = dyn c75("call", "terms", r254);
    check L420() else D117();
  L413():
    z92 = force? z91;
    checkMissing(z92);
    c72 = `is.object`(z92);
    if c72 then L415() else L416(z84, z92);
  L418():
    goto L62(z90, "weights");
  L425():
    dx91 = getTryDispatchBuiltinValue(dr72);
    goto L422(dx91);
  L426():
    p21 = prom<V +>{
      est2 = ld est;
      est3 = force? est2;
      checkMissing(est3);
      return est3;
    };
    p22 = prom<V +>{
      se2 = ld se;
      se3 = force? se2;
      checkMissing(se3);
      return se3;
    };
    p23 = prom<V +>{
      tval = ld tval;
      tval1 = force? tval;
      checkMissing(tval1);
      return tval1;
    };
    p26 = prom<V +>{
      pt = ldf pt;
      p24 = prom<V +>{
        sym34 = ldf abs;
        base34 = ldf abs in base;
        guard34 = `==`.4(sym34, base34);
        if guard34 then L1() else L2();
      L0(r268):
        return r268;
      L1():
        tval2 = ld tval;
        tval3 = force? tval2;
        checkMissing(tval3);
        abs = ldf abs in base;
        r269 = dyn abs(tval3);
        goto L0(r269);
      L2():
        r267 = dyn base34(<sym tval>);
        goto L0(r267);
      };
      p25 = prom<V +>{
        rdf4 = ld rdf;
        rdf5 = force? rdf4;
        checkMissing(rdf5);
        return rdf5;
      };
      r272 = dyn pt[, , `lower.tail`](p24, p25, FALSE);
      r273 = `*`(2.0, r272);
      return r273;
    };
    r275 = dyn cbind[Estimate, `Std. Error`, `t value`, `Pr(>|t|)`](p21, p22, p23, p26);
    check L427() else D120();
  D117():
    deopt 449 [z101, r255];
  D120():
    deopt 467 [r275];
  L414(z98, dx90):
    c73 = `==`(dx90, NULL);
    goto L60(z98, c73);
  L415():
    dr70 = tryDispatchBuiltin.1("$", z92);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L417() else L416(z84, dr70);
  L416(z95, z96):
    r252 = `$`(z96, <sym weights>);
    goto L414(z95, r252);
  L420():
    goto L59(z101, r255);
  L427():
    l31 = ld ans;
    c77 = `is.object`(l31);
    if c77 then L429() else L430(r275, l31);
  L417():
    dx89 = getTryDispatchBuiltinValue(dr70);
    goto L414(z84, dx89);
  L428(dx94):
    st ans = dx94;
    sym35 = ldf `is.na`;
    base35 = ldf `is.na` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L432() else L433();
  L429():
    dr74 = tryDispatchBuiltin.0("$<-", l31, r275);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L431() else L430(r275, dr74);
  L430(r277, l33):
    r280 = `$<-`(l33, <sym coefficients>, r275);
    goto L428(r280);
  L63(r282):
    l34 = ld ans;
    c79 = `is.object`(l34);
    if c79 then L441() else L442(r282, l34);
  L431():
    dx93 = getTryDispatchBuiltinValue(dr74);
    goto L428(dx93);
  L432():
    z102 = ld z;
    check L434() else D121();
  L433():
    r281 = dyn base35(<lang `$`(z, coefficients)>);
    goto L63(r281);
  D121():
    deopt 473 [z102];
  L434():
    z103 = force? z102;
    checkMissing(z103);
    c78 = `is.object`(z103);
    if c78 then L436() else L437(z103);
  L440(dx98):
    st ans = dx98;
    sym36 = ldf sqrt;
    base36 = ldf sqrt in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L444() else L445();
  L441():
    dr78 = tryDispatchBuiltin.0("$<-", l34, r282);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L443() else L442(r282, dr78);
  L442(r286, l36):
    r289 = `$<-`(l36, <sym aliased>, r282);
    goto L440(r289);
  L64(r291):
    l37 = ld ans;
    c80 = `is.object`(l37);
    if c80 then L448() else L449(r291, l37);
  L435(dx96):
    is_na2 = ldf `is.na` in base;
    r284 = dyn is_na2(dx96);
    check L439() else D122();
  L436():
    dr76 = tryDispatchBuiltin.1("$", z103);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L438() else L437(dr76);
  L437(z105):
    r283 = `$`(z105, <sym coefficients>);
    goto L435(r283);
  L443():
    dx97 = getTryDispatchBuiltinValue(dr78);
    goto L440(dx97);
  L444():
    resvar8 = ld resvar;
    check L446() else D123();
  L445():
    r290 = dyn base36(<sym resvar>);
    goto L64(r290);
  D122():
    deopt 477 [r284];
  D123():
    deopt 482 [resvar8];
  L438():
    dx95 = getTryDispatchBuiltinValue(dr76);
    goto L435(dx95);
  L439():
    goto L63(r284);
  L446():
    resvar9 = force? resvar8;
    checkMissing(resvar9);
    r292 = sqrt(resvar9);
    goto L64(r292);
  L447(dx100):
    st ans = dx100;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L451() else L452();
  L448():
    dr80 = tryDispatchBuiltin.0("$<-", l37, r291);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L450() else L449(r291, dr80);
  L449(r294, l39):
    r297 = `$<-`(l39, <sym sigma>, r291);
    goto L447(r297);
  L65(r299):
    l40 = ld ans;
    c83 = `is.object`(l40);
    if c83 then L459() else L460(r299, l40);
  L450():
    dx99 = getTryDispatchBuiltinValue(dr80);
    goto L447(dx99);
  L451():
    p27 = ld p;
    check L453() else D124();
  L452():
    r298 = dyn base37(<sym p>, <sym rdf>, <lang NCOL(`$`(Qr, qr))>);
    goto L65(r298);
  D124():
    deopt 490 [p27];
  L453():
    p28 = force? p27;
    checkMissing(p28);
    rdf6 = ld rdf;
    check L454() else D125();
  L458(dx104):
    st ans = dx104;
    p30 = ld p;
    check L462() else D129();
  L459():
    dr84 = tryDispatchBuiltin.0("$<-", l40, r299);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L461() else L460(r299, dr84);
  L460(r305, l42):
    r308 = `$<-`(l42, <sym df>, r299);
    goto L458(r308);
  D125():
    deopt 492 [rdf6];
  D129():
    deopt 503 [p30];
  L454():
    rdf7 = force? rdf6;
    checkMissing(rdf7);
    NCOL = ldf NCOL;
    check L455() else D126();
  L461():
    dx103 = getTryDispatchBuiltinValue(dr84);
    goto L458(dx103);
  L462():
    p31 = force? p30;
    checkMissing(p31);
    sym38 = ldf attr;
    base38 = ldf attr in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L463() else L464();
  D126():
    deopt 495 [];
  L66(p34, r310):
    r313 = `!=`(p34, r310);
    c85 = `as.logical`(r313);
    if c85 then L471() else L67();
  L455():
    p29 = prom<V +>{
      Qr12 = ld Qr;
      Qr13 = force? Qr12;
      checkMissing(Qr13);
      c81 = `is.object`(Qr13);
      if c81 then L1() else L2(Qr13);
    L0(dx102):
      return dx102;
    L1():
      dr82 = tryDispatchBuiltin.1("$", Qr13);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(Qr15):
      r300 = `$`(Qr15, <sym qr>);
      goto L0(r300);
    L3():
      dx101 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx101);
    };
    r302 = dyn NCOL(p29);
    check L456() else D127();
  L463():
    z106 = ld z;
    check L465() else D130();
  L464():
    r309 = dyn base38(<lang `$`(z, terms)>, "intercept");
    goto L66(p31, r309);
  D127():
    deopt 497 [r302];
  D130():
    deopt 506 [p31, z106];
  L67():
    l52 = ld ans;
    c93 = `is.object`(l52);
    if c93 then L517() else L518(0.0, l52);
  L72():
    R2 = ld R;
    check L524() else D149();
  L456():
    c82 = ldf c in base;
    r303 = dyn c82(p28, rdf7, r302);
    check L457() else D128();
  L465():
    z107 = force? z106;
    checkMissing(z107);
    c84 = `is.object`(z107);
    if c84 then L467() else L468(p31, z107);
  L471():
    sym39 = ldf attr;
    base39 = ldf attr in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L472() else L473();
  D128():
    deopt 499 [r303];
  D149():
    deopt 583 [R2];
  L68(r315):
    c87 = `as.logical`(r315);
    if c87 then L480() else L69();
  L457():
    goto L65(r303);
  L466(p38, dx106):
    attr2 = ldf attr in base;
    r312 = dyn attr2(dx106, "intercept");
    check L470() else D131();
  L467():
    dr86 = tryDispatchBuiltin.1("$", z107);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L469() else L468(p31, dr86);
  L468(p36, z109):
    r311 = `$`(z109, <sym terms>);
    goto L466(p36, r311);
  L472():
    z110 = ld z;
    check L474() else D132();
  L473():
    r314 = dyn base39(<lang `$`(z, terms)>, "intercept");
    goto L68(r314);
  L516(r361, dx118):
    st ans = dx118;
    l55 = ld ans;
    c94 = `is.object`(l55);
    if c94 then L521() else L522(r361, l55);
  L517():
    dr98 = tryDispatchBuiltin.0("$<-", l52, 0.0);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L519() else L518(0.0, dr98);
  L518(r359, l54):
    r362 = `$<-`(l54, <sym adj.r.squared>, 0.0);
    goto L516(r359, r362);
  L524():
    R3 = force? R2;
    checkMissing(R3);
    l58 = ld ans;
    c95 = `is.object`(l58);
    if c95 then L526() else L527(R3, l58);
  D131():
    deopt 511 [p38, r312];
  D132():
    deopt 515 [z110];
  L69():
    goto L70(0);
  L70(r318):
    st `df.int` = r318;
    mss = ld mss;
    check L482() else D134();
  L469():
    dx105 = getTryDispatchBuiltinValue(dr86);
    goto L466(p31, dx105);
  L470():
    goto L66(p38, r312);
  L474():
    z111 = force? z110;
    checkMissing(z111);
    c86 = `is.object`(z111);
    if c86 then L476() else L477(z111);
  L480():
    goto L70(1);
  L519():
    dx117 = getTryDispatchBuiltinValue(dr98);
    goto L516(0.0, dx117);
  L520(r366, dx120):
    st ans = dx120;
    goto L72();
  L521():
    dr100 = tryDispatchBuiltin.0("$<-", l55, r361);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L523() else L522(r361, dr100);
  L522(r364, l57):
    r367 = `$<-`(l57, <sym r.squared>, r361);
    goto L520(r364, r367);
  L525(dx122):
    st ans = dx122;
    sym41 = ldf dimnames;
    base41 = ldf dimnames in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L529() else L530();
  L526():
    dr102 = tryDispatchBuiltin.0("$<-", l58, R3);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L528() else L527(R3, dr102);
  L527(R5, l60):
    r368 = `$<-`(l60, <sym cov.unscaled>, R3);
    goto L525(r368);
  D134():
    deopt 526 [mss];
  L73(r370):
    c97 = `is.object`(r370);
    if c97 then L537() else L538(r370);
  L475(dx108):
    attr3 = ldf attr in base;
    r317 = dyn attr3(dx108, "intercept");
    check L479() else D133();
  L476():
    dr88 = tryDispatchBuiltin.1("$", z111);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L478() else L477(dr88);
  L477(z113):
    r316 = `$`(z113, <sym terms>);
    goto L475(r316);
  L482():
    mss1 = force? mss;
    checkMissing(mss1);
    mss2 = ld mss;
    check L483() else D135();
  L523():
    dx119 = getTryDispatchBuiltinValue(dr100);
    goto L520(r361, dx119);
  L528():
    dx121 = getTryDispatchBuiltinValue(dr102);
    goto L525(dx121);
  L529():
    ans14 = ld ans;
    check L531() else D150();
  L530():
    r369 = dyn base41(<lang `$`(ans, coefficients)>);
    goto L73(r369);
  D133():
    deopt 520 [r317];
  D135():
    deopt 527 [mss1, mss2];
  D150():
    deopt 590 [ans14];
  L74(dx126):
    l61 = ld ans;
    c99 = `is.object`(l61);
    if c99 then L544() else L545(dx126, l61, dx126, l61);
  L478():
    dx107 = getTryDispatchBuiltinValue(dr88);
    goto L475(dx107);
  L479():
    goto L68(r317);
  L483():
    mss3 = force? mss2;
    checkMissing(mss3);
    rss4 = ld rss;
    check L484() else D136();
  L531():
    ans15 = force? ans14;
    checkMissing(ans15);
    c96 = `is.object`(ans15);
    if c96 then L533() else L534(ans15);
  L537():
    dr106 = tryDispatchBuiltin.1("[", r370);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L539() else L538(dr106);
  L538(r374):
    sym42 = ldf c;
    base42 = ldf c in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L540() else L541();
  D136():
    deopt 528 [mss1, mss3, rss4];
  L75(r378, r379):
    __5 = ldf `[` in base;
    r381 = dyn __5(r378, r379);
    goto L74(r381);
  L484():
    rss5 = force? rss4;
    checkMissing(rss5);
    r319 = `+`(mss3, rss5);
    r320 = `/`(mss1, r319);
    l43 = ld ans;
    c88 = `is.object`(l43);
    if c88 then L486() else L487(r320, l43);
  L532(dx124):
    dimnames = ldf dimnames in base;
    r372 = dyn dimnames(dx124);
    check L536() else D151();
  L533():
    dr104 = tryDispatchBuiltin.1("$", ans15);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L535() else L534(dr104);
  L534(ans17):
    r371 = `$`(ans17, <sym coefficients>);
    goto L532(r371);
  L539():
    dx125 = getTryDispatchBuiltinValue(dr106);
    goto L74(dx125);
  L540():
    c98 = ldf c in base;
    r380 = dyn c98(1.0, 1.0);
    check L542() else D152();
  L541():
    r377 = dyn base42(1.0, 1.0);
    goto L75(r374, r377);
  L543(dx134, l67, dx135, dx136):
    dimnames__ = ldf `dimnames<-`;
    check L547() else D153();
  L544():
    dr108 = tryDispatchBuiltin.1("$", l61);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L546() else L545(dx126, l61, dx126, dr108);
  L545(dx129, l64, dx130, l65):
    r382 = `$`(l65, <sym cov.unscaled>);
    goto L543(dx129, l64, dx130, r382);
  D151():
    deopt 594 [r372];
  D152():
    deopt 600 [r374, r380];
  D153():
    deopt 606 [dx134, l67, dx136, dx135];
  L485(dx110):
    st ans = dx110;
    ans10 = ld ans;
    check L489() else D137();
  L486():
    dr90 = tryDispatchBuiltin.0("$<-", l43, r320);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L488() else L487(r320, dr90);
  L487(r322, l45):
    r325 = `$<-`(l45, <sym r.squared>, r320);
    goto L485(r325);
  L535():
    dx123 = getTryDispatchBuiltinValue(dr104);
    goto L532(dx123);
  L536():
    goto L73(r372);
  L542():
    goto L75(r374, r380);
  L546():
    dx133 = getTryDispatchBuiltinValue(dr108);
    goto L543(dx126, l61, dx126, dx133);
  L547():
    r383 = dyn dimnames__(dx136, NULL, dx135);
    check L548() else D154();
  D137():
    deopt 537 [1.0, 1.0, ans10];
  D154():
    deopt 608 [dx134, l67, r383];
  L488():
    dx109 = getTryDispatchBuiltinValue(dr90);
    goto L485(dx109);
  L489():
    ans11 = force? ans10;
    checkMissing(ans11);
    c89 = `is.object`(ans11);
    if c89 then L491() else L492(1.0, 1.0, ans11);
  L548():
    c100 = `is.object`(l67);
    if c100 then L550() else L551(dx134, l67);
  L490(r332, r333, dx112):
    r335 = `-`(r333, dx112);
    n4 = ld n;
    check L494() else D138();
  L491():
    dr92 = tryDispatchBuiltin.1("$", ans11);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L493() else L492(1.0, 1.0, dr92);
  L492(r328, r329, ans13):
    r334 = `$`(ans13, <sym r.squared>);
    goto L490(r328, r329, r334);
  L549(dx142):
    st ans = dx142;
    correlation3 = ld correlation;
    check L553() else D155();
  L550():
    dr110 = tryDispatchBuiltin.0("$<-", l67, r383);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L552() else L551(dx134, dr110);
  L551(dx138, l69):
    r384 = `$<-`(l69, <sym cov.unscaled>, r383);
    goto L549(r384);
  D138():
    deopt 540 [r332, r335, n4];
  D155():
    deopt 611 [correlation3];
  L493():
    dx111 = getTryDispatchBuiltinValue(dr92);
    goto L490(1.0, 1.0, dx111);
  L494():
    n5 = force? n4;
    checkMissing(n5);
    df_int = ld `df.int`;
    check L495() else D139();
  L552():
    dx140 = getTryDispatchBuiltinValue(dr110);
    goto L549(dx140);
  L553():
    correlation4 = force? correlation3;
    checkMissing(correlation4);
    c101 = `as.logical`(correlation4);
    if c101 then L554() else L76();
  D139():
    deopt 541 [r332, r335, n5, df_int];
  L76():
    goto L78();
  L78():
    sym44 = ldf `is.null`;
    base44 = ldf `is.null` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L587() else L588();
  L495():
    df_int1 = force? df_int;
    checkMissing(df_int1);
    r336 = `-`(n5, df_int1);
    rdf8 = ld rdf;
    check L496() else D140();
  L554():
    R8 = ld R;
    check L555() else D156();
  D140():
    deopt 543 [r332, r335, r336, rdf8];
  D156():
    deopt 613 [R8];
  L79(r416):
    r418 = `!`(r416);
    c109 = `as.logical`(r418);
    if c109 then L594() else L80();
  L496():
    rdf9 = force? rdf8;
    checkMissing(rdf9);
    r337 = `/`(r336, rdf9);
    r338 = `*`(r335, r337);
    r339 = `-`(r332, r338);
    l46 = ld ans;
    c90 = `is.object`(l46);
    if c90 then L498() else L499(r339, l46);
  L555():
    R9 = force? R8;
    checkMissing(R9);
    resvar12 = ld resvar;
    check L556() else D157();
  L587():
    z114 = ld z;
    check L589() else D165();
  L588():
    r415 = dyn base44(<lang `$`(z, na.action)>);
    goto L79(r415);
  D157():
    deopt 614 [R9, resvar12];
  D165():
    deopt 649 [z114];
  L80():
    goto L81();
  L81():
    l88 = ld ans;
    class__1 = ldf `class<-`;
    check L605() else D167();
  L497(dx114):
    st ans = dx114;
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L501() else L502();
  L498():
    dr94 = tryDispatchBuiltin.0("$<-", l46, r339);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L500() else L499(r339, dr94);
  L499(r341, l48):
    r344 = `$<-`(l48, <sym adj.r.squared>, r339);
    goto L497(r344);
  L556():
    resvar13 = force? resvar12;
    checkMissing(resvar13);
    r385 = `*`(R9, resvar13);
    outer = ldf outer;
    check L557() else D158();
  L589():
    z115 = force? z114;
    checkMissing(z115);
    c107 = `is.object`(z115);
    if c107 then L591() else L592(z115);
  L594():
    z118 = ld z;
    check L595() else D166();
  D158():
    deopt 617 [r385];
  D166():
    deopt 654 [z118];
  D167():
    deopt 665 ["summary.lm", l88, "summary.lm"];
  L71(r346):
    l49 = ld ans;
    c92 = `is.object`(l49);
    if c92 then L512() else L513(r346, l49);
  L500():
    dx113 = getTryDispatchBuiltinValue(dr94);
    goto L497(dx113);
  L501():
    mss4 = ld mss;
    check L503() else D141();
  L502():
    r345 = dyn base40[value, numdf, dendf](<lang `/`(`(`(`/`(mss, `(`(`-`(p, df.int)))), resvar)>, <lang `-`(p, df.int)>, <sym rdf>);
    goto L71(r345);
  L557():
    p43 = prom<V +>{
      se4 = ld se;
      se5 = force? se4;
      checkMissing(se5);
      return se5;
    };
    p44 = prom<V +>{
      se6 = ld se;
      se7 = force? se6;
      checkMissing(se7);
      return se7;
    };
    r388 = dyn outer(p43, p44);
    check L558() else D159();
  L590(dx154):
    c108 = `==`(dx154, NULL);
    goto L79(c108);
  L591():
    dr122 = tryDispatchBuiltin.1("$", z115);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L593() else L592(dr122);
  L592(z117):
    r417 = `$`(z117, <sym na.action>);
    goto L590(r417);
  L595():
    z119 = force? z118;
    checkMissing(z119);
    c110 = `is.object`(z119);
    if c110 then L597() else L598(z119);
  L605():
    r421 = dyn class__1(l88, NULL, "summary.lm");
    check L606() else D168();
  D141():
    deopt 553 [mss4];
  D159():
    deopt 620 [r385, r388];
  D168():
    deopt 667 ["summary.lm", r421];
  L503():
    mss5 = force? mss4;
    checkMissing(mss5);
    p39 = ld p;
    check L504() else D142();
  L511(r355, dx116):
    st ans = dx116;
    goto L72();
  L512():
    dr96 = tryDispatchBuiltin.0("$<-", l49, r346);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L514() else L513(r346, dr96);
  L513(r353, l51):
    r356 = `$<-`(l51, <sym fstatistic>, r346);
    goto L511(r353, r356);
  L558():
    r389 = `/`(r385, r388);
    l70 = ld ans;
    c102 = `is.object`(l70);
    if c102 then L560() else L561(r389, l70);
  L593():
    dx153 = getTryDispatchBuiltinValue(dr122);
    goto L590(dx153);
  L596(dx156):
    l85 = ld ans;
    c111 = `is.object`(l85);
    if c111 then L601() else L602(dx156, l85);
  L597():
    dr124 = tryDispatchBuiltin.1("$", z119);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L599() else L598(dr124);
  L598(z121):
    r419 = `$`(z121, <sym na.action>);
    goto L596(r419);
  L606():
    st ans = r421;
    ans22 = ld ans;
    check L607() else D169();
  D142():
    deopt 554 [mss5, p39];
  D169():
    deopt 669 [ans22];
  L504():
    p40 = force? p39;
    checkMissing(p40);
    df_int2 = ld `df.int`;
    check L505() else D143();
  L514():
    dx115 = getTryDispatchBuiltinValue(dr96);
    goto L511(r346, dx115);
  L559(dx144):
    st ans = dx144;
    sym43 = ldf dimnames;
    base43 = ldf dimnames in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L563() else L564();
  L560():
    dr112 = tryDispatchBuiltin.0("$<-", l70, r389);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L562() else L561(r389, dr112);
  L561(r391, l72):
    r394 = `$<-`(l72, <sym correlation>, r389);
    goto L559(r394);
  L599():
    dx155 = getTryDispatchBuiltinValue(dr124);
    goto L596(dx155);
  L600(dx161, dx162):
    st ans = dx162;
    goto L81();
  L601():
    dr126 = tryDispatchBuiltin.0("$<-", l85, dx156);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L603() else L602(dx156, dr126);
  L602(dx158, l87):
    r420 = `$<-`(l87, <sym na.action>, dx156);
    goto L600(dx158, r420);
  L607():
    ans23 = force? ans22;
    checkMissing(ans23);
    popenv;
    return ans23;
  D143():
    deopt 555 [mss5, p40, df_int2];
  L77(r396):
    l73 = ld ans;
    c104 = `is.object`(l73);
    if c104 then L572() else L573(r396, l73, r396, l73);
  L505():
    df_int3 = force? df_int2;
    checkMissing(df_int3);
    r347 = `-`(p40, df_int3);
    r348 = `/`(mss5, r347);
    resvar10 = ld resvar;
    check L506() else D144();
  L562():
    dx143 = getTryDispatchBuiltinValue(dr112);
    goto L559(dx143);
  L563():
    ans18 = ld ans;
    check L565() else D160();
  L564():
    r395 = dyn base43(<lang `$`(ans, cov.unscaled)>);
    goto L77(r395);
  L603():
    dx160 = getTryDispatchBuiltinValue(dr126);
    goto L600(dx156, dx160);
  D144():
    deopt 558 [r348, resvar10];
  D160():
    deopt 627 [ans18];
  L506():
    resvar11 = force? resvar10;
    checkMissing(resvar11);
    r349 = `/`(r348, resvar11);
    p41 = ld p;
    check L507() else D145();
  L565():
    ans19 = force? ans18;
    checkMissing(ans19);
    c103 = `is.object`(ans19);
    if c103 then L567() else L568(ans19);
  L571(r405, l79, r406, dx148):
    dimnames__1 = ldf `dimnames<-`;
    check L575() else D162();
  L572():
    dr116 = tryDispatchBuiltin.1("$", l73);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L574() else L573(r396, l73, r396, dr116);
  L573(r401, l76, r402, l77):
    r407 = `$`(l77, <sym correlation>);
    goto L571(r401, l76, r402, r407);
  D145():
    deopt 562 [p41];
  D162():
    deopt 636 [r405, l79, dx148, r406];
  L507():
    p42 = force? p41;
    checkMissing(p42);
    df_int4 = ld `df.int`;
    check L508() else D146();
  L566(dx146):
    dimnames1 = ldf dimnames in base;
    r398 = dyn dimnames1(dx146);
    check L570() else D161();
  L567():
    dr114 = tryDispatchBuiltin.1("$", ans19);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L569() else L568(dr114);
  L568(ans21):
    r397 = `$`(ans21, <sym cov.unscaled>);
    goto L566(r397);
  L574():
    dx147 = getTryDispatchBuiltinValue(dr116);
    goto L571(r396, l73, r396, dx147);
  L575():
    r408 = dyn dimnames__1(dx148, NULL, r406);
    check L576() else D163();
  D146():
    deopt 563 [p42, df_int4];
  D161():
    deopt 631 [r398];
  D163():
    deopt 638 [r405, l79, r408];
  L508():
    df_int5 = force? df_int4;
    checkMissing(df_int5);
    r350 = `-`(p42, df_int5);
    rdf10 = ld rdf;
    check L509() else D147();
  L569():
    dx145 = getTryDispatchBuiltinValue(dr114);
    goto L566(dx145);
  L570():
    goto L77(r398);
  L576():
    c105 = `is.object`(l79);
    if c105 then L578() else L579(r405, l79);
  D147():
    deopt 567 [rdf10];
  L509():
    rdf11 = force? rdf10;
    checkMissing(rdf11);
    c91 = ldf c in base;
    r351 = dyn c91(r349, r350, rdf11);
    check L510() else D148();
  L577(dx150):
    st ans = dx150;
    symbolic_cor1 = ld `symbolic.cor`;
    check L581() else D164();
  L578():
    dr118 = tryDispatchBuiltin.0("$<-", l79, r408);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L580() else L579(r405, dr118);
  L579(r410, l81):
    r413 = `$<-`(l81, <sym correlation>, r408);
    goto L577(r413);
  D148():
    deopt 571 [r351];
  D164():
    deopt 641 [symbolic_cor1];
  L510():
    goto L71(r351);
  L580():
    dx149 = getTryDispatchBuiltinValue(dr118);
    goto L577(dx149);
  L581():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    l82 = ld ans;
    c106 = `is.object`(l82);
    if c106 then L583() else L584(symbolic_cor2, l82);
  L582(symbolic_cor6, dx152):
    st ans = dx152;
    goto L78();
  L583():
    dr120 = tryDispatchBuiltin.0("$<-", l82, symbolic_cor2);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L585() else L584(symbolic_cor2, dr120);
  L584(symbolic_cor4, l84):
    r414 = `$<-`(l84, <sym symbolic.cor>, symbolic_cor2);
    goto L582(symbolic_cor4, r414);
  L585():
    dx151 = getTryDispatchBuiltinValue(dr120);
    goto L582(symbolic_cor2, dx151);
  }
}