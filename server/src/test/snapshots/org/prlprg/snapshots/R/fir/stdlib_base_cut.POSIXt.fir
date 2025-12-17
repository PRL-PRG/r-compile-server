fun main() {
  () -+> V { reg r:cls, reg cut:cls, reg ISOdate:cls, reg r1:V, reg __:cls, reg r2:V, reg r3:cls, reg r4:V, reg r5:V, reg r6:V, reg p:p(V +), reg r8:V, reg cut1:cls, reg as_Date:cls, reg r9:V, reg __1:cls, reg r10:V, reg r11:cls, reg r12:V, reg r13:V, reg r14:V, reg p1:p(V +), reg r16:V, reg seq:cls, reg as_POSIXct:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg aggregate:cls, reg r20:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r22:V, reg r23:V, reg cut2:cls, reg tm:*, reg tm1:V, reg p4:p(V +), reg r25:V, reg list:cls, reg r26:V, reg p5:p(V +), reg mean:*, reg mean1:V, reg p6:p(V +), reg r29:V, reg aggregate1:cls, reg r30:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg cut3:cls, reg tm2:*, reg tm3:V, reg p8:p(V +), reg r35:V, reg list1:cls, reg r36:V, reg p9:p(V +), reg mean2:*, reg mean3:V, reg p10:p(V +), reg r39:V |
    mkenv;
    r = clos inner3642465449;
    st `cut.POSIXt` = r;
    cut = ldf cut;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      ISOdate = ldf ISOdate;
      r1 = dyn ISOdate(2001.0, 1.0, 1.0);
      __ = ldf `::`;
      r2 = dyn __("stats", "runif");
      checkFun.0(r2);
      r3 = r2 as cls;
      r4 = dyn r3(100.0);
      r5 = `*`(6048000.0, r4);
      r6 = `+`(r1, r5);
      return r6;
    };
    r8 = dyn cut(p, "weeks");
    check L1() else D1();
  D1():
    deopt 7 [r8];
  L1():
    cut1 = ldf cut;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      as_Date = ldf `as.Date`;
      r9 = dyn as_Date("2001/1/1");
      __1 = ldf `::`;
      r10 = dyn __1("stats", "runif");
      checkFun.0(r10);
      r11 = r10 as cls;
      r12 = dyn r11(100.0);
      r13 = `*`(70.0, r12);
      r14 = `+`(r9, r13);
      return r14;
    };
    r16 = dyn cut1(p1, "weeks");
    check L3() else D3();
  D3():
    deopt 12 [r16];
  L3():
    seq = ldf seq;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      r17 = dyn as_POSIXct("2012-06-01 06:00");
      return r17;
    };
    r19 = dyn seq[, by, `length.out`](p2, "6 hours", 24.0);
    check L5() else D5();
  D5():
    deopt 20 [r19];
  L5():
    st tm = r19;
    aggregate = ldf aggregate;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p3 = prom<V +>{
      r20 = `:`(1.0, 24.0);
      return r20;
    };
    p5 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r23):
      return r23;
    L1():
      cut2 = ldf cut;
      p4 = prom<V +>{
        tm = ld tm;
        tm1 = force? tm;
        checkMissing(tm1);
        return tm1;
      };
      r25 = dyn cut2(p4, "days");
      list = ldf list in base;
      r26 = dyn list(r25);
      goto L0(r26);
    L2():
      r22 = dyn base[day](<lang cut(tm, "days")>);
      goto L0(r22);
    };
    p6 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r29 = dyn aggregate(p3, p5, p6);
    check L7() else D7();
  D7():
    deopt 27 [r29];
  L7():
    aggregate1 = ldf aggregate;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    p7 = prom<V +>{
      r30 = `:`(1.0, 24.0);
      return r30;
    };
    p9 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      cut3 = ldf cut;
      p8 = prom<V +>{
        tm2 = ld tm;
        tm3 = force? tm2;
        checkMissing(tm3);
        return tm3;
      };
      r35 = dyn cut3[, , right](p8, "days", TRUE);
      list1 = ldf list in base;
      r36 = dyn list1(r35);
      goto L0(r36);
    L2():
      r32 = dyn base1[day](<lang cut(tm, "days", right=TRUE)>);
      goto L0(r32);
    };
    p10 = prom<V +>{
      mean2 = ld mean;
      mean3 = force? mean2;
      checkMissing(mean3);
      return mean3;
    };
    r39 = dyn aggregate1(p7, p9, p10);
    check L9() else D9();
  D9():
    deopt 33 [r39];
  L9():
    popenv;
    return r39;
  }
}
fun inner3642465449(x, breaks, labels, `start.on.monday`, right, `...`) {
  (reg x:*, reg breaks:*, reg labels:*, reg start_on_monday:*, reg right:*, reg ddd:dots) -+> V { var x:*, var breaks:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var `start.on.monday`:*, reg start_on_monday_isMissing:L, reg start_on_monday_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg as_POSIXct:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg breaks1:*, reg breaks2:V, reg inherits1:cls, reg r10:V, reg c1:L, reg sort:cls, reg as_POSIXct1:cls, reg breaks3:*, reg breaks4:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg breaks5:*, reg breaks6:V, reg is_numeric:cls, reg r18:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c7:L, reg r20:V, reg breaks7:*, reg breaks8:V, reg length:cls, reg r21:V, reg r22:V, reg c8:L, reg c9:V, reg c11:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg breaks9:*, reg breaks10:V, reg c12:L, reg c13:L, reg c15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c18:L, reg r26:V, reg breaks11:*, reg breaks12:V, reg length1:cls, reg r27:V, reg r28:V, reg c19:L, reg c20:V, reg c22:L, reg strsplit:cls, reg breaks13:*, reg breaks14:V, reg p3:p(V +), reg r30:V, reg c23:L, reg r32:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg by2:*, reg by3:V, reg length2:cls, reg r36:V, reg r37:V, reg c24:L, reg c25:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg c29:L, reg r39:V, reg by4:*, reg by5:V, reg length3:cls, reg r40:V, reg r41:V, reg c30:L, reg c31:V, reg c33:L, reg stop1:cls, reg r42:V, reg pmatch:cls, reg by6:*, reg by7:V, reg c34:L, reg by9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg by12:V, reg r45:V, reg by13:*, reg by14:V, reg length4:cls, reg r46:V, reg __1:cls, reg r47:V, reg p4:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg c35:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg valid:*, reg valid1:V, reg is_na:cls, reg r56:V, reg c36:L, reg stop2:cls, reg r57:V, reg as_POSIXlt:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg x5:*, reg x6:V, reg min:cls, reg r61:V, reg p6:p(V +), reg r63:V, reg valid2:*, reg valid3:V, reg r64:V, reg c37:L, reg l:*, reg c38:L, reg r66:I, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r69:V, reg valid4:*, reg valid5:V, reg r71:V, reg c39:L, reg l3:*, reg c40:L, reg r73:I, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r76:V, reg valid6:*, reg valid7:V, reg r78:V, reg c41:L, reg l6:*, reg c42:L, reg r80:I, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r83:V, reg l9:*, reg c43:L, reg r85:I, reg l11:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r88:V, reg valid8:*, reg valid9:V, reg r90:V, reg c44:L, reg start:*, reg start1:V, reg c45:L, reg start3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r91:V, reg start4:*, reg start5:V, reg c46:L, reg dx15:V, reg start7:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r92:V, reg r93:V, reg l12:*, reg c47:L, reg r95:V, reg l14:*, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r98:V, reg start_on_monday1:*, reg start_on_monday2:V, reg c48:L, reg start8:*, reg start9:V, reg c49:L, reg start11:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r99:V, reg ifelse:cls, reg start12:*, reg start13:V, reg c50:L, reg start15:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r100:V, reg r101:V, reg p7:p(V +), reg p8:p(V +), reg r104:V, reg r105:V, reg l15:*, reg c51:L, reg r107:V, reg l17:*, reg dr22:V, reg dc11:L, reg dx26:V, reg r109:V, reg dx27:V, reg r110:V, reg valid10:*, reg valid11:V, reg r113:V, reg c52:L, reg valid12:*, reg valid13:V, reg r115:V, reg c53:L, reg l18:*, reg c54:L, reg r117:I, reg l20:*, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r120:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg r122:V, reg x7:*, reg x8:V, reg max:cls, reg r123:V, reg as_POSIXlt1:cls, reg maxx:*, reg maxx1:V, reg p9:p(V +), reg r125:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r126:V, reg r127:V, reg by15:*, reg by16:V, reg length5:cls, reg r128:V, reg r129:V, reg c55:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r130:V, reg r131:V, reg by17:*, reg by18:V, reg c56:L, reg by20:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg __2:cls, reg r132:V, reg as_integer:cls, reg r133:V, reg r134:V, reg as_POSIXlt2:cls, reg end:*, reg end1:V, reg step:*, reg step1:V, reg r135:V, reg r136:V, reg r137:V, reg p10:p(V +), reg r139:V, reg l21:*, reg c57:L, reg r141:I, reg l23:*, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r144:V, reg l24:*, reg c58:L, reg r146:I, reg l26:*, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r149:V, reg seq:cls, reg start16:*, reg start17:V, reg p11:p(V +), reg end2:*, reg end3:V, reg p12:p(V +), reg breaks15:*, reg breaks16:V, reg p13:p(V +), reg r153:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r154:V, reg r155:V, reg breaks17:*, reg breaks18:V, reg length6:cls, reg r156:V, reg maxx2:*, reg maxx3:V, reg breaks19:*, reg breaks20:V, reg c59:L, reg maxx5:V, reg breaks22:V, reg dr32:V, reg dc16:L, reg dx36:V, reg maxx7:V, reg dx37:V, reg lb:*, reg lb1:V, reg r157:V, reg __3:cls, reg r158:V, reg r159:V, reg c60:L, reg breaks23:*, reg breaks24:V, reg c61:L, reg breaks26:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg lb2:*, reg lb3:V, reg r160:V, reg __4:cls, reg r161:V, reg dx40:V, reg dx41:V, reg valid14:*, reg valid15:V, reg r162:V, reg c62:L, reg l27:*, reg c63:L, reg r164:I, reg l29:*, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg r167:V, reg l30:*, reg c64:L, reg r169:I, reg l32:*, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r172:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r173:V, reg r174:V, reg x9:*, reg x10:V, reg max1:cls, reg r175:V, reg as_POSIXlt3:cls, reg maxx8:*, reg maxx9:V, reg p14:p(V +), reg r177:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r178:V, reg r179:V, reg by21:*, reg by22:V, reg length7:cls, reg r180:V, reg r181:V, reg c65:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r182:V, reg r183:V, reg by23:*, reg by24:V, reg c66:L, reg by26:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg __5:cls, reg r184:V, reg as_integer1:cls, reg r185:V, reg r186:V, reg as_POSIXlt4:cls, reg end4:*, reg end5:V, reg step2:*, reg step3:V, reg r187:V, reg r188:V, reg r189:V, reg p15:p(V +), reg r191:V, reg l33:*, reg c67:L, reg r193:I, reg l35:*, reg dr42:V, reg dc21:L, reg dx48:V, reg dx49:V, reg r196:V, reg l36:*, reg c68:L, reg r198:I, reg l38:*, reg dr44:V, reg dc22:L, reg dx50:V, reg dx51:V, reg r201:V, reg l39:*, reg c69:L, reg r203:I, reg l41:*, reg dr46:V, reg dc23:L, reg dx52:V, reg dx53:V, reg r206:V, reg seq1:cls, reg start18:*, reg start19:V, reg p16:p(V +), reg end6:*, reg end7:V, reg p17:p(V +), reg breaks27:*, reg breaks28:V, reg p18:p(V +), reg r210:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r211:V, reg r212:V, reg breaks29:*, reg breaks30:V, reg length8:cls, reg r213:V, reg maxx10:*, reg maxx11:V, reg breaks31:*, reg breaks32:V, reg c70:L, reg maxx13:V, reg breaks34:V, reg dr48:V, reg dc24:L, reg dx54:V, reg maxx15:V, reg dx55:V, reg lb4:*, reg lb5:V, reg r214:V, reg __6:cls, reg r215:V, reg r216:V, reg c71:L, reg breaks35:*, reg breaks36:V, reg c72:L, reg breaks38:V, reg dr50:V, reg dc25:L, reg dx56:V, reg dx57:V, reg lb6:*, reg lb7:V, reg r217:V, reg __7:cls, reg r218:V, reg dx58:V, reg valid16:*, reg valid17:V, reg r219:V, reg c73:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r220:V, reg r221:V, reg rep:cls, reg r222:V, reg qtr:*, reg qtr1:V, reg c74:L, reg qtr3:V, reg dr52:V, reg dc26:L, reg dx59:V, reg dx60:V, reg start20:*, reg start21:V, reg c75:L, reg qtr5:V, reg start23:V, reg dr54:V, reg dc27:L, reg dx61:V, reg qtr7:V, reg dx62:V, reg r223:V, reg r224:V, reg __8:cls, reg r225:V, reg l42:*, reg c76:L, reg dx64:V, reg l44:*, reg dr56:V, reg dc28:L, reg dx66:V, reg dx68:V, reg r226:V, reg l45:*, reg c77:L, reg r228:I, reg l47:*, reg dr58:V, reg dc29:L, reg dx69:V, reg dx70:V, reg r231:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r232:V, reg r233:V, reg x11:*, reg x12:V, reg max2:cls, reg r234:V, reg as_POSIXlt5:cls, reg maxx16:*, reg maxx17:V, reg p19:p(V +), reg r236:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r237:V, reg r238:V, reg by27:*, reg by28:V, reg length9:cls, reg r239:V, reg r240:V, reg c78:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r241:V, reg r242:V, reg by29:*, reg by30:V, reg c79:L, reg by32:V, reg dr60:V, reg dc30:L, reg dx71:V, reg dx72:V, reg __9:cls, reg r243:V, reg as_integer2:cls, reg r244:V, reg r245:V, reg as_POSIXlt6:cls, reg end8:*, reg end9:V, reg step4:*, reg step5:V, reg r246:V, reg r247:V, reg r248:V, reg p20:p(V +), reg r250:V, reg qtr8:*, reg qtr9:V, reg c80:L, reg qtr11:V, reg dr62:V, reg dc31:L, reg dx73:V, reg dx74:V, reg end10:*, reg end11:V, reg c81:L, reg qtr13:V, reg end13:V, reg dr64:V, reg dc32:L, reg dx75:V, reg qtr15:V, reg dx76:V, reg r251:V, reg r252:V, reg __10:cls, reg r253:V, reg l48:*, reg c82:L, reg dx78:V, reg l50:*, reg dr66:V, reg dc33:L, reg dx80:V, reg dx82:V, reg r254:V, reg l51:*, reg c83:L, reg r256:I, reg l53:*, reg dr68:V, reg dc34:L, reg dx83:V, reg dx84:V, reg r259:V, reg l54:*, reg c84:L, reg r261:I, reg l56:*, reg dr70:V, reg dc35:L, reg dx85:V, reg dx86:V, reg r264:V, reg seq2:cls, reg start24:*, reg start25:V, reg p21:p(V +), reg end14:*, reg end15:V, reg p22:p(V +), reg paste:cls, reg step6:*, reg step7:V, reg r267:V, reg p23:p(V +), reg r269:V, reg p24:p(V +), reg r271:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r272:V, reg r273:V, reg breaks39:*, reg breaks40:V, reg length10:cls, reg r274:V, reg maxx18:*, reg maxx19:V, reg breaks41:*, reg breaks42:V, reg c85:L, reg maxx21:V, reg breaks44:V, reg dr72:V, reg dc36:L, reg dx87:V, reg maxx23:V, reg dx88:V, reg lb8:*, reg lb9:V, reg r275:V, reg __11:cls, reg r276:V, reg r277:V, reg c86:L, reg breaks45:*, reg breaks46:V, reg c87:L, reg breaks48:V, reg dr74:V, reg dc37:L, reg dx89:V, reg dx90:V, reg lb10:*, reg lb11:V, reg r278:V, reg __12:cls, reg r279:V, reg dx91:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r280:V, reg r281:V, reg by33:*, reg by34:V, reg length11:cls, reg r282:V, reg r283:V, reg c88:L, reg incr:*, reg incr1:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r284:V, reg incr4:V, reg r285:V, reg by35:*, reg by36:V, reg c89:L, reg incr6:V, reg by38:V, reg dr76:V, reg dc38:L, reg dx92:V, reg incr8:V, reg dx93:V, reg __13:cls, reg r286:V, reg as_integer3:cls, reg r287:V, reg r288:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r290:V, reg r291:V, reg x13:*, reg x14:V, reg max3:cls, reg r292:V, reg seq3:cls, reg start26:*, reg start27:V, reg p25:p(V +), reg maxx24:*, reg maxx25:V, reg incr9:*, reg incr10:V, reg r294:V, reg p26:p(V +), reg breaks49:*, reg breaks50:V, reg p27:p(V +), reg r297:V, reg breaks51:*, reg breaks52:V, reg c90:L, reg breaks54:V, reg dr78:V, reg dc39:L, reg dx94:V, reg dx95:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r298:V, reg breaks57:V, reg r299:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r302:V, reg breaks60:V, reg r303:R, reg r304:V, reg which:cls, reg breaks61:*, reg breaks62:V, reg maxx26:*, reg maxx27:V, reg r305:V, reg p28:p(V +), reg r307:V, reg max4:cls, reg r308:V, reg r309:V, reg r310:I, reg __14:cls, reg r311:V, reg stop3:cls, reg r312:V, reg cut:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r313:V, reg r314:V, reg x15:*, reg x16:V, reg unclass:cls, reg r315:V, reg p29:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r317:V, reg r318:V, reg breaks63:*, reg breaks64:V, reg unclass1:cls, reg r319:V, reg p30:p(V +), reg labels1:*, reg labels2:V, reg p31:p(V +), reg right1:*, reg right2:V, reg p32:p(V +), reg ddd1:dots?, reg r323:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r324:V, reg r325:V, reg labels3:*, reg labels4:V, reg c91:V, reg c92:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r326:V, reg r327:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r328:V, reg r329:V, reg breaks65:*, reg breaks66:V, reg is_numeric1:cls, reg r330:V, reg c93:L, reg x17:*, reg x18:V, reg c94:L, reg x20:V, reg dr80:V, reg dc40:L, reg dx96:V, reg dx97:V, reg duplicated:cls, reg res:*, reg res1:V, reg p33:p(V +), reg r332:V, reg r333:V, reg __15:cls, reg r334:V, reg dx98:V, reg breaks67:*, reg breaks68:V, reg c95:L, reg breaks70:V, reg dr82:V, reg dc41:L, reg dx99:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r335:V, reg breaks73:V, reg r336:V, reg breaks74:*, reg breaks75:V, reg length12:cls, reg r337:V, reg r338:V, reg __16:cls, reg r339:V, reg as_character:cls, reg r340:V, reg l57:*, reg levels__:cls, reg r341:V, reg res2:*, reg res3:V |
    mkenv;
    st x = x;
    st breaks = breaks;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(NULL) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    start_on_monday_isMissing = missing.0(start_on_monday);
    if start_on_monday_isMissing then L1(TRUE) else L1(start_on_monday);
  L1(start_on_monday_orDefault):
    st `start.on.monday` = start_on_monday_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L2(FALSE) else L2(right);
  L2(right_orDefault):
    st right = right_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L96() else L97();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L100() else L4();
  L96():
    x1 = ld x;
    check L98() else D0();
  L97():
    r = dyn base(<sym x>, "POSIXt");
    goto L3(r);
  D0():
    deopt 2 [x1];
  L4():
    goto L5();
  L5():
    as_POSIXct = ldf `as.POSIXct`;
    check L104() else D4();
  L98():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "POSIXt", FALSE);
    check L99() else D1();
  L100():
    stop = ldf stop;
    check L101() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L99():
    goto L3(r2);
  L101():
    r4 = dyn stop("'x' must be a date-time object");
    check L102() else D3();
  L104():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn as_POSIXct(p);
    check L105() else D5();
  D3():
    deopt 12 [r4];
  D5():
    deopt 18 [r7];
  L102():
    goto L5();
  L105():
    st x = r7;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L106() else L107();
  L6(r9):
    c1 = `as.logical`(r9);
    if c1 then L110() else L7();
  L106():
    breaks1 = ld breaks;
    check L108() else D6();
  L107():
    r8 = dyn base1(<sym breaks>, "POSIXt");
    goto L6(r8);
  D6():
    deopt 22 [breaks1];
  L7():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L114() else L115();
  L8():
    cut = ldf cut;
    check L461() else D123();
  L108():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    inherits1 = ldf inherits in base;
    r10 = dyn inherits1(breaks2, "POSIXt", FALSE);
    check L109() else D7();
  L110():
    sort = ldf sort;
    check L111() else D8();
  D7():
    deopt 27 [r10];
  D8():
    deopt 29 [];
  D123():
    deopt 578 [];
  L9(r17):
    c2 = `as.logical`(r17);
    if c2 then L118() else L10(c2);
  L109():
    goto L6(r10);
  L111():
    p2 = prom<V +>{
      as_POSIXct1 = ldf `as.POSIXct`;
      p1 = prom<V +>{
        breaks3 = ld breaks;
        breaks4 = force? breaks3;
        checkMissing(breaks4);
        return breaks4;
      };
      r12 = dyn as_POSIXct1(p1);
      return r12;
    };
    r14 = dyn sort(p2);
    check L112() else D9();
  L114():
    breaks5 = ld breaks;
    check L116() else D10();
  L115():
    r16 = dyn base2(<sym breaks>);
    goto L9(r16);
  L461():
    p29 = prom<V +>{
      sym30 = ldf unclass;
      base30 = ldf unclass in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r314):
      return r314;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      unclass = ldf unclass in base;
      r315 = dyn unclass(x16);
      goto L0(r315);
    L2():
      r313 = dyn base30(<sym x>);
      goto L0(r313);
    };
    p30 = prom<V +>{
      sym31 = ldf unclass;
      base31 = ldf unclass in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r318):
      return r318;
    L1():
      breaks63 = ld breaks;
      breaks64 = force? breaks63;
      checkMissing(breaks64);
      unclass1 = ldf unclass in base;
      r319 = dyn unclass1(breaks64);
      goto L0(r319);
    L2():
      r317 = dyn base31(<sym breaks>);
      goto L0(r317);
    };
    p31 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    p32 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    ddd1 = ld `...`;
    r323 = dyn cut[, , labels, right, `...`](p29, p30, p31, p32, ddd1);
    check L462() else D124();
  D9():
    deopt 31 [r14];
  D10():
    deopt 35 [breaks5];
  D124():
    deopt 586 [r323];
  L10(c4):
    c11 = `as.logical`(c4);
    if c11 then L124() else L12();
  L112():
    st breaks = r14;
    goto L8();
  L116():
    breaks6 = force? breaks5;
    checkMissing(breaks6);
    is_numeric = ldf `is.numeric` in base;
    r18 = dyn is_numeric(breaks6);
    check L117() else D11();
  L118():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L119() else L120();
  L462():
    st res = r323;
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L463() else L464();
  D11():
    deopt 38 [r18];
  L11(c7, r20):
    r22 = `==`(r20, 1);
    c8 = `as.logical`(r22);
    c9 = `&&`(c7, c8);
    goto L10(c9);
  L12():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L126() else L127();
  L87(r325):
    c92 = `as.logical`(r325);
    if c92 then L466() else L88();
  L117():
    goto L9(r18);
  L119():
    breaks7 = ld breaks;
    check L121() else D12();
  L120():
    r19 = dyn base3(<sym breaks>);
    goto L11(c2, r19);
  L124():
    goto L8();
  L463():
    labels3 = ld labels;
    check L465() else D125();
  L464():
    r324 = dyn base32(<sym labels>);
    goto L87(r324);
  D12():
    deopt 41 [c2, breaks7];
  D125():
    deopt 589 [labels3];
  L13(r24):
    c13 = `as.logical`(r24);
    if c13 then L129() else L14(c13);
  L88():
    goto L95();
  L95():
    res2 = ld res;
    check L493() else D137();
  L121():
    breaks8 = force? breaks7;
    checkMissing(breaks8);
    length = ldf length in base;
    r21 = dyn length(breaks8);
    check L122() else D13();
  L126():
    breaks9 = ld breaks;
    check L128() else D14();
  L127():
    r23 = dyn base4(<sym breaks>);
    goto L13(r23);
  L465():
    labels4 = force? labels3;
    checkMissing(labels4);
    c91 = `==`(labels4, NULL);
    goto L87(c91);
  L466():
    sym33 = ldf `as.character`;
    base33 = ldf `as.character` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L467() else L468();
  D13():
    deopt 44 [c2, r21];
  D14():
    deopt 51 [breaks9];
  D137():
    deopt 627 [res2];
  L14(c15):
    c22 = `as.logical`(c15);
    if c22 then L135() else L16();
  L89(r327):
    l57 = ld res;
    levels__ = ldf `levels<-`;
    check L490() else D135();
  L122():
    goto L11(c2, r21);
  L128():
    breaks10 = force? breaks9;
    checkMissing(breaks10);
    c12 = `is.character`(breaks10);
    goto L13(c12);
  L129():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L130() else L131();
  L467():
    sym34 = ldf `is.numeric`;
    base34 = ldf `is.numeric` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L469() else L470();
  L468():
    r326 = dyn base33(<lang if(is.numeric(breaks), `[`(x, `!`(duplicated(res))), `[`(breaks, `-`(length(breaks))))>);
    goto L89(r326);
  L493():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D135():
    deopt 621 [r327, l57, r327];
  L15(c18, r26):
    r28 = `==`(r26, 1);
    c19 = `as.logical`(r28);
    c20 = `&&`(c18, c19);
    goto L14(c20);
  L16():
    stop3 = ldf stop;
    check L459() else D121();
  L90(r329):
    c93 = `as.logical`(r329);
    if c93 then L473() else L91();
  L130():
    breaks11 = ld breaks;
    check L132() else D15();
  L131():
    r25 = dyn base5(<sym breaks>);
    goto L15(c13, r25);
  L135():
    strsplit = ldf strsplit;
    check L136() else D17();
  L469():
    breaks65 = ld breaks;
    check L471() else D126();
  L470():
    r328 = dyn base34(<sym breaks>);
    goto L90(r328);
  L490():
    r341 = dyn levels__(l57, NULL, r327);
    check L491() else D136();
  D15():
    deopt 56 [c13, breaks11];
  D17():
    deopt 64 [];
  D121():
    deopt 574 [];
  D126():
    deopt 596 [breaks65];
  D136():
    deopt 623 [r327, r341];
  L91():
    breaks67 = ld breaks;
    check L481() else D131();
  L93(dx98):
    as_character = ldf `as.character` in base;
    r340 = dyn as_character(dx98);
    check L489() else D134();
  L132():
    breaks12 = force? breaks11;
    checkMissing(breaks12);
    length1 = ldf length in base;
    r27 = dyn length1(breaks12);
    check L133() else D16();
  L136():
    p3 = prom<V +>{
      breaks13 = ld breaks;
      breaks14 = force? breaks13;
      checkMissing(breaks14);
      return breaks14;
    };
    r30 = dyn strsplit[, , fixed](p3, " ", TRUE);
    check L137() else D18();
  L459():
    r312 = dyn stop3("invalid specification of 'breaks'");
    check L460() else D122();
  L471():
    breaks66 = force? breaks65;
    checkMissing(breaks66);
    is_numeric1 = ldf `is.numeric` in base;
    r330 = dyn is_numeric1(breaks66);
    check L472() else D127();
  L473():
    x17 = ld x;
    check L474() else D128();
  L491():
    st res = r341;
    goto L95();
  D16():
    deopt 59 [c13, r27];
  D18():
    deopt 69 [r30];
  D122():
    deopt 576 [r312];
  D127():
    deopt 599 [r330];
  D128():
    deopt 600 [x17];
  D131():
    deopt 608 [breaks67];
  D134():
    deopt 619 [r340];
  L133():
    goto L15(c13, r27);
  L137():
    c23 = `is.object`(r30);
    if c23 then L138() else L139(r30);
  L460():
    goto L8();
  L472():
    goto L90(r330);
  L474():
    x18 = force? x17;
    checkMissing(x18);
    c94 = `is.object`(x18);
    if c94 then L475() else L476(x18);
  L481():
    breaks68 = force? breaks67;
    checkMissing(breaks68);
    c95 = `is.object`(breaks68);
    if c95 then L482() else L483(breaks68);
  L489():
    goto L89(r340);
  L17(dx1):
    st by2 = dx1;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L141() else L142();
  L92(dx97):
    goto L93(dx97);
  L138():
    dr = tryDispatchBuiltin.1("[[", r30);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L140() else L139(dr);
  L139(r32):
    __ = ldf `[[` in base;
    r33 = dyn __(r32, 1);
    goto L17(r33);
  L475():
    dr80 = tryDispatchBuiltin.1("[", x18);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L477() else L476(dr80);
  L476(x20):
    duplicated = ldf duplicated;
    check L478() else D129();
  L482():
    dr82 = tryDispatchBuiltin.1("[", breaks68);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L484() else L483(dr82);
  L483(breaks70):
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L485() else L486();
  D129():
    deopt 603 [x20];
  L18(r35):
    r37 = `>`(r35, 2);
    c24 = `as.logical`(r37);
    if c24 then L19(c24) else L145();
  L94(breaks73, r336):
    r338 = `-`(<missing>, r336);
    __16 = ldf `[` in base;
    r339 = dyn __16(breaks73, r338);
    goto L93(r339);
  L140():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L141():
    by2 = ld by2;
    check L143() else D19();
  L142():
    r34 = dyn base6(<sym by2>);
    goto L18(r34);
  L477():
    dx96 = getTryDispatchBuiltinValue(dr80);
    goto L92(dx96);
  L478():
    p33 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r332 = dyn duplicated(p33);
    check L479() else D130();
  L484():
    dx99 = getTryDispatchBuiltinValue(dr82);
    goto L93(dx99);
  L485():
    breaks74 = ld breaks;
    check L487() else D132();
  L486():
    r335 = dyn base35(<sym breaks>);
    goto L94(breaks70, r335);
  D19():
    deopt 76 [by2];
  D130():
    deopt 605 [x20, r332];
  D132():
    deopt 612 [breaks70, breaks74];
  L19(c25):
    c33 = `as.logical`(c25);
    if c33 then L151() else L21();
  L143():
    by3 = force? by2;
    checkMissing(by3);
    length2 = ldf length in base;
    r36 = dyn length2(by3);
    check L144() else D20();
  L145():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L146() else L147();
  L479():
    r333 = `!`(r332);
    __15 = ldf `[` in base;
    r334 = dyn __15(x20, r333);
    goto L92(r334);
  L487():
    breaks75 = force? breaks74;
    checkMissing(breaks75);
    length12 = ldf length in base;
    r337 = dyn length12(breaks75);
    check L488() else D133();
  D20():
    deopt 79 [r36];
  D133():
    deopt 615 [breaks70, r337];
  L20(c29, r39):
    r41 = `<`(r39, 1);
    c30 = `as.logical`(r41);
    c31 = `||`(c29, c30);
    goto L19(c31);
  L21():
    goto L22();
  L22():
    pmatch = ldf pmatch;
    check L155() else D25();
  L144():
    goto L18(r36);
  L146():
    by4 = ld by2;
    check L148() else D21();
  L147():
    r38 = dyn base7(<sym by2>);
    goto L20(c24, r38);
  L151():
    stop1 = ldf stop;
    check L152() else D23();
  L488():
    goto L94(breaks70, r337);
  D21():
    deopt 84 [c24, by4];
  D23():
    deopt 92 [];
  D25():
    deopt 98 [];
  L148():
    by5 = force? by4;
    checkMissing(by5);
    length3 = ldf length in base;
    r40 = dyn length3(by5);
    check L149() else D22();
  L152():
    r42 = dyn stop1("invalid specification of 'breaks'");
    check L153() else D24();
  L155():
    p4 = prom<V +>{
      by6 = ld by2;
      by7 = force? by6;
      checkMissing(by7);
      c34 = `is.object`(by7);
      if c34 then L2() else L3(by7);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", by7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(by9):
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L1(by12, r45):
      __1 = ldf `[` in base;
      r47 = dyn __1(by12, r45);
      goto L0(r47);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      by13 = ld by2;
      by14 = force? by13;
      checkMissing(by14);
      length4 = ldf length in base;
      r46 = dyn length4(by14);
      goto L1(by9, r46);
    L6():
      r44 = dyn base8(<sym by2>);
      goto L1(by9, r44);
    };
    p5 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      c35 = ldf c in base;
      r51 = dyn c35("secs", "mins", "hours", "days", "weeks", "months", "years", "DSTdays", "quarters");
      goto L0(r51);
    L2():
      r49 = dyn base9("secs", "mins", "hours", "days", "weeks", "months", "years", "DSTdays", "quarters");
      goto L0(r49);
    };
    r53 = dyn pmatch(p4, p5);
    check L156() else D26();
  D22():
    deopt 87 [c24, r40];
  D24():
    deopt 94 [r42];
  D26():
    deopt 101 [r53];
  L149():
    goto L20(c24, r40);
  L153():
    goto L22();
  L156():
    st valid = r53;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L157() else L158();
  L23(r55):
    c36 = `as.logical`(r55);
    if c36 then L161() else L24();
  L157():
    valid = ld valid;
    check L159() else D27();
  L158():
    r54 = dyn base10(<sym valid>);
    goto L23(r54);
  D27():
    deopt 105 [valid];
  L24():
    goto L25();
  L25():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L165() else D31();
  L159():
    valid1 = force? valid;
    checkMissing(valid1);
    is_na = ldf `is.na` in base;
    r56 = dyn is_na(valid1);
    check L160() else D28();
  L161():
    stop2 = ldf stop;
    check L162() else D29();
  D28():
    deopt 108 [r56];
  D29():
    deopt 110 [];
  D31():
    deopt 116 [];
  L160():
    goto L23(r56);
  L162():
    r57 = dyn stop2("invalid specification of 'breaks'");
    check L163() else D30();
  L165():
    p6 = prom<V +>{
      sym11 = ldf min;
      base11 = ldf min in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      min = ldf min in base;
      r61 = dyn min(x6, TRUE);
      goto L0(r61);
    L2():
      r59 = dyn base11[, `na.rm`](<sym x>, TRUE);
      goto L0(r59);
    };
    r63 = dyn as_POSIXlt(p6);
    check L166() else D32();
  D30():
    deopt 112 [r57];
  D32():
    deopt 118 [r63];
  L163():
    goto L25();
  L166():
    st start = r63;
    st incr = 1.0;
    valid2 = ld valid;
    check L167() else D33();
  D33():
    deopt 123 [valid2];
  L167():
    valid3 = force? valid2;
    checkMissing(valid3);
    r64 = `>`(valid3, 1);
    c37 = `as.logical`(r64);
    if c37 then L168() else L26();
  L26():
    goto L27();
  L27():
    valid4 = ld valid;
    check L174() else D34();
  L168():
    l = ld start;
    c38 = `is.object`(l);
    if c38 then L170() else L171(0, l);
  D34():
    deopt 137 [valid4];
  L169(dx5):
    st start = dx5;
    st incr = 60.0;
    goto L27();
  L170():
    dr4 = tryDispatchBuiltin.0("$<-", l, 0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L172() else L171(0, dr4);
  L171(r66, l2):
    r69 = `$<-`(l2, <sym sec>, 0);
    goto L169(r69);
  L174():
    valid5 = force? valid4;
    checkMissing(valid5);
    r71 = `>`(valid5, 2);
    c39 = `as.logical`(r71);
    if c39 then L175() else L28();
  L28():
    goto L29();
  L29():
    valid6 = ld valid;
    check L181() else D35();
  L172():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L169(dx4);
  L175():
    l3 = ld start;
    c40 = `is.object`(l3);
    if c40 then L177() else L178(0, l3);
  D35():
    deopt 151 [valid6];
  L176(dx7):
    st start = dx7;
    st incr = 3600.0;
    goto L29();
  L177():
    dr6 = tryDispatchBuiltin.0("$<-", l3, 0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L179() else L178(0, dr6);
  L178(r73, l5):
    r76 = `$<-`(l5, <sym min>, 0);
    goto L176(r76);
  L181():
    valid7 = force? valid6;
    checkMissing(valid7);
    r78 = `>`(valid7, 3);
    c41 = `as.logical`(r78);
    if c41 then L182() else L30();
  L30():
    goto L31();
  L31():
    valid8 = ld valid;
    check L192() else D36();
  L179():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L176(dx6);
  L182():
    l6 = ld start;
    c42 = `is.object`(l6);
    if c42 then L184() else L185(0, l6);
  D36():
    deopt 170 [valid8];
  L183(dx9):
    st start = dx9;
    l9 = ld start;
    c43 = `is.object`(l9);
    if c43 then L188() else L189(-1, l9);
  L184():
    dr8 = tryDispatchBuiltin.0("$<-", l6, 0);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L186() else L185(0, dr8);
  L185(r80, l8):
    r83 = `$<-`(l8, <sym hour>, 0);
    goto L183(r83);
  L192():
    valid9 = force? valid8;
    checkMissing(valid9);
    r90 = `==`(valid9, 5);
    c44 = `as.logical`(r90);
    if c44 then L193() else L32();
  L32():
    goto L35();
  L35():
    valid10 = ld valid;
    check L223() else D43();
  L186():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L183(dx8);
  L187(dx11):
    st start = dx11;
    st incr = 86400.0;
    goto L31();
  L188():
    dr10 = tryDispatchBuiltin.0("$<-", l9, -1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L190() else L189(-1, dr10);
  L189(r85, l11):
    r88 = `$<-`(l11, <sym isdst>, -1);
    goto L187(r88);
  L193():
    start = ld start;
    check L194() else D37();
  D37():
    deopt 174 [start];
  D43():
    deopt 204 [valid10];
  L190():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L187(dx10);
  L194():
    start1 = force? start;
    checkMissing(start1);
    c45 = `is.object`(start1);
    if c45 then L196() else L197(start1);
  L223():
    valid11 = force? valid10;
    checkMissing(valid11);
    r113 = `==`(valid11, 8);
    c52 = `as.logical`(r113);
    if c52 then L224() else L36();
  L36():
    goto L37();
  L37():
    valid12 = ld valid;
    check L226() else D44();
  L195(dx13):
    start4 = ld start;
    check L199() else D38();
  L196():
    dr12 = tryDispatchBuiltin.1("$", start1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L198() else L197(dr12);
  L197(start3):
    r91 = `$`(start3, <sym mday>);
    goto L195(r91);
  L224():
    st incr = 90000.0;
    goto L37();
  D38():
    deopt 176 [dx13, start4];
  D44():
    deopt 213 [valid12];
  L198():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L195(dx12);
  L199():
    start5 = force? start4;
    checkMissing(start5);
    c46 = `is.object`(start5);
    if c46 then L201() else L202(dx13, start5);
  L226():
    valid13 = force? valid12;
    checkMissing(valid13);
    r115 = `==`(valid13, 6);
    c53 = `as.logical`(r115);
    if c53 then L227() else L38();
  L38():
    valid14 = ld valid;
    check L281() else D64();
  L50(dx41):
    goto L8();
  L200(dx18, dx19):
    r93 = `-`(dx18, dx19);
    l12 = ld start;
    c47 = `is.object`(l12);
    if c47 then L205() else L206(r93, l12);
  L201():
    dr14 = tryDispatchBuiltin.1("$", start5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L203() else L202(dx13, dr14);
  L202(dx15, start7):
    r92 = `$`(start7, <sym wday>);
    goto L200(dx15, r92);
  L227():
    l18 = ld start;
    c54 = `is.object`(l18);
    if c54 then L229() else L230(1, l18);
  D64():
    deopt 303 [valid14];
  L203():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L200(dx13, dx17);
  L204(dx21):
    st start = dx21;
    start_on_monday1 = ld `start.on.monday`;
    check L208() else D39();
  L205():
    dr16 = tryDispatchBuiltin.0("$<-", l12, r93);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L207() else L206(r93, dr16);
  L206(r95, l14):
    r98 = `$<-`(l14, <sym mday>, r93);
    goto L204(r98);
  L228(dx29):
    st start = dx29;
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L232() else L233();
  L229():
    dr24 = tryDispatchBuiltin.0("$<-", l18, 1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L231() else L230(1, dr24);
  L230(r117, l20):
    r120 = `$<-`(l20, <sym mday>, 1);
    goto L228(r120);
  L281():
    valid15 = force? valid14;
    checkMissing(valid15);
    r162 = `==`(valid15, 7);
    c62 = `as.logical`(r162);
    if c62 then L282() else L51();
  D39():
    deopt 183 [start_on_monday1];
  L39(r122):
    st maxx = r122;
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L236() else D47();
  L51():
    valid16 = ld valid;
    check L344() else D84();
  L207():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L204(dx20);
  L208():
    start_on_monday2 = force? start_on_monday1;
    checkMissing(start_on_monday2);
    c48 = `as.logical`(start_on_monday2);
    if c48 then L209() else L33();
  L231():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L228(dx28);
  L232():
    x7 = ld x;
    check L234() else D45();
  L233():
    r121 = dyn base12[, `na.rm`](<sym x>, TRUE);
    goto L39(r121);
  L282():
    l27 = ld start;
    c63 = `is.object`(l27);
    if c63 then L284() else L285(0, l27);
  D45():
    deopt 224 [x7];
  D47():
    deopt 232 [];
  D84():
    deopt 403 [valid16];
  L33():
    goto L34();
  L34():
    st incr = 604800.0;
    goto L35();
  L209():
    start8 = ld start;
    check L210() else D40();
  L234():
    x8 = force? x7;
    checkMissing(x8);
    max = ldf max in base;
    r123 = dyn max(x8, TRUE);
    check L235() else D46();
  L236():
    p9 = prom<V +>{
      maxx = ld maxx;
      maxx1 = force? maxx;
      checkMissing(maxx1);
      return maxx1;
    };
    r125 = dyn as_POSIXlt1(p9);
    check L237() else D48();
  L283(dx43):
    st start = dx43;
    l30 = ld start;
    c64 = `is.object`(l30);
    if c64 then L288() else L289(1, l30);
  L284():
    dr36 = tryDispatchBuiltin.0("$<-", l27, 0);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L286() else L285(0, dr36);
  L285(r164, l29):
    r167 = `$<-`(l29, <sym mon>, 0);
    goto L283(r167);
  L344():
    valid17 = force? valid16;
    checkMissing(valid17);
    r219 = `==`(valid17, 9);
    c73 = `as.logical`(r219);
    if c73 then L345() else L63();
  D40():
    deopt 185 [start8];
  D46():
    deopt 229 [r123];
  D48():
    deopt 234 [r125];
  L63():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L427() else L428();
  L210():
    start9 = force? start8;
    checkMissing(start9);
    c49 = `is.object`(start9);
    if c49 then L212() else L213(start9);
  L235():
    goto L39(r123);
  L237():
    st end = r125;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L238() else L239();
  L286():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L283(dx42);
  L287(dx45):
    st start = dx45;
    sym16 = ldf max;
    base16 = ldf max in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L291() else L292();
  L288():
    dr38 = tryDispatchBuiltin.0("$<-", l30, 1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L290() else L289(1, dr38);
  L289(r169, l32):
    r172 = `$<-`(l32, <sym mday>, 1);
    goto L287(r172);
  L345():
    sym20 = ldf rep;
    base20 = ldf rep in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L346() else L347();
  L40(r127):
    r129 = `==`(r127, 2);
    c55 = `as.logical`(r129);
    if c55 then L242() else L41();
  L52(r174):
    st maxx = r174;
    as_POSIXlt3 = ldf `as.POSIXlt`;
    check L295() else D67();
  L64(r221):
    st qtr = r221;
    qtr = ld qtr;
    check L348() else D85();
  L78(r281):
    r283 = `==`(r281, 2);
    c88 = `as.logical`(r283);
    if c88 then L431() else L79();
  L211(dx23):
    ifelse = ldf ifelse;
    check L215() else D41();
  L212():
    dr18 = tryDispatchBuiltin.1("$", start9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L214() else L213(dr18);
  L213(start11):
    r99 = `$`(start11, <sym mday>);
    goto L211(r99);
  L238():
    by15 = ld by2;
    check L240() else D49();
  L239():
    r126 = dyn base13(<sym by2>);
    goto L40(r126);
  L290():
    dx44 = getTryDispatchBuiltinValue(dr38);
    goto L287(dx44);
  L291():
    x9 = ld x;
    check L293() else D65();
  L292():
    r173 = dyn base16[, `na.rm`](<sym x>, TRUE);
    goto L52(r173);
  L346():
    rep = ldf rep in base;
    r222 = dyn rep(<lang c(0, 3, 6, 9)>, 3);
    goto L64(r222);
  L347():
    r220 = dyn base20[, each](<lang c(0, 3, 6, 9)>, 3);
    goto L64(r220);
  L427():
    by33 = ld by2;
    check L429() else D108();
  L428():
    r280 = dyn base25(<sym by2>);
    goto L78(r280);
  D41():
    deopt 188 [dx23];
  D49():
    deopt 238 [by15];
  D65():
    deopt 319 [x9];
  D67():
    deopt 327 [];
  D85():
    deopt 411 [qtr];
  D108():
    deopt 521 [by33];
  L41():
    goto L44(1);
  L44(r134):
    st step = r134;
    as_POSIXlt2 = ldf `as.POSIXlt`;
    check L251() else D53();
  L79():
    goto L82();
  L82():
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L441() else L442();
  L214():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L211(dx22);
  L215():
    p7 = prom<V +>{
      start12 = ld start;
      start13 = force? start12;
      checkMissing(start13);
      c50 = `is.object`(start13);
      if c50 then L1() else L2(start13);
    L0(dx25):
      r101 = `>`(dx25, 0);
      return r101;
    L1():
      dr20 = tryDispatchBuiltin.1("$", start13);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(start15):
      r100 = `$`(start15, <sym wday>);
      goto L0(r100);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    };
    p8 = prom<V +>{
      return -6;
    };
    r104 = dyn ifelse(p7, 1, p8);
    check L216() else D42();
  L240():
    by16 = force? by15;
    checkMissing(by16);
    length5 = ldf length in base;
    r128 = dyn length5(by16);
    check L241() else D50();
  L242():
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L243() else L244();
  L293():
    x10 = force? x9;
    checkMissing(x10);
    max1 = ldf max in base;
    r175 = dyn max1(x10, TRUE);
    check L294() else D66();
  L295():
    p14 = prom<V +>{
      maxx8 = ld maxx;
      maxx9 = force? maxx8;
      checkMissing(maxx9);
      return maxx9;
    };
    r177 = dyn as_POSIXlt3(p14);
    check L296() else D68();
  L348():
    qtr1 = force? qtr;
    checkMissing(qtr1);
    c74 = `is.object`(qtr1);
    if c74 then L349() else L350(qtr1);
  L429():
    by34 = force? by33;
    checkMissing(by34);
    length11 = ldf length in base;
    r282 = dyn length11(by34);
    check L430() else D109();
  L431():
    incr = ld incr;
    check L432() else D110();
  D42():
    deopt 192 [dx23, r104];
  D50():
    deopt 241 [r128];
  D53():
    deopt 257 [];
  D66():
    deopt 324 [r175];
  D68():
    deopt 329 [r177];
  D109():
    deopt 524 [r282];
  D110():
    deopt 527 [incr];
  L42(r131):
    goto L44(r131);
  L65(dx60):
    l42 = ld start;
    c76 = `is.object`(l42);
    if c76 then L358() else L359(dx60, l42);
  L83(r291):
    st maxx = r291;
    seq3 = ldf seq;
    check L445() else D115();
  L216():
    r105 = `+`(dx23, r104);
    l15 = ld start;
    c51 = `is.object`(l15);
    if c51 then L218() else L219(r105, l15);
  L241():
    goto L40(r128);
  L243():
    by17 = ld by2;
    check L245() else D51();
  L244():
    r130 = dyn base14(<lang `[`(by2, 1)>);
    goto L42(r130);
  L251():
    p10 = prom<V +>{
      end = ld end;
      end1 = force? end;
      checkMissing(end1);
      step = ld step;
      step1 = force? step;
      checkMissing(step1);
      r135 = `*`(31.0, step1);
      r136 = `*`(r135, 86400.0);
      r137 = `+`(end1, r136);
      return r137;
    };
    r139 = dyn as_POSIXlt2(p10);
    check L252() else D54();
  L294():
    goto L52(r175);
  L296():
    st end = r177;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L297() else L298();
  L349():
    dr52 = tryDispatchBuiltin.1("[", qtr1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L351() else L350(dr52);
  L350(qtr3):
    start20 = ld start;
    check L352() else D86();
  L430():
    goto L78(r282);
  L432():
    incr1 = force? incr;
    checkMissing(incr1);
    sym26 = ldf `as.integer`;
    base26 = ldf `as.integer` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L433() else L434();
  L441():
    x13 = ld x;
    check L443() else D113();
  L442():
    r290 = dyn base27[, `na.rm`](<sym x>, TRUE);
    goto L83(r290);
  D51():
    deopt 246 [by17];
  D54():
    deopt 259 [r139];
  D86():
    deopt 413 [qtr3, start20];
  D113():
    deopt 543 [x13];
  D115():
    deopt 551 [];
  L53(r179):
    r181 = `==`(r179, 2);
    c65 = `as.logical`(r181);
    if c65 then L301() else L54();
  L80(incr4, r285):
    r288 = `*`(incr4, r285);
    st incr = r288;
    goto L82();
  L217(r109, dx27):
    st start = dx27;
    goto L34();
  L218():
    dr22 = tryDispatchBuiltin.0("$<-", l15, r105);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L220() else L219(r105, dr22);
  L219(r107, l17):
    r110 = `$<-`(l17, <sym mday>, r105);
    goto L217(r107, r110);
  L245():
    by18 = force? by17;
    checkMissing(by18);
    c56 = `is.object`(by18);
    if c56 then L246() else L247(by18);
  L252():
    st end = r139;
    l21 = ld end;
    c57 = `is.object`(l21);
    if c57 then L254() else L255(1, l21);
  L297():
    by21 = ld by2;
    check L299() else D69();
  L298():
    r178 = dyn base17(<sym by2>);
    goto L53(r178);
  L351():
    dx59 = getTryDispatchBuiltinValue(dr52);
    goto L65(dx59);
  L352():
    start21 = force? start20;
    checkMissing(start21);
    c75 = `is.object`(start21);
    if c75 then L354() else L355(qtr3, start21);
  L357(dx68):
    st start = dx68;
    l45 = ld start;
    c77 = `is.object`(l45);
    if c77 then L362() else L363(1, l45);
  L358():
    dr56 = tryDispatchBuiltin.0("$<-", l42, dx60);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L360() else L359(dx60, dr56);
  L359(dx64, l44):
    r226 = `$<-`(l44, <sym mon>, dx60);
    goto L357(r226);
  L433():
    by35 = ld by2;
    check L435() else D111();
  L434():
    r284 = dyn base26(<lang `[`(by2, 1)>);
    goto L80(incr1, r284);
  L443():
    x14 = force? x13;
    checkMissing(x14);
    max3 = ldf max in base;
    r292 = dyn max3(x14, TRUE);
    check L444() else D114();
  L445():
    p25 = prom<V +>{
      start26 = ld start;
      start27 = force? start26;
      checkMissing(start27);
      return start27;
    };
    p26 = prom<V +>{
      maxx24 = ld maxx;
      maxx25 = force? maxx24;
      checkMissing(maxx25);
      incr9 = ld incr;
      incr10 = force? incr9;
      checkMissing(incr10);
      r294 = `+`(maxx25, incr10);
      return r294;
    };
    p27 = prom<V +>{
      breaks49 = ld breaks;
      breaks50 = force? breaks49;
      checkMissing(breaks50);
      return breaks50;
    };
    r297 = dyn seq3(p25, p26, p27);
    check L446() else D116();
  D69():
    deopt 333 [by21];
  D111():
    deopt 530 [incr1, by35];
  D114():
    deopt 548 [r292];
  D116():
    deopt 555 [r297];
  L43(dx31):
    as_integer = ldf `as.integer` in base;
    r133 = dyn as_integer(dx31);
    check L249() else D52();
  L54():
    goto L57(1);
  L57(r186):
    st step = r186;
    as_POSIXlt4 = ldf `as.POSIXlt`;
    check L310() else D73();
  L220():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L217(r105, dx26);
  L246():
    dr26 = tryDispatchBuiltin.1("[", by18);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L248() else L247(dr26);
  L247(by20):
    __2 = ldf `[` in base;
    r132 = dyn __2(by20, 1);
    goto L43(r132);
  L253(dx33):
    st end = dx33;
    l24 = ld end;
    c58 = `is.object`(l24);
    if c58 then L258() else L259(-1, l24);
  L254():
    dr28 = tryDispatchBuiltin.0("$<-", l21, 1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L256() else L255(1, dr28);
  L255(r141, l23):
    r144 = `$<-`(l23, <sym mday>, 1);
    goto L253(r144);
  L299():
    by22 = force? by21;
    checkMissing(by22);
    length7 = ldf length in base;
    r180 = dyn length7(by22);
    check L300() else D70();
  L301():
    sym18 = ldf `as.integer`;
    base18 = ldf `as.integer` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L302() else L303();
  L353(qtr7, dx62):
    r224 = `+`(dx62, 1);
    __8 = ldf `[` in base;
    r225 = dyn __8(qtr7, r224);
    goto L65(r225);
  L354():
    dr54 = tryDispatchBuiltin.1("$", start21);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L356() else L355(qtr3, dr54);
  L355(qtr5, start23):
    r223 = `$`(start23, <sym mon>);
    goto L353(qtr5, r223);
  L360():
    dx66 = getTryDispatchBuiltinValue(dr56);
    goto L357(dx66);
  L361(dx70):
    st start = dx70;
    sym21 = ldf max;
    base21 = ldf max in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L365() else L366();
  L362():
    dr58 = tryDispatchBuiltin.0("$<-", l45, 1);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L364() else L363(1, dr58);
  L363(r228, l47):
    r231 = `$<-`(l47, <sym mday>, 1);
    goto L361(r231);
  L435():
    by36 = force? by35;
    checkMissing(by36);
    c89 = `is.object`(by36);
    if c89 then L436() else L437(incr1, by36);
  L444():
    goto L83(r292);
  L446():
    st breaks = r297;
    breaks51 = ld breaks;
    check L447() else D117();
  D52():
    deopt 252 [r133];
  D70():
    deopt 336 [r180];
  D73():
    deopt 352 [];
  D117():
    deopt 557 [breaks51];
  L55(r183):
    goto L57(r183);
  L66(r233):
    st maxx = r233;
    as_POSIXlt5 = ldf `as.POSIXlt`;
    check L369() else D89();
  L81(incr8, dx93):
    as_integer3 = ldf `as.integer` in base;
    r287 = dyn as_integer3(dx93);
    check L439() else D112();
  L248():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L43(dx30);
  L249():
    goto L42(r133);
  L256():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L253(dx32);
  L257(dx35):
    st end = dx35;
    seq = ldf seq;
    check L261() else D55();
  L258():
    dr30 = tryDispatchBuiltin.0("$<-", l24, -1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L260() else L259(-1, dr30);
  L259(r146, l26):
    r149 = `$<-`(l26, <sym isdst>, -1);
    goto L257(r149);
  L300():
    goto L53(r180);
  L302():
    by23 = ld by2;
    check L304() else D71();
  L303():
    r182 = dyn base18(<lang `[`(by2, 1)>);
    goto L55(r182);
  L310():
    p15 = prom<V +>{
      end4 = ld end;
      end5 = force? end4;
      checkMissing(end5);
      step2 = ld step;
      step3 = force? step2;
      checkMissing(step3);
      r187 = `*`(366.0, step3);
      r188 = `*`(r187, 86400.0);
      r189 = `+`(end5, r188);
      return r189;
    };
    r191 = dyn as_POSIXlt4(p15);
    check L311() else D74();
  L356():
    dx61 = getTryDispatchBuiltinValue(dr54);
    goto L353(qtr3, dx61);
  L364():
    dx69 = getTryDispatchBuiltinValue(dr58);
    goto L361(dx69);
  L365():
    x11 = ld x;
    check L367() else D87();
  L366():
    r232 = dyn base21[, `na.rm`](<sym x>, TRUE);
    goto L66(r232);
  L436():
    dr76 = tryDispatchBuiltin.1("[", by36);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L438() else L437(incr1, dr76);
  L437(incr6, by38):
    __13 = ldf `[` in base;
    r286 = dyn __13(by38, 1);
    goto L81(incr6, r286);
  L447():
    breaks52 = force? breaks51;
    checkMissing(breaks52);
    c90 = `is.object`(breaks52);
    if c90 then L448() else L449(breaks52);
  D55():
    deopt 272 [];
  D71():
    deopt 341 [by23];
  D74():
    deopt 354 [r191];
  D87():
    deopt 429 [x11];
  D89():
    deopt 437 [];
  D112():
    deopt 536 [incr8, r287];
  L84(dx95):
    st breaks = dx95;
    goto L50(dx95);
  L260():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L257(dx34);
  L261():
    p11 = prom<V +>{
      start16 = ld start;
      start17 = force? start16;
      checkMissing(start17);
      return start17;
    };
    p12 = prom<V +>{
      end2 = ld end;
      end3 = force? end2;
      checkMissing(end3);
      return end3;
    };
    p13 = prom<V +>{
      breaks15 = ld breaks;
      breaks16 = force? breaks15;
      checkMissing(breaks16);
      return breaks16;
    };
    r153 = dyn seq(p11, p12, p13);
    check L262() else D56();
  L304():
    by24 = force? by23;
    checkMissing(by24);
    c66 = `is.object`(by24);
    if c66 then L305() else L306(by24);
  L311():
    st end = r191;
    l33 = ld end;
    c67 = `is.object`(l33);
    if c67 then L313() else L314(0, l33);
  L367():
    x12 = force? x11;
    checkMissing(x12);
    max2 = ldf max in base;
    r234 = dyn max2(x12, TRUE);
    check L368() else D88();
  L369():
    p19 = prom<V +>{
      maxx16 = ld maxx;
      maxx17 = force? maxx16;
      checkMissing(maxx17);
      return maxx17;
    };
    r236 = dyn as_POSIXlt5(p19);
    check L370() else D90();
  L438():
    dx92 = getTryDispatchBuiltinValue(dr76);
    goto L81(incr1, dx92);
  L439():
    goto L80(incr8, r287);
  L448():
    dr78 = tryDispatchBuiltin.1("[", breaks52);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L450() else L449(dr78);
  L449(breaks54):
    sym28 = ldf seq_len;
    base28 = ldf seq_len in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L451() else L452();
  D56():
    deopt 276 [r153];
  D88():
    deopt 434 [r234];
  D90():
    deopt 439 [r236];
  L56(dx47):
    as_integer1 = ldf `as.integer` in base;
    r185 = dyn as_integer1(dx47);
    check L308() else D72();
  L85(breaks57, r299):
    __14 = ldf `[` in base;
    r311 = dyn __14(breaks57, r299);
    goto L84(r311);
  L262():
    st breaks = r153;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L263() else L264();
  L305():
    dr40 = tryDispatchBuiltin.1("[", by24);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L307() else L306(dr40);
  L306(by26):
    __5 = ldf `[` in base;
    r184 = dyn __5(by26, 1);
    goto L56(r184);
  L312(dx49):
    st end = dx49;
    l36 = ld end;
    c68 = `is.object`(l36);
    if c68 then L317() else L318(1, l36);
  L313():
    dr42 = tryDispatchBuiltin.0("$<-", l33, 0);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L315() else L314(0, dr42);
  L314(r193, l35):
    r196 = `$<-`(l35, <sym mon>, 0);
    goto L312(r196);
  L368():
    goto L66(r234);
  L370():
    st end = r236;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L371() else L372();
  L450():
    dx94 = getTryDispatchBuiltinValue(dr78);
    goto L84(dx94);
  L451():
    sym29 = ldf max;
    base29 = ldf max in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L453() else L454();
  L452():
    r298 = dyn base28(<lang `+`(1.0, max(which(`<=`(breaks, maxx))))>);
    goto L85(breaks54, r298);
  D72():
    deopt 347 [r185];
  L45(r155):
    st lb = r155;
    maxx2 = ld maxx;
    check L267() else D59();
  L67(r238):
    r240 = `==`(r238, 2);
    c78 = `as.logical`(r240);
    if c78 then L375() else L68();
  L86(breaks60, r303, r304):
    r309 = `+`(r303, r304);
    r310 = seq_len(r309);
    goto L85(breaks60, r310);
  L263():
    breaks17 = ld breaks;
    check L265() else D57();
  L264():
    r154 = dyn base15(<sym breaks>);
    goto L45(r154);
  L307():
    dx46 = getTryDispatchBuiltinValue(dr40);
    goto L56(dx46);
  L308():
    goto L55(r185);
  L315():
    dx48 = getTryDispatchBuiltinValue(dr42);
    goto L312(dx48);
  L316(dx51):
    st end = dx51;
    l39 = ld end;
    c69 = `is.object`(l39);
    if c69 then L321() else L322(-1, l39);
  L317():
    dr44 = tryDispatchBuiltin.0("$<-", l36, 1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L319() else L318(1, dr44);
  L318(r198, l38):
    r201 = `$<-`(l38, <sym mday>, 1);
    goto L316(r201);
  L371():
    by27 = ld by2;
    check L373() else D91();
  L372():
    r237 = dyn base22(<sym by2>);
    goto L67(r237);
  L453():
    which = ldf which;
    check L455() else D118();
  L454():
    r302 = dyn base29(<lang which(`<=`(breaks, maxx))>);
    goto L86(breaks54, 1.0, r302);
  D57():
    deopt 280 [breaks17];
  D59():
    deopt 285 [maxx2];
  D91():
    deopt 443 [by27];
  D118():
    deopt 564 [breaks54, 1.0];
  L68():
    goto L71(1);
  L71(r245):
    st step = r245;
    as_POSIXlt6 = ldf `as.POSIXlt`;
    check L384() else D95();
  L265():
    breaks18 = force? breaks17;
    checkMissing(breaks18);
    length6 = ldf length in base;
    r156 = dyn length6(breaks18);
    check L266() else D58();
  L267():
    maxx3 = force? maxx2;
    checkMissing(maxx3);
    breaks19 = ld breaks;
    check L268() else D60();
  L319():
    dx50 = getTryDispatchBuiltinValue(dr44);
    goto L316(dx50);
  L320(dx53):
    st end = dx53;
    seq1 = ldf seq;
    check L324() else D75();
  L321():
    dr46 = tryDispatchBuiltin.0("$<-", l39, -1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L323() else L322(-1, dr46);
  L322(r203, l41):
    r206 = `$<-`(l41, <sym isdst>, -1);
    goto L320(r206);
  L373():
    by28 = force? by27;
    checkMissing(by28);
    length9 = ldf length in base;
    r239 = dyn length9(by28);
    check L374() else D92();
  L375():
    sym23 = ldf `as.integer`;
    base23 = ldf `as.integer` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L376() else L377();
  L455():
    p28 = prom<V +>{
      breaks61 = ld breaks;
      breaks62 = force? breaks61;
      checkMissing(breaks62);
      maxx26 = ld maxx;
      maxx27 = force? maxx26;
      checkMissing(maxx27);
      r305 = `<=`(breaks62, maxx27);
      return r305;
    };
    r307 = dyn which(p28);
    check L456() else D119();
  D58():
    deopt 283 [r156];
  D60():
    deopt 286 [maxx3, breaks19];
  D75():
    deopt 372 [];
  D92():
    deopt 446 [r239];
  D95():
    deopt 462 [];
  D119():
    deopt 566 [breaks54, 1.0, r307];
  L69(r242):
    goto L71(r242);
  L266():
    goto L45(r156);
  L268():
    breaks20 = force? breaks19;
    checkMissing(breaks20);
    c59 = `is.object`(breaks20);
    if c59 then L269() else L270(maxx3, breaks20);
  L323():
    dx52 = getTryDispatchBuiltinValue(dr46);
    goto L320(dx52);
  L324():
    p16 = prom<V +>{
      start18 = ld start;
      start19 = force? start18;
      checkMissing(start19);
      return start19;
    };
    p17 = prom<V +>{
      end6 = ld end;
      end7 = force? end6;
      checkMissing(end7);
      return end7;
    };
    p18 = prom<V +>{
      breaks27 = ld breaks;
      breaks28 = force? breaks27;
      checkMissing(breaks28);
      return breaks28;
    };
    r210 = dyn seq1(p16, p17, p18);
    check L325() else D76();
  L374():
    goto L67(r239);
  L376():
    by29 = ld by2;
    check L378() else D93();
  L377():
    r241 = dyn base23(<lang `[`(by2, 1)>);
    goto L69(r241);
  L384():
    p20 = prom<V +>{
      end8 = ld end;
      end9 = force? end8;
      checkMissing(end9);
      step4 = ld step;
      step5 = force? step4;
      checkMissing(step5);
      r246 = `*`(93.0, step5);
      r247 = `*`(r246, 86400.0);
      r248 = `+`(end9, r247);
      return r248;
    };
    r250 = dyn as_POSIXlt6(p20);
    check L385() else D96();
  L456():
    max4 = ldf max in base;
    r308 = dyn max4(r307);
    check L457() else D120();
  D76():
    deopt 376 [r210];
  D93():
    deopt 451 [by29];
  D96():
    deopt 464 [r250];
  D120():
    deopt 568 [breaks54, 1.0, r308];
  L46(maxx7, dx37):
    r159 = `<`(maxx7, dx37);
    c60 = `as.logical`(r159);
    if c60 then L273() else L47();
  L269():
    dr32 = tryDispatchBuiltin.1("[", breaks20);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L271() else L270(maxx3, dr32);
  L270(maxx5, breaks22):
    lb = ld lb;
    check L272() else D61();
  L325():
    st breaks = r210;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L326() else L327();
  L378():
    by30 = force? by29;
    checkMissing(by30);
    c79 = `is.object`(by30);
    if c79 then L379() else L380(by30);
  L385():
    st end = r250;
    qtr8 = ld qtr;
    check L386() else D97();
  L457():
    goto L86(breaks54, 1.0, r308);
  D61():
    deopt 288 [maxx5, breaks22, lb];
  D97():
    deopt 466 [qtr8];
  L47():
    goto L49(NULL);
  L49(dx40):
    goto L50(dx40);
  L58(r212):
    st lb = r212;
    maxx10 = ld maxx;
    check L330() else D79();
  L70(dx72):
    as_integer2 = ldf `as.integer` in base;
    r244 = dyn as_integer2(dx72);
    check L382() else D94();
  L271():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L46(maxx3, dx36);
  L272():
    lb1 = force? lb;
    checkMissing(lb1);
    r157 = `-`(lb1, 1.0);
    __3 = ldf `[` in base;
    r158 = dyn __3(breaks22, r157);
    goto L46(maxx5, r158);
  L273():
    breaks23 = ld breaks;
    check L274() else D62();
  L326():
    breaks29 = ld breaks;
    check L328() else D77();
  L327():
    r211 = dyn base19(<sym breaks>);
    goto L58(r211);
  L379():
    dr60 = tryDispatchBuiltin.1("[", by30);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L381() else L380(dr60);
  L380(by32):
    __9 = ldf `[` in base;
    r243 = dyn __9(by32, 1);
    goto L70(r243);
  L386():
    qtr9 = force? qtr8;
    checkMissing(qtr9);
    c80 = `is.object`(qtr9);
    if c80 then L387() else L388(qtr9);
  D62():
    deopt 294 [breaks23];
  D77():
    deopt 380 [breaks29];
  D79():
    deopt 385 [maxx10];
  D94():
    deopt 457 [r244];
  L72(dx74):
    l48 = ld end;
    c82 = `is.object`(l48);
    if c82 then L396() else L397(dx74, l48);
  L274():
    breaks24 = force? breaks23;
    checkMissing(breaks24);
    c61 = `is.object`(breaks24);
    if c61 then L275() else L276(breaks24);
  L328():
    breaks30 = force? breaks29;
    checkMissing(breaks30);
    length8 = ldf length in base;
    r213 = dyn length8(breaks30);
    check L329() else D78();
  L330():
    maxx11 = force? maxx10;
    checkMissing(maxx11);
    breaks31 = ld breaks;
    check L331() else D80();
  L381():
    dx71 = getTryDispatchBuiltinValue(dr60);
    goto L70(dx71);
  L382():
    goto L69(r244);
  L387():
    dr62 = tryDispatchBuiltin.1("[", qtr9);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L389() else L388(dr62);
  L388(qtr11):
    end10 = ld end;
    check L390() else D98();
  D78():
    deopt 383 [r213];
  D80():
    deopt 386 [maxx11, breaks31];
  D98():
    deopt 468 [qtr11, end10];
  L48(dx39):
    st breaks = dx39;
    goto L49(dx39);
  L275():
    dr34 = tryDispatchBuiltin.1("[", breaks24);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L277() else L276(dr34);
  L276(breaks26):
    lb2 = ld lb;
    check L278() else D63();
  L329():
    goto L58(r213);
  L331():
    breaks32 = force? breaks31;
    checkMissing(breaks32);
    c70 = `is.object`(breaks32);
    if c70 then L332() else L333(maxx11, breaks32);
  L389():
    dx73 = getTryDispatchBuiltinValue(dr62);
    goto L72(dx73);
  L390():
    end11 = force? end10;
    checkMissing(end11);
    c81 = `is.object`(end11);
    if c81 then L392() else L393(qtr11, end11);
  L395(dx82):
    st end = dx82;
    l51 = ld end;
    c83 = `is.object`(l51);
    if c83 then L400() else L401(1, l51);
  L396():
    dr66 = tryDispatchBuiltin.0("$<-", l48, dx74);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L398() else L397(dx74, dr66);
  L397(dx78, l50):
    r254 = `$<-`(l50, <sym mon>, dx74);
    goto L395(r254);
  D63():
    deopt 296 [breaks26, lb2];
  L59(maxx15, dx55):
    r216 = `<`(maxx15, dx55);
    c71 = `as.logical`(r216);
    if c71 then L336() else L60();
  L277():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L48(dx38);
  L278():
    lb3 = force? lb2;
    checkMissing(lb3);
    r160 = `-`(<missing>, lb3);
    __4 = ldf `[` in base;
    r161 = dyn __4(breaks26, r160);
    goto L48(r161);
  L332():
    dr48 = tryDispatchBuiltin.1("[", breaks32);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L334() else L333(maxx11, dr48);
  L333(maxx13, breaks34):
    lb4 = ld lb;
    check L335() else D81();
  L391(qtr15, dx76):
    r252 = `+`(dx76, 1);
    __10 = ldf `[` in base;
    r253 = dyn __10(qtr15, r252);
    goto L72(r253);
  L392():
    dr64 = tryDispatchBuiltin.1("$", end11);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L394() else L393(qtr11, dr64);
  L393(qtr13, end13):
    r251 = `$`(end13, <sym mon>);
    goto L391(qtr13, r251);
  L398():
    dx80 = getTryDispatchBuiltinValue(dr66);
    goto L395(dx80);
  L399(dx84):
    st end = dx84;
    l54 = ld end;
    c84 = `is.object`(l54);
    if c84 then L404() else L405(-1, l54);
  L400():
    dr68 = tryDispatchBuiltin.0("$<-", l51, 1);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L402() else L401(1, dr68);
  L401(r256, l53):
    r259 = `$<-`(l53, <sym mday>, 1);
    goto L399(r259);
  D81():
    deopt 388 [maxx13, breaks34, lb4];
  L60():
    goto L62(NULL);
  L62(dx58):
    goto L50(dx58);
  L334():
    dx54 = getTryDispatchBuiltinValue(dr48);
    goto L59(maxx11, dx54);
  L335():
    lb5 = force? lb4;
    checkMissing(lb5);
    r214 = `-`(lb5, 1.0);
    __6 = ldf `[` in base;
    r215 = dyn __6(breaks34, r214);
    goto L59(maxx13, r215);
  L336():
    breaks35 = ld breaks;
    check L337() else D82();
  L394():
    dx75 = getTryDispatchBuiltinValue(dr64);
    goto L391(qtr11, dx75);
  L402():
    dx83 = getTryDispatchBuiltinValue(dr68);
    goto L399(dx83);
  L403(dx86):
    st end = dx86;
    seq2 = ldf seq;
    check L407() else D99();
  L404():
    dr70 = tryDispatchBuiltin.0("$<-", l54, -1);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L406() else L405(-1, dr70);
  L405(r261, l56):
    r264 = `$<-`(l56, <sym isdst>, -1);
    goto L403(r264);
  D82():
    deopt 394 [breaks35];
  D99():
    deopt 488 [];
  L337():
    breaks36 = force? breaks35;
    checkMissing(breaks36);
    c72 = `is.object`(breaks36);
    if c72 then L338() else L339(breaks36);
  L406():
    dx85 = getTryDispatchBuiltinValue(dr70);
    goto L403(dx85);
  L407():
    p21 = prom<V +>{
      start24 = ld start;
      start25 = force? start24;
      checkMissing(start25);
      return start25;
    };
    p22 = prom<V +>{
      end14 = ld end;
      end15 = force? end14;
      checkMissing(end15);
      return end15;
    };
    p24 = prom<V +>{
      paste = ldf paste;
      p23 = prom<V +>{
        step6 = ld step;
        step7 = force? step6;
        checkMissing(step7);
        r267 = `*`(step7, 3.0);
        return r267;
      };
      r269 = dyn paste(p23, "months");
      return r269;
    };
    r271 = dyn seq2(p21, p22, p24);
    check L408() else D100();
  D100():
    deopt 492 [r271];
  L61(dx57):
    st breaks = dx57;
    goto L62(dx57);
  L338():
    dr50 = tryDispatchBuiltin.1("[", breaks36);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L340() else L339(dr50);
  L339(breaks38):
    lb6 = ld lb;
    check L341() else D83();
  L408():
    st breaks = r271;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L409() else L410();
  D83():
    deopt 396 [breaks38, lb6];
  L73(r273):
    st lb = r273;
    maxx18 = ld maxx;
    check L413() else D103();
  L340():
    dx56 = getTryDispatchBuiltinValue(dr50);
    goto L61(dx56);
  L341():
    lb7 = force? lb6;
    checkMissing(lb7);
    r217 = `-`(<missing>, lb7);
    __7 = ldf `[` in base;
    r218 = dyn __7(breaks38, r217);
    goto L61(r218);
  L409():
    breaks39 = ld breaks;
    check L411() else D101();
  L410():
    r272 = dyn base24(<sym breaks>);
    goto L73(r272);
  D101():
    deopt 496 [breaks39];
  D103():
    deopt 501 [maxx18];
  L411():
    breaks40 = force? breaks39;
    checkMissing(breaks40);
    length10 = ldf length in base;
    r274 = dyn length10(breaks40);
    check L412() else D102();
  L413():
    maxx19 = force? maxx18;
    checkMissing(maxx19);
    breaks41 = ld breaks;
    check L414() else D104();
  D102():
    deopt 499 [r274];
  D104():
    deopt 502 [maxx19, breaks41];
  L412():
    goto L73(r274);
  L414():
    breaks42 = force? breaks41;
    checkMissing(breaks42);
    c85 = `is.object`(breaks42);
    if c85 then L415() else L416(maxx19, breaks42);
  L74(maxx23, dx88):
    r277 = `<`(maxx23, dx88);
    c86 = `as.logical`(r277);
    if c86 then L419() else L75();
  L415():
    dr72 = tryDispatchBuiltin.1("[", breaks42);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L417() else L416(maxx19, dr72);
  L416(maxx21, breaks44):
    lb8 = ld lb;
    check L418() else D105();
  D105():
    deopt 504 [maxx21, breaks44, lb8];
  L75():
    goto L77(NULL);
  L77(dx91):
    goto L50(dx91);
  L417():
    dx87 = getTryDispatchBuiltinValue(dr72);
    goto L74(maxx19, dx87);
  L418():
    lb9 = force? lb8;
    checkMissing(lb9);
    r275 = `-`(lb9, 1.0);
    __11 = ldf `[` in base;
    r276 = dyn __11(breaks44, r275);
    goto L74(maxx21, r276);
  L419():
    breaks45 = ld breaks;
    check L420() else D106();
  D106():
    deopt 510 [breaks45];
  L420():
    breaks46 = force? breaks45;
    checkMissing(breaks46);
    c87 = `is.object`(breaks46);
    if c87 then L421() else L422(breaks46);
  L76(dx90):
    st breaks = dx90;
    goto L77(dx90);
  L421():
    dr74 = tryDispatchBuiltin.1("[", breaks46);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L423() else L422(dr74);
  L422(breaks48):
    lb10 = ld lb;
    check L424() else D107();
  D107():
    deopt 512 [breaks48, lb10];
  L423():
    dx89 = getTryDispatchBuiltinValue(dr74);
    goto L76(dx89);
  L424():
    lb11 = force? lb10;
    checkMissing(lb11);
    r278 = `-`(<missing>, lb11);
    __12 = ldf `[` in base;
    r279 = dyn __12(breaks48, r278);
    goto L76(r279);
  }
}