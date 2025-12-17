fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2184436949;
    st `glm.fit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2184436949(x, y, weights, start, etastart, mustart, offset, family, control, intercept, `singular.ok`) {
  (reg x:*, reg y:*, reg weights:*, reg start:*, reg etastart:*, reg mustart:*, reg offset:*, reg family:*, reg control:*, reg intercept:*, reg singular_ok:*) -+> V { var x:*, var y:*, var weights:*, reg weights_isMissing:L, reg weights_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nobs:*, reg nobs1:V, reg rep_int:cls, reg r2:V, reg p:p(V +), var start:*, reg start_isMissing:L, reg start_orDefault:*, var etastart:*, reg etastart_isMissing:L, reg etastart_orDefault:*, var mustart:*, reg mustart_isMissing:L, reg mustart_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg nobs2:*, reg nobs3:V, reg rep_int1:cls, reg r6:V, reg p1:p(V +), var family:*, reg family_isMissing:L, reg family_orDefault:*, reg gaussian:cls, reg r8:V, reg p2:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg list:cls, reg r12:V, reg p3:p(V +), var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, var `singular.ok`:*, reg singular_ok_isMissing:L, reg singular_ok_orDefault:*, reg do_call:cls, reg control1:*, reg control2:V, reg p4:p(V +), reg r15:V, reg as_matrix:cls, reg x1:*, reg x2:V, reg p5:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r20:V, reg c:L, reg r22:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg y1:*, reg y2:V, reg is_matrix:cls, reg r26:V, reg c1:L, reg rownames:cls, reg y3:*, reg y4:V, reg p6:p(V +), reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg y5:*, reg y6:V, reg names:cls, reg r31:V, reg NROW:cls, reg y7:*, reg y8:V, reg p7:p(V +), reg r33:V, reg ncol:cls, reg x5:*, reg x6:V, reg p8:p(V +), reg r35:V, reg nvars:*, reg nvars1:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg weights1:*, reg weights2:V, reg c2:V, reg c3:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg nobs4:*, reg nobs5:V, reg rep_int2:cls, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg offset1:*, reg offset2:V, reg c4:V, reg c5:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg nobs6:*, reg nobs7:V, reg rep_int3:cls, reg r47:V, reg family1:*, reg family2:V, reg c6:L, reg family4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r49:V, reg family5:*, reg family6:V, reg c7:L, reg family8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg r52:V, reg variance:*, reg variance1:V, reg is_function:cls, reg r53:V, reg r54:V, reg c8:L, reg c9:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg c13:L, reg r56:V, reg linkinv:*, reg linkinv1:V, reg is_function1:cls, reg r57:V, reg r58:V, reg c14:L, reg c15:V, reg c17:L, reg stop:cls, reg r59:V, reg family9:*, reg family10:V, reg c18:L, reg family12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r61:V, reg family13:*, reg family14:V, reg c19:L, reg family16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r62:V, reg family17:*, reg family18:V, reg c20:L, reg family20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r63:V, reg ____:cls, reg family21:*, reg family22:V, reg c21:L, reg family24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r64:V, reg p9:p(V +), reg r66:cls, reg p10:p(V +), reg r68:V, reg ____1:cls, reg family25:*, reg family26:V, reg c22:L, reg family28:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r69:V, reg p11:p(V +), reg r71:cls, reg p12:p(V +), reg r73:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r74:V, reg r75:V, reg mustart1:*, reg mustart2:V, reg c23:V, reg c24:L, reg eval:cls, reg family29:*, reg family30:V, reg c25:L, reg family32:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r76:V, reg p13:p(V +), reg r78:V, reg mustart3:*, reg mustart4:V, reg eval1:cls, reg family33:*, reg family34:V, reg c26:L, reg family36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r80:V, reg p14:p(V +), reg r82:V, reg mukeep:*, reg mukeep1:V, reg EMPTY:*, reg EMPTY1:V, reg c27:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r83:V, reg r84:V, reg nobs8:*, reg nobs9:V, reg rep_int4:cls, reg r85:V, reg offset3:*, reg offset4:V, reg r86:V, reg valideta:cls, reg eta:*, reg eta1:V, reg p15:p(V +), reg r88:V, reg r89:V, reg c28:L, reg stop1:cls, reg r90:V, reg linkinv2:cls, reg eta2:*, reg eta3:V, reg p16:p(V +), reg r93:V, reg validmu:cls, reg mu:*, reg mu1:V, reg p17:p(V +), reg r95:V, reg r96:V, reg c29:L, reg stop2:cls, reg r97:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg r100:V, reg dev_resids:cls, reg y9:*, reg y10:V, reg p18:p(V +), reg mu2:*, reg mu3:V, reg p19:p(V +), reg weights3:*, reg weights4:V, reg p20:p(V +), reg r104:V, reg sum:cls, reg r105:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r106:V, reg r107:V, reg weights5:*, reg weights6:V, reg mu_eta:cls, reg eta4:*, reg eta5:V, reg p21:p(V +), reg r109:V, reg r110:V, reg r111:V, reg variance2:cls, reg mu4:*, reg mu5:V, reg p22:p(V +), reg r113:V, reg r114:V, reg r115:V, reg y11:*, reg y12:V, reg mu6:*, reg mu7:V, reg r116:V, reg mu_eta1:cls, reg eta6:*, reg eta7:V, reg p23:p(V +), reg r118:V, reg r119:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r120:V, reg r121:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r122:V, reg r123:V, reg residuals:*, reg residuals1:V, reg length:cls, reg r124:V, reg rep_len:cls, reg r125:V, reg numeric:cls, reg r126:V, reg ____2:cls, reg etastart1:*, reg etastart2:V, reg p24:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r129:V, reg r130:V, reg start1:*, reg start2:V, reg c30:V, reg r131:V, reg c31:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r132:V, reg r133:V, reg start3:*, reg start4:V, reg length1:cls, reg r134:V, reg nvars2:*, reg nvars3:V, reg r135:V, reg c32:L, reg stop3:cls, reg gettextf:cls, reg nvars4:*, reg nvars5:V, reg p25:p(V +), reg paste:cls, reg deparse:cls, reg xnames:*, reg xnames1:V, reg p26:p(V +), reg r138:V, reg p27:p(V +), reg r140:V, reg p28:p(V +), reg r142:V, reg p29:p(V +), reg r144:V, reg start5:*, reg start6:V, reg offset5:*, reg offset6:V, reg as_vector:cls, reg NCOL:cls, reg x7:*, reg x8:V, reg p30:p(V +), reg r146:V, reg r147:V, reg c33:L, reg x9:*, reg x10:V, reg start7:*, reg start8:V, reg r148:V, reg x11:*, reg x12:V, reg start9:*, reg start10:V, reg ___:cls, reg r149:V, reg p31:p(V +), reg r151:V, reg r152:V, reg family37:*, reg family38:V, reg c34:L, reg family40:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r153:V, reg dx22:cls, reg mustart5:*, reg mustart6:V, reg p32:p(V +), reg r155:V, reg p33:p(V +), reg r157:V, reg linkinv3:cls, reg eta8:*, reg eta9:V, reg p34:p(V +), reg r159:V, reg validmu1:cls, reg mu8:*, reg mu9:V, reg p35:p(V +), reg r161:V, reg c35:L, reg c37:V, reg valideta1:cls, reg eta10:*, reg eta11:V, reg p36:p(V +), reg r163:V, reg c38:L, reg c39:V, reg r164:V, reg c41:L, reg stop4:cls, reg r165:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r167:V, reg r168:V, reg dev_resids1:cls, reg y13:*, reg y14:V, reg p37:p(V +), reg mu10:*, reg mu11:V, reg p38:p(V +), reg weights7:*, reg weights8:V, reg p39:p(V +), reg r172:V, reg sum1:cls, reg r173:V, reg control3:*, reg control4:V, reg c42:L, reg r175:I, reg control6:V, reg dr22:V, reg dc11:L, reg dx23:V, reg r177:I, reg dx24:V, reg r178:V, reg r179:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c43:L, reg x13:V, reg weights9:*, reg weights10:V, reg r180:V, reg variance3:cls, reg mu12:*, reg mu13:V, reg p40:p(V +), reg r182:V, reg c44:L, reg i6:I, reg r184:V, reg dr24:V, reg dc12:L, reg dx25:V, reg i8:I, reg dx26:V, reg good:*, reg good1:V, reg __1:cls, reg r185:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r186:V, reg i11:I, reg r187:V, reg varmu:*, reg varmu1:V, reg anyNA:cls, reg r188:V, reg c45:L, reg stop5:cls, reg r189:V, reg i14:I, reg sym22:cls, reg base22:cls, reg guard22:L, reg r191:V, reg i17:I, reg r192:V, reg varmu2:*, reg varmu3:V, reg r193:V, reg any:cls, reg r194:V, reg c46:L, reg stop6:cls, reg r195:V, reg i20:I, reg mu_eta2:cls, reg eta12:*, reg eta13:V, reg p41:p(V +), reg r198:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r199:V, reg i23:I, reg r200:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r201:V, reg i26:I, reg r202:V, reg mu_eta_val:*, reg mu_eta_val1:V, reg c47:L, reg i28:I, reg mu_eta_val3:V, reg dr26:V, reg dc13:L, reg dx27:V, reg i30:I, reg dx28:V, reg good2:*, reg good3:V, reg __2:cls, reg r203:V, reg is_na:cls, reg r204:V, reg any1:cls, reg r205:V, reg c48:L, reg stop7:cls, reg r206:V, reg i33:I, reg weights11:*, reg weights12:V, reg r208:V, reg mu_eta_val4:*, reg mu_eta_val5:V, reg r209:V, reg r210:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r211:V, reg i36:I, reg r212:V, reg good4:*, reg good5:V, reg r213:V, reg all:cls, reg r214:V, reg c49:L, reg warning:cls, reg gettextf1:cls, reg iter:*, reg iter1:V, reg p42:p(V +), reg r216:V, reg p43:p(V +), reg r218:V, reg eta14:*, reg eta15:V, reg offset7:*, reg offset8:V, reg r220:V, reg c50:L, reg i43:I, reg r222:V, reg dr28:V, reg dc14:L, reg dx29:V, reg i45:I, reg dx30:V, reg good6:*, reg good7:V, reg __3:cls, reg r223:V, reg y15:*, reg y16:V, reg mu14:*, reg mu15:V, reg r224:V, reg c51:L, reg i47:I, reg dx32:V, reg r226:V, reg dr30:V, reg dc15:L, reg dx34:V, reg i49:I, reg dx35:V, reg dx36:V, reg good8:*, reg good9:V, reg __4:cls, reg r227:V, reg mu_eta_val6:*, reg mu_eta_val7:V, reg c52:L, reg i51:I, reg dx39:V, reg dx40:V, reg mu_eta_val9:V, reg dr32:V, reg dc16:L, reg dx43:V, reg i53:I, reg dx44:V, reg dx45:V, reg dx46:V, reg good10:*, reg good11:V, reg __5:cls, reg r228:V, reg r229:V, reg r230:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r231:V, reg i56:I, reg r232:V, reg weights13:*, reg weights14:V, reg c53:L, reg i58:I, reg weights16:V, reg dr34:V, reg dc17:L, reg dx47:V, reg i60:I, reg dx48:V, reg good12:*, reg good13:V, reg __6:cls, reg r233:V, reg mu_eta_val10:*, reg mu_eta_val11:V, reg c54:L, reg i62:I, reg dx50:V, reg mu_eta_val13:V, reg dr36:V, reg dc18:L, reg dx52:V, reg i64:I, reg dx53:V, reg dx54:V, reg good14:*, reg good15:V, reg __7:cls, reg r234:V, reg r235:V, reg r236:V, reg variance4:cls, reg mu16:*, reg mu17:V, reg p44:p(V +), reg r238:V, reg c55:L, reg i66:I, reg r241:V, reg r242:V, reg dr38:V, reg dc19:L, reg dx55:V, reg i68:I, reg r244:V, reg dx56:V, reg good16:*, reg good17:V, reg __8:cls, reg r245:V, reg r246:V, reg r247:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r248:V, reg i71:I, reg r249:V, reg C_Cdqrls:*, reg C_Cdqrls1:V, reg x14:*, reg x15:V, reg c56:L, reg i73:I, reg x17:V, reg dr40:V, reg dc20:L, reg dx57:V, reg i75:I, reg dx58:V, reg good18:*, reg good19:V, reg __9:cls, reg r250:V, reg w:*, reg w1:V, reg r251:V, reg z:*, reg z1:V, reg w2:*, reg w3:V, reg r252:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r253:V, reg i78:I, reg r254:V, reg control7:*, reg control8:V, reg c57:L, reg i80:I, reg control10:V, reg dr42:V, reg dc21:L, reg dx59:V, reg i82:I, reg dx60:V, reg r255:V, reg r256:V, reg min:cls, reg r257:V, reg _Call:cls, reg r258:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r259:V, reg i85:I, reg r260:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r261:V, reg i88:I, reg r262:V, reg fit:*, reg fit1:V, reg c58:L, reg i90:I, reg fit3:V, reg dr44:V, reg dc22:L, reg dx61:V, reg i92:I, reg dx62:V, reg r263:V, reg is_finite:cls, reg r264:V, reg r265:V, reg any2:cls, reg r266:V, reg c59:L, reg warning1:cls, reg gettextf2:cls, reg iter2:*, reg iter3:V, reg p45:p(V +), reg r268:V, reg p46:p(V +), reg r270:V, reg nobs10:*, reg nobs11:V, reg fit4:*, reg fit5:V, reg c60:L, reg i98:I, reg nobs13:V, reg fit7:V, reg dr46:V, reg dc23:L, reg dx63:V, reg i100:I, reg nobs15:V, reg dx64:V, reg r272:V, reg r273:V, reg c61:L, reg stop8:cls, reg sprintf:cls, reg ngettext:cls, reg nobs16:*, reg nobs17:V, reg p47:p(V +), reg r275:V, reg p48:p(V +), reg fit8:*, reg fit9:V, reg c62:L, reg fit11:V, reg dr48:V, reg dc24:L, reg dx65:V, reg dx66:V, reg r277:V, reg p49:p(V +), reg nobs18:*, reg nobs19:V, reg p50:p(V +), reg r280:V, reg p51:p(V +), reg r282:V, reg i103:I, reg singular_ok1:*, reg singular_ok2:V, reg r284:V, reg c63:L, reg i105:I, reg c65:V, reg fit12:*, reg fit13:V, reg c66:L, reg i107:I, reg c68:L, reg fit15:V, reg dr50:V, reg dc25:L, reg dx67:V, reg i109:I, reg c70:L, reg dx68:V, reg r285:V, reg nvars6:*, reg nvars7:V, reg r286:V, reg c71:L, reg c72:V, reg c74:L, reg stop9:cls, reg r287:V, reg i113:I, reg fit16:*, reg fit17:V, reg c75:L, reg i115:I, reg fit19:V, reg dr52:V, reg dc26:L, reg dx69:V, reg i117:I, reg dx70:V, reg r289:V, reg l1:*, reg c76:L, reg i119:I, reg dx72:V, reg l3:*, reg dr54:V, reg dc27:L, reg dx74:V, reg i121:I, reg dx76:V, reg fit20:*, reg fit21:V, reg c77:L, reg i123:I, reg dx79:V, reg l5:*, reg dx80:V, reg fit23:V, reg dr56:V, reg dc28:L, reg dx83:V, reg i125:I, reg dx84:V, reg l7:*, reg dx85:V, reg dx86:V, reg r290:V, reg ___1:cls, reg r291:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r292:V, reg i128:I, reg r293:V, reg x18:*, reg x19:V, reg start11:*, reg start12:V, reg ___2:cls, reg r294:V, reg drop:cls, reg r295:V, reg linkinv4:cls, reg eta16:*, reg eta17:V, reg offset9:*, reg offset10:V, reg r296:V, reg p52:p(V +), reg r298:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r299:V, reg i131:I, reg r300:V, reg dev_resids2:cls, reg y17:*, reg y18:V, reg p53:p(V +), reg mu18:*, reg mu19:V, reg p54:p(V +), reg weights17:*, reg weights18:V, reg p55:p(V +), reg r304:V, reg sum2:cls, reg r305:V, reg control11:*, reg control12:V, reg c78:L, reg i133:I, reg control14:V, reg dr58:V, reg dc29:L, reg dx87:V, reg i135:I, reg dx88:V, reg r306:V, reg c79:L, reg cat:cls, reg dev:*, reg dev1:V, reg p56:p(V +), reg iter4:*, reg iter5:V, reg p57:p(V +), reg r309:V, reg i138:I, reg sym33:cls, reg base33:cls, reg guard33:L, reg r311:V, reg i141:I, reg r312:V, reg dev2:*, reg dev3:V, reg is_finite1:cls, reg r313:V, reg r314:V, reg c80:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r315:V, reg i146:I, reg r316:V, reg coefold:*, reg coefold1:V, reg c81:V, reg c82:L, reg stop10:cls, reg r317:V, reg i149:I, reg warning2:cls, reg r319:V, reg i150:I, reg sym35:cls, reg base35:cls, reg guard35:L, reg r320:V, reg i153:I, reg r321:V, reg dev4:*, reg dev5:V, reg is_finite2:cls, reg r322:V, reg r323:V, reg c83:L, reg ii:*, reg ii1:V, reg control15:*, reg control16:V, reg c84:L, reg i157:I, reg ii3:V, reg control18:V, reg dr60:V, reg dc30:L, reg dx89:V, reg i159:I, reg ii5:V, reg dx90:V, reg r324:V, reg r325:V, reg c85:L, reg stop11:cls, reg r326:V, reg i162:I, reg ii6:*, reg ii7:V, reg r328:V, reg start13:*, reg start14:V, reg coefold2:*, reg coefold3:V, reg r329:V, reg r330:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r331:V, reg i165:I, reg r332:V, reg x20:*, reg x21:V, reg start15:*, reg start16:V, reg ___3:cls, reg r333:V, reg drop1:cls, reg r334:V, reg linkinv5:cls, reg eta18:*, reg eta19:V, reg offset11:*, reg offset12:V, reg r335:V, reg p58:p(V +), reg r337:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r338:V, reg i168:I, reg r339:V, reg dev_resids3:cls, reg y19:*, reg y20:V, reg p59:p(V +), reg mu20:*, reg mu21:V, reg p60:p(V +), reg weights19:*, reg weights20:V, reg p61:p(V +), reg r343:V, reg sum3:cls, reg r344:V, reg control19:*, reg control20:V, reg c86:L, reg i170:I, reg control22:V, reg dr62:V, reg dc31:L, reg dx91:V, reg i172:I, reg dx92:V, reg r345:V, reg c87:L, reg cat1:cls, reg dev6:*, reg dev7:V, reg p62:p(V +), reg r347:V, reg i175:I, reg r348:V, reg i176:I, reg valideta2:cls, reg eta20:*, reg eta21:V, reg p63:p(V +), reg r351:V, reg c88:L, reg i178:I, reg c90:V, reg validmu2:cls, reg mu22:*, reg mu23:V, reg p64:p(V +), reg r353:V, reg c91:L, reg c92:V, reg r354:V, reg c94:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r355:V, reg i184:I, reg r356:V, reg coefold4:*, reg coefold5:V, reg c95:V, reg c96:L, reg stop12:cls, reg r357:V, reg i187:I, reg warning3:cls, reg r359:V, reg i188:I, reg valideta3:cls, reg eta22:*, reg eta23:V, reg p65:p(V +), reg r361:V, reg c97:L, reg i190:I, reg c99:V, reg validmu3:cls, reg mu24:*, reg mu25:V, reg p66:p(V +), reg r363:V, reg c100:L, reg c101:V, reg r364:V, reg c103:L, reg ii8:*, reg ii9:V, reg control23:*, reg control24:V, reg c104:L, reg i195:I, reg ii11:V, reg control26:V, reg dr64:V, reg dc32:L, reg dx93:V, reg i197:I, reg ii13:V, reg dx94:V, reg r365:V, reg r366:V, reg c105:L, reg stop13:cls, reg r367:V, reg i200:I, reg ii14:*, reg ii15:V, reg r369:V, reg start17:*, reg start18:V, reg coefold6:*, reg coefold7:V, reg r370:V, reg r371:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r372:V, reg i203:I, reg r373:V, reg x22:*, reg x23:V, reg start19:*, reg start20:V, reg ___4:cls, reg r374:V, reg drop2:cls, reg r375:V, reg linkinv6:cls, reg eta24:*, reg eta25:V, reg offset13:*, reg offset14:V, reg r376:V, reg p67:p(V +), reg r378:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r379:V, reg i206:I, reg r380:V, reg dev_resids4:cls, reg y21:*, reg y22:V, reg p68:p(V +), reg mu26:*, reg mu27:V, reg p69:p(V +), reg weights21:*, reg weights22:V, reg p70:p(V +), reg r384:V, reg sum4:cls, reg r385:V, reg control27:*, reg control28:V, reg c106:L, reg i208:I, reg control30:V, reg dr66:V, reg dc33:L, reg dx95:V, reg i210:I, reg dx96:V, reg r386:V, reg c107:L, reg cat2:cls, reg dev8:*, reg dev9:V, reg p71:p(V +), reg r388:V, reg i213:I, reg r389:V, reg i214:I, reg sym41:cls, reg base41:cls, reg guard41:L, reg r391:V, reg i217:I, reg r392:V, reg dev10:*, reg dev11:V, reg devold:*, reg devold1:V, reg r393:V, reg abs:cls, reg r394:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r399:V, reg i220:I, reg r400:V, reg r401:R, reg r402:V, reg dev12:*, reg dev13:V, reg abs1:cls, reg r403:V, reg r404:V, reg r405:V, reg control31:*, reg control32:V, reg c108:L, reg i222:I, reg r407:V, reg control34:V, reg dr68:V, reg dc34:L, reg dx97:V, reg i224:I, reg r409:V, reg dx98:V, reg r410:V, reg r411:V, reg c109:L, reg start21:*, reg start22:V, reg dev14:*, reg dev15:V, reg start23:*, reg start24:V, reg conv:*, reg conv1:V, reg r413:V, reg c110:L, reg warning4:cls, reg r414:V, reg boundary:*, reg boundary1:V, reg c111:L, reg warning5:cls, reg r416:V, reg _Machine:*, reg _Machine1:V, reg c112:L, reg r419:R, reg _Machine3:V, reg dr70:V, reg dc35:L, reg dx99:V, reg r421:R, reg dx100:V, reg r422:V, reg r423:V, reg family41:*, reg family42:V, reg c113:L, reg family44:V, reg dr72:V, reg dc36:L, reg dx101:V, reg dx102:V, reg r424:V, reg r425:V, reg c114:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r426:V, reg r427:V, reg mu28:*, reg mu29:V, reg eps:*, reg eps1:V, reg r428:V, reg r429:V, reg any3:cls, reg r430:V, reg c115:L, reg c116:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r431:V, reg c120:L, reg r432:V, reg mu30:*, reg mu31:V, reg eps2:*, reg eps3:V, reg r433:V, reg any4:cls, reg r434:V, reg c121:L, reg c122:V, reg c124:L, reg warning6:cls, reg r435:V, reg r436:V, reg family45:*, reg family46:V, reg c125:L, reg family48:V, reg dr74:V, reg dc37:L, reg dx103:V, reg dx104:V, reg r438:V, reg r439:V, reg c126:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r440:V, reg r441:V, reg mu32:*, reg mu33:V, reg eps4:*, reg eps5:V, reg r442:V, reg any5:cls, reg r443:V, reg c127:L, reg warning7:cls, reg r444:V, reg r445:V, reg fit24:*, reg fit25:V, reg c128:L, reg fit27:V, reg dr76:V, reg dc38:L, reg dx105:V, reg dx106:V, reg r447:V, reg nvars8:*, reg nvars9:V, reg r448:V, reg c129:L, reg l8:*, reg c130:L, reg r451:L, reg l11:*, reg r452:L, reg l12:*, reg dr78:V, reg dc39:L, reg dx107:V, reg r455:L, reg l14:*, reg r456:L, reg dx108:V, reg fit28:*, reg fit29:V, reg c131:L, reg r459:L, reg l17:*, reg r460:L, reg l18:*, reg fit31:V, reg dr80:V, reg dc40:L, reg dx109:V, reg r463:L, reg l21:*, reg r464:L, reg l22:*, reg dx110:V, reg r465:V, reg __10:cls, reg r466:V, reg c132:L, reg r468:L, reg l24:*, reg dx112:V, reg dr82:V, reg dc41:L, reg dx113:V, reg r470:L, reg l26:*, reg dx114:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r475:V, reg r476:L, reg l29:*, reg dx117:V, reg r477:L, reg r478:V, reg fit32:*, reg fit33:V, reg c133:L, reg r481:L, reg l31:*, reg dx119:V, reg r482:L, reg fit35:V, reg dr84:V, reg dc42:L, reg dx121:V, reg r485:L, reg l33:*, reg dx122:V, reg r486:L, reg dx123:V, reg r487:V, reg r488:V, reg nvars10:*, reg nvars11:V, reg seq_int:cls, reg r489:V, reg ___5:cls, reg r490:V, reg c134:L, reg r492:L, reg l35:*, reg dr86:V, reg dc43:L, reg dx124:V, reg r494:L, reg dx125:V, reg fit36:*, reg fit37:V, reg c135:L, reg r496:L, reg l37:*, reg dx127:V, reg fit39:V, reg dr88:V, reg dc44:L, reg dx129:V, reg r498:L, reg l39:*, reg dx130:V, reg dx131:V, reg r499:V, reg ___6:cls, reg r500:V, reg xnames2:*, reg xnames3:V, reg c136:L, reg xnames5:V, reg dr90:V, reg dc45:L, reg dx132:V, reg dx133:V, reg fit40:*, reg fit41:V, reg c137:L, reg xnames7:V, reg fit43:V, reg dr92:V, reg dc46:L, reg dx134:V, reg xnames9:V, reg dx135:V, reg r502:V, reg __11:cls, reg r503:V, reg y23:*, reg y24:V, reg mu34:*, reg mu35:V, reg r504:V, reg mu_eta3:cls, reg eta26:*, reg eta27:V, reg p72:p(V +), reg r506:V, reg r507:V, reg as_matrix1:cls, reg fit44:*, reg fit45:V, reg c138:L, reg fit47:V, reg dr94:V, reg dc47:L, reg dx136:V, reg dx137:V, reg r508:V, reg p73:p(V +), reg r510:V, reg l40:*, reg c139:L, reg r512:V, reg l42:*, reg dr96:V, reg dc48:L, reg dx138:V, reg dx139:V, reg r515:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r516:V, reg r517:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r518:V, reg r519:V, reg good20:*, reg good21:V, reg sum5:cls, reg r520:V, reg nvars12:*, reg nvars13:V, reg min1:cls, reg r521:V, reg nr:*, reg nr1:V, reg nvars14:*, reg nvars15:V, reg r522:V, reg c140:L, reg diag:cls, reg nvars16:*, reg nvars17:V, reg p74:p(V +), reg r524:V, reg fit48:*, reg fit49:V, reg c141:L, reg fit51:V, reg dr98:V, reg dc49:L, reg dx140:V, reg dx141:V, reg r525:V, reg c142:L, reg dx143:V, reg dr100:V, reg dc50:L, reg dx144:V, reg dx145:V, reg nr2:*, reg nr3:V, reg r526:V, reg nvars18:*, reg nvars19:V, reg r527:V, reg __12:cls, reg r528:V, reg l43:*, reg c143:L, reg dx147:V, reg l45:*, reg dr102:V, reg dc51:L, reg dx149:V, reg dx150:V, reg dx151:V, reg nr4:*, reg nr5:V, reg r529:V, reg nvars20:*, reg nvars21:V, reg r530:V, reg ___7:cls, reg r531:V, reg fit52:*, reg fit53:V, reg c144:L, reg fit55:V, reg dr104:V, reg dc52:L, reg dx153:V, reg dx154:V, reg r532:V, reg c145:L, reg dx156:V, reg dr106:V, reg dc53:L, reg dx157:V, reg dx158:V, reg nvars22:*, reg nvars23:V, reg r533:V, reg nvars24:*, reg nvars25:V, reg r534:V, reg __13:cls, reg r535:V, reg as_matrix2:cls, reg Rmat:*, reg Rmat1:V, reg p75:p(V +), reg r537:V, reg l46:*, reg c146:L, reg r539:R, reg l48:*, reg dr108:V, reg dc54:L, reg dx159:V, reg dx160:V, reg row:cls, reg Rmat2:*, reg Rmat3:V, reg p76:p(V +), reg r543:V, reg col:cls, reg Rmat4:*, reg Rmat5:V, reg p77:p(V +), reg r545:V, reg r546:V, reg ___8:cls, reg r547:V, reg xnames10:*, reg xnames11:V, reg l49:*, reg names__:cls, reg r548:V, reg xxnames:*, reg xxnames1:V, reg l50:*, reg c147:L, reg xxnames4:V, reg l53:*, reg xxnames5:V, reg l54:*, reg dr110:V, reg dc55:L, reg dx161:V, reg xxnames8:V, reg l56:*, reg xxnames9:V, reg dx162:V, reg r549:V, reg colnames__:cls, reg r550:V, reg c148:L, reg xxnames11:V, reg l58:*, reg dr112:V, reg dc56:L, reg dx163:V, reg dx164:V, reg r551:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r552:V, reg r553:V, reg xxnames14:*, reg xxnames15:V, reg xxnames16:*, reg xxnames17:V, reg list1:cls, reg r554:V, reg l59:*, reg dimnames__:cls, reg r555:V, reg ynames:*, reg ynames1:V, reg l60:*, reg names__1:cls, reg r556:V, reg ynames2:*, reg ynames3:V, reg l61:*, reg names__2:cls, reg r557:V, reg ynames4:*, reg ynames5:V, reg l62:*, reg names__3:cls, reg r558:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r559:V, reg r560:V, reg nobs20:*, reg nobs21:V, reg rep_int5:cls, reg r561:V, reg w4:*, reg w5:V, reg r562:V, reg l63:*, reg c149:L, reg r564:V, reg l65:*, reg dr114:V, reg dc57:L, reg dx165:V, reg dx166:V, reg good22:*, reg good23:V, reg ___9:cls, reg r567:V, reg ynames6:*, reg ynames7:V, reg l66:*, reg names__4:cls, reg r568:V, reg ynames8:*, reg ynames9:V, reg l67:*, reg names__5:cls, reg r569:V, reg ynames10:*, reg ynames11:V, reg l68:*, reg names__6:cls, reg r570:V, reg EMPTY2:*, reg EMPTY3:V, reg r571:V, reg c150:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r572:V, reg r573:V, reg xxnames18:*, reg xxnames19:V, reg c151:L, reg xxnames21:V, reg dr116:V, reg dc58:L, reg dx167:V, reg dx168:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r574:V, reg xxnames24:V, reg r575:V, reg fit56:*, reg fit57:V, reg c152:L, reg xxnames26:V, reg fit59:V, reg dr118:V, reg dc59:L, reg dx169:V, reg xxnames28:V, reg dx170:V, reg r576:V, reg r577:I, reg __14:cls, reg r578:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r579:V, reg r580:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r581:V, reg r582:V, reg good24:*, reg good25:V, reg sum6:cls, reg r583:V, reg fit60:*, reg fit61:V, reg c153:L, reg r585:V, reg fit63:V, reg dr120:V, reg dc60:L, reg dx171:V, reg r587:V, reg dx172:V, reg r588:V, reg r589:V, reg rep_int6:cls, reg r590:V, reg c154:cls, reg r591:V, reg l69:*, reg c155:L, reg r594:V, reg l72:*, reg r595:V, reg l73:*, reg dr122:V, reg dc61:L, reg dx173:V, reg r598:V, reg l75:*, reg r599:V, reg dx174:V, reg r600:V, reg names__7:cls, reg r601:V, reg c156:L, reg r603:V, reg l77:*, reg dr124:V, reg dc62:L, reg dx175:V, reg r605:V, reg dx176:V, reg r606:V, reg intercept1:*, reg intercept2:V, reg c157:L, reg sym55:cls, reg base55:cls, reg guard55:L, reg r608:V, reg r609:V, reg weights23:*, reg weights24:V, reg y25:*, reg y26:V, reg r610:V, reg sum7:cls, reg r611:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r614:V, reg r615:V, reg r616:V, reg weights25:*, reg weights26:V, reg sum8:cls, reg r617:V, reg r618:V, reg r619:V, reg linkinv7:cls, reg offset15:*, reg offset16:V, reg p78:p(V +), reg r621:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r622:V, reg r623:V, reg dev_resids5:cls, reg y27:*, reg y28:V, reg p79:p(V +), reg wtdmu:*, reg wtdmu1:V, reg p80:p(V +), reg weights27:*, reg weights28:V, reg p81:p(V +), reg r627:V, reg sum9:cls, reg r628:V, reg nobs22:*, reg nobs23:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r629:V, reg nobs26:V, reg r630:V, reg weights29:*, reg weights30:V, reg r631:V, reg sum10:cls, reg r632:V, reg r633:V, reg n_ok:*, reg n_ok1:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r634:V, reg n_ok4:V, reg r635:V, reg intercept3:*, reg intercept4:V, reg as_integer:cls, reg r636:V, reg r637:V, reg EMPTY4:*, reg EMPTY5:V, reg c158:L, reg r638:V, reg fit64:*, reg fit65:V, reg c159:L, reg fit67:V, reg dr126:V, reg dc63:L, reg dx177:V, reg dx178:V, reg r639:V, reg n_ok5:*, reg n_ok6:V, reg rank:*, reg rank1:V, reg r640:V, reg aic:cls, reg y29:*, reg y30:V, reg p82:p(V +), reg n:*, reg n1:V, reg p83:p(V +), reg mu36:*, reg mu37:V, reg p84:p(V +), reg weights31:*, reg weights32:V, reg p85:p(V +), reg dev16:*, reg dev17:V, reg p86:p(V +), reg r646:V, reg rank2:*, reg rank3:V, reg r647:V, reg r648:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r649:V, reg r650:V, reg coef:*, reg coef1:V, reg residuals2:*, reg residuals3:V, reg mu38:*, reg mu39:V, reg EMPTY6:*, reg EMPTY7:V, reg r651:V, reg c160:L, reg fit68:*, reg fit69:V, reg c161:L, reg fit71:V, reg dr128:V, reg dc64:L, reg dx179:V, reg dx180:V, reg r652:V, reg dx181:V, reg EMPTY8:*, reg EMPTY9:V, reg r653:V, reg c162:L, reg Rmat6:*, reg Rmat7:V, reg Rmat8:V, reg rank4:*, reg rank5:V, reg EMPTY10:*, reg EMPTY11:V, reg r654:V, reg c163:L, reg structure:cls, reg fit72:*, reg fit73:V, reg c164:L, reg fit75:V, reg dr130:V, reg dc65:L, reg dx182:V, reg dx183:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r655:V, reg fit78:V, reg r656:V, reg c165:cls, reg r657:V, reg __15:cls, reg r658:V, reg p87:p(V +), reg r660:V, reg r661:V, reg family49:*, reg family50:V, reg eta28:*, reg eta29:V, reg dev18:*, reg dev19:V, reg aic_model:*, reg aic_model1:V, reg nulldev:*, reg nulldev1:V, reg iter6:*, reg iter7:V, reg wt:*, reg wt1:V, reg weights33:*, reg weights34:V, reg resdf:*, reg resdf1:V, reg nulldf:*, reg nulldf1:V, reg y31:*, reg y32:V, reg conv2:*, reg conv3:V, reg boundary2:*, reg boundary3:V, reg list2:cls, reg r662:V |
    mkenv;
    st x = x;
    st y = y;
    weights_isMissing = missing.0(weights);
    if weights_isMissing then L0() else L1(weights);
  L0():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      nobs = ld nobs;
      nobs1 = force? nobs;
      checkMissing(nobs1);
      rep_int = ldf `rep.int` in base;
      r2 = dyn rep_int(1.0, nobs1);
      goto L0(r2);
    L2():
      r = dyn base(1.0, <sym nobs>);
      goto L0(r);
    };
    goto L1(p);
  L1(weights_orDefault):
    st weights = weights_orDefault;
    start_isMissing = missing.0(start);
    if start_isMissing then L2(NULL) else L2(start);
  L2(start_orDefault):
    st start = start_orDefault;
    etastart_isMissing = missing.0(etastart);
    if etastart_isMissing then L3(NULL) else L3(etastart);
  L3(etastart_orDefault):
    st etastart = etastart_orDefault;
    mustart_isMissing = missing.0(mustart);
    if mustart_isMissing then L4(NULL) else L4(mustart);
  L4(mustart_orDefault):
    st mustart = mustart_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L5() else L6(offset);
  L5():
    p1 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      nobs2 = ld nobs;
      nobs3 = force? nobs2;
      checkMissing(nobs3);
      rep_int1 = ldf `rep.int` in base;
      r6 = dyn rep_int1(0.0, nobs3);
      goto L0(r6);
    L2():
      r4 = dyn base1(0.0, <sym nobs>);
      goto L0(r4);
    };
    goto L6(p1);
  L6(offset_orDefault):
    st offset = offset_orDefault;
    family_isMissing = missing.0(family);
    if family_isMissing then L7() else L8(family);
  L7():
    p2 = prom<V +>{
      gaussian = ldf gaussian;
      r8 = dyn gaussian();
      return r8;
    };
    goto L8(p2);
  L8(family_orDefault):
    st family = family_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L9() else L10(control);
  L9():
    p3 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      list = ldf list in base;
      r12 = dyn list();
      goto L0(r12);
    L2():
      r10 = dyn base2();
      goto L0(r10);
    };
    goto L10(p3);
  L10(control_orDefault):
    st control = control_orDefault;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L11(TRUE) else L11(intercept);
  L11(intercept_orDefault):
    st intercept = intercept_orDefault;
    singular_ok_isMissing = missing.0(singular_ok);
    if singular_ok_isMissing then L12(TRUE) else L12(singular_ok);
  L12(singular_ok_orDefault):
    st `singular.ok` = singular_ok_orDefault;
    do_call = ldf `do.call`;
    check L182() else D0();
  D0():
    deopt 1 [];
  L182():
    p4 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    r15 = dyn do_call("glm.control", p4);
    check L183() else D1();
  D1():
    deopt 4 [r15];
  L183():
    st control = r15;
    as_matrix = ldf `as.matrix`;
    check L184() else D2();
  D2():
    deopt 7 [];
  L184():
    p5 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r17 = dyn as_matrix(p5);
    check L185() else D3();
  D3():
    deopt 9 [r17];
  L185():
    st x = r17;
    sym3 = ldf dimnames;
    base3 = ldf dimnames in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L186() else L187();
  L13(r19):
    c = `is.object`(r19);
    if c then L190() else L191(r19);
  L186():
    x3 = ld x;
    check L188() else D4();
  L187():
    r18 = dyn base3(<sym x>);
    goto L13(r18);
  D4():
    deopt 13 [x3];
  L14(dx1):
    st xnames = dx1;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L193() else L194();
  L188():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r20 = dyn dimnames(x4);
    check L189() else D5();
  L190():
    dr = tryDispatchBuiltin.1("[[", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L192() else L191(dr);
  L191(r22):
    __ = ldf `[[` in base;
    r23 = dyn __(r22, 2);
    goto L14(r23);
  D5():
    deopt 16 [r20];
  L15(r25):
    c1 = `as.logical`(r25);
    if c1 then L197() else L16();
  L189():
    goto L13(r20);
  L192():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L193():
    y1 = ld y;
    check L195() else D6();
  L194():
    r24 = dyn base4(<sym y>);
    goto L15(r24);
  D6():
    deopt 23 [y1];
  L16():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L201() else L202();
  L17(r29):
    st ynames = r29;
    st conv = FALSE;
    NROW = ldf NROW;
    check L205() else D12();
  L195():
    y2 = force? y1;
    checkMissing(y2);
    is_matrix = ldf `is.matrix` in base;
    r26 = dyn is_matrix(y2);
    check L196() else D7();
  L197():
    rownames = ldf rownames;
    check L198() else D8();
  D7():
    deopt 26 [r26];
  D8():
    deopt 28 [];
  D12():
    deopt 42 [];
  L196():
    goto L15(r26);
  L198():
    p6 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r28 = dyn rownames(p6);
    check L199() else D9();
  L201():
    y5 = ld y;
    check L203() else D10();
  L202():
    r30 = dyn base5(<sym y>);
    goto L17(r30);
  L205():
    p7 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r33 = dyn NROW(p7);
    check L206() else D13();
  D9():
    deopt 30 [r28];
  D10():
    deopt 33 [y5];
  D13():
    deopt 44 [r33];
  L199():
    goto L17(r28);
  L203():
    y6 = force? y5;
    checkMissing(y6);
    names = ldf names in base;
    r31 = dyn names(y6);
    check L204() else D11();
  L206():
    st nobs = r33;
    ncol = ldf ncol;
    check L207() else D14();
  D11():
    deopt 36 [r31];
  D14():
    deopt 47 [];
  L204():
    goto L17(r31);
  L207():
    p8 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r35 = dyn ncol(p8);
    check L208() else D15();
  D15():
    deopt 49 [r35];
  L208():
    st nvars = r35;
    nvars = ld nvars;
    check L209() else D16();
  D16():
    deopt 51 [nvars];
  L209():
    nvars1 = force? nvars;
    checkMissing(nvars1);
    r36 = `==`(nvars1, 0.0);
    st EMPTY = r36;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L210() else L211();
  L18(r38):
    c3 = `as.logical`(r38);
    if c3 then L213() else L19();
  L210():
    weights1 = ld weights;
    check L212() else D17();
  L211():
    r37 = dyn base6(<sym weights>);
    goto L18(r37);
  D17():
    deopt 57 [weights1];
  L19():
    goto L21();
  L21():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L219() else L220();
  L212():
    weights2 = force? weights1;
    checkMissing(weights2);
    c2 = `==`(weights2, NULL);
    goto L18(c2);
  L213():
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L214() else L215();
  L20(r40):
    st weights = r40;
    goto L21();
  L22(r44):
    c5 = `as.logical`(r44);
    if c5 then L222() else L23();
  L214():
    nobs4 = ld nobs;
    check L216() else D18();
  L215():
    r39 = dyn base7(1.0, <sym nobs>);
    goto L20(r39);
  L219():
    offset1 = ld offset;
    check L221() else D20();
  L220():
    r43 = dyn base8(<sym offset>);
    goto L22(r43);
  D18():
    deopt 63 [nobs4];
  D20():
    deopt 71 [offset1];
  L23():
    goto L25();
  L25():
    family1 = ld family;
    check L228() else D23();
  L216():
    nobs5 = force? nobs4;
    checkMissing(nobs5);
    rep_int2 = ldf `rep.int` in base;
    r41 = dyn rep_int2(1.0, nobs5);
    check L217() else D19();
  L221():
    offset2 = force? offset1;
    checkMissing(offset2);
    c4 = `==`(offset2, NULL);
    goto L22(c4);
  L222():
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L223() else L224();
  D19():
    deopt 66 [r41];
  D23():
    deopt 84 [family1];
  L24(r46):
    st offset = r46;
    goto L25();
  L217():
    goto L20(r41);
  L223():
    nobs6 = ld nobs;
    check L225() else D21();
  L224():
    r45 = dyn base9(0.0, <sym nobs>);
    goto L24(r45);
  L228():
    family2 = force? family1;
    checkMissing(family2);
    c6 = `is.object`(family2);
    if c6 then L230() else L231(family2);
  D21():
    deopt 77 [nobs6];
  L225():
    nobs7 = force? nobs6;
    checkMissing(nobs7);
    rep_int3 = ldf `rep.int` in base;
    r47 = dyn rep_int3(0.0, nobs7);
    check L226() else D22();
  L229(dx3):
    st variance = dx3;
    family5 = ld family;
    check L233() else D24();
  L230():
    dr2 = tryDispatchBuiltin.1("$", family2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L232() else L231(dr2);
  L231(family4):
    r49 = `$`(family4, <sym variance>);
    goto L229(r49);
  D22():
    deopt 80 [r47];
  D24():
    deopt 88 [family5];
  L226():
    goto L24(r47);
  L232():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L229(dx2);
  L233():
    family6 = force? family5;
    checkMissing(family6);
    c7 = `is.object`(family6);
    if c7 then L235() else L236(family6);
  L234(dx5):
    st linkinv = dx5;
    sym10 = ldf `is.function`;
    base10 = ldf `is.function` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L238() else L239();
  L235():
    dr4 = tryDispatchBuiltin.1("$", family6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L237() else L236(dr4);
  L236(family8):
    r50 = `$`(family8, <sym linkinv>);
    goto L234(r50);
  L26(r52):
    r54 = `!`(r52);
    c8 = `as.logical`(r54);
    if c8 then L27(c8) else L242();
  L237():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L234(dx4);
  L238():
    variance = ld variance;
    check L240() else D25();
  L239():
    r51 = dyn base10(<sym variance>);
    goto L26(r51);
  D25():
    deopt 94 [variance];
  L27(c9):
    c17 = `as.logical`(c9);
    if c17 then L248() else L29();
  L240():
    variance1 = force? variance;
    checkMissing(variance1);
    is_function = ldf `is.function` in base;
    r53 = dyn is_function(variance1);
    check L241() else D26();
  L242():
    sym11 = ldf `is.function`;
    base11 = ldf `is.function` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L243() else L244();
  D26():
    deopt 97 [r53];
  L28(c13, r56):
    r58 = `!`(r56);
    c14 = `as.logical`(r58);
    c15 = `||`(c13, c14);
    goto L27(c15);
  L29():
    goto L30();
  L30():
    family9 = ld family;
    check L252() else D31();
  L241():
    goto L26(r53);
  L243():
    linkinv = ld linkinv;
    check L245() else D27();
  L244():
    r55 = dyn base11(<sym linkinv>);
    goto L28(c8, r55);
  L248():
    stop = ldf stop;
    check L249() else D29();
  D27():
    deopt 101 [c8, linkinv];
  D29():
    deopt 108 [];
  D31():
    deopt 115 [family9];
  L245():
    linkinv1 = force? linkinv;
    checkMissing(linkinv1);
    is_function1 = ldf `is.function` in base;
    r57 = dyn is_function1(linkinv1);
    check L246() else D28();
  L249():
    r59 = dyn stop[, `call.`]("'family' argument seems not to be a valid family object", FALSE);
    check L250() else D30();
  L252():
    family10 = force? family9;
    checkMissing(family10);
    c18 = `is.object`(family10);
    if c18 then L254() else L255(family10);
  D28():
    deopt 104 [c8, r57];
  D30():
    deopt 112 [r59];
  L246():
    goto L28(c8, r57);
  L250():
    goto L30();
  L253(dx7):
    st `dev.resids` = dx7;
    family13 = ld family;
    check L257() else D32();
  L254():
    dr6 = tryDispatchBuiltin.1("$", family10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L256() else L255(dr6);
  L255(family12):
    r61 = `$`(family12, <sym dev.resids>);
    goto L253(r61);
  D32():
    deopt 119 [family13];
  L256():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L253(dx6);
  L257():
    family14 = force? family13;
    checkMissing(family14);
    c19 = `is.object`(family14);
    if c19 then L259() else L260(family14);
  L258(dx9):
    st aic = dx9;
    family17 = ld family;
    check L262() else D33();
  L259():
    dr8 = tryDispatchBuiltin.1("$", family14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L261() else L260(dr8);
  L260(family16):
    r62 = `$`(family16, <sym aic>);
    goto L258(r62);
  D33():
    deopt 123 [family17];
  L261():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L258(dx8);
  L262():
    family18 = force? family17;
    checkMissing(family18);
    c20 = `is.object`(family18);
    if c20 then L264() else L265(family18);
  L263(dx11):
    st `mu.eta` = dx11;
    ____ = ldf `%||%`;
    check L267() else D34();
  L264():
    dr10 = tryDispatchBuiltin.1("$", family18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L266() else L265(dr10);
  L265(family20):
    r63 = `$`(family20, <sym mu.eta>);
    goto L263(r63);
  D34():
    deopt 128 [];
  L266():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L263(dx10);
  L267():
    p9 = prom<V +>{
      family21 = ld family;
      family22 = force? family21;
      checkMissing(family22);
      c21 = `is.object`(family22);
      if c21 then L1() else L2(family22);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", family22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(family24):
      r64 = `$`(family24, <sym valideta>);
      goto L0(r64);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p10 = prom<V +>{
      r66 = clos inner1704214286;
      return r66;
    };
    r68 = dyn ____(p9, p10);
    check L268() else D35();
  D35():
    deopt 131 [r68];
  L268():
    st valideta = r68;
    ____1 = ldf `%||%`;
    check L269() else D36();
  D36():
    deopt 134 [];
  L269():
    p11 = prom<V +>{
      family25 = ld family;
      family26 = force? family25;
      checkMissing(family26);
      c22 = `is.object`(family26);
      if c22 then L1() else L2(family26);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", family26);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(family28):
      r69 = `$`(family28, <sym validmu>);
      goto L0(r69);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p12 = prom<V +>{
      r71 = clos inner987613256;
      return r71;
    };
    r73 = dyn ____1(p11, p12);
    check L270() else D37();
  D37():
    deopt 137 [r73];
  L270():
    st validmu = r73;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L271() else L272();
  L31(r75):
    c24 = `as.logical`(r75);
    if c24 then L274() else L32();
  L271():
    mustart1 = ld mustart;
    check L273() else D38();
  L272():
    r74 = dyn base12(<sym mustart>);
    goto L31(r74);
  D38():
    deopt 140 [mustart1];
  L32():
    mustart3 = ld mustart;
    check L278() else D41();
  L33():
    EMPTY = ld EMPTY;
    check L282() else D45();
  L273():
    mustart2 = force? mustart1;
    checkMissing(mustart2);
    c23 = `==`(mustart2, NULL);
    goto L31(c23);
  L274():
    eval = ldf eval;
    check L275() else D39();
  D39():
    deopt 144 [];
  D41():
    deopt 147 [mustart3];
  D45():
    deopt 157 [EMPTY];
  L275():
    p13 = prom<V +>{
      family29 = ld family;
      family30 = force? family29;
      checkMissing(family30);
      c25 = `is.object`(family30);
      if c25 then L1() else L2(family30);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", family30);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(family32):
      r76 = `$`(family32, <sym initialize>);
      goto L0(r76);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r78 = dyn eval(p13);
    check L276() else D40();
  L278():
    mustart4 = force? mustart3;
    checkMissing(mustart4);
    st mukeep = mustart4;
    eval1 = ldf eval;
    check L279() else D42();
  L282():
    EMPTY1 = force? EMPTY;
    checkMissing(EMPTY1);
    c27 = `as.logical`(EMPTY1);
    if c27 then L283() else L34();
  D40():
    deopt 146 [r78];
  D42():
    deopt 151 [];
  L34():
    st coefold = NULL;
    ____2 = ldf `%||%`;
    check L329() else D76();
  L44():
    ynames = ld ynames;
    check L848() else D307();
  L276():
    goto L33();
  L279():
    p14 = prom<V +>{
      family33 = ld family;
      family34 = force? family33;
      checkMissing(family34);
      c26 = `is.object`(family34);
      if c26 then L1() else L2(family34);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", family34);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(family36):
      r80 = `$`(family36, <sym initialize>);
      goto L0(r80);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r82 = dyn eval1(p14);
    check L280() else D43();
  L283():
    sym13 = ldf `rep.int`;
    base13 = ldf `rep.int` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L284() else L285();
  D43():
    deopt 153 [r82];
  D76():
    deopt 262 [];
  D307():
    deopt 1091 [ynames];
  L35(r84):
    offset3 = ld offset;
    check L288() else D48();
  L280():
    mukeep = ld mukeep;
    check L281() else D44();
  L284():
    nobs8 = ld nobs;
    check L286() else D46();
  L285():
    r83 = dyn base13(0.0, <sym nobs>);
    goto L35(r83);
  L329():
    p24 = prom<V +>{
      etastart1 = ld etastart;
      etastart2 = force? etastart1;
      checkMissing(etastart2);
      return etastart2;
    };
    p33 = prom<V +>{
      sym18 = ldf `is.null`;
      base18 = ldf `is.null` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L4() else L5();
    L0(r130):
      r131 = `!`(r130);
      c31 = `as.logical`(r131);
      if c31 then L6() else L1();
    L4():
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      c30 = `==`(start2, NULL);
      goto L0(c30);
    L5():
      r129 = dyn base18(<sym start>);
      goto L0(r129);
    L1():
      family37 = ld family;
      family38 = force? family37;
      checkMissing(family38);
      c34 = `is.object`(family38);
      if c34 then L13() else L14(family38);
    L6():
      sym19 = ldf length;
      base19 = ldf length in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L7() else L8();
    L2(r133):
      nvars2 = ld nvars;
      nvars3 = force? nvars2;
      checkMissing(nvars3);
      r135 = `!=`(r133, nvars3);
      c32 = `as.logical`(r135);
      if c32 then L9() else L3();
    L7():
      start3 = ld start;
      start4 = force? start3;
      checkMissing(start4);
      length1 = ldf length in base;
      r134 = dyn length1(start4);
      goto L2(r134);
    L8():
      r132 = dyn base19(<sym start>);
      goto L2(r132);
    L12(dx21):
      checkFun.0(dx21);
      dx22 = dx21 as cls;
      p32 = prom<V +>{
        mustart5 = ld mustart;
        mustart6 = force? mustart5;
        checkMissing(mustart6);
        return mustart6;
      };
      r155 = dyn dx22(p32);
      return r155;
    L13():
      dr20 = tryDispatchBuiltin.1("$", family38);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L15() else L14(dr20);
    L14(family40):
      r153 = `$`(family40, <sym linkfun>);
      goto L12(r153);
    L3():
      start5 = ld start;
      start6 = force? start5;
      checkMissing(start6);
      st coefold = start6;
      offset5 = ld offset;
      offset6 = force? offset5;
      checkMissing(offset6);
      as_vector = ldf `as.vector`;
      p31 = prom<V +>{
        NCOL = ldf NCOL;
        p30 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r146 = dyn NCOL(p30);
        r147 = `==`(r146, 1);
        c33 = `as.logical`(r147);
        if c33 then L1() else L0();
      L0():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        start9 = ld start;
        start10 = force? start9;
        checkMissing(start10);
        ___ = ldf `%*%` in base;
        r149 = dyn ___(x12, start10);
        return r149;
      L1():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        start7 = ld start;
        start8 = force? start7;
        checkMissing(start8);
        r148 = `*`(x10, start8);
        return r148;
      };
      r151 = dyn as_vector(p31);
      r152 = `+`(offset6, r151);
      return r152;
    L9():
      stop3 = ldf stop;
      p29 = prom<V +>{
        gettextf = ldf gettextf;
        p25 = prom<V +>{
          nvars4 = ld nvars;
          nvars5 = force? nvars4;
          checkMissing(nvars5);
          return nvars5;
        };
        p28 = prom<V +>{
          paste = ldf paste;
          p27 = prom<V +>{
            deparse = ldf deparse;
            p26 = prom<V +>{
              xnames = ld xnames;
              xnames1 = force? xnames;
              checkMissing(xnames1);
              return xnames1;
            };
            r138 = dyn deparse(p26);
            return r138;
          };
          r140 = dyn paste[, collapse](p27, ", ");
          return r140;
        };
        r142 = dyn gettextf("length of 'start' should equal %d and correspond to initial coefs for %s", p25, p28);
        return r142;
      };
      r144 = dyn stop3[, domain](p29, NA_LGL);
      return r144;
    L15():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L12(dx20);
    };
    r157 = dyn ____2(p24, p33);
    check L330() else D77();
  L848():
    ynames1 = force? ynames;
    checkMissing(ynames1);
    l60 = ld residuals;
    names__1 = ldf `names<-`;
    check L849() else D308();
  D44():
    deopt 154 [mukeep];
  D46():
    deopt 162 [nobs8];
  D48():
    deopt 165 [r84, offset3];
  D77():
    deopt 265 [r157];
  D308():
    deopt 1094 [ynames1, l60, ynames1];
  L281():
    mukeep1 = force? mukeep;
    checkMissing(mukeep1);
    st mustart = mukeep1;
    goto L33();
  L286():
    nobs9 = force? nobs8;
    checkMissing(nobs9);
    rep_int4 = ldf `rep.int` in base;
    r85 = dyn rep_int4(0.0, nobs9);
    check L287() else D47();
  L288():
    offset4 = force? offset3;
    checkMissing(offset4);
    r86 = `+`(r84, offset4);
    st eta = r86;
    valideta = ldf valideta;
    check L289() else D49();
  L330():
    st eta = r157;
    linkinv3 = ldf linkinv;
    check L331() else D78();
  L849():
    r556 = dyn names__1(l60, NULL, ynames1);
    check L850() else D309();
  D47():
    deopt 165 [r85];
  D49():
    deopt 170 [];
  D78():
    deopt 268 [];
  D309():
    deopt 1096 [ynames1, r556];
  L287():
    goto L35(r85);
  L289():
    p15 = prom<V +>{
      eta = ld eta;
      eta1 = force? eta;
      checkMissing(eta1);
      return eta1;
    };
    r88 = dyn valideta(p15);
    check L290() else D50();
  L331():
    p34 = prom<V +>{
      eta8 = ld eta;
      eta9 = force? eta8;
      checkMissing(eta9);
      return eta9;
    };
    r159 = dyn linkinv3(p34);
    check L332() else D79();
  L850():
    st residuals = r556;
    ynames2 = ld ynames;
    check L851() else D310();
  D50():
    deopt 172 [r88];
  D79():
    deopt 270 [r159];
  D310():
    deopt 1098 [ynames2];
  L290():
    r89 = `!`(r88);
    c28 = `as.logical`(r89);
    if c28 then L291() else L36();
  L332():
    st mu = r159;
    validmu1 = ldf validmu;
    check L333() else D80();
  L851():
    ynames3 = force? ynames2;
    checkMissing(ynames3);
    l61 = ld mu;
    names__2 = ldf `names<-`;
    check L852() else D311();
  D80():
    deopt 273 [];
  D311():
    deopt 1101 [ynames3, l61, ynames3];
  L36():
    goto L37();
  L37():
    linkinv2 = ldf linkinv;
    check L295() else D53();
  L291():
    stop1 = ldf stop;
    check L292() else D51();
  L333():
    p35 = prom<V +>{
      mu8 = ld mu;
      mu9 = force? mu8;
      checkMissing(mu9);
      return mu9;
    };
    r161 = dyn validmu1(p35);
    check L334() else D81();
  L852():
    r557 = dyn names__2(l61, NULL, ynames3);
    check L853() else D312();
  D51():
    deopt 175 [];
  D53():
    deopt 183 [];
  D81():
    deopt 275 [r161];
  D312():
    deopt 1103 [ynames3, r557];
  L292():
    r90 = dyn stop1[, `call.`]("invalid linear predictor values in empty model", FALSE);
    check L293() else D52();
  L295():
    p16 = prom<V +>{
      eta2 = ld eta;
      eta3 = force? eta2;
      checkMissing(eta3);
      return eta3;
    };
    r93 = dyn linkinv2(p16);
    check L296() else D54();
  L334():
    c35 = `as.logical`(r161);
    if c35 then L335() else L45(c35);
  L853():
    st mu = r557;
    ynames4 = ld ynames;
    check L854() else D313();
  D52():
    deopt 179 [r90];
  D54():
    deopt 185 [r93];
  D313():
    deopt 1105 [ynames4];
  L45(c37):
    r164 = `!`(c37);
    c41 = `as.logical`(r164);
    if c41 then L339() else L46();
  L293():
    goto L37();
  L296():
    st mu = r93;
    validmu = ldf validmu;
    check L297() else D55();
  L335():
    valideta1 = ldf valideta;
    check L336() else D82();
  L854():
    ynames5 = force? ynames4;
    checkMissing(ynames5);
    l62 = ld eta;
    names__3 = ldf `names<-`;
    check L855() else D314();
  D55():
    deopt 188 [];
  D82():
    deopt 277 [c35];
  D314():
    deopt 1108 [ynames5, l62, ynames5];
  L46():
    goto L47();
  L47():
    sym20 = ldf sum;
    base20 = ldf sum in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L343() else L344();
  L297():
    p17 = prom<V +>{
      mu = ld mu;
      mu1 = force? mu;
      checkMissing(mu1);
      return mu1;
    };
    r95 = dyn validmu(p17);
    check L298() else D56();
  L336():
    p36 = prom<V +>{
      eta10 = ld eta;
      eta11 = force? eta10;
      checkMissing(eta11);
      return eta11;
    };
    r163 = dyn valideta1(p36);
    check L337() else D83();
  L339():
    stop4 = ldf stop;
    check L340() else D84();
  L855():
    r558 = dyn names__3(l62, NULL, ynames5);
    check L856() else D315();
  D56():
    deopt 190 [r95];
  D83():
    deopt 279 [c35, r163];
  D84():
    deopt 283 [];
  D315():
    deopt 1110 [ynames5, r558];
  L48(r168):
    st devold = r168;
    st conv = FALSE;
    st boundary = FALSE;
    control3 = ld control;
    check L348() else D89();
  L298():
    r96 = `!`(r95);
    c29 = `as.logical`(r96);
    if c29 then L299() else L38();
  L337():
    c38 = `as.logical`(r163);
    c39 = `&&`(c35, c38);
    goto L45(c39);
  L340():
    r165 = dyn stop4[, `call.`]("cannot find valid starting values: please specify some", FALSE);
    check L341() else D85();
  L343():
    dev_resids1 = ldf `dev.resids`;
    check L345() else D86();
  L344():
    r167 = dyn base20(<lang dev.resids(y, mu, weights)>);
    goto L48(r167);
  L856():
    st eta = r558;
    sym50 = ldf `rep.int`;
    base50 = ldf `rep.int` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L857() else L858();
  D85():
    deopt 287 [r165];
  D86():
    deopt 293 [];
  D89():
    deopt 306 [1, control3];
  L38():
    goto L39();
  L39():
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L303() else L304();
  L157(r560):
    st wt = r560;
    w4 = ld w;
    check L861() else D318();
  L299():
    stop2 = ldf stop;
    check L300() else D57();
  L341():
    goto L47();
  L345():
    p37 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    p38 = prom<V +>{
      mu10 = ld mu;
      mu11 = force? mu10;
      checkMissing(mu11);
      return mu11;
    };
    p39 = prom<V +>{
      weights7 = ld weights;
      weights8 = force? weights7;
      checkMissing(weights8);
      return weights8;
    };
    r172 = dyn dev_resids1(p37, p38, p39);
    check L346() else D87();
  L348():
    control4 = force? control3;
    checkMissing(control4);
    c42 = `is.object`(control4);
    if c42 then L350() else L351(1, control4);
  L857():
    nobs20 = ld nobs;
    check L859() else D316();
  L858():
    r559 = dyn base50(0.0, <sym nobs>);
    goto L157(r559);
  D57():
    deopt 193 [];
  D87():
    deopt 297 [r172];
  D316():
    deopt 1115 [nobs20];
  D318():
    deopt 1120 [w4];
  L40(r100):
    st dev = r100;
    sym15 = ldf sqrt;
    base15 = ldf sqrt in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L308() else L309();
  L300():
    r97 = dyn stop2[, `call.`]("invalid fitted means in empty model", FALSE);
    check L301() else D58();
  L303():
    dev_resids = ldf `dev.resids`;
    check L305() else D59();
  L304():
    r99 = dyn base14(<lang dev.resids(y, mu, weights)>);
    goto L40(r99);
  L346():
    sum1 = ldf sum in base;
    r173 = dyn sum1(r172);
    check L347() else D88();
  L349(r177, dx24):
    r179 = `:`(r177, dx24);
    s = toForSeq(r179);
    l = length(s);
    i = 0;
    goto L49(i);
  L350():
    dr22 = tryDispatchBuiltin.1("$", control4);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L352() else L351(1, dr22);
  L351(r175, control6):
    r178 = `$`(control6, <sym maxit>);
    goto L349(r175, r178);
  L859():
    nobs21 = force? nobs20;
    checkMissing(nobs21);
    rep_int5 = ldf `rep.int` in base;
    r561 = dyn rep_int5(0.0, nobs21);
    check L860() else D317();
  L861():
    w5 = force? w4;
    checkMissing(w5);
    r562 = `^`(w5, 2.0);
    l63 = ld wt;
    c149 = `is.object`(l63);
    if c149 then L862() else L863(r562, l63);
  D58():
    deopt 197 [r97];
  D59():
    deopt 203 [];
  D88():
    deopt 299 [r173];
  D317():
    deopt 1118 [r561];
  L41(r107):
    st w = r107;
    y11 = ld y;
    check L315() else D67();
  L49(i1):
    i2 = `+`.1(i1, 1);
    c43 = `<`.1(l, i2);
    if c43 then L353() else L124();
  L158(dx166):
    st wt = dx166;
    ynames6 = ld ynames;
    check L866() else D320();
  L301():
    goto L39();
  L305():
    p18 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    p19 = prom<V +>{
      mu2 = ld mu;
      mu3 = force? mu2;
      checkMissing(mu3);
      return mu3;
    };
    p20 = prom<V +>{
      weights3 = ld weights;
      weights4 = force? weights3;
      checkMissing(weights4);
      return weights4;
    };
    r104 = dyn dev_resids(p18, p19, p20);
    check L306() else D60();
  L308():
    weights5 = ld weights;
    check L310() else D62();
  L309():
    r106 = dyn base15(<lang `/`(`(`(`*`(weights, `^`(mu.eta(eta), 2.0))), variance(mu))>);
    goto L41(r106);
  L347():
    goto L48(r173);
  L352():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L349(1, dx23);
  L860():
    goto L157(r561);
  L862():
    dr114 = tryDispatchBuiltin.0("[<-", l63, r562);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L864() else L863(r562, dr114);
  L863(r564, l65):
    good22 = ld good;
    check L865() else D319();
  D60():
    deopt 207 [r104];
  D62():
    deopt 212 [weights5];
  D67():
    deopt 226 [y11];
  D319():
    deopt 1125 [r564, l65, r562, good22];
  D320():
    deopt 1129 [ynames6];
  L64():
    conv = ld conv;
    check L670() else D237();
  L124():
    x13 = `[[`(s, i2, NULL, TRUE);
    st iter = x13;
    weights9 = ld weights;
    check L354() else D90();
  L306():
    sum = ldf sum in base;
    r105 = dyn sum(r104);
    check L307() else D61();
  L310():
    weights6 = force? weights5;
    checkMissing(weights6);
    mu_eta = ldf `mu.eta`;
    check L311() else D63();
  L315():
    y12 = force? y11;
    checkMissing(y12);
    mu6 = ld mu;
    check L316() else D68();
  L353():
    goto L64();
  L864():
    dx165 = getTryDispatchBuiltinValue(dr114);
    goto L158(dx165);
  L865():
    good23 = force? good22;
    ___9 = ldf `[<-` in base;
    r567 = dyn ___9(l65, r562, good23);
    goto L158(r567);
  L866():
    ynames7 = force? ynames6;
    checkMissing(ynames7);
    l66 = ld wt;
    names__4 = ldf `names<-`;
    check L867() else D321();
  D61():
    deopt 209 [r105];
  D63():
    deopt 214 [weights6];
  D68():
    deopt 227 [y12, mu6];
  D90():
    deopt 310 [i2, weights9];
  D237():
    deopt 847 [conv];
  D321():
    deopt 1132 [ynames7, l66, ynames7];
  L307():
    goto L40(r105);
  L311():
    p21 = prom<V +>{
      eta4 = ld eta;
      eta5 = force? eta4;
      checkMissing(eta5);
      return eta5;
    };
    r109 = dyn mu_eta(p21);
    check L312() else D64();
  L316():
    mu7 = force? mu6;
    checkMissing(mu7);
    r116 = `-`(y12, mu7);
    mu_eta1 = ldf `mu.eta`;
    check L317() else D69();
  L354():
    weights10 = force? weights9;
    checkMissing(weights10);
    r180 = `>`(weights10, 0.0);
    st good = r180;
    variance3 = ldf variance;
    check L355() else D91();
  L670():
    conv1 = force? conv;
    checkMissing(conv1);
    r413 = `!`(conv1);
    c110 = `as.logical`(r413);
    if c110 then L671() else L125();
  L867():
    r568 = dyn names__4(l66, NULL, ynames7);
    check L868() else D322();
  D64():
    deopt 216 [weights6, r109];
  D69():
    deopt 230 [r116];
  D91():
    deopt 316 [i2];
  D322():
    deopt 1134 [ynames7, r568];
  L125():
    goto L126();
  L126():
    boundary = ld boundary;
    check L675() else D240();
  L312():
    r110 = `^`(r109, 2.0);
    r111 = `*`(weights6, r110);
    variance2 = ldf variance;
    check L313() else D65();
  L317():
    p23 = prom<V +>{
      eta6 = ld eta;
      eta7 = force? eta6;
      checkMissing(eta7);
      return eta7;
    };
    r118 = dyn mu_eta1(p23);
    check L318() else D70();
  L355():
    p40 = prom<V +>{
      mu12 = ld mu;
      mu13 = force? mu12;
      checkMissing(mu13);
      return mu13;
    };
    r182 = dyn variance3(p40);
    check L356() else D92();
  L671():
    warning4 = ldf warning;
    check L672() else D238();
  L868():
    st wt = r568;
    ynames8 = ld ynames;
    check L869() else D323();
  D65():
    deopt 220 [r111];
  D70():
    deopt 232 [r116, r118];
  D92():
    deopt 318 [i2, r182];
  D238():
    deopt 851 [];
  D240():
    deopt 858 [boundary];
  D323():
    deopt 1136 [ynames8];
  L313():
    p22 = prom<V +>{
      mu4 = ld mu;
      mu5 = force? mu4;
      checkMissing(mu5);
      return mu5;
    };
    r113 = dyn variance2(p22);
    check L314() else D66();
  L318():
    r119 = `/`(r116, r118);
    st residuals = r119;
    sym16 = ldf rep_len;
    base16 = ldf rep_len in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L319() else L320();
  L356():
    c44 = `is.object`(r182);
    if c44 then L357() else L358(i2, r182);
  L672():
    r414 = dyn warning4[, `call.`]("glm.fit: algorithm did not converge", FALSE);
    check L673() else D239();
  L675():
    boundary1 = force? boundary;
    checkMissing(boundary1);
    c111 = `as.logical`(boundary1);
    if c111 then L676() else L127();
  L869():
    ynames9 = force? ynames8;
    checkMissing(ynames9);
    l67 = ld weights;
    names__5 = ldf `names<-`;
    check L870() else D324();
  D66():
    deopt 222 [r111, r113];
  D239():
    deopt 855 [r414];
  D324():
    deopt 1139 [ynames9, l67, ynames9];
  L42(r121):
    st good = r121;
    st conv = TRUE;
    st boundary = TRUE;
    numeric = ldf numeric;
    check L326() else D74();
  L50(i8, dx26):
    st varmu = dx26;
    sym21 = ldf anyNA;
    base21 = ldf anyNA in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L361() else L362();
  L127():
    goto L128();
  L128():
    _Machine = ld `.Machine`;
    check L680() else D243();
  L314():
    r114 = `/`(r111, r113);
    r115 = sqrt(r114);
    goto L41(r115);
  L319():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L321() else L322();
  L320():
    r120 = dyn base16(TRUE, <lang length(residuals)>);
    goto L42(r120);
  L357():
    dr24 = tryDispatchBuiltin.1("[", r182);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L359() else L358(i2, dr24);
  L358(i6, r184):
    good = ld good;
    check L360() else D93();
  L673():
    goto L126();
  L676():
    warning5 = ldf warning;
    check L677() else D241();
  L870():
    r569 = dyn names__5(l67, NULL, ynames9);
    check L871() else D325();
  D74():
    deopt 252 [];
  D93():
    deopt 319 [i6, r184, good];
  D241():
    deopt 861 [];
  D243():
    deopt 869 [10.0, _Machine];
  D325():
    deopt 1141 [ynames9, r569];
  L43(r123):
    rep_len = ldf rep_len in base;
    r125 = dyn rep_len(TRUE, r123);
    check L325() else D73();
  L51(i11, r187):
    c45 = `as.logical`(r187);
    if c45 then L365() else L52();
  L321():
    residuals = ld residuals;
    check L323() else D71();
  L322():
    r122 = dyn base17(<sym residuals>);
    goto L43(r122);
  L326():
    r126 = dyn numeric();
    check L327() else D75();
  L359():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L50(i2, dx25);
  L360():
    good1 = force? good;
    __1 = ldf `[` in base;
    r185 = dyn __1(r184, good1);
    goto L50(i6, r185);
  L361():
    varmu = ld varmu;
    check L363() else D94();
  L362():
    r186 = dyn base21(<sym varmu>);
    goto L51(i8, r186);
  L677():
    r416 = dyn warning5[, `call.`]("glm.fit: algorithm stopped at boundary value", FALSE);
    check L678() else D242();
  L680():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c112 = `is.object`(_Machine1);
    if c112 then L682() else L683(10.0, _Machine1);
  L871():
    st weights = r569;
    ynames10 = ld ynames;
    check L872() else D326();
  D71():
    deopt 240 [residuals];
  D73():
    deopt 245 [r125];
  D75():
    deopt 253 [r126];
  D94():
    deopt 325 [i8, varmu];
  D242():
    deopt 865 [r416];
  D326():
    deopt 1143 [ynames10];
  L52():
    goto L53(i11);
  L53(i14):
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L369() else L370();
  L323():
    residuals1 = force? residuals;
    checkMissing(residuals1);
    length = ldf length in base;
    r124 = dyn length(residuals1);
    check L324() else D72();
  L325():
    goto L42(r125);
  L327():
    st coef = r126;
    st iter = 0;
    goto L44();
  L363():
    varmu1 = force? varmu;
    checkMissing(varmu1);
    anyNA = ldf anyNA in base;
    r188 = dyn anyNA(varmu1);
    check L364() else D95();
  L365():
    stop5 = ldf stop;
    check L366() else D96();
  L678():
    goto L128();
  L681(r421, dx100):
    r423 = `*`(r421, dx100);
    st eps = r423;
    family41 = ld family;
    check L685() else D244();
  L682():
    dr70 = tryDispatchBuiltin.1("$", _Machine1);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L684() else L683(10.0, dr70);
  L683(r419, _Machine3):
    r422 = `$`(_Machine3, <sym double.eps>);
    goto L681(r419, r422);
  L872():
    ynames11 = force? ynames10;
    checkMissing(ynames11);
    l68 = ld y;
    names__6 = ldf `names<-`;
    check L873() else D327();
  D72():
    deopt 243 [r124];
  D95():
    deopt 328 [i8, r188];
  D96():
    deopt 330 [i11];
  D244():
    deopt 874 [family41];
  D327():
    deopt 1146 [ynames11, l68, ynames11];
  L54(i17, r192):
    c46 = `as.logical`(r192);
    if c46 then L373() else L55();
  L324():
    goto L43(r124);
  L364():
    goto L51(i8, r188);
  L366():
    r189 = dyn stop5("NAs in V(mu)");
    check L367() else D97();
  L369():
    varmu2 = ld varmu;
    check L371() else D98();
  L370():
    r191 = dyn base22(<lang `==`(varmu, 0.0)>);
    goto L54(i14, r191);
  L684():
    dx99 = getTryDispatchBuiltinValue(dr70);
    goto L681(10.0, dx99);
  L685():
    family42 = force? family41;
    checkMissing(family42);
    c113 = `is.object`(family42);
    if c113 then L687() else L688(family42);
  L873():
    r570 = dyn names__6(l68, NULL, ynames11);
    check L874() else D328();
  D97():
    deopt 332 [i11, r189];
  D98():
    deopt 337 [i14, varmu2];
  D328():
    deopt 1148 [ynames11, r570];
  L55():
    goto L56(i17);
  L56(i20):
    mu_eta2 = ldf `mu.eta`;
    check L377() else D102();
  L367():
    goto L53(i11);
  L371():
    varmu3 = force? varmu2;
    checkMissing(varmu3);
    r193 = `==`(varmu3, 0.0);
    any = ldf any in base;
    r194 = dyn any(r193);
    check L372() else D99();
  L373():
    stop6 = ldf stop;
    check L374() else D100();
  L686(dx102):
    r425 = `==`(dx102, "binomial");
    c114 = `as.logical`(r425);
    if c114 then L690() else L129();
  L687():
    dr72 = tryDispatchBuiltin.1("$", family42);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L689() else L688(dr72);
  L688(family44):
    r424 = `$`(family44, <sym family>);
    goto L686(r424);
  L874():
    st y = r570;
    EMPTY2 = ld EMPTY;
    check L875() else D329();
  D99():
    deopt 342 [i14, r194];
  D100():
    deopt 344 [i17];
  D102():
    deopt 350 [i20];
  D329():
    deopt 1150 [EMPTY2];
  L129():
    goto L135();
  L135():
    family45 = ld family;
    check L708() else D253();
  L372():
    goto L54(i14, r194);
  L374():
    r195 = dyn stop6("0s in V(mu)");
    check L375() else D101();
  L377():
    p41 = prom<V +>{
      eta12 = ld eta;
      eta13 = force? eta12;
      checkMissing(eta13);
      return eta13;
    };
    r198 = dyn mu_eta2(p41);
    check L378() else D103();
  L689():
    dx101 = getTryDispatchBuiltinValue(dr72);
    goto L686(dx101);
  L690():
    sym43 = ldf any;
    base43 = ldf any in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L691() else L692();
  L875():
    EMPTY3 = force? EMPTY2;
    checkMissing(EMPTY3);
    r571 = `!`(EMPTY3);
    c150 = `as.logical`(r571);
    if c150 then L876() else L159();
  D101():
    deopt 346 [i17, r195];
  D103():
    deopt 352 [i20, r198];
  D253():
    deopt 908 [family45];
  L130(r427):
    c115 = `as.logical`(r427);
    if c115 then L131(c115) else L696();
  L159():
    goto L165();
  L165():
    intercept1 = ld intercept;
    check L914() else D339();
  L375():
    goto L56(i17);
  L378():
    st `mu.eta.val` = r198;
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L379() else L380();
  L691():
    mu28 = ld mu;
    check L693() else D245();
  L692():
    r426 = dyn base43(<lang `>`(mu, `-`(1.0, eps))>);
    goto L130(r426);
  L708():
    family46 = force? family45;
    checkMissing(family46);
    c125 = `is.object`(family46);
    if c125 then L710() else L711(family46);
  L876():
    sym51 = ldf c;
    base51 = ldf c in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L877() else L878();
  D245():
    deopt 881 [mu28];
  D339():
    deopt 1190 [intercept1];
  L57(i23, r200):
    c48 = `as.logical`(r200);
    if c48 then L390() else L60();
  L131(c116):
    c124 = `as.logical`(c116);
    if c124 then L703() else L133();
  L160(r573):
    l69 = ld fit;
    c155 = `is.object`(l69);
    if c155 then L904() else L905(r573, l69, r573, l69);
  L379():
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L381() else L382();
  L380():
    r199 = dyn base23(<lang is.na(`[`(mu.eta.val, good))>);
    goto L57(i20, r199);
  L693():
    mu29 = force? mu28;
    checkMissing(mu29);
    eps = ld eps;
    check L694() else D246();
  L696():
    sym44 = ldf any;
    base44 = ldf any in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L697() else L698();
  L709(dx104):
    r439 = `==`(dx104, "poisson");
    c126 = `as.logical`(r439);
    if c126 then L713() else L136();
  L710():
    dr74 = tryDispatchBuiltin.1("$", family46);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L712() else L711(dr74);
  L711(family48):
    r438 = `$`(family48, <sym family>);
    goto L709(r438);
  L877():
    xxnames18 = ld xxnames;
    check L879() else D330();
  L878():
    r572 = dyn base51(<lang `[`(xxnames, seq_len(`$`(fit, rank)))>, <lang rep.int("", `-`(sum(good), `$`(fit, rank)))>);
    goto L160(r572);
  L914():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    c157 = `as.logical`(intercept2);
    if c157 then L915() else L166();
  D246():
    deopt 883 [mu29, 1.0, eps];
  D330():
    deopt 1155 [xxnames18];
  L58(i26, r202):
    any1 = ldf any in base;
    r205 = dyn any1(r202);
    check L389() else D107();
  L60():
    goto L61(i23);
  L61(i33):
    weights11 = ld weights;
    check L394() else D110();
  L132(c120, r432):
    c121 = `as.logical`(r432);
    c122 = `||`(c120, c121);
    goto L131(c122);
  L133():
    goto L134(NULL);
  L134(r436):
    goto L135();
  L136():
    goto L140();
  L140():
    fit24 = ld fit;
    check L724() else D259();
  L166():
    linkinv7 = ldf linkinv;
    check L926() else D345();
  L169(r619):
    st wtdmu = r619;
    sym57 = ldf sum;
    base57 = ldf sum in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L928() else L929();
  L381():
    mu_eta_val = ld `mu.eta.val`;
    check L383() else D104();
  L382():
    r201 = dyn base24(<lang `[`(mu.eta.val, good)>);
    goto L58(i20, r201);
  L390():
    stop7 = ldf stop;
    check L391() else D108();
  L694():
    eps1 = force? eps;
    checkMissing(eps1);
    r428 = `-`(1.0, eps1);
    r429 = `>`(mu29, r428);
    any3 = ldf any in base;
    r430 = dyn any3(r429);
    check L695() else D247();
  L697():
    mu30 = ld mu;
    check L699() else D248();
  L698():
    r431 = dyn base44(<lang `<`(mu, eps)>);
    goto L132(c115, r431);
  L703():
    warning6 = ldf warning;
    check L704() else D251();
  L712():
    dx103 = getTryDispatchBuiltinValue(dr74);
    goto L709(dx103);
  L713():
    sym45 = ldf any;
    base45 = ldf any in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L714() else L715();
  L879():
    xxnames19 = force? xxnames18;
    checkMissing(xxnames19);
    c151 = `is.object`(xxnames19);
    if c151 then L880() else L881(xxnames19);
  L903(r598, l75, r599, dx174):
    names__7 = ldf `names<-`;
    check L907() else D337();
  L904():
    dr122 = tryDispatchBuiltin.1("$", l69);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L906() else L905(r573, l69, r573, dr122);
  L905(r594, l72, r595, l73):
    r600 = `$`(l73, <sym effects>);
    goto L903(r594, l72, r595, r600);
  L915():
    sym55 = ldf sum;
    base55 = ldf sum in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L916() else L917();
  D104():
    deopt 358 [i20, mu_eta_val];
  D107():
    deopt 366 [i26, r205];
  D108():
    deopt 368 [i23];
  D110():
    deopt 373 [i33, weights11];
  D247():
    deopt 888 [r430];
  D248():
    deopt 891 [c115, mu30];
  D251():
    deopt 899 [];
  D259():
    deopt 931 [fit24];
  D337():
    deopt 1183 [r598, l75, dx174, r599];
  D345():
    deopt 1207 [];
  L137(r441):
    c127 = `as.logical`(r441);
    if c127 then L719() else L138();
  L161(dx168):
    sym53 = ldf `rep.int`;
    base53 = ldf `rep.int` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L890() else L891();
  L167(r609):
    sym56 = ldf sum;
    base56 = ldf sum in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L921() else L922();
  L170(r623):
    st nulldev = r623;
    nobs22 = ld nobs;
    check L933() else D350();
  L383():
    mu_eta_val1 = force? mu_eta_val;
    checkMissing(mu_eta_val1);
    c47 = `is.object`(mu_eta_val1);
    if c47 then L384() else L385(i20, mu_eta_val1);
  L389():
    goto L57(i26, r205);
  L391():
    r206 = dyn stop7("NAs in d(mu)/d(eta)");
    check L392() else D109();
  L394():
    weights12 = force? weights11;
    checkMissing(weights12);
    r208 = `>`(weights12, 0.0);
    mu_eta_val4 = ld `mu.eta.val`;
    check L395() else D111();
  L695():
    goto L130(r430);
  L699():
    mu31 = force? mu30;
    checkMissing(mu31);
    eps2 = ld eps;
    check L700() else D249();
  L704():
    r435 = dyn warning6[, `call.`]("glm.fit: fitted probabilities numerically 0 or 1 occurred", FALSE);
    check L705() else D252();
  L714():
    mu32 = ld mu;
    check L716() else D254();
  L715():
    r440 = dyn base45(<lang `<`(mu, eps)>);
    goto L137(r440);
  L724():
    fit25 = force? fit24;
    checkMissing(fit25);
    c128 = `is.object`(fit25);
    if c128 then L726() else L727(fit25);
  L880():
    dr116 = tryDispatchBuiltin.1("[", xxnames19);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L882() else L881(dr116);
  L881(xxnames21):
    sym52 = ldf seq_len;
    base52 = ldf seq_len in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L883() else L884();
  L906():
    dx173 = getTryDispatchBuiltinValue(dr122);
    goto L903(r573, l69, r573, dx173);
  L907():
    r601 = dyn names__7(dx174, NULL, r599);
    check L908() else D338();
  L916():
    weights23 = ld weights;
    check L918() else D340();
  L917():
    r608 = dyn base55(<lang `*`(weights, y)>);
    goto L167(r608);
  L926():
    p78 = prom<V +>{
      offset15 = ld offset;
      offset16 = force? offset15;
      checkMissing(offset16);
      return offset16;
    };
    r621 = dyn linkinv7(p78);
    check L927() else D346();
  L928():
    dev_resids5 = ldf `dev.resids`;
    check L930() else D347();
  L929():
    r622 = dyn base57(<lang dev.resids(y, wtdmu, weights)>);
    goto L170(r622);
  D109():
    deopt 370 [i23, r206];
  D111():
    deopt 376 [i33, r208, mu_eta_val4];
  D249():
    deopt 892 [c115, mu31, eps2];
  D252():
    deopt 903 [r435];
  D254():
    deopt 915 [mu32];
  D338():
    deopt 1185 [r598, l75, r601];
  D340():
    deopt 1194 [weights23];
  D346():
    deopt 1209 [r621];
  D347():
    deopt 1214 [];
  D350():
    deopt 1222 [nobs22];
  L59(i30, dx28):
    is_na = ldf `is.na` in base;
    r204 = dyn is_na(dx28);
    check L388() else D106();
  L138():
    goto L139(NULL);
  L139(r445):
    goto L140();
  L162(xxnames24, r575):
    __14 = ldf `[` in base;
    r578 = dyn __14(xxnames24, r575);
    goto L161(r578);
  L163(r580):
    c154 = ldf c in base;
    r591 = dyn c154(dx168, r580);
    check L902() else D336();
  L168(r615, r616):
    r618 = `/`(r615, r616);
    goto L169(r618);
  L384():
    dr26 = tryDispatchBuiltin.1("[", mu_eta_val1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L386() else L385(i20, dr26);
  L385(i28, mu_eta_val3):
    good2 = ld good;
    check L387() else D105();
  L392():
    goto L61(i23);
  L395():
    mu_eta_val5 = force? mu_eta_val4;
    checkMissing(mu_eta_val5);
    r209 = `!=`(mu_eta_val5, 0.0);
    r210 = `&&`(r208, r209);
    st good = r210;
    sym25 = ldf all;
    base25 = ldf all in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L396() else L397();
  L700():
    eps3 = force? eps2;
    checkMissing(eps3);
    r433 = `<`(mu31, eps3);
    any4 = ldf any in base;
    r434 = dyn any4(r433);
    check L701() else D250();
  L705():
    goto L134(r435);
  L716():
    mu33 = force? mu32;
    checkMissing(mu33);
    eps4 = ld eps;
    check L717() else D255();
  L719():
    warning7 = ldf warning;
    check L720() else D257();
  L725(dx106):
    nvars8 = ld nvars;
    check L729() else D260();
  L726():
    dr76 = tryDispatchBuiltin.1("$", fit25);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L728() else L727(dr76);
  L727(fit27):
    r447 = `$`(fit27, <sym rank>);
    goto L725(r447);
  L882():
    dx167 = getTryDispatchBuiltinValue(dr116);
    goto L161(dx167);
  L883():
    fit56 = ld fit;
    check L885() else D331();
  L884():
    r574 = dyn base52(<lang `$`(fit, rank)>);
    goto L162(xxnames21, r574);
  L890():
    sym54 = ldf sum;
    base54 = ldf sum in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L892() else L893();
  L891():
    r579 = dyn base53("", <lang `-`(sum(good), `$`(fit, rank))>);
    goto L163(r579);
  L908():
    c156 = `is.object`(l75);
    if c156 then L910() else L911(r598, l75);
  L918():
    weights24 = force? weights23;
    checkMissing(weights24);
    y25 = ld y;
    check L919() else D341();
  L921():
    weights25 = ld weights;
    check L923() else D343();
  L922():
    r614 = dyn base56(<sym weights>);
    goto L168(r609, r614);
  L927():
    goto L169(r621);
  L930():
    p79 = prom<V +>{
      y27 = ld y;
      y28 = force? y27;
      checkMissing(y28);
      return y28;
    };
    p80 = prom<V +>{
      wtdmu = ld wtdmu;
      wtdmu1 = force? wtdmu;
      checkMissing(wtdmu1);
      return wtdmu1;
    };
    p81 = prom<V +>{
      weights27 = ld weights;
      weights28 = force? weights27;
      checkMissing(weights28);
      return weights28;
    };
    r627 = dyn dev_resids5(p79, p80, p81);
    check L931() else D348();
  L933():
    nobs23 = force? nobs22;
    checkMissing(nobs23);
    sym58 = ldf sum;
    base58 = ldf sum in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L934() else L935();
  D105():
    deopt 360 [i28, mu_eta_val3, good2];
  D106():
    deopt 364 [i30, r204];
  D250():
    deopt 896 [c115, r434];
  D255():
    deopt 916 [mu33, eps4];
  D257():
    deopt 922 [];
  D260():
    deopt 933 [dx106, nvars8];
  D331():
    deopt 1158 [xxnames21, fit56];
  D336():
    deopt 1178 [r591];
  D341():
    deopt 1195 [weights24, y25];
  D343():
    deopt 1201 [r609, weights25];
  D348():
    deopt 1218 [r627];
  L62(i36, r212):
    c49 = `as.logical`(r212);
    if c49 then L400() else L63();
  L164(r582):
    fit60 = ld fit;
    check L896() else D334();
  L171(nobs26, r630):
    r633 = `-`(nobs26, r630);
    st `n.ok` = r633;
    n_ok = ld `n.ok`;
    check L938() else D353();
  L386():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L59(i20, dx27);
  L387():
    good3 = force? good2;
    __2 = ldf `[` in base;
    r203 = dyn __2(mu_eta_val3, good3);
    goto L59(i28, r203);
  L388():
    goto L58(i30, r204);
  L396():
    good4 = ld good;
    check L398() else D112();
  L397():
    r211 = dyn base25(<lang `!`(good)>);
    goto L62(i33, r211);
  L701():
    goto L132(c115, r434);
  L717():
    eps5 = force? eps4;
    checkMissing(eps5);
    r442 = `<`(mu33, eps5);
    any5 = ldf any in base;
    r443 = dyn any5(r442);
    check L718() else D256();
  L720():
    r444 = dyn warning7[, `call.`]("glm.fit: fitted rates numerically 0 occurred", FALSE);
    check L721() else D258();
  L728():
    dx105 = getTryDispatchBuiltinValue(dr76);
    goto L725(dx105);
  L729():
    nvars9 = force? nvars8;
    checkMissing(nvars9);
    r448 = `<`(dx106, nvars9);
    c129 = `as.logical`(r448);
    if c129 then L730() else L141();
  L885():
    fit57 = force? fit56;
    checkMissing(fit57);
    c152 = `is.object`(fit57);
    if c152 then L887() else L888(xxnames21, fit57);
  L892():
    good24 = ld good;
    check L894() else D332();
  L893():
    r581 = dyn base54(<sym good>);
    goto L164(r581);
  L902():
    goto L160(r591);
  L909(r605, dx176):
    st fit = dx176;
    goto L165();
  L910():
    dr124 = tryDispatchBuiltin.0("$<-", l75, r601);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L912() else L911(r598, dr124);
  L911(r603, l77):
    r606 = `$<-`(l77, <sym effects>, r601);
    goto L909(r603, r606);
  L919():
    y26 = force? y25;
    checkMissing(y26);
    r610 = `*`(weights24, y26);
    sum7 = ldf sum in base;
    r611 = dyn sum7(r610);
    check L920() else D342();
  L923():
    weights26 = force? weights25;
    checkMissing(weights26);
    sum8 = ldf sum in base;
    r617 = dyn sum8(weights26);
    check L924() else D344();
  L931():
    sum9 = ldf sum in base;
    r628 = dyn sum9(r627);
    check L932() else D349();
  L934():
    weights29 = ld weights;
    check L936() else D351();
  L935():
    r629 = dyn base58(<lang `==`(weights, 0.0)>);
    goto L171(nobs23, r629);
  D112():
    deopt 384 [i33, good4];
  D256():
    deopt 920 [r443];
  D258():
    deopt 926 [r444];
  D332():
    deopt 1168 [good24];
  D334():
    deopt 1171 [r582, fit60];
  D342():
    deopt 1199 [r611];
  D344():
    deopt 1204 [r609, r617];
  D349():
    deopt 1220 [r628];
  D351():
    deopt 1225 [nobs23, weights29];
  D353():
    deopt 1233 [n_ok];
  L63():
    eta14 = ld eta;
    check L405() else D116();
  L141():
    goto L146();
  L146():
    xnames2 = ld xnames;
    check L760() else D266();
  L398():
    good5 = force? good4;
    checkMissing(good5);
    r213 = `!`(good5);
    all = ldf all in base;
    r214 = dyn all(r213);
    check L399() else D113();
  L400():
    st conv = FALSE;
    warning = ldf warning;
    check L401() else D114();
  L718():
    goto L137(r443);
  L721():
    goto L139(r444);
  L730():
    l8 = ld coef;
    c130 = `is.object`(l8);
    if c130 then L731() else L732(NA_LGL, l8, NA_LGL, l8);
  L886(xxnames28, dx170):
    r577 = seq_len(dx170);
    goto L162(xxnames28, r577);
  L887():
    dr118 = tryDispatchBuiltin.1("$", fit57);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L889() else L888(xxnames21, dr118);
  L888(xxnames26, fit59):
    r576 = `$`(fit59, <sym rank>);
    goto L886(xxnames26, r576);
  L894():
    good25 = force? good24;
    checkMissing(good25);
    sum6 = ldf sum in base;
    r583 = dyn sum6(good25);
    check L895() else D333();
  L896():
    fit61 = force? fit60;
    checkMissing(fit61);
    c153 = `is.object`(fit61);
    if c153 then L898() else L899(r582, fit61);
  L912():
    dx175 = getTryDispatchBuiltinValue(dr124);
    goto L909(r598, dx175);
  L920():
    goto L167(r611);
  L924():
    goto L168(r609, r617);
  L932():
    goto L170(r628);
  L936():
    weights30 = force? weights29;
    checkMissing(weights30);
    r631 = `==`(weights30, 0.0);
    sum10 = ldf sum in base;
    r632 = dyn sum10(r631);
    check L937() else D352();
  L938():
    n_ok1 = force? n_ok;
    checkMissing(n_ok1);
    sym59 = ldf `as.integer`;
    base59 = ldf `as.integer` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L939() else L940();
  D113():
    deopt 388 [i33, r214];
  D114():
    deopt 393 [i36];
  D116():
    deopt 402 [i36, eta14];
  D266():
    deopt 964 [xnames2];
  D333():
    deopt 1171 [r583];
  D352():
    deopt 1230 [nobs23, r632];
  L142(r455, l14, r456, dx108):
    c132 = `is.object`(dx108);
    if c132 then L739() else L740(r455, l14, dx108);
  L172(n_ok4, r635):
    r637 = `-`(n_ok4, r635);
    st nulldf = r637;
    EMPTY4 = ld EMPTY;
    check L943() else D356();
  L399():
    goto L62(i33, r214);
  L401():
    p43 = prom<V +>{
      gettextf1 = ldf gettextf;
      p42 = prom<V +>{
        iter = ld iter;
        iter1 = force? iter;
        checkMissing(iter1);
        return iter1;
      };
      r216 = dyn gettextf1("no observations informative at iteration %d", p42);
      return r216;
    };
    r218 = dyn warning[, domain](p43, NA_LGL);
    check L402() else D115();
  L405():
    eta15 = force? eta14;
    checkMissing(eta15);
    offset7 = ld offset;
    check L406() else D117();
  L731():
    dr78 = tryDispatchBuiltin.1("[", l8);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L733() else L732(NA_LGL, l8, NA_LGL, dr78);
  L732(r451, l11, r452, l12):
    fit28 = ld fit;
    check L734() else D261();
  L760():
    xnames3 = force? xnames2;
    checkMissing(xnames3);
    c136 = `is.object`(xnames3);
    if c136 then L761() else L762(xnames3);
  L889():
    dx169 = getTryDispatchBuiltinValue(dr118);
    goto L886(xxnames21, dx169);
  L895():
    goto L164(r583);
  L897(r587, dx172):
    r589 = `-`(r587, dx172);
    rep_int6 = ldf `rep.int` in base;
    r590 = dyn rep_int6("", r589);
    check L901() else D335();
  L898():
    dr120 = tryDispatchBuiltin.1("$", fit61);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L900() else L899(r582, dr120);
  L899(r585, fit63):
    r588 = `$`(fit63, <sym rank>);
    goto L897(r585, r588);
  L937():
    goto L171(nobs23, r632);
  L939():
    intercept3 = ld intercept;
    check L941() else D354();
  L940():
    r634 = dyn base59(<sym intercept>);
    goto L172(n_ok1, r634);
  D115():
    deopt 397 [i36, r218];
  D117():
    deopt 403 [i36, eta15, offset7];
  D261():
    deopt 940 [r451, l11, r452, l12, fit28];
  D335():
    deopt 1176 [r590];
  D354():
    deopt 1236 [n_ok1, intercept3];
  D356():
    deopt 1242 [EMPTY4];
  L143(r470, l26, dx114):
    c134 = `is.object`(l26);
    if c134 then L751() else L752(r470, l26);
  L147(dx133):
    st xxnames = dx133;
    y23 = ld y;
    check L769() else D268();
  L402():
    goto L64();
  L406():
    offset8 = force? offset7;
    checkMissing(offset8);
    r220 = `-`(eta15, offset8);
    c50 = `is.object`(r220);
    if c50 then L407() else L408(i36, r220);
  L733():
    dx107 = getTryDispatchBuiltinValue(dr78);
    goto L142(NA_LGL, l8, NA_LGL, dx107);
  L734():
    fit29 = force? fit28;
    checkMissing(fit29);
    c131 = `is.object`(fit29);
    if c131 then L736() else L737(r451, l11, r452, l12, fit29);
  L739():
    dr82 = tryDispatchBuiltin.0("[<-", dx108, r456);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L741() else L740(r455, l14, dr82);
  L740(r468, l24, dx112):
    sym46 = ldf `seq.int`;
    base46 = ldf `seq.int` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L742() else L743();
  L761():
    dr90 = tryDispatchBuiltin.1("[", xnames3);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L763() else L762(dr90);
  L762(xnames5):
    fit40 = ld fit;
    check L764() else D267();
  L900():
    dx171 = getTryDispatchBuiltinValue(dr120);
    goto L897(r582, dx171);
  L901():
    goto L163(r590);
  L941():
    intercept4 = force? intercept3;
    checkMissing(intercept4);
    as_integer = ldf `as.integer` in base;
    r636 = dyn as_integer(intercept4);
    check L942() else D355();
  L943():
    EMPTY5 = force? EMPTY4;
    checkMissing(EMPTY5);
    c158 = `as.logical`(EMPTY5);
    if c158 then L944() else L173();
  D267():
    deopt 966 [xnames5, fit40];
  D268():
    deopt 971 [y23];
  D355():
    deopt 1239 [n_ok1, r636];
  L66(i45, dx30):
    y15 = ld y;
    check L411() else D119();
  L144(r476, l29, dx117, r477, r478):
    ___5 = ldf `[<-` in base;
    r490 = dyn ___5(dx117, r477, r478);
    goto L143(r476, l29, r490);
  L145(r494, dx125):
    st coef = dx125;
    goto L146();
  L173():
    fit64 = ld fit;
    check L946() else D357();
  L174(r638):
    st rank = r638;
    n_ok5 = ld `n.ok`;
    check L951() else D358();
  L407():
    dr28 = tryDispatchBuiltin.1("[", r220);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L409() else L408(i36, dr28);
  L408(i43, r222):
    good6 = ld good;
    check L410() else D118();
  L735(r463, l21, r464, l22, dx110):
    __10 = ldf `[` in base;
    r466 = dyn __10(l22, dx110);
    goto L142(r463, l21, r464, r466);
  L736():
    dr80 = tryDispatchBuiltin.1("$", fit29);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L738() else L737(r451, l11, r452, l12, dr80);
  L737(r459, l17, r460, l18, fit31):
    r465 = `$`(fit31, <sym pivot>);
    goto L735(r459, l17, r460, l18, r465);
  L741():
    dx113 = getTryDispatchBuiltinValue(dr82);
    goto L143(r455, l14, dx113);
  L742():
    fit32 = ld fit;
    check L744() else D262();
  L743():
    r475 = dyn base46(<lang `+`(`$`(fit, rank), 1.0)>, <sym nvars>);
    goto L144(r468, l24, dx112, r456, r475);
  L751():
    dr86 = tryDispatchBuiltin.0("[<-", l26, dx114);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L753() else L752(r470, dr86);
  L752(r492, l35):
    fit36 = ld fit;
    check L754() else D265();
  L763():
    dx132 = getTryDispatchBuiltinValue(dr90);
    goto L147(dx132);
  L764():
    fit41 = force? fit40;
    checkMissing(fit41);
    c137 = `is.object`(fit41);
    if c137 then L766() else L767(xnames5, fit41);
  L769():
    y24 = force? y23;
    checkMissing(y24);
    mu34 = ld mu;
    check L770() else D269();
  L942():
    goto L172(n_ok1, r636);
  L944():
    goto L174(0.0);
  D118():
    deopt 406 [i43, r222, good6];
  D119():
    deopt 408 [i45, dx30, y15];
  D262():
    deopt 947 [r468, l24, dx112, r456, fit32];
  D265():
    deopt 957 [r492, l35, dx114, fit36];
  D269():
    deopt 972 [y24, mu34];
  D357():
    deopt 1246 [fit64];
  D358():
    deopt 1250 [n_ok5];
  L409():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L66(i36, dx29);
  L410():
    good7 = force? good6;
    __3 = ldf `[` in base;
    r223 = dyn __3(r222, good7);
    goto L66(i43, r223);
  L411():
    y16 = force? y15;
    checkMissing(y16);
    mu14 = ld mu;
    check L412() else D120();
  L738():
    dx109 = getTryDispatchBuiltinValue(dr80);
    goto L735(r451, l11, r452, l12, dx109);
  L744():
    fit33 = force? fit32;
    checkMissing(fit33);
    c133 = `is.object`(fit33);
    if c133 then L746() else L747(r468, l24, dx112, r456, fit33);
  L753():
    dx124 = getTryDispatchBuiltinValue(dr86);
    goto L145(r470, dx124);
  L754():
    fit37 = force? fit36;
    checkMissing(fit37);
    c135 = `is.object`(fit37);
    if c135 then L756() else L757(r492, l35, dx114, fit37);
  L765(xnames9, dx135):
    __11 = ldf `[` in base;
    r503 = dyn __11(xnames9, dx135);
    goto L147(r503);
  L766():
    dr92 = tryDispatchBuiltin.1("$", fit41);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L768() else L767(xnames5, dr92);
  L767(xnames7, fit43):
    r502 = `$`(fit43, <sym pivot>);
    goto L765(xnames7, r502);
  L770():
    mu35 = force? mu34;
    checkMissing(mu35);
    r504 = `-`(y24, mu35);
    mu_eta3 = ldf `mu.eta`;
    check L771() else D270();
  L946():
    fit65 = force? fit64;
    checkMissing(fit65);
    c159 = `is.object`(fit65);
    if c159 then L948() else L949(fit65);
  L951():
    n_ok6 = force? n_ok5;
    checkMissing(n_ok6);
    rank = ld rank;
    check L952() else D359();
  D120():
    deopt 409 [i45, dx30, y16, mu14];
  D270():
    deopt 975 [r504];
  D359():
    deopt 1251 [n_ok6, rank];
  L412():
    mu15 = force? mu14;
    checkMissing(mu15);
    r224 = `-`(y16, mu15);
    c51 = `is.object`(r224);
    if c51 then L413() else L414(i45, dx30, r224);
  L745(r485, l33, dx122, r486, dx123):
    r488 = `+`(dx123, 1.0);
    nvars10 = ld nvars;
    check L749() else D263();
  L746():
    dr84 = tryDispatchBuiltin.1("$", fit33);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L748() else L747(r468, l24, dx112, r456, dr84);
  L747(r481, l31, dx119, r482, fit35):
    r487 = `$`(fit35, <sym rank>);
    goto L745(r481, l31, dx119, r482, r487);
  L755(r498, l39, dx130, dx131):
    ___6 = ldf `[<-` in base;
    r500 = dyn ___6(l39, dx130, dx131);
    goto L145(r498, r500);
  L756():
    dr88 = tryDispatchBuiltin.1("$", fit37);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L758() else L757(r492, l35, dx114, dr88);
  L757(r496, l37, dx127, fit39):
    r499 = `$`(fit39, <sym pivot>);
    goto L755(r496, l37, dx127, r499);
  L768():
    dx134 = getTryDispatchBuiltinValue(dr92);
    goto L765(xnames5, dx134);
  L771():
    p72 = prom<V +>{
      eta26 = ld eta;
      eta27 = force? eta26;
      checkMissing(eta27);
      return eta27;
    };
    r506 = dyn mu_eta3(p72);
    check L772() else D271();
  L947(dx178):
    goto L174(dx178);
  L948():
    dr126 = tryDispatchBuiltin.1("$", fit65);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L950() else L949(dr126);
  L949(fit67):
    r639 = `$`(fit67, <sym rank>);
    goto L947(r639);
  L952():
    rank1 = force? rank;
    checkMissing(rank1);
    r640 = `-`(n_ok6, rank1);
    st resdf = r640;
    aic = ldf aic;
    check L953() else D360();
  D263():
    deopt 952 [r485, l33, dx122, r486, nvars10];
  D271():
    deopt 977 [r504, r506];
  D360():
    deopt 1256 [];
  L67(i49, dx35, dx36):
    mu_eta_val6 = ld `mu.eta.val`;
    check L417() else D122();
  L413():
    dr30 = tryDispatchBuiltin.1("[", r224);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L415() else L414(i45, dx30, dr30);
  L414(i47, dx32, r226):
    good8 = ld good;
    check L416() else D121();
  L748():
    dx121 = getTryDispatchBuiltinValue(dr84);
    goto L745(r468, l24, dx112, r456, dx121);
  L749():
    nvars11 = force? nvars10;
    checkMissing(nvars11);
    seq_int = ldf `seq.int` in base;
    r489 = dyn seq_int(r488, nvars11);
    check L750() else D264();
  L758():
    dx129 = getTryDispatchBuiltinValue(dr88);
    goto L755(r492, l35, dx114, dx129);
  L772():
    r507 = `/`(r504, r506);
    st residuals = r507;
    as_matrix1 = ldf `as.matrix`;
    check L773() else D272();
  L950():
    dx177 = getTryDispatchBuiltinValue(dr126);
    goto L947(dx177);
  L953():
    p82 = prom<V +>{
      y29 = ld y;
      y30 = force? y29;
      checkMissing(y30);
      return y30;
    };
    p83 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p84 = prom<V +>{
      mu36 = ld mu;
      mu37 = force? mu36;
      checkMissing(mu37);
      return mu37;
    };
    p85 = prom<V +>{
      weights31 = ld weights;
      weights32 = force? weights31;
      checkMissing(weights32);
      return weights32;
    };
    p86 = prom<V +>{
      dev16 = ld dev;
      dev17 = force? dev16;
      checkMissing(dev17);
      return dev17;
    };
    r646 = dyn aic(p82, p83, p84, p85, p86);
    check L954() else D361();
  D121():
    deopt 412 [i47, dx32, r226, good8];
  D122():
    deopt 414 [i49, dx35, dx36, mu_eta_val6];
  D264():
    deopt 955 [r485, l33, dx122, r486, r489];
  D272():
    deopt 981 [];
  D361():
    deopt 1262 [r646];
  L415():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L67(i45, dx30, dx34);
  L416():
    good9 = force? good8;
    __4 = ldf `[` in base;
    r227 = dyn __4(r226, good9);
    goto L67(i47, dx32, r227);
  L417():
    mu_eta_val7 = force? mu_eta_val6;
    checkMissing(mu_eta_val7);
    c52 = `is.object`(mu_eta_val7);
    if c52 then L418() else L419(i49, dx35, dx36, mu_eta_val7);
  L750():
    goto L144(r485, l33, dx122, r486, r489);
  L773():
    p73 = prom<V +>{
      fit44 = ld fit;
      fit45 = force? fit44;
      checkMissing(fit45);
      c138 = `is.object`(fit45);
      if c138 then L1() else L2(fit45);
    L0(dx137):
      return dx137;
    L1():
      dr94 = tryDispatchBuiltin.1("$", fit45);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(fit47):
      r508 = `$`(fit47, <sym qr>);
      goto L0(r508);
    L3():
      dx136 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx136);
    };
    r510 = dyn as_matrix1(p73);
    check L774() else D273();
  L954():
    rank2 = ld rank;
    check L955() else D362();
  D273():
    deopt 983 [r510];
  D362():
    deopt 1263 [r646, 2.0, rank2];
  L68(i53, dx44, dx45, dx46):
    r229 = `/`(dx45, dx46);
    r230 = `+`(dx44, r229);
    st z = r230;
    sym26 = ldf sqrt;
    base26 = ldf sqrt in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L422() else L423();
  L418():
    dr32 = tryDispatchBuiltin.1("[", mu_eta_val7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L420() else L419(i49, dx35, dx36, dr32);
  L419(i51, dx39, dx40, mu_eta_val9):
    good10 = ld good;
    check L421() else D123();
  L774():
    l40 = ld fit;
    c139 = `is.object`(l40);
    if c139 then L776() else L777(r510, l40);
  L955():
    rank3 = force? rank2;
    checkMissing(rank3);
    r647 = `*`(2.0, rank3);
    r648 = `+`(r646, r647);
    st `aic.model` = r648;
    sym60 = ldf list;
    base60 = ldf list in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L956() else L957();
  D123():
    deopt 416 [i51, dx39, dx40, mu_eta_val9, good10];
  L69(i56, r232):
    st w = r232;
    sym27 = ldf `.Call`;
    base27 = ldf `.Call` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L440() else L441();
  L175(r650):
    popenv;
    return r650;
  L420():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L68(i49, dx35, dx36, dx43);
  L421():
    good11 = force? good10;
    __5 = ldf `[` in base;
    r228 = dyn __5(mu_eta_val9, good11);
    goto L68(i51, dx39, dx40, r228);
  L422():
    weights13 = ld weights;
    check L424() else D124();
  L423():
    r231 = dyn base26(<lang `/`(`(`(`*`(`[`(weights, good), `^`(`[`(mu.eta.val, good), 2.0))), `[`(variance(mu), good))>);
    goto L69(i53, r231);
  L775(dx139):
    st fit = dx139;
    sym47 = ldf min;
    base47 = ldf min in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L779() else L780();
  L776():
    dr96 = tryDispatchBuiltin.0("$<-", l40, r510);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L778() else L777(r510, dr96);
  L777(r512, l42):
    r515 = `$<-`(l42, <sym qr>, r510);
    goto L775(r515);
  L956():
    coef = ld coef;
    check L958() else D363();
  L957():
    r649 = dyn base60[coefficients, residuals, `fitted.values`, effects, R, rank, qr, family, `linear.predictors`, deviance, aic, `null.deviance`, iter, weights, `prior.weights`, `df.residual`, `df.null`, y, converged, boundary](<sym coef>, <sym residuals>, <sym mu>, <lang if(`!`(EMPTY), `$`(fit, effects))>, <lang if(`!`(EMPTY), Rmat)>, <sym rank>, <lang if(`!`(EMPTY), structure(`[`(fit, c("qr", "rank", "qraux", "pivot", "tol")), class="qr"))>, <sym family>, <sym eta>, <sym dev>, <sym aic.model>, <sym nulldev>, <sym iter>, <sym wt>, <sym weights>, <sym resdf>, <sym nulldf>, <sym y>, <sym conv>, <sym boundary>);
    goto L175(r649);
  D124():
    deopt 423 [i53, weights13];
  D363():
    deopt 1270 [coef];
  L73(i71, r249):
    st fit = r249;
    sym29 = ldf any;
    base29 = ldf any in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L460() else L461();
  L148(r517):
    st nr = r517;
    nr = ld nr;
    check L787() else D278();
  L424():
    weights14 = force? weights13;
    checkMissing(weights14);
    c53 = `is.object`(weights14);
    if c53 then L425() else L426(i53, weights14);
  L440():
    C_Cdqrls = ld C_Cdqrls;
    check L442() else D131();
  L441():
    r248 = dyn base27[, , , , check](<sym C_Cdqrls>, <lang `*`(`[`(x, good, , drop=FALSE), w)>, <lang `*`(z, w)>, <lang min(1.0E-7, `/`(`$`(control, epsilon), 1000.0))>, FALSE);
    goto L73(i56, r248);
  L778():
    dx138 = getTryDispatchBuiltinValue(dr96);
    goto L775(dx138);
  L779():
    sym48 = ldf sum;
    base48 = ldf sum in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L781() else L782();
  L780():
    r516 = dyn base47(<lang sum(good)>, <sym nvars>);
    goto L148(r516);
  L958():
    coef1 = force? coef;
    checkMissing(coef1);
    residuals2 = ld residuals;
    check L959() else D364();
  D131():
    deopt 446 [i56, C_Cdqrls];
  D278():
    deopt 1000 [nr];
  D364():
    deopt 1273 [residuals2];
  L70(i60, dx48):
    mu_eta_val10 = ld `mu.eta.val`;
    check L429() else D126();
  L76(i85, r260):
    c59 = `as.logical`(r260);
    if c59 then L471() else L78();
  L149(r519):
    nvars12 = ld nvars;
    check L785() else D276();
  L425():
    dr34 = tryDispatchBuiltin.1("[", weights14);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L427() else L426(i53, dr34);
  L426(i58, weights16):
    good12 = ld good;
    check L428() else D125();
  L442():
    C_Cdqrls1 = force? C_Cdqrls;
    checkMissing(C_Cdqrls1);
    x14 = ld x;
    check L443() else D132();
  L460():
    sym30 = ldf `is.finite`;
    base30 = ldf `is.finite` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L462() else L463();
  L461():
    r259 = dyn base29(<lang `!`(is.finite(`$`(fit, coefficients)))>);
    goto L76(i71, r259);
  L781():
    good20 = ld good;
    check L783() else D274();
  L782():
    r518 = dyn base48(<sym good>);
    goto L149(r518);
  L787():
    nr1 = force? nr;
    checkMissing(nr1);
    nvars14 = ld nvars;
    check L788() else D279();
  L959():
    residuals3 = force? residuals2;
    checkMissing(residuals3);
    mu38 = ld mu;
    check L960() else D365();
  D125():
    deopt 425 [i58, weights16, good12];
  D126():
    deopt 427 [i60, dx48, mu_eta_val10];
  D132():
    deopt 448 [i56, x14];
  D274():
    deopt 991 [good20];
  D276():
    deopt 995 [nvars12];
  D279():
    deopt 1001 [nr1, nvars14];
  D365():
    deopt 1276 [mu38];
  L77(i88, r262):
    r265 = `!`(r262);
    any2 = ldf any in base;
    r266 = dyn any2(r265);
    check L470() else D142();
  L78():
    nobs10 = ld nobs;
    check L476() else D145();
  L427():
    dx47 = getTryDispatchBuiltinValue(dr34);
    goto L70(i53, dx47);
  L428():
    good13 = force? good12;
    __6 = ldf `[` in base;
    r233 = dyn __6(weights16, good13);
    goto L70(i58, r233);
  L429():
    mu_eta_val11 = force? mu_eta_val10;
    checkMissing(mu_eta_val11);
    c54 = `is.object`(mu_eta_val11);
    if c54 then L430() else L431(i60, dx48, mu_eta_val11);
  L443():
    x15 = force? x14;
    checkMissing(x15);
    c56 = `is.object`(x15);
    if c56 then L444() else L445(i56, x15);
  L462():
    fit = ld fit;
    check L464() else D140();
  L463():
    r261 = dyn base30(<lang `$`(fit, coefficients)>);
    goto L77(i71, r261);
  L471():
    st conv = FALSE;
    warning1 = ldf warning;
    check L472() else D143();
  L783():
    good21 = force? good20;
    checkMissing(good21);
    sum5 = ldf sum in base;
    r520 = dyn sum5(good21);
    check L784() else D275();
  L785():
    nvars13 = force? nvars12;
    checkMissing(nvars13);
    min1 = ldf min in base;
    r521 = dyn min1(r519, nvars13);
    check L786() else D277();
  L788():
    nvars15 = force? nvars14;
    checkMissing(nvars15);
    r522 = `<`(nr1, nvars15);
    c140 = `as.logical`(r522);
    if c140 then L789() else L150();
  L960():
    mu39 = force? mu38;
    checkMissing(mu39);
    EMPTY6 = ld EMPTY;
    check L961() else D366();
  D140():
    deopt 482 [i71, fit];
  D142():
    deopt 489 [i88, r266];
  D143():
    deopt 494 [i85];
  D145():
    deopt 503 [i85, nobs10];
  D275():
    deopt 994 [r520];
  D277():
    deopt 998 [r521];
  D366():
    deopt 1279 [EMPTY6];
  L71(i64, dx53, dx54):
    r235 = `^`(dx54, 2.0);
    r236 = `*`(dx53, r235);
    variance4 = ldf variance;
    check L434() else D128();
  L74(i75, dx58):
    w = ld w;
    check L448() else D134();
  L150():
    fit52 = ld fit;
    check L808() else D287();
  L153():
    as_matrix2 = ldf `as.matrix`;
    check L818() else D290();
  L430():
    dr36 = tryDispatchBuiltin.1("[", mu_eta_val11);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L432() else L431(i60, dx48, dr36);
  L431(i62, dx50, mu_eta_val13):
    good14 = ld good;
    check L433() else D127();
  L444():
    dr40 = tryDispatchBuiltin.1("[", x15);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L446() else L445(i56, dr40);
  L445(i73, x17):
    good18 = ld good;
    check L447() else D133();
  L464():
    fit1 = force? fit;
    checkMissing(fit1);
    c58 = `is.object`(fit1);
    if c58 then L466() else L467(i71, fit1);
  L470():
    goto L76(i88, r266);
  L472():
    p46 = prom<V +>{
      gettextf2 = ldf gettextf;
      p45 = prom<V +>{
        iter2 = ld iter;
        iter3 = force? iter2;
        checkMissing(iter3);
        return iter3;
      };
      r268 = dyn gettextf2("non-finite coefficients at iteration %d", p45);
      return r268;
    };
    r270 = dyn warning1[, domain](p46, NA_LGL);
    check L473() else D144();
  L476():
    nobs11 = force? nobs10;
    checkMissing(nobs11);
    fit4 = ld fit;
    check L477() else D146();
  L784():
    goto L149(r520);
  L786():
    goto L148(r521);
  L789():
    diag = ldf diag;
    check L790() else D280();
  L961():
    EMPTY7 = force? EMPTY6;
    checkMissing(EMPTY7);
    r651 = `!`(EMPTY7);
    c160 = `as.logical`(r651);
    if c160 then L962() else L176();
  D127():
    deopt 429 [i62, dx50, mu_eta_val13, good14];
  D128():
    deopt 435 [i64, r236];
  D133():
    deopt 450 [i73, x17, good18];
  D134():
    deopt 456 [i75, dx58, w];
  D144():
    deopt 498 [i85, r270];
  D146():
    deopt 504 [i85, nobs11, fit4];
  D280():
    deopt 1005 [];
  D287():
    deopt 1030 [fit52];
  D290():
    deopt 1043 [];
  L176():
    goto L177(NULL);
  L177(dx181):
    EMPTY8 = ld EMPTY;
    check L969() else D368();
  L432():
    dx52 = getTryDispatchBuiltinValue(dr36);
    goto L71(i60, dx48, dx52);
  L433():
    good15 = force? good14;
    __7 = ldf `[` in base;
    r234 = dyn __7(mu_eta_val13, good15);
    goto L71(i62, dx50, r234);
  L434():
    p44 = prom<V +>{
      mu16 = ld mu;
      mu17 = force? mu16;
      checkMissing(mu17);
      return mu17;
    };
    r238 = dyn variance4(p44);
    check L435() else D129();
  L446():
    dx57 = getTryDispatchBuiltinValue(dr40);
    goto L74(i56, dx57);
  L447():
    good19 = force? good18;
    __9 = ldf `[` in base;
    r250 = dyn __9(x15, good19, <missing>, FALSE);
    goto L74(i73, r250);
  L448():
    w1 = force? w;
    checkMissing(w1);
    r251 = `*`(dx58, w1);
    z = ld z;
    check L449() else D135();
  L465(i92, dx62):
    is_finite = ldf `is.finite` in base;
    r264 = dyn is_finite(dx62);
    check L469() else D141();
  L466():
    dr44 = tryDispatchBuiltin.1("$", fit1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L468() else L467(i71, dr44);
  L467(i90, fit3):
    r263 = `$`(fit3, <sym coefficients>);
    goto L465(i90, r263);
  L473():
    goto L64();
  L477():
    fit5 = force? fit4;
    checkMissing(fit5);
    c60 = `is.object`(fit5);
    if c60 then L479() else L480(i85, nobs11, fit5);
  L790():
    p74 = prom<V +>{
      nvars16 = ld nvars;
      nvars17 = force? nvars16;
      checkMissing(nvars17);
      return nvars17;
    };
    r524 = dyn diag(p74);
    check L791() else D281();
  L808():
    fit53 = force? fit52;
    checkMissing(fit53);
    c144 = `is.object`(fit53);
    if c144 then L810() else L811(fit53);
  L818():
    p75 = prom<V +>{
      Rmat = ld Rmat;
      Rmat1 = force? Rmat;
      checkMissing(Rmat1);
      return Rmat1;
    };
    r537 = dyn as_matrix2(p75);
    check L819() else D291();
  L962():
    fit68 = ld fit;
    check L963() else D367();
  D129():
    deopt 437 [i64, r236, r238];
  D135():
    deopt 459 [i75, z];
  D141():
    deopt 486 [i92, r264];
  D281():
    deopt 1007 [r524];
  D291():
    deopt 1045 [r537];
  D367():
    deopt 1282 [fit68];
  D368():
    deopt 1288 [EMPTY8];
  L435():
    c55 = `is.object`(r238);
    if c55 then L436() else L437(i64, r236, r238);
  L449():
    z1 = force? z;
    checkMissing(z1);
    w2 = ld w;
    check L450() else D136();
  L468():
    dx61 = getTryDispatchBuiltinValue(dr44);
    goto L465(i71, dx61);
  L469():
    goto L77(i92, r264);
  L478(i100, nobs15, dx64):
    r273 = `<`(nobs15, dx64);
    c61 = `as.logical`(r273);
    if c61 then L482() else L80();
  L479():
    dr46 = tryDispatchBuiltin.1("$", fit5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L481() else L480(i85, nobs11, dr46);
  L480(i98, nobs13, fit7):
    r272 = `$`(fit7, <sym rank>);
    goto L478(i98, nobs13, r272);
  L791():
    st Rmat = r524;
    fit48 = ld fit;
    check L792() else D282();
  L809(dx154):
    c145 = `is.object`(dx154);
    if c145 then L813() else L814(dx154);
  L810():
    dr104 = tryDispatchBuiltin.1("$", fit53);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L812() else L811(dr104);
  L811(fit55):
    r532 = `$`(fit55, <sym qr>);
    goto L809(r532);
  L819():
    st Rmat = r537;
    l46 = ld Rmat;
    c146 = `is.object`(l46);
    if c146 then L820() else L821(0.0, l46);
  L963():
    fit69 = force? fit68;
    checkMissing(fit69);
    c161 = `is.object`(fit69);
    if c161 then L965() else L966(fit69);
  L969():
    EMPTY9 = force? EMPTY8;
    checkMissing(EMPTY9);
    r653 = `!`(EMPTY9);
    c162 = `as.logical`(r653);
    if c162 then L970() else L178();
  D136():
    deopt 460 [i75, z1, w2];
  D282():
    deopt 1009 [fit48];
  L72(i68, r244, dx56):
    r246 = `/`(r244, dx56);
    r247 = sqrt(r246);
    goto L69(i68, r247);
  L80():
    goto L81(i100);
  L81(i103):
    singular_ok1 = ld `singular.ok`;
    check L486() else D149();
  L154(dx158):
    st Rmat = dx158;
    goto L153();
  L155(dx160):
    st Rmat = dx160;
    xnames10 = ld xnames;
    check L827() else D296();
  L178():
    goto L179(NULL);
  L179(Rmat8):
    rank4 = ld rank;
    check L973() else D370();
  L436():
    dr38 = tryDispatchBuiltin.1("[", r238);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L438() else L437(i64, r236, dr38);
  L437(i66, r241, r242):
    good16 = ld good;
    check L439() else D130();
  L450():
    w3 = force? w2;
    checkMissing(w3);
    r252 = `*`(z1, w3);
    sym28 = ldf min;
    base28 = ldf min in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L451() else L452();
  L481():
    dx63 = getTryDispatchBuiltinValue(dr46);
    goto L478(i85, nobs11, dx63);
  L482():
    stop8 = ldf stop;
    check L483() else D147();
  L792():
    fit49 = force? fit48;
    checkMissing(fit49);
    c141 = `is.object`(fit49);
    if c141 then L794() else L795(fit49);
  L812():
    dx153 = getTryDispatchBuiltinValue(dr104);
    goto L809(dx153);
  L813():
    dr106 = tryDispatchBuiltin.1("[", dx154);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L815() else L814(dr106);
  L814(dx156):
    nvars22 = ld nvars;
    check L816() else D288();
  L820():
    dr108 = tryDispatchBuiltin.0("[<-", l46, 0.0);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L822() else L821(0.0, dr108);
  L821(r539, l48):
    row = ldf row;
    check L823() else D292();
  L964(dx180):
    goto L177(dx180);
  L965():
    dr128 = tryDispatchBuiltin.1("$", fit69);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L967() else L966(dr128);
  L966(fit71):
    r652 = `$`(fit71, <sym effects>);
    goto L964(r652);
  L970():
    Rmat6 = ld Rmat;
    check L971() else D369();
  D130():
    deopt 438 [i66, r241, r242, good16];
  D147():
    deopt 509 [i100];
  D149():
    deopt 516 [i103, singular_ok1];
  D288():
    deopt 1034 [dx156, 1, nvars22];
  D292():
    deopt 1051 [r539, l48, 0.0];
  D296():
    deopt 1060 [xnames10];
  D369():
    deopt 1291 [Rmat6];
  D370():
    deopt 1296 [rank4];
  L75(i78, r254):
    _Call = ldf `.Call` in base;
    r258 = dyn _Call(C_Cdqrls1, r251, r252, r254, FALSE);
    check L459() else D139();
  L438():
    dx55 = getTryDispatchBuiltinValue(dr38);
    goto L72(i64, r236, dx55);
  L439():
    good17 = force? good16;
    __8 = ldf `[` in base;
    r245 = dyn __8(r242, good17);
    goto L72(i66, r241, r245);
  L451():
    control7 = ld control;
    check L453() else D137();
  L452():
    r253 = dyn base28(1.0E-7, <lang `/`(`$`(control, epsilon), 1000.0)>);
    goto L75(i75, r253);
  L483():
    p51 = prom<V +>{
      sprintf = ldf sprintf;
      p48 = prom<V +>{
        ngettext = ldf ngettext;
        p47 = prom<V +>{
          nobs16 = ld nobs;
          nobs17 = force? nobs16;
          checkMissing(nobs17);
          return nobs17;
        };
        r275 = dyn ngettext(p47, "X matrix has rank %d, but only %d observation", "X matrix has rank %d, but only %d observations");
        return r275;
      };
      p49 = prom<V +>{
        fit8 = ld fit;
        fit9 = force? fit8;
        checkMissing(fit9);
        c62 = `is.object`(fit9);
        if c62 then L1() else L2(fit9);
      L0(dx66):
        return dx66;
      L1():
        dr48 = tryDispatchBuiltin.1("$", fit9);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L3() else L2(dr48);
      L2(fit11):
        r277 = `$`(fit11, <sym rank>);
        goto L0(r277);
      L3():
        dx65 = getTryDispatchBuiltinValue(dr48);
        goto L0(dx65);
      };
      p50 = prom<V +>{
        nobs18 = ld nobs;
        nobs19 = force? nobs18;
        checkMissing(nobs19);
        return nobs19;
      };
      r280 = dyn sprintf(p48, p49, p50);
      return r280;
    };
    r282 = dyn stop8[, domain](p51, NA_LGL);
    check L484() else D148();
  L486():
    singular_ok2 = force? singular_ok1;
    checkMissing(singular_ok2);
    r284 = `!`(singular_ok2);
    c63 = `as.logical`(r284);
    if c63 then L487() else L82(i103, c63);
  L793(dx141):
    c142 = `is.object`(dx141);
    if c142 then L797() else L798(dx141);
  L794():
    dr98 = tryDispatchBuiltin.1("$", fit49);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L796() else L795(dr98);
  L795(fit51):
    r525 = `$`(fit51, <sym qr>);
    goto L793(r525);
  L815():
    dx157 = getTryDispatchBuiltinValue(dr106);
    goto L154(dx157);
  L816():
    nvars23 = force? nvars22;
    checkMissing(nvars23);
    r533 = `:`(1, nvars23);
    nvars24 = ld nvars;
    check L817() else D289();
  L822():
    dx159 = getTryDispatchBuiltinValue(dr108);
    goto L155(dx159);
  L823():
    p76 = prom<V +>{
      Rmat2 = ld Rmat;
      Rmat3 = force? Rmat2;
      checkMissing(Rmat3);
      return Rmat3;
    };
    r543 = dyn row(p76);
    check L824() else D293();
  L827():
    xnames11 = force? xnames10;
    checkMissing(xnames11);
    l49 = ld coef;
    names__ = ldf `names<-`;
    check L828() else D297();
  L967():
    dx179 = getTryDispatchBuiltinValue(dr128);
    goto L964(dx179);
  L971():
    Rmat7 = force? Rmat6;
    checkMissing(Rmat7);
    goto L179(Rmat7);
  L973():
    rank5 = force? rank4;
    checkMissing(rank5);
    EMPTY10 = ld EMPTY;
    check L974() else D371();
  D137():
    deopt 466 [i75, control7];
  D139():
    deopt 476 [i78, r258];
  D148():
    deopt 513 [i100, r282];
  D289():
    deopt 1037 [dx156, r533, 1, nvars24];
  D293():
    deopt 1053 [r539, l48, 0.0, r543];
  D297():
    deopt 1063 [xnames11, l49, xnames11];
  D371():
    deopt 1299 [EMPTY10];
  L82(i105, c65):
    c74 = `as.logical`(c65);
    if c74 then L495() else L83();
  L151(dx145):
    l43 = ld Rmat;
    c143 = `is.object`(l43);
    if c143 then L802() else L803(dx145, l43);
  L453():
    control8 = force? control7;
    checkMissing(control8);
    c57 = `is.object`(control8);
    if c57 then L455() else L456(i75, control8);
  L459():
    goto L73(i78, r258);
  L484():
    goto L81(i100);
  L487():
    fit12 = ld fit;
    check L488() else D150();
  L796():
    dx140 = getTryDispatchBuiltinValue(dr98);
    goto L793(dx140);
  L797():
    dr100 = tryDispatchBuiltin.1("[", dx141);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L799() else L798(dr100);
  L798(dx143):
    nr2 = ld nr;
    check L800() else D283();
  L817():
    nvars25 = force? nvars24;
    checkMissing(nvars25);
    r534 = `:`(1, nvars25);
    __13 = ldf `[` in base;
    r535 = dyn __13(dx156, r533, r534);
    goto L154(r535);
  L824():
    col = ldf col;
    check L825() else D294();
  L828():
    r548 = dyn names__(l49, NULL, xnames11);
    check L829() else D298();
  L974():
    EMPTY11 = force? EMPTY10;
    checkMissing(EMPTY11);
    r654 = `!`(EMPTY11);
    c163 = `as.logical`(r654);
    if c163 then L975() else L180();
  D150():
    deopt 519 [i103, c63, fit12];
  D283():
    deopt 1013 [dx143, 1, nr2];
  D294():
    deopt 1054 [r539, l48, 0.0, r543];
  D298():
    deopt 1065 [xnames11, r548];
  L83():
    goto L84(i105);
  L84(i113):
    fit16 = ld fit;
    check L499() else D154();
  L152(dx150, dx151):
    st Rmat = dx151;
    goto L153();
  L180():
    goto L181(NULL);
  L181(r661):
    family49 = ld family;
    check L979() else D374();
  L454(i82, dx60):
    r256 = `/`(dx60, 1000.0);
    min = ldf min in base;
    r257 = dyn min(1.0E-7, r256);
    check L458() else D138();
  L455():
    dr42 = tryDispatchBuiltin.1("$", control8);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L457() else L456(i75, dr42);
  L456(i80, control10):
    r255 = `$`(control10, <sym epsilon>);
    goto L454(i80, r255);
  L488():
    fit13 = force? fit12;
    checkMissing(fit13);
    c66 = `is.object`(fit13);
    if c66 then L490() else L491(i103, c63, fit13);
  L495():
    stop9 = ldf stop;
    check L496() else D152();
  L799():
    dx144 = getTryDispatchBuiltinValue(dr100);
    goto L151(dx144);
  L800():
    nr3 = force? nr2;
    checkMissing(nr3);
    r526 = `:`(1, nr3);
    nvars18 = ld nvars;
    check L801() else D284();
  L802():
    dr102 = tryDispatchBuiltin.0("[<-", l43, dx145);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L804() else L803(dx145, dr102);
  L803(dx147, l45):
    nr4 = ld nr;
    check L805() else D285();
  L825():
    p77 = prom<V +>{
      Rmat4 = ld Rmat;
      Rmat5 = force? Rmat4;
      checkMissing(Rmat5);
      return Rmat5;
    };
    r545 = dyn col(p77);
    check L826() else D295();
  L829():
    st coef = r548;
    xxnames = ld xxnames;
    check L830() else D299();
  L975():
    structure = ldf structure;
    check L976() else D372();
  D138():
    deopt 472 [i82, r257];
  D152():
    deopt 526 [i105];
  D154():
    deopt 531 [i113, fit16];
  D284():
    deopt 1016 [dx143, r526, 1, nvars18];
  D285():
    deopt 1022 [dx147, l45, dx145, 1, nr4];
  D295():
    deopt 1056 [r539, l48, 0.0, r543, r545];
  D299():
    deopt 1067 [xxnames];
  D372():
    deopt 1303 [];
  D374():
    deopt 1311 [family49];
  L457():
    dx59 = getTryDispatchBuiltinValue(dr42);
    goto L454(i75, dx59);
  L458():
    goto L75(i82, r257);
  L489(i109, c70, dx68):
    nvars6 = ld nvars;
    check L493() else D151();
  L490():
    dr50 = tryDispatchBuiltin.1("$", fit13);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L492() else L491(i103, c63, dr50);
  L491(i107, c68, fit15):
    r285 = `$`(fit15, <sym rank>);
    goto L489(i107, c68, r285);
  L496():
    r287 = dyn stop9("singular fit encountered");
    check L497() else D153();
  L499():
    fit17 = force? fit16;
    checkMissing(fit17);
    c75 = `is.object`(fit17);
    if c75 then L501() else L502(i113, fit17);
  L801():
    nvars19 = force? nvars18;
    checkMissing(nvars19);
    r527 = `:`(1, nvars19);
    __12 = ldf `[` in base;
    r528 = dyn __12(dx143, r526, r527);
    goto L151(r528);
  L804():
    dx149 = getTryDispatchBuiltinValue(dr102);
    goto L152(dx145, dx149);
  L805():
    nr5 = force? nr4;
    checkMissing(nr5);
    r529 = `:`(1, nr5);
    nvars20 = ld nvars;
    check L806() else D286();
  L826():
    r546 = `>`(r543, r545);
    ___8 = ldf `[<-` in base;
    r547 = dyn ___8(l48, 0.0, r546);
    goto L155(r547);
  L830():
    xxnames1 = force? xxnames;
    checkMissing(xxnames1);
    l50 = ld fit;
    c147 = `is.object`(l50);
    if c147 then L832() else L833(xxnames1, l50, xxnames1, l50);
  L976():
    p87 = prom<V +>{
      fit72 = ld fit;
      fit73 = force? fit72;
      checkMissing(fit73);
      c164 = `is.object`(fit73);
      if c164 then L2() else L3(fit73);
    L0(dx183):
      return dx183;
    L2():
      dr130 = tryDispatchBuiltin.1("[", fit73);
      dc65 = getTryDispatchBuiltinDispatched(dr130);
      if dc65 then L4() else L3(dr130);
    L3(fit75):
      sym61 = ldf c;
      base61 = ldf c in base;
      guard61 = `==`.4(sym61, base61);
      if guard61 then L5() else L6();
    L1(fit78, r656):
      __15 = ldf `[` in base;
      r658 = dyn __15(fit78, r656);
      goto L0(r658);
    L4():
      dx182 = getTryDispatchBuiltinValue(dr130);
      goto L0(dx182);
    L5():
      c165 = ldf c in base;
      r657 = dyn c165("qr", "rank", "qraux", "pivot", "tol");
      goto L1(fit75, r657);
    L6():
      r655 = dyn base61("qr", "rank", "qraux", "pivot", "tol");
      goto L1(fit75, r655);
    };
    r660 = dyn structure[, class](p87, "qr");
    check L977() else D373();
  L979():
    family50 = force? family49;
    checkMissing(family50);
    eta28 = ld eta;
    check L980() else D375();
  D151():
    deopt 521 [i109, c70, dx68, nvars6];
  D153():
    deopt 528 [i105, r287];
  D286():
    deopt 1025 [dx147, l45, dx145, r529, 1, nvars20];
  D373():
    deopt 1307 [r660];
  D375():
    deopt 1314 [eta28];
  L492():
    dx67 = getTryDispatchBuiltinValue(dr50);
    goto L489(i103, c63, dx67);
  L493():
    nvars7 = force? nvars6;
    checkMissing(nvars7);
    r286 = `<`(dx68, nvars7);
    c71 = `as.logical`(r286);
    c72 = `&&`(c70, c71);
    goto L82(i109, c72);
  L497():
    goto L84(i105);
  L500(i117, dx70):
    l1 = ld start;
    c76 = `is.object`(l1);
    if c76 then L504() else L505(i117, dx70, l1);
  L501():
    dr52 = tryDispatchBuiltin.1("$", fit17);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L503() else L502(i113, dr52);
  L502(i115, fit19):
    r289 = `$`(fit19, <sym coefficients>);
    goto L500(i115, r289);
  L806():
    nvars21 = force? nvars20;
    checkMissing(nvars21);
    r530 = `:`(1, nvars21);
    ___7 = ldf `[<-` in base;
    r531 = dyn ___7(l45, dx145, r529, r530);
    goto L152(dx147, r531);
  L831(xxnames8, l56, xxnames9, dx162):
    colnames__ = ldf `colnames<-`;
    check L835() else D300();
  L832():
    dr110 = tryDispatchBuiltin.1("$", l50);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L834() else L833(xxnames1, l50, xxnames1, dr110);
  L833(xxnames4, l53, xxnames5, l54):
    r549 = `$`(l54, <sym qr>);
    goto L831(xxnames4, l53, xxnames5, r549);
  L977():
    goto L181(r660);
  L980():
    eta29 = force? eta28;
    checkMissing(eta29);
    dev18 = ld dev;
    check L981() else D376();
  D300():
    deopt 1073 [xxnames8, l56, dx162, xxnames9];
  D376():
    deopt 1317 [dev18];
  L85(i121, dx76):
    st start = dx76;
    sym31 = ldf drop;
    base31 = ldf drop in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L512() else L513();
  L503():
    dx69 = getTryDispatchBuiltinValue(dr52);
    goto L500(i113, dx69);
  L504():
    dr54 = tryDispatchBuiltin.0("[<-", l1, dx70);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L506() else L505(i117, dx70, dr54);
  L505(i119, dx72, l3):
    fit20 = ld fit;
    check L507() else D155();
  L834():
    dx161 = getTryDispatchBuiltinValue(dr110);
    goto L831(xxnames1, l50, xxnames1, dx161);
  L835():
    r550 = dyn colnames__(dx162, NULL, xxnames9);
    check L836() else D301();
  L981():
    dev19 = force? dev18;
    checkMissing(dev19);
    aic_model = ld `aic.model`;
    check L982() else D377();
  D155():
    deopt 535 [i119, dx72, l3, dx70, fit20];
  D301():
    deopt 1075 [xxnames8, l56, r550];
  D377():
    deopt 1320 [aic_model];
  L86(i128, r293):
    st eta = r293;
    linkinv4 = ldf linkinv;
    check L518() else D160();
  L506():
    dx74 = getTryDispatchBuiltinValue(dr54);
    goto L85(i117, dx74);
  L507():
    fit21 = force? fit20;
    checkMissing(fit21);
    c77 = `is.object`(fit21);
    if c77 then L509() else L510(i119, dx72, l3, dx70, fit21);
  L512():
    x18 = ld x;
    check L514() else D156();
  L513():
    r292 = dyn base31(<lang `%*%`(x, start)>);
    goto L86(i121, r292);
  L836():
    c148 = `is.object`(l56);
    if c148 then L838() else L839(xxnames8, l56);
  L982():
    aic_model1 = force? aic_model;
    checkMissing(aic_model1);
    nulldev = ld nulldev;
    check L983() else D378();
  D156():
    deopt 543 [i121, x18];
  D160():
    deopt 553 [i128];
  D378():
    deopt 1323 [nulldev];
  L508(i125, dx84, l7, dx85, dx86):
    ___1 = ldf `[<-` in base;
    r291 = dyn ___1(l7, dx85, dx86);
    goto L85(i125, r291);
  L509():
    dr56 = tryDispatchBuiltin.1("$", fit21);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L511() else L510(i119, dx72, l3, dx70, dr56);
  L510(i123, dx79, l5, dx80, fit23):
    r290 = `$`(fit23, <sym pivot>);
    goto L508(i123, dx79, l5, dx80, r290);
  L514():
    x19 = force? x18;
    checkMissing(x19);
    start11 = ld start;
    check L515() else D157();
  L518():
    p52 = prom<V +>{
      eta16 = ld eta;
      eta17 = force? eta16;
      checkMissing(eta17);
      offset9 = ld offset;
      offset10 = force? offset9;
      checkMissing(offset10);
      r296 = `+`(eta17, offset10);
      st eta = r296;
      invisible.0();
      return r296;
    };
    r298 = dyn linkinv4(p52);
    check L519() else D161();
  L837(dx164):
    st fit = dx164;
    sym49 = ldf list;
    base49 = ldf list in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L841() else L842();
  L838():
    dr112 = tryDispatchBuiltin.0("$<-", l56, r550);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L840() else L839(xxnames8, dr112);
  L839(xxnames11, l58):
    r551 = `$<-`(l58, <sym qr>, r550);
    goto L837(r551);
  L983():
    nulldev1 = force? nulldev;
    checkMissing(nulldev1);
    iter6 = ld iter;
    check L984() else D379();
  D157():
    deopt 545 [i121, start11];
  D161():
    deopt 555 [i128, r298];
  D379():
    deopt 1326 [iter6];
  L156(r553):
    l59 = ld Rmat;
    dimnames__ = ldf `dimnames<-`;
    check L846() else D305();
  L511():
    dx83 = getTryDispatchBuiltinValue(dr56);
    goto L508(i119, dx72, l3, dx70, dx83);
  L515():
    start12 = force? start11;
    checkMissing(start12);
    ___2 = ldf `%*%` in base;
    r294 = dyn ___2(x19, start12);
    check L516() else D158();
  L519():
    st mu = r298;
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L520() else L521();
  L840():
    dx163 = getTryDispatchBuiltinValue(dr112);
    goto L837(dx163);
  L841():
    xxnames14 = ld xxnames;
    check L843() else D302();
  L842():
    r552 = dyn base49(<sym xxnames>, <sym xxnames>);
    goto L156(r552);
  L984():
    iter7 = force? iter6;
    checkMissing(iter7);
    wt = ld wt;
    check L985() else D380();
  D158():
    deopt 548 [i121, r294];
  D302():
    deopt 1080 [xxnames14];
  D305():
    deopt 1087 [r553, l59, r553];
  D380():
    deopt 1329 [wt];
  L87(i131, r300):
    st dev = r300;
    control11 = ld control;
    check L525() else D165();
  L516():
    drop = ldf drop in base;
    r295 = dyn drop(r294);
    check L517() else D159();
  L520():
    dev_resids2 = ldf `dev.resids`;
    check L522() else D162();
  L521():
    r299 = dyn base32(<lang dev.resids(y, mu, weights)>);
    goto L87(i128, r299);
  L843():
    xxnames15 = force? xxnames14;
    checkMissing(xxnames15);
    xxnames16 = ld xxnames;
    check L844() else D303();
  L846():
    r555 = dyn dimnames__(l59, NULL, r553);
    check L847() else D306();
  L985():
    wt1 = force? wt;
    checkMissing(wt1);
    weights33 = ld weights;
    check L986() else D381();
  D159():
    deopt 550 [i121, r295];
  D162():
    deopt 560 [i128];
  D165():
    deopt 568 [i131, control11];
  D303():
    deopt 1082 [xxnames16];
  D306():
    deopt 1089 [r553, r555];
  D381():
    deopt 1332 [weights33];
  L517():
    goto L86(i121, r295);
  L522():
    p53 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    p54 = prom<V +>{
      mu18 = ld mu;
      mu19 = force? mu18;
      checkMissing(mu19);
      return mu19;
    };
    p55 = prom<V +>{
      weights17 = ld weights;
      weights18 = force? weights17;
      checkMissing(weights18);
      return weights18;
    };
    r304 = dyn dev_resids2(p53, p54, p55);
    check L523() else D163();
  L525():
    control12 = force? control11;
    checkMissing(control12);
    c78 = `is.object`(control12);
    if c78 then L527() else L528(i131, control12);
  L844():
    xxnames17 = force? xxnames16;
    checkMissing(xxnames17);
    list1 = ldf list in base;
    r554 = dyn list1(xxnames15, xxnames17);
    check L845() else D304();
  L847():
    st Rmat = r555;
    goto L44();
  L986():
    weights34 = force? weights33;
    checkMissing(weights34);
    resdf = ld resdf;
    check L987() else D382();
  D163():
    deopt 564 [i128, r304];
  D304():
    deopt 1085 [r554];
  D382():
    deopt 1335 [resdf];
  L523():
    sum2 = ldf sum in base;
    r305 = dyn sum2(r304);
    check L524() else D164();
  L526(i135, dx88):
    c79 = `as.logical`(dx88);
    if c79 then L530() else L88();
  L527():
    dr58 = tryDispatchBuiltin.1("$", control12);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L529() else L528(i131, dr58);
  L528(i133, control14):
    r306 = `$`(control14, <sym trace>);
    goto L526(i133, r306);
  L845():
    goto L156(r554);
  L987():
    resdf1 = force? resdf;
    checkMissing(resdf1);
    nulldf = ld nulldf;
    check L988() else D383();
  D164():
    deopt 566 [i128, r305];
  D383():
    deopt 1338 [nulldf];
  L88():
    goto L89(i135);
  L89(i138):
    st boundary = FALSE;
    sym33 = ldf `is.finite`;
    base33 = ldf `is.finite` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L534() else L535();
  L524():
    goto L87(i128, r305);
  L529():
    dx87 = getTryDispatchBuiltinValue(dr58);
    goto L526(i131, dx87);
  L530():
    cat = ldf cat;
    check L531() else D166();
  L988():
    nulldf1 = force? nulldf;
    checkMissing(nulldf1);
    y31 = ld y;
    check L989() else D384();
  D166():
    deopt 572 [i135];
  D384():
    deopt 1341 [y31];
  L90(i141, r312):
    r314 = `!`(r312);
    c80 = `as.logical`(r314);
    if c80 then L538() else L91();
  L531():
    p56 = prom<V +>{
      dev = ld dev;
      dev1 = force? dev;
      checkMissing(dev1);
      return dev1;
    };
    p57 = prom<V +>{
      iter4 = ld iter;
      iter5 = force? iter4;
      checkMissing(iter5);
      return iter5;
    };
    r309 = dyn cat[, , , , , sep]("Deviance = ", p56, " Iterations - ", p57, "\n", "");
    check L532() else D167();
  L534():
    dev2 = ld dev;
    check L536() else D168();
  L535():
    r311 = dyn base33(<sym dev>);
    goto L90(i138, r311);
  L989():
    y32 = force? y31;
    checkMissing(y32);
    conv2 = ld conv;
    check L990() else D385();
  D167():
    deopt 580 [i135, r309];
  D168():
    deopt 588 [i138, dev2];
  D385():
    deopt 1344 [conv2];
  L91():
    goto L104(i141);
  L104(i176):
    valideta2 = ldf valideta;
    check L590() else D196();
  L532():
    goto L89(i135);
  L536():
    dev3 = force? dev2;
    checkMissing(dev3);
    is_finite1 = ldf `is.finite` in base;
    r313 = dyn is_finite1(dev3);
    check L537() else D169();
  L538():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L539() else L540();
  L990():
    conv3 = force? conv2;
    checkMissing(conv3);
    boundary2 = ld boundary;
    check L991() else D386();
  D169():
    deopt 591 [i138, r313];
  D196():
    deopt 696 [i176];
  D386():
    deopt 1347 [boundary2];
  L92(i146, r316):
    c82 = `as.logical`(r316);
    if c82 then L542() else L93();
  L537():
    goto L90(i138, r313);
  L539():
    coefold = ld coefold;
    check L541() else D170();
  L540():
    r315 = dyn base34(<sym coefold>);
    goto L92(i141, r315);
  L590():
    p63 = prom<V +>{
      eta20 = ld eta;
      eta21 = force? eta20;
      checkMissing(eta21);
      return eta21;
    };
    r351 = dyn valideta2(p63);
    check L591() else D197();
  L991():
    boundary3 = force? boundary2;
    checkMissing(boundary3);
    list2 = ldf list in base;
    r662 = dyn list2(coef1, residuals3, mu39, dx181, Rmat8, rank5, r661, family50, eta29, dev19, aic_model1, nulldev1, iter7, wt1, weights34, resdf1, nulldf1, y32, conv3, boundary3);
    check L992() else D387();
  D170():
    deopt 594 [i141, coefold];
  D197():
    deopt 698 [i176, r351];
  D387():
    deopt 1351 [r662];
  L93():
    goto L94(i146);
  L94(i149):
    warning2 = ldf warning;
    check L546() else D173();
  L541():
    coefold1 = force? coefold;
    checkMissing(coefold1);
    c81 = `==`(coefold1, NULL);
    goto L92(i141, c81);
  L542():
    stop10 = ldf stop;
    check L543() else D171();
  L591():
    c88 = `as.logical`(r351);
    if c88 then L592() else L105(i176, c88);
  L992():
    goto L175(r662);
  D171():
    deopt 598 [i146];
  D173():
    deopt 606 [i149];
  L105(i178, c90):
    r354 = `!`(c90);
    c94 = `as.logical`(r354);
    if c94 then L596() else L106();
  L543():
    r317 = dyn stop10[, `call.`]("no valid set of coefficients has been found: please supply starting values", FALSE);
    check L544() else D172();
  L546():
    r319 = dyn warning2[, `call.`]("step size truncated due to divergence", FALSE);
    check L547() else D174();
  L592():
    validmu2 = ldf validmu;
    check L593() else D198();
  D172():
    deopt 602 [i146, r317];
  D174():
    deopt 610 [i149, r319];
  D198():
    deopt 700 [i176, c88];
  L106():
    goto L119(i178);
  L119(i214):
    sym41 = ldf abs;
    base41 = ldf abs in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L650() else L651();
  L544():
    goto L94(i146);
  L547():
    st ii = 1.0;
    goto L101(i149);
  L593():
    p64 = prom<V +>{
      mu22 = ld mu;
      mu23 = force? mu22;
      checkMissing(mu23);
      return mu23;
    };
    r353 = dyn validmu2(p64);
    check L594() else D199();
  L596():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L597() else L598();
  D199():
    deopt 702 [i176, c88, r353];
  L101(i150):
    sym35 = ldf `is.finite`;
    base35 = ldf `is.finite` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L548() else L549();
  L107(i184, r356):
    c96 = `as.logical`(r356);
    if c96 then L600() else L108();
  L120(i217, r392):
    sym42 = ldf abs;
    base42 = ldf abs in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L655() else L656();
  L594():
    c91 = `as.logical`(r353);
    c92 = `&&`(c88, c91);
    goto L105(i176, c92);
  L597():
    coefold4 = ld coefold;
    check L599() else D200();
  L598():
    r355 = dyn base38(<sym coefold>);
    goto L107(i178, r355);
  L650():
    dev10 = ld dev;
    check L652() else D228();
  L651():
    r391 = dyn base41(<lang `-`(dev, devold)>);
    goto L120(i214, r391);
  D200():
    deopt 706 [i178, coefold4];
  D228():
    deopt 812 [i214, dev10];
  L95(i153, r321):
    r323 = `!`(r321);
    c83 = `as.logical`(r323);
    if c83 then L552() else L96();
  L108():
    goto L109(i184);
  L109(i187):
    warning3 = ldf warning;
    check L604() else D203();
  L121(i220, r400, r401, r402):
    r404 = `+`(r401, r402);
    r405 = `/`(r400, r404);
    control31 = ld control;
    check L659() else D233();
  L548():
    dev4 = ld dev;
    check L550() else D175();
  L549():
    r320 = dyn base35(<sym dev>);
    goto L95(i150, r320);
  L599():
    coefold5 = force? coefold4;
    checkMissing(coefold5);
    c95 = `==`(coefold5, NULL);
    goto L107(i178, c95);
  L600():
    stop12 = ldf stop;
    check L601() else D201();
  L652():
    dev11 = force? dev10;
    checkMissing(dev11);
    devold = ld devold;
    check L653() else D229();
  L655():
    dev12 = ld dev;
    check L657() else D231();
  L656():
    r399 = dyn base42(<sym dev>);
    goto L121(i217, r392, 0.1, r399);
  D175():
    deopt 616 [i150, dev4];
  D201():
    deopt 710 [i184];
  D203():
    deopt 718 [i187];
  D229():
    deopt 813 [i214, dev11, devold];
  D231():
    deopt 820 [i217, r392, 0.1, dev12];
  D233():
    deopt 825 [i220, r405, control31];
  L96():
    st boundary = TRUE;
    control19 = ld control;
    check L580() else D193();
  L550():
    dev5 = force? dev4;
    checkMissing(dev5);
    is_finite2 = ldf `is.finite` in base;
    r322 = dyn is_finite2(dev5);
    check L551() else D176();
  L552():
    ii = ld ii;
    check L553() else D177();
  L601():
    r357 = dyn stop12[, `call.`]("no valid set of coefficients has been found: please supply starting values", FALSE);
    check L602() else D202();
  L604():
    r359 = dyn warning3[, `call.`]("step size truncated: out of bounds", FALSE);
    check L605() else D204();
  L653():
    devold1 = force? devold;
    checkMissing(devold1);
    r393 = `-`(dev11, devold1);
    abs = ldf abs in base;
    r394 = dyn abs(r393);
    check L654() else D230();
  L657():
    dev13 = force? dev12;
    checkMissing(dev13);
    abs1 = ldf abs in base;
    r403 = dyn abs1(dev13);
    check L658() else D232();
  L659():
    control32 = force? control31;
    checkMissing(control32);
    c108 = `is.object`(control32);
    if c108 then L661() else L662(i220, r405, control32);
  D176():
    deopt 619 [i150, r322];
  D177():
    deopt 621 [i153, ii];
  D193():
    deopt 680 [i153, control19];
  D202():
    deopt 714 [i184, r357];
  D204():
    deopt 722 [i187, r359];
  D230():
    deopt 817 [i214, r394];
  D232():
    deopt 823 [i217, r392, 0.1, r403];
  L551():
    goto L95(i150, r322);
  L553():
    ii1 = force? ii;
    checkMissing(ii1);
    control15 = ld control;
    check L554() else D178();
  L580():
    control20 = force? control19;
    checkMissing(control20);
    c86 = `is.object`(control20);
    if c86 then L582() else L583(i153, control20);
  L602():
    goto L109(i184);
  L605():
    st ii = 1.0;
    goto L115(i187);
  L654():
    goto L120(i214, r394);
  L658():
    goto L121(i217, r392, 0.1, r403);
  L660(i224, r409, dx98):
    r411 = `<`(r409, dx98);
    c109 = `as.logical`(r411);
    if c109 then L664() else L122();
  L661():
    dr68 = tryDispatchBuiltin.1("$", control32);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L663() else L662(i220, r405, dr68);
  L662(i222, r407, control34):
    r410 = `$`(control34, <sym epsilon>);
    goto L660(i222, r407, r410);
  D178():
    deopt 622 [i153, ii1, control15];
  L115(i188):
    valideta3 = ldf valideta;
    check L606() else D205();
  L122():
    dev14 = ld dev;
    check L668() else D235();
  L554():
    control16 = force? control15;
    checkMissing(control16);
    c84 = `is.object`(control16);
    if c84 then L556() else L557(i153, ii1, control16);
  L581(i172, dx92):
    c87 = `as.logical`(dx92);
    if c87 then L585() else L102();
  L582():
    dr62 = tryDispatchBuiltin.1("$", control20);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L584() else L583(i153, dr62);
  L583(i170, control22):
    r345 = `$`(control22, <sym trace>);
    goto L581(i170, r345);
  L663():
    dx97 = getTryDispatchBuiltinValue(dr68);
    goto L660(i220, r405, dx97);
  L664():
    st conv = TRUE;
    start21 = ld start;
    check L665() else D234();
  D205():
    deopt 727 [i188];
  D234():
    deopt 832 [i224, start21];
  D235():
    deopt 837 [i224, dev14];
  L102():
    goto L103(i172, NULL);
  L103(i175, r348):
    goto L104(i175);
  L555(i159, ii5, dx90):
    r325 = `>`(ii5, dx90);
    c85 = `as.logical`(r325);
    if c85 then L559() else L97();
  L556():
    dr60 = tryDispatchBuiltin.1("$", control16);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L558() else L557(i153, ii1, dr60);
  L557(i157, ii3, control18):
    r324 = `$`(control18, <sym maxit>);
    goto L555(i157, ii3, r324);
  L584():
    dx91 = getTryDispatchBuiltinValue(dr62);
    goto L581(i153, dx91);
  L585():
    cat1 = ldf cat;
    check L586() else D194();
  L606():
    p65 = prom<V +>{
      eta22 = ld eta;
      eta23 = force? eta22;
      checkMissing(eta23);
      return eta23;
    };
    r361 = dyn valideta3(p65);
    check L607() else D206();
  L665():
    start22 = force? start21;
    checkMissing(start22);
    st coef = start22;
    goto L64();
  L668():
    dev15 = force? dev14;
    checkMissing(dev15);
    st devold = dev15;
    start23 = ld start;
    check L669() else D236();
  D194():
    deopt 684 [i172];
  D206():
    deopt 729 [i188, r361];
  D236():
    deopt 840 [i224, start23];
  L97():
    goto L98(i159);
  L98(i162):
    ii6 = ld ii;
    check L563() else D181();
  L558():
    dx89 = getTryDispatchBuiltinValue(dr60);
    goto L555(i153, ii1, dx89);
  L559():
    stop11 = ldf stop;
    check L560() else D179();
  L586():
    p62 = prom<V +>{
      dev6 = ld dev;
      dev7 = force? dev6;
      checkMissing(dev7);
      return dev7;
    };
    r347 = dyn cat1[, , , sep]("Step halved: new deviance = ", p62, "\n", "");
    check L587() else D195();
  L607():
    c97 = `as.logical`(r361);
    if c97 then L608() else L110(i188, c97);
  L669():
    start24 = force? start23;
    checkMissing(start24);
    st coefold = start24;
    st coef = start24;
    goto L49(i224);
  D179():
    deopt 627 [i159];
  D181():
    deopt 634 [i162, ii6];
  D195():
    deopt 690 [i172, r347];
  L110(i190, c99):
    r364 = `!`(c99);
    c103 = `as.logical`(r364);
    if c103 then L612() else L111();
  L560():
    r326 = dyn stop11[, `call.`]("inner loop 1; cannot correct step size", FALSE);
    check L561() else D180();
  L563():
    ii7 = force? ii6;
    checkMissing(ii7);
    r328 = `+`(ii7, 1.0);
    st ii = r328;
    start13 = ld start;
    check L564() else D182();
  L587():
    goto L103(i172, r347);
  L608():
    validmu3 = ldf validmu;
    check L609() else D207();
  D180():
    deopt 631 [i159, r326];
  D182():
    deopt 639 [i162, start13];
  D207():
    deopt 731 [i188, c97];
  L111():
    st boundary = TRUE;
    sym40 = ldf sum;
    base40 = ldf sum in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L635() else L636();
  L561():
    goto L98(i159);
  L564():
    start14 = force? start13;
    checkMissing(start14);
    coefold2 = ld coefold;
    check L565() else D183();
  L609():
    p66 = prom<V +>{
      mu24 = ld mu;
      mu25 = force? mu24;
      checkMissing(mu25);
      return mu25;
    };
    r363 = dyn validmu3(p66);
    check L610() else D208();
  L612():
    ii8 = ld ii;
    check L613() else D209();
  D183():
    deopt 640 [i162, start14, coefold2];
  D208():
    deopt 733 [i188, c97, r363];
  D209():
    deopt 736 [i190, ii8];
  L116(i206, r380):
    st dev = r380;
    control27 = ld control;
    check L640() else D225();
  L565():
    coefold3 = force? coefold2;
    checkMissing(coefold3);
    r329 = `+`(start14, coefold3);
    r330 = `/`(r329, 2.0);
    st start = r330;
    sym36 = ldf drop;
    base36 = ldf drop in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L566() else L567();
  L610():
    c100 = `as.logical`(r363);
    c101 = `&&`(c97, c100);
    goto L110(i188, c101);
  L613():
    ii9 = force? ii8;
    checkMissing(ii9);
    control23 = ld control;
    check L614() else D210();
  L635():
    dev_resids4 = ldf `dev.resids`;
    check L637() else D222();
  L636():
    r379 = dyn base40(<lang dev.resids(y, mu, weights)>);
    goto L116(i190, r379);
  D210():
    deopt 737 [i190, ii9, control23];
  D222():
    deopt 787 [i190];
  D225():
    deopt 795 [i206, control27];
  L99(i165, r332):
    st eta = r332;
    linkinv5 = ldf linkinv;
    check L572() else D188();
  L566():
    x20 = ld x;
    check L568() else D184();
  L567():
    r331 = dyn base36(<lang `%*%`(x, start)>);
    goto L99(i162, r331);
  L614():
    control24 = force? control23;
    checkMissing(control24);
    c104 = `is.object`(control24);
    if c104 then L616() else L617(i190, ii9, control24);
  L637():
    p68 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    p69 = prom<V +>{
      mu26 = ld mu;
      mu27 = force? mu26;
      checkMissing(mu27);
      return mu27;
    };
    p70 = prom<V +>{
      weights21 = ld weights;
      weights22 = force? weights21;
      checkMissing(weights22);
      return weights22;
    };
    r384 = dyn dev_resids4(p68, p69, p70);
    check L638() else D223();
  L640():
    control28 = force? control27;
    checkMissing(control28);
    c106 = `is.object`(control28);
    if c106 then L642() else L643(i206, control28);
  D184():
    deopt 649 [i162, x20];
  D188():
    deopt 659 [i165];
  D223():
    deopt 791 [i190, r384];
  L568():
    x21 = force? x20;
    checkMissing(x21);
    start15 = ld start;
    check L569() else D185();
  L572():
    p58 = prom<V +>{
      eta18 = ld eta;
      eta19 = force? eta18;
      checkMissing(eta19);
      offset11 = ld offset;
      offset12 = force? offset11;
      checkMissing(offset12);
      r335 = `+`(eta19, offset12);
      st eta = r335;
      invisible.0();
      return r335;
    };
    r337 = dyn linkinv5(p58);
    check L573() else D189();
  L615(i197, ii13, dx94):
    r366 = `>`(ii13, dx94);
    c105 = `as.logical`(r366);
    if c105 then L619() else L112();
  L616():
    dr64 = tryDispatchBuiltin.1("$", control24);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L618() else L617(i190, ii9, dr64);
  L617(i195, ii11, control26):
    r365 = `$`(control26, <sym maxit>);
    goto L615(i195, ii11, r365);
  L638():
    sum4 = ldf sum in base;
    r385 = dyn sum4(r384);
    check L639() else D224();
  L641(i210, dx96):
    c107 = `as.logical`(dx96);
    if c107 then L645() else L117();
  L642():
    dr66 = tryDispatchBuiltin.1("$", control28);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L644() else L643(i206, dr66);
  L643(i208, control30):
    r386 = `$`(control30, <sym trace>);
    goto L641(i208, r386);
  D185():
    deopt 651 [i162, start15];
  D189():
    deopt 661 [i165, r337];
  D224():
    deopt 793 [i190, r385];
  L112():
    goto L113(i197);
  L113(i200):
    ii14 = ld ii;
    check L623() else D213();
  L117():
    goto L118(i210, NULL);
  L118(i213, r389):
    goto L119(i213);
  L569():
    start16 = force? start15;
    checkMissing(start16);
    ___3 = ldf `%*%` in base;
    r333 = dyn ___3(x21, start16);
    check L570() else D186();
  L573():
    st mu = r337;
    sym37 = ldf sum;
    base37 = ldf sum in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L574() else L575();
  L618():
    dx93 = getTryDispatchBuiltinValue(dr64);
    goto L615(i190, ii9, dx93);
  L619():
    stop13 = ldf stop;
    check L620() else D211();
  L639():
    goto L116(i190, r385);
  L644():
    dx95 = getTryDispatchBuiltinValue(dr66);
    goto L641(i206, dx95);
  L645():
    cat2 = ldf cat;
    check L646() else D226();
  D186():
    deopt 654 [i162, r333];
  D211():
    deopt 742 [i197];
  D213():
    deopt 749 [i200, ii14];
  D226():
    deopt 799 [i210];
  L100(i168, r339):
    st dev = r339;
    goto L101(i168);
  L570():
    drop1 = ldf drop in base;
    r334 = dyn drop1(r333);
    check L571() else D187();
  L574():
    dev_resids3 = ldf `dev.resids`;
    check L576() else D190();
  L575():
    r338 = dyn base37(<lang dev.resids(y, mu, weights)>);
    goto L100(i165, r338);
  L620():
    r367 = dyn stop13[, `call.`]("inner loop 2; cannot correct step size", FALSE);
    check L621() else D212();
  L623():
    ii15 = force? ii14;
    checkMissing(ii15);
    r369 = `+`(ii15, 1.0);
    st ii = r369;
    start17 = ld start;
    check L624() else D214();
  L646():
    p71 = prom<V +>{
      dev8 = ld dev;
      dev9 = force? dev8;
      checkMissing(dev9);
      return dev9;
    };
    r388 = dyn cat2[, , , sep]("Step halved: new deviance = ", p71, "\n", "");
    check L647() else D227();
  D187():
    deopt 656 [i162, r334];
  D190():
    deopt 666 [i165];
  D212():
    deopt 746 [i197, r367];
  D214():
    deopt 754 [i200, start17];
  D227():
    deopt 805 [i210, r388];
  L571():
    goto L99(i162, r334);
  L576():
    p59 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    p60 = prom<V +>{
      mu20 = ld mu;
      mu21 = force? mu20;
      checkMissing(mu21);
      return mu21;
    };
    p61 = prom<V +>{
      weights19 = ld weights;
      weights20 = force? weights19;
      checkMissing(weights20);
      return weights20;
    };
    r343 = dyn dev_resids3(p59, p60, p61);
    check L577() else D191();
  L621():
    goto L113(i197);
  L624():
    start18 = force? start17;
    checkMissing(start18);
    coefold6 = ld coefold;
    check L625() else D215();
  L647():
    goto L118(i210, r388);
  D191():
    deopt 670 [i165, r343];
  D215():
    deopt 755 [i200, start18, coefold6];
  L577():
    sum3 = ldf sum in base;
    r344 = dyn sum3(r343);
    check L578() else D192();
  L625():
    coefold7 = force? coefold6;
    checkMissing(coefold7);
    r370 = `+`(start18, coefold7);
    r371 = `/`(r370, 2.0);
    st start = r371;
    sym39 = ldf drop;
    base39 = ldf drop in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L626() else L627();
  D192():
    deopt 672 [i165, r344];
  L114(i203, r373):
    st eta = r373;
    linkinv6 = ldf linkinv;
    check L632() else D220();
  L578():
    goto L100(i165, r344);
  L626():
    x22 = ld x;
    check L628() else D216();
  L627():
    r372 = dyn base39(<lang `%*%`(x, start)>);
    goto L114(i200, r372);
  D216():
    deopt 764 [i200, x22];
  D220():
    deopt 774 [i203];
  L628():
    x23 = force? x22;
    checkMissing(x23);
    start19 = ld start;
    check L629() else D217();
  L632():
    p67 = prom<V +>{
      eta24 = ld eta;
      eta25 = force? eta24;
      checkMissing(eta25);
      offset13 = ld offset;
      offset14 = force? offset13;
      checkMissing(offset14);
      r376 = `+`(eta25, offset14);
      st eta = r376;
      invisible.0();
      return r376;
    };
    r378 = dyn linkinv6(p67);
    check L633() else D221();
  D217():
    deopt 766 [i200, start19];
  D221():
    deopt 776 [i203, r378];
  L629():
    start20 = force? start19;
    checkMissing(start20);
    ___4 = ldf `%*%` in base;
    r374 = dyn ___4(x23, start20);
    check L630() else D218();
  L633():
    st mu = r378;
    goto L115(i203);
  D218():
    deopt 769 [i200, r374];
  L630():
    drop2 = ldf drop in base;
    r375 = dyn drop2(r374);
    check L631() else D219();
  D219():
    deopt 771 [i200, r375];
  L631():
    goto L114(i200, r375);
  }
}
fun inner1704214286(eta) {
  (reg eta:*) -+> V { var eta:* |
    mkenv;
    st eta = eta;
    popenv;
    return TRUE;
  }
}
fun inner987613256(mu) {
  (reg mu:*) -+> V { var mu:* |
    mkenv;
    st mu = mu;
    popenv;
    return TRUE;
  }
}