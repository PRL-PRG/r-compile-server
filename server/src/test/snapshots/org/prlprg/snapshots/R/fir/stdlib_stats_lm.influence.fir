fun main() {
  () -+> V { reg r:cls, reg summary:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg LifeCycleSavings:*, reg LifeCycleSavings1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg __1:cls, reg r7:V, reg r8:cls, reg lm_influence:cls, reg lm_SR:*, reg lm_SR1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg qr:cls, reg lm_SR2:*, reg lm_SR3:V, reg p5:p(V +), reg r14:V, reg qr_influence:cls, reg qRes:*, reg qRes1:V, reg p6:p(V +), reg residuals:cls, reg lm_SR4:*, reg lm_SR5:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg r20:cls, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg strip:cls, reg qrI:*, reg qrI1:V, reg p9:p(V +), reg r24:V, reg strip1:cls, reg lmI:*, reg lmI1:V, reg c:L, reg lmI3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg lmI6:V, reg r26:V, reg c1:cls, reg r27:V, reg __2:cls, reg r28:V, reg p10:p(V +), reg r30:V, reg identical:cls, reg r31:V, reg p11:p(V +), reg r33:V |
    mkenv;
    r = clos inner2682207636;
    st `lm.influence` = r;
    summary = ldf summary;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      lm = ldf lm;
      p = prom<V +>{
        __ = ldf `~` in base;
        r1 = dyn __(<sym sr>, <lang `+`(`+`(`+`(pop15, pop75), dpi), ddpi)>);
        return r1;
      };
      p1 = prom<V +>{
        LifeCycleSavings = ld LifeCycleSavings;
        LifeCycleSavings1 = force? LifeCycleSavings;
        checkMissing(LifeCycleSavings1);
        return LifeCycleSavings1;
      };
      r4 = dyn lm[, data](p, p1);
      st `lm.SR` = r4;
      invisible.0();
      return r4;
    };
    r6 = dyn summary[, correlation](p2, TRUE);
    check L1() else D1();
  D1():
    deopt 8 [r6];
  L1():
    __1 = ldf `::`;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    r7 = dyn __1("utils", "str");
    check L3() else D3();
  D3():
    deopt 13 [r7];
  L3():
    checkFun.0(r7);
    r8 = r7 as cls;
    p4 = prom<V +>{
      lm_influence = ldf `lm.influence`;
      p3 = prom<V +>{
        lm_SR = ld `lm.SR`;
        lm_SR1 = force? lm_SR;
        checkMissing(lm_SR1);
        return lm_SR1;
      };
      r10 = dyn lm_influence(p3);
      st lmI = r10;
      invisible.0();
      return r10;
    };
    r12 = dyn r8(p4);
    check L4() else D4();
  D4():
    deopt 16 [r12];
  L4():
    qr = ldf qr;
    check L5() else D5();
  D5():
    deopt 18 [];
  L5():
    p5 = prom<V +>{
      lm_SR2 = ld `lm.SR`;
      lm_SR3 = force? lm_SR2;
      checkMissing(lm_SR3);
      return lm_SR3;
    };
    r14 = dyn qr(p5);
    check L6() else D6();
  D6():
    deopt 20 [r14];
  L6():
    st qRes = r14;
    qr_influence = ldf `qr.influence`;
    check L7() else D7();
  D7():
    deopt 23 [];
  L7():
    p6 = prom<V +>{
      qRes = ld qRes;
      qRes1 = force? qRes;
      checkMissing(qRes1);
      return qRes1;
    };
    p8 = prom<V +>{
      residuals = ldf residuals;
      p7 = prom<V +>{
        lm_SR4 = ld `lm.SR`;
        lm_SR5 = force? lm_SR4;
        checkMissing(lm_SR5);
        return lm_SR5;
      };
      r17 = dyn residuals(p7);
      return r17;
    };
    r19 = dyn qr_influence(p6, p8);
    check L8() else D8();
  D8():
    deopt 26 [r19];
  L8():
    st qrI = r19;
    r20 = clos inner2501545716;
    st strip = r20;
    stopifnot = ldf stopifnot;
    check L9() else D9();
  D9():
    deopt 32 [];
  L9():
    p11 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r22):
      return r22;
    L1():
      strip = ldf strip;
      p9 = prom<V +>{
        qrI = ld qrI;
        qrI1 = force? qrI;
        checkMissing(qrI1);
        return qrI1;
      };
      r24 = dyn strip(p9);
      strip1 = ldf strip;
      p10 = prom<V +>{
        lmI = ld lmI;
        lmI1 = force? lmI;
        checkMissing(lmI1);
        c = `is.object`(lmI1);
        if c then L2() else L3(lmI1);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", lmI1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(lmI3):
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L5() else L6();
      L1(lmI6, r26):
        __2 = ldf `[` in base;
        r28 = dyn __2(lmI6, r26);
        goto L0(r28);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        c1 = ldf c in base;
        r27 = dyn c1("hat", "sigma");
        goto L1(lmI3, r27);
      L6():
        r25 = dyn base1("hat", "sigma");
        goto L1(lmI3, r25);
      };
      r30 = dyn strip1(p10);
      identical = ldf identical in base;
      r31 = dyn identical(r24, r30, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r31);
    L2():
      r21 = dyn base(<lang strip(qrI)>, <lang strip(`[`(lmI, c("hat", "sigma")))>);
      goto L0(r21);
    };
    r33 = dyn stopifnot(p11);
    check L10() else D10();
  D10():
    deopt 34 [r33];
  L10():
    popenv;
    return r33;
  }
}
fun inner2682207636(model, `do.coef`) {
  (reg model:*, reg do_coef:*) -+> V { var model:*, var `do.coef`:*, reg do_coef_isMissing:L, reg do_coef_orDefault:*, reg weighted_residuals:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg na_omit:cls, reg wt_res:*, reg wt_res1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg e:*, reg e1:V, reg is_matrix:cls, reg r6:V, reg model3:*, reg model4:V, reg c:L, reg model6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg r8:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg wt_res2:*, reg wt_res3:V, reg length:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg deviance:cls, reg model7:*, reg model8:V, reg p2:p(V +), reg r15:V, reg df_residual:cls, reg model9:*, reg model10:V, reg p3:p(V +), reg r17:V, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg rep:cls, reg r24:V, reg matrix:cls, reg n:*, reg n1:V, reg p4:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg rep1:cls, reg r29:V, reg list:cls, reg r30:V, reg l:*, reg c2:L, reg r33:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:R, reg l5:*, reg r42:R, reg r43:V, reg e2:*, reg e3:V, reg abs:cls, reg r44:V, reg _Machine:*, reg _Machine1:V, reg c3:L, reg r49:R, reg l7:*, reg r50:R, reg r51:V, reg r52:R, reg _Machine3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r57:R, reg l9:*, reg r58:R, reg r59:V, reg r60:R, reg dx5:V, reg r61:V, reg r62:V, reg median:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg e4:*, reg e5:V, reg abs1:cls, reg r65:V, reg p5:p(V +), reg r67:V, reg r68:V, reg r69:V, reg ___:cls, reg r70:V, reg qr_lm:cls, reg model11:*, reg model12:V, reg p6:p(V +), reg r72:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg nrow:cls, reg mqr:*, reg mqr1:V, reg c4:L, reg mqr3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r75:V, reg p7:p(V +), reg r77:V, reg as_integer:cls, reg r78:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg n2:*, reg n3:V, reg is_na:cls, reg r81:V, reg c5:L, reg stop:cls, reg r82:V, reg NROW:cls, reg e6:*, reg e7:V, reg p8:p(V +), reg r85:V, reg n4:*, reg n5:V, reg r86:V, reg c6:L, reg stop1:cls, reg r87:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg do_coef1:*, reg do_coef2:V, reg as_logical:cls, reg r91:V, reg _Machine4:*, reg _Machine5:V, reg c7:L, reg r93:R, reg _Machine7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r95:R, reg dx9:V, reg r96:V, reg r97:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r98:V, reg r99:V, reg C_influence:*, reg C_influence1:V, reg mqr4:*, reg mqr5:V, reg e8:*, reg e9:V, reg tol:*, reg tol1:V, reg vargs:dots, reg r100:V, reg do_coef3:*, reg do_coef4:V, reg c8:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r101:V, reg r102:V, reg mqr6:*, reg mqr7:V, reg c9:L, reg mqr9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r103:V, reg r104:I, reg qr_Q:cls, reg mqr10:*, reg mqr11:V, reg p9:p(V +), reg r106:V, reg c10:L, reg r108:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ok:*, reg ok1:V, reg __:cls, reg r109:V, reg qr_R:cls, reg mqr12:*, reg mqr13:V, reg p10:p(V +), reg r111:V, reg c11:L, reg r113:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ok2:*, reg ok3:V, reg ok4:*, reg ok5:V, reg __1:cls, reg r114:V, reg res:*, reg res1:V, reg c12:L, reg res3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r115:V, reg t:cls, reg backsolve:cls, reg R:*, reg R1:V, reg p11:p(V +), reg t1:cls, reg Q:*, reg Q1:V, reg p12:p(V +), reg r118:V, reg p13:p(V +), reg r120:V, reg p14:p(V +), reg r122:V, reg NCOL:cls, reg Q2:*, reg Q3:V, reg p15:p(V +), reg r124:V, reg NCOL1:cls, reg e10:*, reg e11:V, reg p16:p(V +), reg r126:V, reg is_mlm:*, reg is_mlm1:V, reg c13:L, reg array:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r127:V, reg r128:V, reg n6:*, reg n7:V, reg k:*, reg k1:V, reg q:*, reg q1:V, reg c14:cls, reg r129:V, reg p17:p(V +), reg r131:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r132:V, reg r133:V, reg q2:*, reg q3:V, reg r134:I, reg s:V, reg l10:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg invRQtt:*, reg invRQtt1:V, reg ifelse:cls, reg hat:*, reg hat1:V, reg r135:V, reg p18:p(V +), reg e12:*, reg e13:V, reg c16:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg j:*, reg j1:V, reg __2:cls, reg r137:V, reg hat2:*, reg hat3:V, reg r138:V, reg r139:V, reg p19:p(V +), reg r141:V, reg r142:V, reg l11:*, reg c17:L, reg i6:I, reg r144:V, reg l13:*, reg dr20:V, reg dc10:L, reg dx20:V, reg i8:I, reg dx21:V, reg j2:*, reg j3:V, reg ___1:cls, reg r147:V, reg cf:*, reg cf1:V, reg cf2:V, reg invRQtt2:*, reg invRQtt3:V, reg ifelse1:cls, reg hat4:*, reg hat5:V, reg r148:V, reg p20:p(V +), reg e16:*, reg e17:V, reg hat6:*, reg hat7:V, reg r150:V, reg r151:V, reg p21:p(V +), reg r153:V, reg r154:V, reg l14:*, reg c18:L, reg cf4:V, reg l16:*, reg dr22:V, reg dc11:L, reg dx22:V, reg cf6:V, reg dx23:V, reg r155:V, reg r156:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r157:V, reg r158:V, reg model13:*, reg model14:V, reg c19:L, reg model16:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r159:V, reg c20:V, reg c21:L, reg is_mlm2:*, reg is_mlm3:V, reg r160:V, reg c22:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r161:V, reg r162:V, reg res4:*, reg res5:V, reg c23:L, reg res7:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r163:V, reg drop:cls, reg r164:V, reg l17:*, reg c24:L, reg r166:V, reg l19:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r169:V, reg do_coef5:*, reg do_coef6:V, reg c25:L, reg drop1d:cls, reg res8:*, reg res9:V, reg c26:L, reg res11:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r170:V, reg p22:p(V +), reg r172:V, reg l20:*, reg c27:L, reg r174:V, reg l22:*, reg dr32:V, reg dc16:L, reg dx32:V, reg r176:V, reg dx33:V, reg r177:V, reg r178:V, reg r179:V, reg naresid:cls, reg model17:*, reg model18:V, reg c28:L, reg model20:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r180:V, reg p23:p(V +), reg res12:*, reg res13:V, reg c29:L, reg res15:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg r182:V, reg p24:p(V +), reg r184:V, reg l23:*, reg c30:L, reg r186:R, reg l25:*, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r193:V, reg r194:R, reg l28:*, reg r195:R, reg r196:V, reg hat8:*, reg hat9:V, reg is_na1:cls, reg r197:V, reg ___2:cls, reg r198:V, reg hat10:*, reg hat11:V, reg l29:*, reg c31:L, reg hat13:V, reg l31:*, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r199:V, reg do_coef7:*, reg do_coef8:V, reg c32:L, reg naresid1:cls, reg model21:*, reg model22:V, reg c33:L, reg model24:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg r200:V, reg p25:p(V +), reg res16:*, reg res17:V, reg c34:L, reg res19:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg r202:V, reg p26:p(V +), reg r204:V, reg l32:*, reg c35:L, reg r206:R, reg l34:*, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r213:V, reg r214:R, reg l37:*, reg r215:R, reg r216:V, reg coefficients:*, reg coefficients1:V, reg is_na2:cls, reg r217:V, reg ___3:cls, reg r218:V, reg is_mlm4:*, reg is_mlm5:V, reg c36:L, reg coefficients2:*, reg coefficients3:V, reg coefficients4:V, reg drop1d1:cls, reg coefficients5:*, reg coefficients6:V, reg p27:p(V +), reg r220:V, reg l38:*, reg c37:L, reg coefficients8:V, reg l40:*, reg dr48:V, reg dc24:L, reg dx48:V, reg coefficients10:V, reg dx49:V, reg r221:V, reg naresid2:cls, reg model25:*, reg model26:V, reg c38:L, reg model28:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg r222:V, reg p28:p(V +), reg res20:*, reg res21:V, reg c39:L, reg res23:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg r224:V, reg p29:p(V +), reg r226:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r227:V, reg r228:V, reg deviance1:cls, reg model29:*, reg model30:V, reg p30:p(V +), reg r230:V, reg df_residual1:cls, reg model31:*, reg model32:V, reg p31:p(V +), reg r232:V, reg r233:V, reg r234:V, reg l41:*, reg c40:L, reg r236:V, reg l43:*, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r243:V, reg r244:V, reg l46:*, reg r245:V, reg r246:V, reg sigma:*, reg sigma1:V, reg is_na3:cls, reg r247:V, reg ___4:cls, reg r248:V, reg is_mlm6:*, reg is_mlm7:V, reg c41:L, reg sigma2:*, reg sigma3:V, reg sigma4:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r249:V, reg sigma5:*, reg sigma6:V, reg drop1:cls, reg r250:V, reg l47:*, reg c42:L, reg sigma8:V, reg l49:*, reg dr56:V, reg dc28:L, reg dx56:V, reg sigma10:V, reg dx57:V, reg r251:V, reg naresid3:cls, reg model33:*, reg model34:V, reg c43:L, reg model36:V, reg dr58:V, reg dc29:L, reg dx58:V, reg dx59:V, reg r252:V, reg p32:p(V +), reg e18:*, reg e19:V, reg p33:p(V +), reg r255:V, reg l50:*, reg c44:L, reg r257:V, reg l52:*, reg dr60:V, reg dc30:L, reg dx60:V, reg dx61:V, reg r260:V, reg l53:*, reg c45:L, reg r263:R, reg l56:*, reg r264:R, reg l57:*, reg dr62:V, reg dc31:L, reg dx62:V, reg r267:R, reg l59:*, reg r268:R, reg dx63:V, reg r269:V, reg c46:L, reg r271:R, reg l61:*, reg dx65:V, reg dr64:V, reg dc32:L, reg dx66:V, reg r273:R, reg l63:*, reg dx67:V, reg res24:*, reg res25:V, reg c47:L, reg r276:R, reg l65:*, reg dx69:V, reg r277:R, reg res27:V, reg dr66:V, reg dc33:L, reg dx71:V, reg r280:R, reg l67:*, reg dx72:V, reg r281:R, reg dx73:V, reg r282:V, reg _Machine8:*, reg _Machine9:V, reg c48:L, reg r287:R, reg l69:*, reg dx76:V, reg r288:R, reg dx77:V, reg r289:R, reg r290:R, reg _Machine11:V, reg dr68:V, reg dc34:L, reg dx80:V, reg r295:R, reg l71:*, reg dx81:V, reg r296:R, reg dx82:V, reg r297:R, reg r298:R, reg dx83:V, reg r299:V, reg r300:V, reg r301:V, reg r302:V, reg ___5:cls, reg r303:V, reg c49:L, reg r305:R, reg l73:*, reg dr70:V, reg dc35:L, reg dx84:V, reg dx85:V, reg r308:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r309:V, reg r310:V, reg res28:*, reg res29:V, reg c50:L, reg res31:V, reg dr72:V, reg dc36:L, reg dx86:V, reg dx87:V, reg r311:V, reg names:cls, reg r312:V, reg l74:*, reg c51:L, reg r315:V, reg l77:*, reg r316:V, reg l78:*, reg dr74:V, reg dc37:L, reg dx88:V, reg r319:V, reg l80:*, reg r320:V, reg dx89:V, reg r321:V, reg names__:cls, reg r322:V, reg c52:L, reg r324:V, reg l82:*, reg dr76:V, reg dc38:L, reg dx90:V, reg r326:V, reg dx91:V, reg r327:V, reg l83:*, reg c53:L, reg r330:V, reg l86:*, reg r331:V, reg l87:*, reg dr78:V, reg dc39:L, reg dx92:V, reg r334:V, reg l89:*, reg r335:V, reg dx93:V, reg r336:V, reg names__1:cls, reg r337:V, reg c54:L, reg r339:V, reg l91:*, reg dr80:V, reg dc40:L, reg dx94:V, reg dx95:V, reg r342:V, reg do_coef9:*, reg do_coef10:V, reg c55:L, reg coef:cls, reg model37:*, reg model38:V, reg p34:p(V +), reg r344:V, reg is_mlm8:*, reg is_mlm9:V, reg c56:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r345:V, reg r346:V, reg res32:*, reg res33:V, reg c57:L, reg res35:V, reg dr82:V, reg dc41:L, reg dx96:V, reg dx97:V, reg r347:V, reg dimnames:cls, reg r348:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r349:V, reg r350:V, reg dnr:*, reg dnr1:V, reg c58:L, reg dnr3:V, reg dr84:V, reg dc42:L, reg dx98:V, reg dx99:V, reg __3:cls, reg r351:V, reg rownames:cls, reg cf8:*, reg cf9:V, reg p35:p(V +), reg r353:V, reg c59:L, reg r355:V, reg dr86:V, reg dc43:L, reg dx100:V, reg dx101:V, reg apply:cls, reg cf10:*, reg cf11:V, reg p36:p(V +), reg anyNA:*, reg anyNA1:V, reg p37:p(V +), reg r358:V, reg r359:V, reg __4:cls, reg r360:V, reg dnr4:*, reg dnr5:V, reg c60:L, reg dnr7:V, reg dr88:V, reg dc44:L, reg dx102:V, reg dx103:V, reg __5:cls, reg r361:V, reg list1:cls, reg r362:V, reg l92:*, reg c61:L, reg r365:V, reg l95:*, reg r366:V, reg l96:*, reg dr90:V, reg dc45:L, reg dx104:V, reg r369:V, reg l98:*, reg r370:V, reg dx105:V, reg r371:V, reg dimnames__:cls, reg r372:V, reg c62:L, reg r374:V, reg l100:*, reg dr92:V, reg dc46:L, reg dx106:V, reg r376:V, reg dx107:V, reg r377:V, reg r378:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r379:V, reg r380:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r381:V, reg r382:V, reg res36:*, reg res37:V, reg c63:L, reg res39:V, reg dr94:V, reg dc47:L, reg dx108:V, reg dx109:V, reg r383:V, reg names1:cls, reg r384:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r385:V, reg r386:V, reg cf12:*, reg cf13:V, reg names2:cls, reg r387:V, reg c64:L, reg r389:V, reg dr96:V, reg dc48:L, reg dx110:V, reg dx111:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r392:V, reg r393:V, reg r394:V, reg cf14:*, reg cf15:V, reg is_na4:cls, reg r395:V, reg r396:V, reg __6:cls, reg r397:V, reg list2:cls, reg r398:V, reg l101:*, reg c65:L, reg r401:V, reg l104:*, reg r402:V, reg l105:*, reg dr98:V, reg dc49:L, reg dx112:V, reg r405:V, reg l107:*, reg r406:V, reg dx113:V, reg r407:V, reg dimnames__1:cls, reg r408:V, reg c66:L, reg r410:V, reg l109:*, reg dr100:V, reg dc50:L, reg dx114:V, reg r412:V, reg dx115:V, reg r413:V, reg res40:*, reg res41:V, reg c67:L, reg res43:V, reg dr102:V, reg dc51:L, reg dx116:V, reg dx117:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r415:V, reg res46:V, reg r416:V, reg c68:cls, reg r417:V, reg __7:cls, reg r418:V |
    mkenv;
    st model = model;
    do_coef_isMissing = missing.0(do_coef);
    if do_coef_isMissing then L0(TRUE) else L0(do_coef);
  L0(do_coef_orDefault):
    st `do.coef` = do_coef_orDefault;
    weighted_residuals = ldf `weighted.residuals`;
    check L68() else D0();
  D0():
    deopt 1 [];
  L68():
    p = prom<V +>{
      model1 = ld model;
      model2 = force? model1;
      checkMissing(model2);
      return model2;
    };
    r1 = dyn weighted_residuals(p);
    check L69() else D1();
  D1():
    deopt 3 [r1];
  L69():
    st `wt.res` = r1;
    na_omit = ldf `na.omit`;
    check L70() else D2();
  D2():
    deopt 6 [];
  L70():
    p1 = prom<V +>{
      wt_res = ld `wt.res`;
      wt_res1 = force? wt_res;
      checkMissing(wt_res1);
      return wt_res1;
    };
    r3 = dyn na_omit(p1);
    check L71() else D3();
  D3():
    deopt 8 [r3];
  L71():
    st e = r3;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L72() else L73();
  L1(r5):
    st `is.mlm` = r5;
    model3 = ld model;
    check L76() else D6();
  L72():
    e = ld e;
    check L74() else D4();
  L73():
    r4 = dyn base(<sym e>);
    goto L1(r4);
  D4():
    deopt 12 [e];
  D6():
    deopt 17 [model3];
  L74():
    e1 = force? e;
    checkMissing(e1);
    is_matrix = ldf `is.matrix` in base;
    r6 = dyn is_matrix(e1);
    check L75() else D5();
  L76():
    model4 = force? model3;
    checkMissing(model4);
    c = `is.object`(model4);
    if c then L78() else L79(model4);
  D5():
    deopt 15 [r6];
  L75():
    goto L1(r6);
  L77(dx1):
    r8 = `==`(dx1, 0.0);
    c1 = `as.logical`(r8);
    if c1 then L81() else L2();
  L78():
    dr = tryDispatchBuiltin.1("$", model4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(dr);
  L79(model6):
    r7 = `$`(model6, <sym rank>);
    goto L77(r7);
  L2():
    l = ld e;
    c2 = `is.object`(l);
    if c2 then L102() else L103(0.0, l);
  L8():
    naresid3 = ldf naresid;
    check L307() else D103();
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L77(dx);
  L81():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L82() else L83();
  D103():
    deopt 364 [];
  L3(r10):
    st n = r10;
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L86() else L87();
  L9(dx3):
    st e = dx3;
    qr_lm = ldf `qr.lm`;
    check L116() else D21();
  L82():
    wt_res2 = ld `wt.res`;
    check L84() else D7();
  L83():
    r9 = dyn base1(<sym wt.res>);
    goto L3(r9);
  L102():
    dr2 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L104() else L103(0.0, dr2);
  L103(r33, l2):
    sym6 = ldf abs;
    base6 = ldf abs in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L307():
    p32 = prom<V +>{
      model33 = ld model;
      model34 = force? model33;
      checkMissing(model34);
      c43 = `is.object`(model34);
      if c43 then L1() else L2(model34);
    L0(dx59):
      return dx59;
    L1():
      dr58 = tryDispatchBuiltin.1("$", model34);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(model36):
      r252 = `$`(model36, <sym na.action>);
      goto L0(r252);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx58);
    };
    p33 = prom<V +>{
      e18 = ld e;
      e19 = force? e18;
      checkMissing(e19);
      return e19;
    };
    r255 = dyn naresid3(p32, p33);
    check L308() else D104();
  D7():
    deopt 24 [wt_res2];
  D21():
    deopt 81 [];
  D104():
    deopt 367 [r255];
  L4(r13):
    st sigma = r13;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L92() else L93();
  L10(r41, l5, r42, r43):
    _Machine = ld `.Machine`;
    check L109() else D18();
  L84():
    wt_res3 = force? wt_res2;
    checkMissing(wt_res3);
    length = ldf length in base;
    r11 = dyn length(wt_res3);
    check L85() else D8();
  L86():
    deviance = ldf deviance;
    check L88() else D9();
  L87():
    r12 = dyn base2(<lang `/`(deviance(model), df.residual(model))>);
    goto L4(r12);
  L104():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L105():
    e2 = ld e;
    check L107() else D16();
  L106():
    r40 = dyn base6(<sym e>);
    goto L10(r33, l2, 0.0, r40);
  L116():
    p6 = prom<V +>{
      model11 = ld model;
      model12 = force? model11;
      checkMissing(model12);
      return model12;
    };
    r72 = dyn qr_lm(p6);
    check L117() else D22();
  L308():
    l50 = ld res;
    c44 = `is.object`(l50);
    if c44 then L310() else L311(r255, l50);
  D8():
    deopt 27 [r11];
  D9():
    deopt 31 [];
  D16():
    deopt 65 [r33, l2, 0.0, e2];
  D18():
    deopt 69 [r41, l5, r42, r43, 100.0, _Machine];
  D22():
    deopt 83 [r72];
  L5(r21):
    st res = r21;
    goto L8();
  L85():
    goto L3(r11);
  L88():
    p2 = prom<V +>{
      model7 = ld model;
      model8 = force? model7;
      checkMissing(model8);
      return model8;
    };
    r15 = dyn deviance(p2);
    check L89() else D10();
  L92():
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L94() else L95();
  L93():
    r20 = dyn base3[hat, coefficients, sigma](<lang rep(0.0, n)>, <lang matrix(0.0, n, 0.0)>, <lang rep(sigma, n)>);
    goto L5(r20);
  L107():
    e3 = force? e2;
    checkMissing(e3);
    abs = ldf abs in base;
    r44 = dyn abs(e3);
    check L108() else D17();
  L109():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c3 = `is.object`(_Machine1);
    if c3 then L111() else L112(r41, l5, r42, r43, 100.0, _Machine1);
  L117():
    st mqr = r72;
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  L309(dx61):
    st res = dx61;
    l53 = ld res;
    c45 = `is.object`(l53);
    if c45 then L314() else L315(1.0, l53, 1.0, l53);
  L310():
    dr60 = tryDispatchBuiltin.0("$<-", l50, r255);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L312() else L311(r255, dr60);
  L311(r257, l52):
    r260 = `$<-`(l52, <sym wt.res>, r255);
    goto L309(r260);
  D10():
    deopt 33 [r15];
  D17():
    deopt 68 [r33, l2, 0.0, r44];
  L6(r23):
    matrix = ldf matrix;
    check L96() else D13();
  L11(r74):
    st n = r74;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L123() else L124();
  L89():
    df_residual = ldf `df.residual`;
    check L90() else D11();
  L94():
    rep = ldf rep in base;
    r24 = dyn rep(0.0, <sym n>);
    goto L6(r24);
  L95():
    r22 = dyn base4(0.0, <sym n>);
    goto L6(r22);
  L108():
    goto L10(r33, l2, 0.0, r44);
  L110(r57, l9, r58, r59, r60, dx5):
    r62 = `*`(r60, dx5);
    median = ldf median;
    check L114() else D19();
  L111():
    dr4 = tryDispatchBuiltin.1("$", _Machine1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L113() else L112(r41, l5, r42, r43, 100.0, dr4);
  L112(r49, l7, r50, r51, r52, _Machine3):
    r61 = `$`(_Machine3, <sym double.eps>);
    goto L110(r49, l7, r50, r51, r52, r61);
  L118():
    nrow = ldf nrow;
    check L120() else D23();
  L119():
    r73 = dyn base8(<lang nrow(`$`(mqr, qr))>);
    goto L11(r73);
  L312():
    dx60 = getTryDispatchBuiltinValue(dr60);
    goto L309(dx60);
  L313(r267, l59, r268, dx63):
    c46 = `is.object`(dx63);
    if c46 then L317() else L318(r267, l59, dx63);
  L314():
    dr62 = tryDispatchBuiltin.1("$", l53);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L316() else L315(1.0, l53, 1.0, dr62);
  L315(r263, l56, r264, l57):
    r269 = `$`(l57, <sym hat>);
    goto L313(r263, l56, r264, r269);
  D11():
    deopt 34 [r15];
  D13():
    deopt 47 [];
  D19():
    deopt 73 [r57, l9, r58, r59, r62];
  D23():
    deopt 88 [];
  L12(r80):
    c5 = `as.logical`(r80);
    if c5 then L127() else L13();
  L50(r273, l63, dx67):
    c49 = `is.object`(l63);
    if c49 then L331() else L332(r273, l63);
  L90():
    p3 = prom<V +>{
      model9 = ld model;
      model10 = force? model9;
      checkMissing(model10);
      return model10;
    };
    r17 = dyn df_residual(p3);
    check L91() else D12();
  L96():
    p4 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r26 = dyn matrix(0.0, p4, 0.0);
    check L97() else D14();
  L113():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L110(r41, l5, r42, r43, 100.0, dx4);
  L114():
    p5 = prom<V +>{
      sym7 = ldf abs;
      base7 = ldf abs in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      e4 = ld e;
      e5 = force? e4;
      checkMissing(e5);
      abs1 = ldf abs in base;
      r65 = dyn abs1(e5);
      goto L0(r65);
    L2():
      r63 = dyn base7(<sym e>);
      goto L0(r63);
    };
    r67 = dyn median(p5);
    check L115() else D20();
  L120():
    p7 = prom<V +>{
      mqr = ld mqr;
      mqr1 = force? mqr;
      checkMissing(mqr1);
      c4 = `is.object`(mqr1);
      if c4 then L1() else L2(mqr1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", mqr1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(mqr3):
      r75 = `$`(mqr3, <sym qr>);
      goto L0(r75);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r77 = dyn nrow(p7);
    check L121() else D24();
  L123():
    n2 = ld n;
    check L125() else D26();
  L124():
    r79 = dyn base9(<sym n>);
    goto L12(r79);
  L316():
    dx62 = getTryDispatchBuiltinValue(dr62);
    goto L313(1.0, l53, 1.0, dx62);
  L317():
    dr64 = tryDispatchBuiltin.0("[<-", dx63, r268);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L319() else L318(r267, l59, dr64);
  L318(r271, l61, dx65):
    res24 = ld res;
    check L320() else D105();
  D12():
    deopt 36 [r15, r17];
  D14():
    deopt 51 [r26];
  D20():
    deopt 75 [r57, l9, r58, r59, r62, r67];
  D24():
    deopt 90 [r77];
  D26():
    deopt 96 [n2];
  D105():
    deopt 377 [r271, l61, dx65, r268, res24];
  L13():
    goto L14();
  L14():
    NROW = ldf NROW;
    check L131() else D30();
  L91():
    r18 = `/`(r15, r17);
    r19 = sqrt(r18);
    goto L4(r19);
  L97():
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L98() else L99();
  L115():
    r68 = `*`(r62, r67);
    r69 = `<`(r59, r68);
    ___ = ldf `[<-` in base;
    r70 = dyn ___(l9, r58, r69);
    goto L9(r70);
  L121():
    as_integer = ldf `as.integer` in base;
    r78 = dyn as_integer(r77);
    check L122() else D25();
  L125():
    n3 = force? n2;
    checkMissing(n3);
    is_na = ldf `is.na` in base;
    r81 = dyn is_na(n3);
    check L126() else D27();
  L127():
    stop = ldf stop;
    check L128() else D28();
  L319():
    dx66 = getTryDispatchBuiltinValue(dr64);
    goto L50(r267, l59, dx66);
  L320():
    res25 = force? res24;
    checkMissing(res25);
    c47 = `is.object`(res25);
    if c47 then L322() else L323(r271, l61, dx65, r268, res25);
  L330(dx85):
    st res = dx85;
    sym22 = ldf names;
    base22 = ldf names in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L334() else L335();
  L331():
    dr70 = tryDispatchBuiltin.0("$<-", l63, dx67);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L333() else L332(r273, dr70);
  L332(r305, l73):
    r308 = `$<-`(l73, <sym hat>, dx67);
    goto L330(r308);
  D25():
    deopt 92 [r78];
  D27():
    deopt 99 [r81];
  D28():
    deopt 101 [];
  D30():
    deopt 107 [];
  L7(r28):
    list = ldf list in base;
    r30 = dyn list(r23, r26, r28);
    check L100() else D15();
  L51(r310):
    l74 = ld res;
    c51 = `is.object`(l74);
    if c51 then L343() else L344(r310, l74, r310, l74);
  L98():
    rep1 = ldf rep in base;
    r29 = dyn rep1(<sym sigma>, <sym n>);
    goto L7(r29);
  L99():
    r27 = dyn base5(<sym sigma>, <sym n>);
    goto L7(r27);
  L122():
    goto L11(r78);
  L126():
    goto L12(r81);
  L128():
    r82 = dyn stop("invalid model QR matrix");
    check L129() else D29();
  L131():
    p8 = prom<V +>{
      e6 = ld e;
      e7 = force? e6;
      checkMissing(e7);
      return e7;
    };
    r85 = dyn NROW(p8);
    check L132() else D31();
  L321(r280, l67, dx72, r281, dx73):
    _Machine8 = ld `.Machine`;
    check L325() else D106();
  L322():
    dr66 = tryDispatchBuiltin.1("$", res25);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L324() else L323(r271, l61, dx65, r268, dr66);
  L323(r276, l65, dx69, r277, res27):
    r282 = `$`(res27, <sym hat>);
    goto L321(r276, l65, dx69, r277, r282);
  L333():
    dx84 = getTryDispatchBuiltinValue(dr70);
    goto L330(dx84);
  L334():
    res28 = ld res;
    check L336() else D107();
  L335():
    r309 = dyn base22(<lang `$`(res, wt.res)>);
    goto L51(r309);
  D15():
    deopt 58 [r30];
  D29():
    deopt 103 [r82];
  D31():
    deopt 109 [r85];
  D106():
    deopt 381 [r280, l67, dx72, r281, dx73, 1.0, 10.0, _Machine8];
  D107():
    deopt 392 [res28];
  L100():
    goto L5(r30);
  L129():
    goto L14();
  L132():
    n4 = ld n;
    check L133() else D32();
  L324():
    dx71 = getTryDispatchBuiltinValue(dr66);
    goto L321(r271, l61, dx65, r268, dx71);
  L325():
    _Machine9 = force? _Machine8;
    checkMissing(_Machine9);
    c48 = `is.object`(_Machine9);
    if c48 then L327() else L328(r280, l67, dx72, r281, dx73, 1.0, 10.0, _Machine9);
  L336():
    res29 = force? res28;
    checkMissing(res29);
    c50 = `is.object`(res29);
    if c50 then L338() else L339(res29);
  L342(r319, l80, r320, dx89):
    names__ = ldf `names<-`;
    check L346() else D109();
  L343():
    dr74 = tryDispatchBuiltin.1("$", l74);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L345() else L344(r310, l74, r310, dr74);
  L344(r315, l77, r316, l78):
    r321 = `$`(l78, <sym sigma>);
    goto L342(r315, l77, r316, r321);
  D32():
    deopt 109 [r85, n4];
  D109():
    deopt 401 [r319, l80, dx89, r320];
  L133():
    n5 = force? n4;
    checkMissing(n5);
    r86 = `!=`(r85, n5);
    c6 = `as.logical`(r86);
    if c6 then L134() else L15();
  L326(r295, l71, dx81, r296, dx82, r297, r298, dx83):
    r300 = `*`(r298, dx83);
    r301 = `-`(r297, r300);
    r302 = `>`(dx82, r301);
    ___5 = ldf `[<-` in base;
    r303 = dyn ___5(dx81, r296, r302);
    goto L50(r295, l71, r303);
  L327():
    dr68 = tryDispatchBuiltin.1("$", _Machine9);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L329() else L328(r280, l67, dx72, r281, dx73, 1.0, 10.0, dr68);
  L328(r287, l69, dx76, r288, dx77, r289, r290, _Machine11):
    r299 = `$`(_Machine11, <sym double.eps>);
    goto L326(r287, l69, dx76, r288, dx77, r289, r290, r299);
  L337(dx87):
    names = ldf names in base;
    r312 = dyn names(dx87);
    check L341() else D108();
  L338():
    dr72 = tryDispatchBuiltin.1("$", res29);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L340() else L339(dr72);
  L339(res31):
    r311 = `$`(res31, <sym wt.res>);
    goto L337(r311);
  L345():
    dx88 = getTryDispatchBuiltinValue(dr74);
    goto L342(r310, l74, r310, dx88);
  L346():
    r322 = dyn names__(dx89, NULL, r320);
    check L347() else D110();
  D108():
    deopt 396 [r312];
  D110():
    deopt 403 [r319, l80, r322];
  L15():
    goto L16();
  L16():
    sym10 = ldf `as.logical`;
    base10 = ldf `as.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L138() else L139();
  L134():
    stop1 = ldf stop;
    check L135() else D33();
  L329():
    dx80 = getTryDispatchBuiltinValue(dr68);
    goto L326(r280, l67, dx72, r281, dx73, 1.0, 10.0, dx80);
  L340():
    dx86 = getTryDispatchBuiltinValue(dr72);
    goto L337(dx86);
  L341():
    goto L51(r312);
  L347():
    c52 = `is.object`(l80);
    if c52 then L349() else L350(r319, l80);
  D33():
    deopt 113 [];
  L17(r90):
    st `do.coef` = r90;
    _Machine4 = ld `.Machine`;
    check L142() else D37();
  L135():
    r87 = dyn stop1("non-NA residual length does not match cases used in fitting");
    check L136() else D34();
  L138():
    do_coef1 = ld `do.coef`;
    check L140() else D35();
  L139():
    r89 = dyn base10(<sym do.coef>);
    goto L17(r89);
  L348(r326, dx91):
    st res = dx91;
    l83 = ld res;
    c53 = `is.object`(l83);
    if c53 then L353() else L354(r326, l83, r326, l83);
  L349():
    dr76 = tryDispatchBuiltin.0("$<-", l80, r322);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L351() else L350(r319, dr76);
  L350(r324, l82):
    r327 = `$<-`(l82, <sym sigma>, r322);
    goto L348(r324, r327);
  D34():
    deopt 115 [r87];
  D35():
    deopt 120 [do_coef1];
  D37():
    deopt 126 [10.0, _Machine4];
  L136():
    goto L16();
  L140():
    do_coef2 = force? do_coef1;
    checkMissing(do_coef2);
    as_logical = ldf `as.logical` in base;
    r91 = dyn as_logical(do_coef2);
    check L141() else D36();
  L142():
    _Machine5 = force? _Machine4;
    checkMissing(_Machine5);
    c7 = `is.object`(_Machine5);
    if c7 then L144() else L145(10.0, _Machine5);
  L351():
    dx90 = getTryDispatchBuiltinValue(dr76);
    goto L348(r319, dx90);
  L352(r334, l89, r335, dx93):
    names__1 = ldf `names<-`;
    check L356() else D111();
  L353():
    dr78 = tryDispatchBuiltin.1("$", l83);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L355() else L354(r326, l83, r326, dr78);
  L354(r330, l86, r331, l87):
    r336 = `$`(l87, <sym hat>);
    goto L352(r330, l86, r331, r336);
  D36():
    deopt 123 [r91];
  D111():
    deopt 410 [r334, l89, dx93, r335];
  L141():
    goto L17(r91);
  L143(r95, dx9):
    r97 = `*`(r95, dx9);
    st tol = r97;
    sym11 = ldf `.Call`;
    base11 = ldf `.Call` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L147() else L148();
  L144():
    dr8 = tryDispatchBuiltin.1("$", _Machine5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L146() else L145(10.0, dr8);
  L145(r93, _Machine7):
    r96 = `$`(_Machine7, <sym double.eps>);
    goto L143(r93, r96);
  L355():
    dx92 = getTryDispatchBuiltinValue(dr78);
    goto L352(r326, l83, r326, dx92);
  L356():
    r337 = dyn names__1(dx93, NULL, r335);
    check L357() else D112();
  D112():
    deopt 412 [r334, l89, r337];
  L18(r99):
    st res = r99;
    do_coef3 = ld `do.coef`;
    check L153() else D42();
  L146():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L143(10.0, dx8);
  L147():
    C_influence = ld C_influence;
    check L149() else D38();
  L148():
    r98 = dyn base11(<sym C_influence>, <sym mqr>, <sym e>, <sym tol>);
    goto L18(r98);
  L357():
    c54 = `is.object`(l89);
    if c54 then L359() else L360(r334, l89);
  D38():
    deopt 132 [C_influence];
  D42():
    deopt 139 [do_coef3];
  L149():
    C_influence1 = force? C_influence;
    checkMissing(C_influence1);
    mqr4 = ld mqr;
    check L150() else D39();
  L153():
    do_coef4 = force? do_coef3;
    checkMissing(do_coef4);
    c8 = `as.logical`(do_coef4);
    if c8 then L154() else L19();
  L358(dx95):
    st res = dx95;
    do_coef9 = ld `do.coef`;
    check L362() else D113();
  L359():
    dr80 = tryDispatchBuiltin.0("$<-", l89, r337);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L361() else L360(r334, dr80);
  L360(r339, l91):
    r342 = `$<-`(l91, <sym hat>, r337);
    goto L358(r342);
  D39():
    deopt 133 [C_influence1, mqr4];
  D113():
    deopt 415 [do_coef9];
  L19():
    goto L29();
  L29():
    r156 = clos inner119611165;
    st drop1d = r156;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L211() else L212();
  L150():
    mqr5 = force? mqr4;
    checkMissing(mqr5);
    e8 = ld e;
    check L151() else D40();
  L154():
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L155() else L156();
  L361():
    dx94 = getTryDispatchBuiltinValue(dr80);
    goto L358(dx94);
  L362():
    do_coef10 = force? do_coef9;
    checkMissing(do_coef10);
    c55 = `as.logical`(do_coef10);
    if c55 then L363() else L52();
  D40():
    deopt 134 [C_influence1, mqr5, e8];
  L20(r102):
    st ok = r102;
    qr_Q = ldf `qr.Q`;
    check L162() else D44();
  L30(r158):
    c21 = `as.logical`(r158);
    if c21 then L218() else L31();
  L52():
    goto L65();
  L65():
    res40 = ld res;
    check L438() else D137();
  L151():
    e9 = force? e8;
    checkMissing(e9);
    tol = ld tol;
    check L152() else D41();
  L155():
    mqr6 = ld mqr;
    check L157() else D43();
  L156():
    r101 = dyn base12(<lang `$`(mqr, rank)>);
    goto L20(r101);
  L211():
    model13 = ld model;
    check L213() else D70();
  L212():
    r157 = dyn base15(<lang `$`(model, na.action)>);
    goto L30(r157);
  L363():
    coef = ldf coef;
    check L364() else D114();
  D41():
    deopt 135 [C_influence1, mqr5, e9, tol];
  D43():
    deopt 142 [mqr6];
  D44():
    deopt 148 [];
  D70():
    deopt 241 [model13];
  D114():
    deopt 418 [];
  D137():
    deopt 503 [res40];
  L31():
    naresid = ldf naresid;
    check L244() else D77();
  L152():
    tol1 = force? tol;
    checkMissing(tol1);
    vargs = dots[mqr5, e9, tol1];
    r100 = `.Call`(C_influence1, vargs, <missing>);
    goto L18(r100);
  L157():
    mqr7 = force? mqr6;
    checkMissing(mqr7);
    c9 = `is.object`(mqr7);
    if c9 then L159() else L160(mqr7);
  L162():
    p9 = prom<V +>{
      mqr10 = ld mqr;
      mqr11 = force? mqr10;
      checkMissing(mqr11);
      return mqr11;
    };
    r106 = dyn qr_Q(p9);
    check L163() else D45();
  L213():
    model14 = force? model13;
    checkMissing(model14);
    c19 = `is.object`(model14);
    if c19 then L215() else L216(model14);
  L218():
    is_mlm2 = ld `is.mlm`;
    check L219() else D71();
  L364():
    p34 = prom<V +>{
      model37 = ld model;
      model38 = force? model37;
      checkMissing(model38);
      return model38;
    };
    r344 = dyn coef(p34);
    check L365() else D115();
  L438():
    res41 = force? res40;
    checkMissing(res41);
    c67 = `is.object`(res41);
    if c67 then L439() else L440(res41);
  D45():
    deopt 150 [r106];
  D71():
    deopt 245 [is_mlm2];
  D77():
    deopt 272 [];
  D115():
    deopt 420 [r344];
  L66(dx117):
    popenv;
    return dx117;
  L158(dx11):
    r104 = seq_len(dx11);
    goto L20(r104);
  L159():
    dr10 = tryDispatchBuiltin.1("$", mqr7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L161() else L160(dr10);
  L160(mqr9):
    r103 = `$`(mqr9, <sym rank>);
    goto L158(r103);
  L163():
    c10 = `is.object`(r106);
    if c10 then L164() else L165(r106);
  L214(dx25):
    c20 = `==`(dx25, NULL);
    goto L30(c20);
  L215():
    dr24 = tryDispatchBuiltin.1("$", model14);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L217() else L216(dr24);
  L216(model16):
    r159 = `$`(model16, <sym na.action>);
    goto L214(r159);
  L219():
    is_mlm3 = force? is_mlm2;
    checkMissing(is_mlm3);
    r160 = `!`(is_mlm3);
    c22 = `as.logical`(r160);
    if c22 then L220() else L32();
  L244():
    p23 = prom<V +>{
      model17 = ld model;
      model18 = force? model17;
      checkMissing(model18);
      c28 = `is.object`(model18);
      if c28 then L1() else L2(model18);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("$", model18);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(model20):
      r180 = `$`(model20, <sym na.action>);
      goto L0(r180);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    p24 = prom<V +>{
      res12 = ld res;
      res13 = force? res12;
      checkMissing(res13);
      c29 = `is.object`(res13);
      if c29 then L1() else L2(res13);
    L0(dx37):
      return dx37;
    L1():
      dr36 = tryDispatchBuiltin.1("$", res13);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(res15):
      r182 = `$`(res15, <sym hat>);
      goto L0(r182);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    };
    r184 = dyn naresid(p23, p24);
    check L245() else D78();
  L365():
    st cf = r344;
    is_mlm8 = ld `is.mlm`;
    check L366() else D116();
  L439():
    dr102 = tryDispatchBuiltin.1("[", res41);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L441() else L440(dr102);
  L440(res43):
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L442() else L443();
  D78():
    deopt 275 [r184];
  D116():
    deopt 422 [is_mlm8];
  L21(dx13):
    st Q = dx13;
    qr_R = ldf `qr.R`;
    check L168() else D47();
  L32():
    goto L36(NULL);
  L36(r179):
    goto L8();
  L67(res46, r416):
    __7 = ldf `[` in base;
    r418 = dyn __7(res46, r416);
    goto L66(r418);
  L161():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L158(dx10);
  L164():
    dr12 = tryDispatchBuiltin.1("[", r106);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L166() else L165(dr12);
  L165(r108):
    ok = ld ok;
    check L167() else D46();
  L217():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L214(dx24);
  L220():
    sym16 = ldf drop;
    base16 = ldf drop in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L221() else L222();
  L245():
    st hat = r184;
    l23 = ld hat;
    c30 = `is.object`(l23);
    if c30 then L246() else L247(0.0, l23);
  L366():
    is_mlm9 = force? is_mlm8;
    checkMissing(is_mlm9);
    c56 = `as.logical`(is_mlm9);
    if c56 then L367() else L53();
  L441():
    dx116 = getTryDispatchBuiltinValue(dr102);
    goto L66(dx116);
  L442():
    c68 = ldf c in base;
    r417 = dyn c68("hat", "coefficients", "sigma", "wt.res");
    check L444() else D138();
  L443():
    r415 = dyn base29("hat", "coefficients", "sigma", "wt.res");
    goto L67(res43, r415);
  D46():
    deopt 152 [r108, ok];
  D47():
    deopt 160 [];
  D138():
    deopt 512 [res43, r417];
  L33(r162):
    l17 = ld res;
    c24 = `is.object`(l17);
    if c24 then L230() else L231(r162, l17);
  L37(dx39):
    st hat = dx39;
    hat10 = ld hat;
    check L253() else D81();
  L53():
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L405() else L406();
  L59(r378):
    goto L65();
  L166():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx12);
  L167():
    ok1 = force? ok;
    __ = ldf `[` in base;
    r109 = dyn __(r106, <missing>, ok1, FALSE);
    goto L21(r109);
  L168():
    p10 = prom<V +>{
      mqr12 = ld mqr;
      mqr13 = force? mqr12;
      checkMissing(mqr13);
      return mqr13;
    };
    r111 = dyn qr_R(p10);
    check L169() else D48();
  L221():
    res4 = ld res;
    check L223() else D72();
  L222():
    r161 = dyn base16(<lang `$`(res, sigma)>);
    goto L33(r161);
  L246():
    dr38 = tryDispatchBuiltin.0("[<-", l23, 0.0);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L248() else L247(0.0, dr38);
  L247(r186, l25):
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L249() else L250();
  L367():
    sym23 = ldf dimnames;
    base23 = ldf dimnames in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L368() else L369();
  L444():
    goto L67(res43, r417);
  D48():
    deopt 162 [r111];
  D72():
    deopt 250 [res4];
  D81():
    deopt 288 [hat10];
  L38(r194, l28, r195, r196):
    ___2 = ldf `[<-` in base;
    r198 = dyn ___2(l28, r195, r196);
    goto L37(r198);
  L54(r346):
    st dnr = r346;
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L376() else L377();
  L60(r380):
    l101 = ld res;
    c65 = `is.object`(l101);
    if c65 then L428() else L429(r380, l101, r380, l101);
  L169():
    c11 = `is.object`(r111);
    if c11 then L170() else L171(r111);
  L223():
    res5 = force? res4;
    checkMissing(res5);
    c23 = `is.object`(res5);
    if c23 then L225() else L226(res5);
  L229(dx29):
    st res = dx29;
    do_coef5 = ld `do.coef`;
    check L233() else D74();
  L230():
    dr28 = tryDispatchBuiltin.0("$<-", l17, r162);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L232() else L231(r162, dr28);
  L231(r166, l19):
    r169 = `$<-`(l19, <sym sigma>, r162);
    goto L229(r169);
  L248():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L37(dx38);
  L249():
    hat8 = ld hat;
    check L251() else D79();
  L250():
    r193 = dyn base17(<sym hat>);
    goto L38(r186, l25, 0.0, r193);
  L253():
    hat11 = force? hat10;
    checkMissing(hat11);
    l29 = ld res;
    c31 = `is.object`(l29);
    if c31 then L255() else L256(hat11, l29);
  L368():
    res32 = ld res;
    check L370() else D117();
  L369():
    r345 = dyn base23(<lang `$`(res, wt.res)>);
    goto L54(r345);
  L405():
    sym26 = ldf names;
    base26 = ldf names in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L407() else L408();
  L406():
    r379 = dyn base25(<lang names(`$`(res, wt.res))>, <lang `[`(names(cf), `!`(is.na(cf)))>);
    goto L60(r379);
  D74():
    deopt 258 [do_coef5];
  D79():
    deopt 282 [r186, l25, 0.0, hat8];
  D117():
    deopt 426 [res32];
  L22(dx15):
    st R = dx15;
    res = ld res;
    check L175() else D51();
  L55(r350):
    l92 = ld res;
    c61 = `is.object`(l92);
    if c61 then L395() else L396(r350, l92, r350, l92);
  L61(r382):
    sym27 = ldf names;
    base27 = ldf names in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L415() else L416();
  L170():
    dr14 = tryDispatchBuiltin.1("[", r111);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L172() else L171(dr14);
  L171(r113):
    ok2 = ld ok;
    check L173() else D49();
  L224(dx27):
    drop = ldf drop in base;
    r164 = dyn drop(dx27);
    check L228() else D73();
  L225():
    dr26 = tryDispatchBuiltin.1("$", res5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L227() else L226(dr26);
  L226(res7):
    r163 = `$`(res7, <sym sigma>);
    goto L224(r163);
  L232():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L229(dx28);
  L233():
    do_coef6 = force? do_coef5;
    checkMissing(do_coef6);
    c25 = `as.logical`(do_coef6);
    if c25 then L234() else L34();
  L251():
    hat9 = force? hat8;
    checkMissing(hat9);
    is_na1 = ldf `is.na` in base;
    r197 = dyn is_na1(hat9);
    check L252() else D80();
  L254(dx41):
    st res = dx41;
    do_coef7 = ld `do.coef`;
    check L258() else D82();
  L255():
    dr40 = tryDispatchBuiltin.0("$<-", l29, hat11);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L257() else L256(hat11, dr40);
  L256(hat13, l31):
    r199 = `$<-`(l31, <sym hat>, hat11);
    goto L254(r199);
  L370():
    res33 = force? res32;
    checkMissing(res33);
    c57 = `is.object`(res33);
    if c57 then L372() else L373(res33);
  L376():
    dnr = ld dnr;
    check L378() else D119();
  L377():
    r349 = dyn base24(<lang `[[`(dnr, 1)>, <lang `[`(rownames(cf), `!`(apply(cf, 1, anyNA)))>, <lang `[[`(dnr, 2)>);
    goto L55(r349);
  L407():
    res36 = ld res;
    check L409() else D128();
  L408():
    r381 = dyn base26(<lang `$`(res, wt.res)>);
    goto L61(r381);
  L427(r405, l107, r406, dx113):
    dimnames__1 = ldf `dimnames<-`;
    check L431() else D135();
  L428():
    dr98 = tryDispatchBuiltin.1("$", l101);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L430() else L429(r380, l101, r380, dr98);
  L429(r401, l104, r402, l105):
    r407 = `$`(l105, <sym coefficients>);
    goto L427(r401, l104, r402, r407);
  D49():
    deopt 163 [r113, ok2];
  D51():
    deopt 172 [res];
  D73():
    deopt 254 [r164];
  D80():
    deopt 285 [r186, l25, 0.0, r197];
  D82():
    deopt 293 [do_coef7];
  D119():
    deopt 434 [dnr];
  D128():
    deopt 471 [res36];
  D135():
    deopt 496 [r405, l107, dx113, r406];
  L34():
    goto L35(NULL);
  L35(r178):
    goto L36(r178);
  L62(r386):
    c64 = `is.object`(r386);
    if c64 then L419() else L420(r386);
  L172():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L22(dx14);
  L173():
    ok3 = force? ok2;
    ok4 = ld ok;
    check L174() else D50();
  L175():
    res1 = force? res;
    checkMissing(res1);
    c12 = `is.object`(res1);
    if c12 then L177() else L178(res1);
  L227():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L224(dx26);
  L228():
    goto L33(r164);
  L234():
    drop1d = ldf drop1d;
    check L235() else D75();
  L252():
    goto L38(r186, l25, 0.0, r197);
  L257():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L254(dx40);
  L258():
    do_coef8 = force? do_coef7;
    checkMissing(do_coef8);
    c32 = `as.logical`(do_coef8);
    if c32 then L259() else L39();
  L371(dx97):
    dimnames = ldf dimnames in base;
    r348 = dyn dimnames(dx97);
    check L375() else D118();
  L372():
    dr82 = tryDispatchBuiltin.1("$", res33);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L374() else L373(dr82);
  L373(res35):
    r347 = `$`(res35, <sym wt.res>);
    goto L371(r347);
  L378():
    dnr1 = force? dnr;
    checkMissing(dnr1);
    c58 = `is.object`(dnr1);
    if c58 then L379() else L380(dnr1);
  L394(r369, l98, r370, dx105):
    dimnames__ = ldf `dimnames<-`;
    check L398() else D126();
  L395():
    dr90 = tryDispatchBuiltin.1("$", l92);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L397() else L396(r350, l92, r350, dr90);
  L396(r365, l95, r366, l96):
    r371 = `$`(l96, <sym coefficients>);
    goto L394(r365, l95, r366, r371);
  L409():
    res37 = force? res36;
    checkMissing(res37);
    c63 = `is.object`(res37);
    if c63 then L411() else L412(res37);
  L415():
    cf12 = ld cf;
    check L417() else D130();
  L416():
    r385 = dyn base27(<sym cf>);
    goto L62(r385);
  L430():
    dx112 = getTryDispatchBuiltinValue(dr98);
    goto L427(r380, l101, r380, dx112);
  L431():
    r408 = dyn dimnames__1(dx113, NULL, r406);
    check L432() else D136();
  D50():
    deopt 165 [r113, ok4];
  D75():
    deopt 261 [];
  D118():
    deopt 430 [r348];
  D126():
    deopt 462 [r369, l98, dx105, r370];
  D130():
    deopt 478 [cf12];
  D136():
    deopt 498 [r405, l107, r408];
  L39():
    goto L44();
  L44():
    naresid2 = ldf naresid;
    check L280() else D91();
  L56(dx99):
    rownames = ldf rownames;
    check L382() else D120();
  L63(dx111):
    list2 = ldf list in base;
    r398 = dyn list2(r382, dx111);
    check L426() else D134();
  L174():
    ok5 = force? ok4;
    __1 = ldf `[` in base;
    r114 = dyn __1(r111, ok3, ok5, FALSE);
    goto L22(r114);
  L176(dx17):
    st hat = dx17;
    t = ldf t;
    check L180() else D52();
  L177():
    dr16 = tryDispatchBuiltin.1("$", res1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L179() else L178(dr16);
  L178(res3):
    r115 = `$`(res3, <sym hat>);
    goto L176(r115);
  L235():
    p22 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      c26 = `is.object`(res9);
      if c26 then L1() else L2(res9);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", res9);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(res11):
      r170 = `$`(res11, <sym coefficients>);
      goto L0(r170);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r172 = dyn drop1d(p22);
    check L236() else D76();
  L259():
    naresid1 = ldf naresid;
    check L260() else D83();
  L374():
    dx96 = getTryDispatchBuiltinValue(dr82);
    goto L371(dx96);
  L375():
    goto L54(r348);
  L379():
    dr84 = tryDispatchBuiltin.1("[[", dnr1);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L381() else L380(dr84);
  L380(dnr3):
    __3 = ldf `[[` in base;
    r351 = dyn __3(dnr3, 1);
    goto L56(r351);
  L397():
    dx104 = getTryDispatchBuiltinValue(dr90);
    goto L394(r350, l92, r350, dx104);
  L398():
    r372 = dyn dimnames__(dx105, NULL, r370);
    check L399() else D127();
  L410(dx109):
    names1 = ldf names in base;
    r384 = dyn names1(dx109);
    check L414() else D129();
  L411():
    dr94 = tryDispatchBuiltin.1("$", res37);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L413() else L412(dr94);
  L412(res39):
    r383 = `$`(res39, <sym wt.res>);
    goto L410(r383);
  L417():
    cf13 = force? cf12;
    checkMissing(cf13);
    names2 = ldf names in base;
    r387 = dyn names2(cf13);
    check L418() else D131();
  L419():
    dr96 = tryDispatchBuiltin.1("[", r386);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L421() else L420(dr96);
  L420(r389):
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L422() else L423();
  L432():
    c66 = `is.object`(l107);
    if c66 then L434() else L435(r405, l107);
  D52():
    deopt 177 [];
  D76():
    deopt 263 [r172];
  D83():
    deopt 296 [];
  D91():
    deopt 326 [];
  D120():
    deopt 440 [];
  D127():
    deopt 464 [r369, l98, r372];
  D129():
    deopt 475 [r384];
  D131():
    deopt 481 [r387];
  D134():
    deopt 491 [r398];
  L64(r393, r394):
    r396 = `!`(r394);
    __6 = ldf `[` in base;
    r397 = dyn __6(r393, r396);
    goto L63(r397);
  L179():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L176(dx16);
  L180():
    p14 = prom<V +>{
      backsolve = ldf backsolve;
      p11 = prom<V +>{
        R = ld R;
        R1 = force? R;
        checkMissing(R1);
        return R1;
      };
      p13 = prom<V +>{
        t1 = ldf t;
        p12 = prom<V +>{
          Q = ld Q;
          Q1 = force? Q;
          checkMissing(Q1);
          return Q1;
        };
        r118 = dyn t1(p12);
        return r118;
      };
      r120 = dyn backsolve(p11, p13);
      return r120;
    };
    r122 = dyn t(p14);
    check L181() else D53();
  L236():
    l20 = ld res;
    c27 = `is.object`(l20);
    if c27 then L238() else L239(r172, l20);
  L260():
    p25 = prom<V +>{
      model21 = ld model;
      model22 = force? model21;
      checkMissing(model22);
      c33 = `is.object`(model22);
      if c33 then L1() else L2(model22);
    L0(dx43):
      return dx43;
    L1():
      dr42 = tryDispatchBuiltin.1("$", model22);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(model24):
      r200 = `$`(model24, <sym na.action>);
      goto L0(r200);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx42);
    };
    p26 = prom<V +>{
      res16 = ld res;
      res17 = force? res16;
      checkMissing(res17);
      c34 = `is.object`(res17);
      if c34 then L1() else L2(res17);
    L0(dx45):
      return dx45;
    L1():
      dr44 = tryDispatchBuiltin.1("$", res17);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(res19):
      r202 = `$`(res19, <sym coefficients>);
      goto L0(r202);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx44);
    };
    r204 = dyn naresid1(p25, p26);
    check L261() else D84();
  L280():
    p28 = prom<V +>{
      model25 = ld model;
      model26 = force? model25;
      checkMissing(model26);
      c38 = `is.object`(model26);
      if c38 then L1() else L2(model26);
    L0(dx51):
      return dx51;
    L1():
      dr50 = tryDispatchBuiltin.1("$", model26);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(model28):
      r222 = `$`(model28, <sym na.action>);
      goto L0(r222);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx50);
    };
    p29 = prom<V +>{
      res20 = ld res;
      res21 = force? res20;
      checkMissing(res21);
      c39 = `is.object`(res21);
      if c39 then L1() else L2(res21);
    L0(dx53):
      return dx53;
    L1():
      dr52 = tryDispatchBuiltin.1("$", res21);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(res23):
      r224 = `$`(res23, <sym sigma>);
      goto L0(r224);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx52);
    };
    r226 = dyn naresid2(p28, p29);
    check L281() else D92();
  L381():
    dx98 = getTryDispatchBuiltinValue(dr84);
    goto L56(dx98);
  L382():
    p35 = prom<V +>{
      cf8 = ld cf;
      cf9 = force? cf8;
      checkMissing(cf9);
      return cf9;
    };
    r353 = dyn rownames(p35);
    check L383() else D121();
  L399():
    c62 = `is.object`(l98);
    if c62 then L401() else L402(r369, l98);
  L413():
    dx108 = getTryDispatchBuiltinValue(dr94);
    goto L410(dx108);
  L414():
    goto L61(r384);
  L418():
    goto L62(r387);
  L421():
    dx110 = getTryDispatchBuiltinValue(dr96);
    goto L63(dx110);
  L422():
    cf14 = ld cf;
    check L424() else D132();
  L423():
    r392 = dyn base28(<sym cf>);
    goto L64(r389, r392);
  L426():
    goto L60(r398);
  L433(r412, dx115):
    st res = dx115;
    goto L59(r412);
  L434():
    dr100 = tryDispatchBuiltin.0("$<-", l107, r408);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L436() else L435(r405, dr100);
  L435(r410, l109):
    r413 = `$<-`(l109, <sym coefficients>, r408);
    goto L433(r410, r413);
  D53():
    deopt 179 [r122];
  D84():
    deopt 299 [r204];
  D92():
    deopt 329 [r226];
  D121():
    deopt 442 [r353];
  D132():
    deopt 484 [r389, cf14];
  L181():
    st invRQtt = r122;
    NCOL = ldf NCOL;
    check L182() else D54();
  L237(r176, dx33):
    st res = dx33;
    goto L35(r176);
  L238():
    dr32 = tryDispatchBuiltin.0("$<-", l20, r172);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L240() else L239(r172, dr32);
  L239(r174, l22):
    r177 = `$<-`(l22, <sym coefficients>, r172);
    goto L237(r174, r177);
  L261():
    st coefficients = r204;
    l32 = ld coefficients;
    c35 = `is.object`(l32);
    if c35 then L262() else L263(0.0, l32);
  L281():
    st sigma = r226;
    sym19 = ldf sqrt;
    base19 = ldf sqrt in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L282() else L283();
  L383():
    c59 = `is.object`(r353);
    if c59 then L384() else L385(r353);
  L400(r376, dx107):
    st res = dx107;
    goto L59(r376);
  L401():
    dr92 = tryDispatchBuiltin.0("$<-", l98, r372);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L403() else L402(r369, dr92);
  L402(r374, l100):
    r377 = `$<-`(l100, <sym coefficients>, r372);
    goto L400(r374, r377);
  L424():
    cf15 = force? cf14;
    checkMissing(cf15);
    is_na4 = ldf `is.na` in base;
    r395 = dyn is_na4(cf15);
    check L425() else D133();
  L436():
    dx114 = getTryDispatchBuiltinValue(dr100);
    goto L433(r405, dx114);
  D54():
    deopt 182 [];
  D133():
    deopt 487 [r389, r395];
  L40(dx47):
    st coefficients = dx47;
    is_mlm4 = ld `is.mlm`;
    check L269() else D87();
  L45(r228):
    l41 = ld sigma;
    c40 = `is.object`(l41);
    if c40 then L288() else L289(r228, l41);
  L57(dx101):
    dnr4 = ld dnr;
    check L389() else D124();
  L182():
    p15 = prom<V +>{
      Q2 = ld Q;
      Q3 = force? Q2;
      checkMissing(Q3);
      return Q3;
    };
    r124 = dyn NCOL(p15);
    check L183() else D55();
  L240():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L237(r172, dx32);
  L262():
    dr46 = tryDispatchBuiltin.0("[<-", l32, 0.0);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L264() else L263(0.0, dr46);
  L263(r206, l34):
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L265() else L266();
  L282():
    deviance1 = ldf deviance;
    check L284() else D93();
  L283():
    r227 = dyn base19(<lang `/`(deviance(model), df.residual(model))>);
    goto L45(r227);
  L384():
    dr86 = tryDispatchBuiltin.1("[", r353);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L386() else L385(dr86);
  L385(r355):
    apply = ldf apply;
    check L387() else D122();
  L403():
    dx106 = getTryDispatchBuiltinValue(dr92);
    goto L400(r369, dx106);
  L425():
    goto L64(r389, r395);
  D55():
    deopt 184 [r124];
  D87():
    deopt 312 [is_mlm4];
  D93():
    deopt 333 [];
  D122():
    deopt 444 [r355];
  D124():
    deopt 451 [dnr4];
  L41(r214, l37, r215, r216):
    ___3 = ldf `[<-` in base;
    r218 = dyn ___3(l37, r215, r216);
    goto L40(r218);
  L46(dx55):
    st sigma = dx55;
    is_mlm6 = ld `is.mlm`;
    check L295() else D99();
  L183():
    st k = r124;
    NCOL1 = ldf NCOL;
    check L184() else D56();
  L264():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L40(dx46);
  L265():
    coefficients = ld coefficients;
    check L267() else D85();
  L266():
    r213 = dyn base18(<sym coefficients>);
    goto L41(r206, l34, 0.0, r213);
  L269():
    is_mlm5 = force? is_mlm4;
    checkMissing(is_mlm5);
    c36 = `as.logical`(is_mlm5);
    if c36 then L270() else L42();
  L284():
    p30 = prom<V +>{
      model29 = ld model;
      model30 = force? model29;
      checkMissing(model30);
      return model30;
    };
    r230 = dyn deviance1(p30);
    check L285() else D94();
  L288():
    dr54 = tryDispatchBuiltin.0("[<-", l41, r228);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L290() else L289(r228, dr54);
  L289(r236, l43):
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L291() else L292();
  L386():
    dx100 = getTryDispatchBuiltinValue(dr86);
    goto L57(dx100);
  L387():
    p36 = prom<V +>{
      cf10 = ld cf;
      cf11 = force? cf10;
      checkMissing(cf11);
      return cf11;
    };
    p37 = prom<V +>{
      anyNA = ld anyNA;
      anyNA1 = force? anyNA;
      checkMissing(anyNA1);
      return anyNA1;
    };
    r358 = dyn apply(p36, 1, p37);
    check L388() else D123();
  L389():
    dnr5 = force? dnr4;
    checkMissing(dnr5);
    c60 = `is.object`(dnr5);
    if c60 then L390() else L391(dnr5);
  D56():
    deopt 187 [];
  D85():
    deopt 306 [r206, l34, 0.0, coefficients];
  D94():
    deopt 335 [r230];
  D99():
    deopt 350 [is_mlm6];
  D123():
    deopt 448 [r355, r358];
  L42():
    drop1d1 = ldf drop1d;
    check L273() else D89();
  L43(coefficients4):
    l38 = ld res;
    c37 = `is.object`(l38);
    if c37 then L276() else L277(coefficients4, l38);
  L47(r244, l46, r245, r246):
    ___4 = ldf `[<-` in base;
    r248 = dyn ___4(l46, r245, r246);
    goto L46(r248);
  L58(dx103):
    list1 = ldf list in base;
    r362 = dyn list1(dx99, dx101, dx103);
    check L393() else D125();
  L184():
    p16 = prom<V +>{
      e10 = ld e;
      e11 = force? e10;
      checkMissing(e11);
      return e11;
    };
    r126 = dyn NCOL1(p16);
    check L185() else D57();
  L267():
    coefficients1 = force? coefficients;
    checkMissing(coefficients1);
    is_na2 = ldf `is.na` in base;
    r217 = dyn is_na2(coefficients1);
    check L268() else D86();
  L270():
    coefficients2 = ld coefficients;
    check L271() else D88();
  L285():
    df_residual1 = ldf `df.residual`;
    check L286() else D95();
  L290():
    dx54 = getTryDispatchBuiltinValue(dr54);
    goto L46(dx54);
  L291():
    sigma = ld sigma;
    check L293() else D97();
  L292():
    r243 = dyn base20(<sym sigma>);
    goto L47(r236, l43, r228, r243);
  L295():
    is_mlm7 = force? is_mlm6;
    checkMissing(is_mlm7);
    c41 = `as.logical`(is_mlm7);
    if c41 then L296() else L48();
  L388():
    r359 = `!`(r358);
    __4 = ldf `[` in base;
    r360 = dyn __4(r355, r359);
    goto L57(r360);
  L390():
    dr88 = tryDispatchBuiltin.1("[[", dnr5);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L392() else L391(dr88);
  L391(dnr7):
    __5 = ldf `[[` in base;
    r361 = dyn __5(dnr7, 2);
    goto L58(r361);
  D57():
    deopt 189 [r126];
  D86():
    deopt 309 [r206, l34, 0.0, r217];
  D88():
    deopt 314 [coefficients2];
  D89():
    deopt 317 [];
  D95():
    deopt 336 [r230];
  D97():
    deopt 344 [r236, l43, r228, sigma];
  D125():
    deopt 457 [r362];
  L48():
    sym21 = ldf drop;
    base21 = ldf drop in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L299() else L300();
  L49(sigma4):
    l47 = ld res;
    c42 = `is.object`(l47);
    if c42 then L304() else L305(sigma4, l47);
  L185():
    st q = r126;
    is_mlm = ld `is.mlm`;
    check L186() else D58();
  L268():
    goto L41(r206, l34, 0.0, r217);
  L271():
    coefficients3 = force? coefficients2;
    checkMissing(coefficients3);
    goto L43(coefficients3);
  L273():
    p27 = prom<V +>{
      coefficients5 = ld coefficients;
      coefficients6 = force? coefficients5;
      checkMissing(coefficients6);
      return coefficients6;
    };
    r220 = dyn drop1d1(p27);
    check L274() else D90();
  L275(coefficients10, dx49):
    st res = dx49;
    goto L44();
  L276():
    dr48 = tryDispatchBuiltin.0("$<-", l38, coefficients4);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L278() else L277(coefficients4, dr48);
  L277(coefficients8, l40):
    r221 = `$<-`(l40, <sym coefficients>, coefficients4);
    goto L275(coefficients8, r221);
  L286():
    p31 = prom<V +>{
      model31 = ld model;
      model32 = force? model31;
      checkMissing(model32);
      return model32;
    };
    r232 = dyn df_residual1(p31);
    check L287() else D96();
  L293():
    sigma1 = force? sigma;
    checkMissing(sigma1);
    is_na3 = ldf `is.na` in base;
    r247 = dyn is_na3(sigma1);
    check L294() else D98();
  L296():
    sigma2 = ld sigma;
    check L297() else D100();
  L392():
    dx102 = getTryDispatchBuiltinValue(dr88);
    goto L58(dx102);
  L393():
    goto L55(r362);
  D58():
    deopt 191 [is_mlm];
  D90():
    deopt 319 [r220];
  D96():
    deopt 338 [r230, r232];
  D98():
    deopt 347 [r236, l43, r228, r247];
  D100():
    deopt 352 [sigma2];
  L186():
    is_mlm1 = force? is_mlm;
    checkMissing(is_mlm1);
    c13 = `as.logical`(is_mlm1);
    if c13 then L187() else L23();
  L274():
    goto L43(r220);
  L278():
    dx48 = getTryDispatchBuiltinValue(dr48);
    goto L275(coefficients4, dx48);
  L287():
    r233 = `/`(r230, r232);
    r234 = sqrt(r233);
    goto L45(r234);
  L294():
    goto L47(r236, l43, r228, r247);
  L297():
    sigma3 = force? sigma2;
    checkMissing(sigma3);
    goto L49(sigma3);
  L299():
    sigma5 = ld sigma;
    check L301() else D101();
  L300():
    r249 = dyn base21(<sym sigma>);
    goto L49(r249);
  L303(sigma10, dx57):
    st res = dx57;
    goto L8();
  L304():
    dr56 = tryDispatchBuiltin.0("$<-", l47, sigma4);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L306() else L305(sigma4, dr56);
  L305(sigma8, l49):
    r251 = `$<-`(l49, <sym sigma>, sigma4);
    goto L303(sigma8, r251);
  D101():
    deopt 356 [sigma5];
  L23():
    invRQtt2 = ld invRQtt;
    check L203() else D67();
  L28(cf2):
    l14 = ld res;
    c18 = `is.object`(l14);
    if c18 then L207() else L208(cf2, l14);
  L187():
    array = ldf array;
    check L188() else D59();
  L301():
    sigma6 = force? sigma5;
    checkMissing(sigma6);
    drop1 = ldf drop in base;
    r250 = dyn drop1(sigma6);
    check L302() else D102();
  L306():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L303(sigma4, dx56);
  D59():
    deopt 194 [];
  D67():
    deopt 224 [invRQtt2];
  D102():
    deopt 359 [r250];
  L188():
    p17 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r128):
      return r128;
    L1():
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      q = ld q;
      q1 = force? q;
      checkMissing(q1);
      c14 = ldf c in base;
      r129 = dyn c14(n7, k1, q1);
      goto L0(r129);
    L2():
      r127 = dyn base13(<sym n>, <sym k>, <sym q>);
      goto L0(r127);
    };
    r131 = dyn array(0.0, p17);
    check L189() else D60();
  L203():
    invRQtt3 = force? invRQtt2;
    checkMissing(invRQtt3);
    ifelse1 = ldf ifelse;
    check L204() else D68();
  L206(cf6, dx23):
    st res = dx23;
    goto L29();
  L207():
    dr22 = tryDispatchBuiltin.0("$<-", l14, cf2);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L209() else L208(cf2, dr22);
  L208(cf4, l16):
    r155 = `$<-`(l16, <sym coefficients>, cf2);
    goto L206(cf4, r155);
  L302():
    goto L49(r250);
  D60():
    deopt 197 [r131];
  D68():
    deopt 226 [invRQtt3];
  L189():
    st cf = r131;
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L190() else L191();
  L204():
    p20 = prom<V +>{
      hat4 = ld hat;
      hat5 = force? hat4;
      checkMissing(hat5);
      r148 = `==`(hat5, 1.0);
      return r148;
    };
    p21 = prom<V +>{
      e16 = ld e;
      e17 = force? e16;
      checkMissing(e17);
      hat6 = ld hat;
      hat7 = force? hat6;
      checkMissing(hat7);
      r150 = `-`(1.0, hat7);
      r151 = `/`(e17, r150);
      return r151;
    };
    r153 = dyn ifelse1(p20, 0.0, p21);
    check L205() else D69();
  L209():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L206(cf2, dx22);
  D69():
    deopt 230 [invRQtt3, r153];
  L24(r133):
    s = toForSeq(r133);
    l10 = length(s);
    i = 0;
    goto L25(i);
  L190():
    q2 = ld q;
    check L192() else D61();
  L191():
    r132 = dyn base14(<sym q>);
    goto L24(r132);
  L205():
    r154 = `*`(invRQtt3, r153);
    goto L28(r154);
  D61():
    deopt 200 [q2];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l10, i2);
    if c15 then L193() else L27();
  L192():
    q3 = force? q2;
    checkMissing(q3);
    r134 = seq_len(q3);
    goto L24(r134);
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    invRQtt = ld invRQtt;
    check L194() else D62();
  L193():
    cf = ld cf;
    check L201() else D66();
  D62():
    deopt 203 [i2, invRQtt];
  D66():
    deopt 222 [cf];
  L194():
    invRQtt1 = force? invRQtt;
    checkMissing(invRQtt1);
    ifelse = ldf ifelse;
    check L195() else D63();
  L201():
    cf1 = force? cf;
    checkMissing(cf1);
    goto L28(cf1);
  D63():
    deopt 205 [i2, invRQtt1];
  L195():
    p18 = prom<V +>{
      hat = ld hat;
      hat1 = force? hat;
      checkMissing(hat1);
      r135 = `==`(hat1, 1.0);
      return r135;
    };
    p19 = prom<V +>{
      e12 = ld e;
      e13 = force? e12;
      checkMissing(e13);
      c16 = `is.object`(e13);
      if c16 then L1() else L2();
    L0(dx19):
      hat2 = ld hat;
      hat3 = force? hat2;
      checkMissing(hat3);
      r138 = `-`(1.0, hat3);
      r139 = `/`(dx19, r138);
      return r139;
    L1():
      dr18 = tryDispatchBuiltin.1("[", e13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      j = ld j;
      j1 = force? j;
      __2 = ldf `[` in base;
      r137 = dyn __2(e13, <missing>, j1);
      goto L0(r137);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r141 = dyn ifelse(p18, 0.0, p19);
    check L196() else D64();
  D64():
    deopt 209 [i2, invRQtt1, r141];
  L196():
    r142 = `*`(invRQtt1, r141);
    l11 = ld cf;
    c17 = `is.object`(l11);
    if c17 then L197() else L198(i2, r142, l11);
  L26(i8, dx21):
    st cf = dx21;
    goto L25(i8);
  L197():
    dr20 = tryDispatchBuiltin.0("[<-", l11, r142);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L199() else L198(i2, r142, dr20);
  L198(i6, r144, l13):
    j2 = ld j;
    check L200() else D65();
  D65():
    deopt 214 [i6, r144, l13, r142, j2];
  L199():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L26(i2, dx20);
  L200():
    j3 = force? j2;
    ___1 = ldf `[<-` in base;
    r147 = dyn ___1(l11, <missing>, <missing>, j3, r142);
    goto L26(i6, r147);
  }
}
fun inner119611165(a) {
  (reg a:*) -+> V { var a:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg c2:V, reg d2:*, reg d3:V, reg c3:L, reg c5:L, reg d5:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg __:cls, reg r7:V, reg r8:V, reg c8:L, reg c9:V, reg c11:L, reg d6:*, reg d7:V, reg c12:L, reg d9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg l:*, reg dim__:cls, reg r10:V, reg a3:*, reg a4:V |
    mkenv;
    st a = a;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st d = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    a1 = ld a;
    check L9() else D0();
  L8():
    r = dyn base(<sym a>);
    goto L0(r);
  D0():
    deopt 2 [a1];
  L1(r4):
    r6 = `==`(r4, 3);
    c = `as.logical`(r6);
    if c then L15() else L2(c);
  L9():
    a2 = force? a1;
    checkMissing(a2);
    dim = ldf dim in base;
    r2 = dyn dim(a2);
    check L10() else D1();
  L11():
    d = ld d;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym d>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [d];
  L2(c2):
    c11 = `as.logical`(c2);
    if c11 then L21() else L4();
  L10():
    goto L0(r2);
  L13():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r5 = dyn length(d1);
    check L14() else D3();
  L15():
    d2 = ld d;
    check L16() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [c, d2];
  L4():
    goto L6();
  L6():
    a3 = ld a;
    check L29() else D8();
  L14():
    goto L1(r5);
  L16():
    d3 = force? d2;
    checkMissing(d3);
    c3 = `is.object`(d3);
    if c3 then L17() else L18(c, d3);
  L21():
    d6 = ld d;
    check L22() else D5();
  D5():
    deopt 23 [d6];
  D8():
    deopt 35 [a3];
  L3(c7, dx1):
    r8 = `==`(dx1, 1);
    c8 = `as.logical`(r8);
    c9 = `&&`(c7, c8);
    goto L2(c9);
  L17():
    dr = tryDispatchBuiltin.1("[[", d3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(c, dr);
  L18(c5, d5):
    __ = ldf `[[` in base;
    r7 = dyn __(d5, 3);
    goto L3(c5, r7);
  L22():
    d7 = force? d6;
    checkMissing(d7);
    c12 = `is.object`(d7);
    if c12 then L23() else L24(d7);
  L29():
    a4 = force? a3;
    checkMissing(a4);
    popenv;
    return a4;
  L5(dx3):
    l = ld a;
    dim__ = ldf `dim<-`;
    check L26() else D6();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L23():
    dr2 = tryDispatchBuiltin.1("[", d7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(d9):
    __1 = ldf `[` in base;
    r9 = dyn __1(d9, -3);
    goto L5(r9);
  D6():
    deopt 29 [dx3, l, dx3];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L26():
    r10 = dyn dim__(l, NULL, dx3);
    check L27() else D7();
  D7():
    deopt 31 [dx3, r10];
  L27():
    st a = r10;
    goto L6();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg lapply:cls, reg lapply1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg unname:*, reg unname1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg drop:*, reg drop1:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st x = x;
    lapply = ldf lapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      lapply1 = ldf lapply;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        unname = ld unname;
        unname1 = force? unname;
        checkMissing(unname1);
        return unname1;
      };
      r2 = dyn lapply1(p, p1);
      return r2;
    };
    p3 = prom<V +>{
      drop = ld drop;
      drop1 = force? drop;
      checkMissing(drop1);
      return drop1;
    };
    r5 = dyn lapply(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}