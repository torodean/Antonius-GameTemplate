//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_CURRENCY_H
#define GAMEENGINE_CURRENCY_H

/**
 * This is a class to store a currency.
 */
class Currency
{
public:

    /// Main constructor for a currency object.
    Currency() = default;

    explicit Currency(unsigned int p, unsigned int g, unsigned int s, unsigned int c);

    /// Maindestructor for a currency object.
    ~Currency() = default;

    [[nodiscard]] unsigned int getPlatinum() const { return platinum; };
    [[nodiscard]] unsigned int getGold() const { return gold; };
    [[nodiscard]] unsigned int getSilver() const { return silver; };
    [[nodiscard]] unsigned int getCopper() const { return copper; };

protected:

    void addCurrency(Currency currency);
    void addPlatinum(unsigned int p) { platinum += p; };
    void addGold(unsigned int g) { gold += g; };
    void addSilver(unsigned int s) { silver += s; };
    void addCopper(unsigned int c) { copper += c; };

private:

    unsigned int platinum{}; /// Number of platinum pieces.
    unsigned int gold{};     /// Number of gold pieces.
    unsigned int silver{};   /// Number of silver pieces.
    unsigned int copper{};   /// Number of copper pieces.

};

#endif //GAMEENGINE_CURRENCY_H
