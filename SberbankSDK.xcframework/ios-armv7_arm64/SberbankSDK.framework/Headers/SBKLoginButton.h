//
//  SBKLoginButton.h
//  SberbankSDK
//
//  Created by Sberbank on 16.12.2019.
//  Copyright © 2019 Sberbank. All rights reserved.
//

@import UIKit;


/**
 Стиль кнопки

 - SBKLoginButtonGreen: Зеленая
 - SBKLoginButtonWhite: Белая
 */
typedef NS_ENUM(NSUInteger, SBKLoginButtonStyle)
{
	SBKLoginButtonGreen = 0,
	SBKLoginButtonWhite = 1
};

/**
Стиль скругления углов кнопки

- SBKCornerRadiusNo: отсутствует
- SBKCornerRadiusNormal: стандартное
- SBKCornerRadiusMax: радиус ранвый половине высоты кнопки
*/
typedef NS_ENUM(NSUInteger, SBKCornerRadiusStyle)
{
	SBKCornerRadiusNo = 0,
	SBKCornerRadiusNormal = 1,
	SBKCornerRadiusMax = 2
};

/**
Текст кнопки
 
- SBKLoginButtonTextShort: "Сбер ID"
- SBKLoginButtonTextGeneral: "Войти по Сбер ID"
- SBKLoginButtonTextFilling: "Заполнить со Сбер ID"
- SBKLoginButtonTextContinue: "Продолжить со Сбер ID"
*/
typedef NS_ENUM(NSUInteger, SBKLoginButtonTextType) {
    SBKLoginButtonTextShort = 0,
    SBKLoginButtonTextGeneral = 1,
    SBKLoginButtonTextFilling = 2,
    SBKLoginButtonTextContinue = 3
};

NS_ASSUME_NONNULL_BEGIN


/**
 Кнопка логина через Сбер ID
 */
@interface SBKLoginButton : UIButton

/**
 Инициализатор кнопки

 @param style стиль кнопки
 @param textType тип текста кнопки
 @param desiredHeight желаемая высота кнопки
 @param desiredWidth желаемая ширина кнопки
 @return UIButton с выставленными по гайду параметрами цветов и размеров
 */
- (instancetype)initWithType:(SBKLoginButtonStyle)style
					textType:(SBKLoginButtonTextType)textType
			   desiredHeight:(CGFloat)desiredHeight
				desiredWidth:(CGFloat)desiredWidth;

/**
 Устанавливает стиль обводки
 @param color цвет
 */
- (void)setBorderColor:(nonnull UIColor *)color;

/**
Инициализатор кнопки

@param style стиль кнопки
@return UIButton с выставленными по гайду параметрами цветов
*/
- (instancetype)initWithType:(SBKLoginButtonStyle)style;

/**
 Устанавливает степень скругления углов кнопки
 @param radiusStyle степень скругления
 */
- (void)setCornerRadius:(SBKCornerRadiusStyle)radiusStyle;

/**
Изменяет текст кнопки если доступно имя пользователя из Сербанк Онлайн
*/
- (void)setTitleTo:(nonnull NSString *)text;

/**
Персонализирует кнопку при наличии данных
 @return YES, если кнопка была персонализированна
*/
- (BOOL)attemptToPersonalize;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
