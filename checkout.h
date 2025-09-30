#ifndef CHECKOUT_H_
#define CHECKOUT_H_

// Enum for Payment Modes
typedef enum {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown,
    PaymentModeCount
} PaymentMode;

void checkout(PaymentMode mode, double amount);

#endif  // CHECKOUT_H_
